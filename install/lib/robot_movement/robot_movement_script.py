#!/usr/bin/env python

import rospy
from geometry_msgs.msg import Twist
import tf2_ros
import threading
import time
import numpy as np
import math
from tf.transformations import euler_from_quaternion

class RobotMovement:
    def __init__(self):
        #rospy.init_node('robot_movement')
        self.publisher_ = rospy.Publisher('/cmd_vel', Twist, queue_size=10)
        self.tfBuffer = tf2_ros.Buffer()
        self.listener = tf2_ros.TransformListener(self.tfBuffer)

        self.i = 0
        self.robot_angle = 0
        self.robot_position = 0

        rospy.loginfo('RobotMovement is ready')
        

    def limit_angle(self, angle):
        while (angle < -np.pi) or (angle > np.pi):
            angle = angle - np.sign(angle)*2*np.pi
            rospy.loginfo(f'Limited to {angle}')
        return angle

    def rotate(self, angle, speed, msg, p=1, i=0.05, a=3.14):
        max_speed = abs(speed)
        p_gain = p
        i_gain = i
        acc = a

        startTime = time.time()
        dt = 0.01
        last_wz = 0.0
        err_z_hist = [0.0]*9
        err_z = angle-self.robot_angle
        while abs(err_z) > np.pi:
            err_z += -np.sign(err_z)*2*np.pi
        err_z_hist.append(err_z)

        timeout = 10.0

        while not msg:
            if time.time() - startTime > timeout:
                rospy.logwarn('TIMEOUT WHILE ROTATING')
                break
            err_z = angle-self.robot_angle
            while abs(err_z) > np.pi:
                err_z += -np.sign(err_z)*2*np.pi
            err_z_hist.append(err_z)
            err_z_hist.pop(0)
            
            msgs_ = Twist()
            wz = p_gain*err_z_hist[-1]+sum(err_z_hist)*i_gain
            wz = max(min(wz, last_wz+dt*acc), last_wz-dt*acc)
            wz = max(min(wz, max_speed), -max_speed)
            msgs_.angular.z = wz
            if not msg:
                self.publisher_.publish(msgs_)
            last_wz = wz
            time.sleep(dt)        

        rospy.loginfo('Finished at {}'.format(self.robot_angle))
        self.publisher_.publish(Twist())
        time.sleep(0.1)
   
    def move(self, speed, object, p=0.9, i=0.05, a=3.14):
        max_speed = abs(speed)
        p_gain = p
        i_gain = i
        acc = a
        start_time = time.time()
        last_vel = 0.0
        dt = 0.05
        rospy.loginf("check")
        while not object:
        # Compute PID velocity
            msg_ = Twist()
            vel = speed
            vel = max(min(vel, last_vel + dt * acc), last_vel - dt * acc)
            vel = max(min(vel, max_speed), -max_speed)
            msg_.linear.x = vel
            self.publisher_.publish(msg_)
            last_vel = vel
            time.sleep(dt)

        self.publisher_.publish(Twist())
        time.sleep(dt)





    def calcDist(self, currPose, endPose):
        dist = ((endPose[0] - currPose[0])**2 + (endPose[1] - currPose[1])**2)**0.5
        rospy.loginfo(f'dist: {dist}')
        return dist

    def calcPoint(self, origin, distance, angle):
        x = origin[0] + distance * math.cos(angle)
        y = origin[1] + distance * math.sin(angle)
        return (x, y)

#if __name__ == '__main__':
#    try:
#        robot_movement = RobotMovement()
#    except rospy.ROSInterruptException:
#        pass
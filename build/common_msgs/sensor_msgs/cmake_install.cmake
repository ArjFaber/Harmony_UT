# Install script for directory: /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/common_msgs/sensor_msgs/catkin_generated/safe_execute_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sensor_msgs/msg" TYPE FILE FILES
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/BatteryState.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/CameraInfo.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/ChannelFloat32.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/CompressedImage.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/FluidPressure.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/Illuminance.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/Image.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/Imu.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/JointState.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/Joy.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/JoyFeedback.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/JoyFeedbackArray.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/LaserEcho.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/LaserScan.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/MagneticField.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/MultiDOFJointState.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/MultiEchoLaserScan.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/NavSatFix.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/NavSatStatus.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/PointCloud.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/PointCloud2.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/PointField.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/Range.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/RegionOfInterest.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/RelativeHumidity.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/Temperature.msg"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/msg/TimeReference.msg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sensor_msgs/srv" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/srv/SetCameraInfo.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sensor_msgs/cmake" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/common_msgs/sensor_msgs/catkin_generated/installspace/sensor_msgs-msg-paths.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/include/sensor_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/share/roseus/ros/sensor_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/share/common-lisp/ros/sensor_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/share/gennodejs/ros/sensor_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib/python3/dist-packages/sensor_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib/python3/dist-packages/sensor_msgs" REGEX "/\\_\\_init\\_\\_\\.py$" EXCLUDE REGEX "/\\_\\_init\\_\\_\\.pyc$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib/python3/dist-packages/sensor_msgs" FILES_MATCHING REGEX "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib/python3/dist-packages/sensor_msgs/.+/__init__.pyc?$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/common_msgs/sensor_msgs/catkin_generated/installspace/sensor_msgs.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sensor_msgs/cmake" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/common_msgs/sensor_msgs/catkin_generated/installspace/sensor_msgs-msg-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sensor_msgs/cmake" TYPE FILE FILES
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/common_msgs/sensor_msgs/catkin_generated/installspace/sensor_msgsConfig.cmake"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/common_msgs/sensor_msgs/catkin_generated/installspace/sensor_msgsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sensor_msgs" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/sensor_msgs" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/include/sensor_msgs/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sensor_msgs" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/common_msgs/sensor_msgs/migration_rules")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/common_msgs/sensor_msgs/test/cmake_install.cmake")

endif()


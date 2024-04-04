// Auto-generated. Do not edit!

// (in-package control_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class PointHeadFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.pointing_angle_error = null;
    }
    else {
      if (initObj.hasOwnProperty('pointing_angle_error')) {
        this.pointing_angle_error = initObj.pointing_angle_error
      }
      else {
        this.pointing_angle_error = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PointHeadFeedback
    // Serialize message field [pointing_angle_error]
    bufferOffset = _serializer.float64(obj.pointing_angle_error, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PointHeadFeedback
    let len;
    let data = new PointHeadFeedback(null);
    // Deserialize message field [pointing_angle_error]
    data.pointing_angle_error = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'control_msgs/PointHeadFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'cce80d27fd763682da8805a73316cab4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    float64 pointing_angle_error
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PointHeadFeedback(null);
    if (msg.pointing_angle_error !== undefined) {
      resolved.pointing_angle_error = msg.pointing_angle_error;
    }
    else {
      resolved.pointing_angle_error = 0.0
    }

    return resolved;
    }
};

module.exports = PointHeadFeedback;

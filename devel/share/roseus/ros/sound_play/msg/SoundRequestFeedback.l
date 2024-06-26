;; Auto-generated. Do not edit!


(when (boundp 'sound_play::SoundRequestFeedback)
  (if (not (find-package "SOUND_PLAY"))
    (make-package "SOUND_PLAY"))
  (shadow 'SoundRequestFeedback (find-package "SOUND_PLAY")))
(unless (find-package "SOUND_PLAY::SOUNDREQUESTFEEDBACK")
  (make-package "SOUND_PLAY::SOUNDREQUESTFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude SoundRequestFeedback.msg.html


(defclass sound_play::SoundRequestFeedback
  :super ros::object
  :slots (_playing _stamp ))

(defmethod sound_play::SoundRequestFeedback
  (:init
   (&key
    ((:playing __playing) nil)
    ((:stamp __stamp) (instance ros::time :init))
    )
   (send-super :init)
   (setq _playing __playing)
   (setq _stamp __stamp)
   self)
  (:playing
   (&optional (__playing :null))
   (if (not (eq __playing :null)) (setq _playing __playing)) _playing)
  (:stamp
   (&optional __stamp)
   (if __stamp (setq _stamp __stamp)) _stamp)
  (:serialization-length
   ()
   (+
    ;; bool _playing
    1
    ;; time _stamp
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _playing
       (if _playing (write-byte -1 s) (write-byte 0 s))
     ;; time _stamp
       (write-long (send _stamp :sec) s) (write-long (send _stamp :nsec) s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _playing
     (setq _playing (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; time _stamp
     (send _stamp :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _stamp :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get sound_play::SoundRequestFeedback :md5sum-) "237faa3e32b21b083f32acf5260255a4")
(setf (get sound_play::SoundRequestFeedback :datatype-) "sound_play/SoundRequestFeedback")
(setf (get sound_play::SoundRequestFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
bool playing
time stamp

")



(provide :sound_play/SoundRequestFeedback "237faa3e32b21b083f32acf5260255a4")



# Ref: http://www.cmake.org/Wiki/CMake_FAQ#Can_I_do_.22make_uninstall.22_with_CMake.3F
if(NOT EXISTS "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/urdfdom_headers/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/urdfdom_headers/install_manifest.txt")
endif(NOT EXISTS "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/urdfdom_headers/install_manifest.txt")

file(READ "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/urdfdom_headers/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")
foreach(file ${files})
  message(STATUS "Uninstalling $ENV{DESTDIR}${file}")
  if(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    exec_program("/usr/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
      OUTPUT_VARIABLE rm_out
      RETURN_VALUE rm_retval)
    if(NOT "${rm_retval}" STREQUAL 0)
      message(FATAL_ERROR "Problem when removing $ENV{DESTDIR}${file}")
    endif(NOT "${rm_retval}" STREQUAL 0)
  else(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    message(STATUS "File $ENV{DESTDIR}${file} does not exist.")
  endif(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
endforeach(file)

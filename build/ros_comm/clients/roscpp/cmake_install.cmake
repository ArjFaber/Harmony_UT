# Install script for directory: /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/clients/roscpp

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/msg" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/clients/roscpp/msg/Logger.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/srv" TYPE FILE FILES
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/clients/roscpp/srv/Empty.srv"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/clients/roscpp/srv/GetLoggers.srv"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/clients/roscpp/srv/SetLoggerLevel.srv"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/cmake" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/clients/roscpp/catkin_generated/installspace/roscpp-msg-paths.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/include/roscpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/share/roseus/ros/roscpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/share/common-lisp/ros/roscpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/share/gennodejs/ros/roscpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib/python3/dist-packages/roscpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib/python3/dist-packages/roscpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/clients/roscpp/catkin_generated/installspace/roscpp.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/cmake" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/clients/roscpp/catkin_generated/installspace/roscpp-msg-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/cmake" TYPE FILE FILES
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/clients/roscpp/catkin_generated/installspace/roscppConfig.cmake"
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/clients/roscpp/catkin_generated/installspace/roscppConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/clients/roscpp/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroscpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroscpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroscpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib/libroscpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroscpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroscpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroscpp.so"
         OLD_RPATH "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libroscpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/clients/roscpp/include/" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ros" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/include/ros/common.h")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/rosbuild" TYPE FILE FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/clients/roscpp/rosbuild/roscpp.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/rosbuild/scripts" TYPE PROGRAM FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/clients/roscpp/catkin_generated/installspace/genmsg_cpp.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/rosbuild/scripts" TYPE PROGRAM FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/clients/roscpp/catkin_generated/installspace/gensrv_cpp.py")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roscpp/rosbuild/scripts" TYPE PROGRAM FILES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/clients/roscpp/catkin_generated/installspace/msg_gen.py")
endif()


# CMake generated Testfile for 
# Source directory: /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/navigation-1.17.1/map_server
# Build directory: /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/navigation-1.17.1/map_server
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_map_server_gtest_map_server_utest "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results/map_server/gtest-map_server_utest.xml" "--return-code" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/lib/map_server/map_server_utest --gtest_output=xml:/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results/map_server/gtest-map_server_utest.xml")
set_tests_properties(_ctest_map_server_gtest_map_server_utest PROPERTIES  _BACKTRACE_TRIPLES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/tests.cmake;160;add_test;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/gtest.cmake;98;catkin_run_tests_target;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/gtest.cmake;37;_catkin_add_google_test;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/navigation-1.17.1/map_server/CMakeLists.txt;89;catkin_add_gtest;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/navigation-1.17.1/map_server/CMakeLists.txt;0;")
add_test(_ctest_map_server_rostest_test_rtest.xml "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results/map_server/rostest-test_rtest.xml" "--return-code" "/usr/bin/python3 /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/navigation-1.17.1/map_server --package=map_server --results-filename test_rtest.xml --results-base-dir \"/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results\" /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/navigation-1.17.1/map_server/test/rtest.xml ")
set_tests_properties(_ctest_map_server_rostest_test_rtest.xml PROPERTIES  _BACKTRACE_TRIPLES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/tests.cmake;160;add_test;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/navigation-1.17.1/map_server/CMakeLists.txt;105;add_rostest;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/navigation-1.17.1/map_server/CMakeLists.txt;0;")

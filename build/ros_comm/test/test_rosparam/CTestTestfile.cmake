# CMake generated Testfile for 
# Source directory: /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/test/test_rosparam
# Build directory: /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/ros_comm/test/test_rosparam
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rosparam_rostest_test_rosparam.test "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results/test_rosparam/rostest-test_rosparam.xml" "--return-code" "/usr/bin/python3 /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/test/test_rosparam --package=test_rosparam --results-filename test_rosparam.xml --results-base-dir \"/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results\" /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/test/test_rosparam/test/rosparam.test ")
set_tests_properties(_ctest_test_rosparam_rostest_test_rosparam.test PROPERTIES  _BACKTRACE_TRIPLES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/tests.cmake;160;add_test;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/devel/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/test/test_rosparam/CMakeLists.txt;8;add_rostest;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/test/test_rosparam/CMakeLists.txt;0;")
add_test(_ctest_test_rosparam_nosetests_test "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python3" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results/test_rosparam/nosetests-test.xml" "--return-code" "\"/home/arjan/.local/lib/python3.10/site-packages/cmake/data/bin/cmake\" -E make_directory /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results/test_rosparam" "/usr/bin/nosetests3 -P --process-timeout=60 --where=/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/test/test_rosparam/test --with-xunit --xunit-file=/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/test_results/test_rosparam/nosetests-test.xml")
set_tests_properties(_ctest_test_rosparam_nosetests_test PROPERTIES  _BACKTRACE_TRIPLES "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/tests.cmake;160;add_test;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/test/test_rosparam/CMakeLists.txt;10;catkin_add_nosetests;/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/ros_comm/test/test_rosparam/CMakeLists.txt;0;")

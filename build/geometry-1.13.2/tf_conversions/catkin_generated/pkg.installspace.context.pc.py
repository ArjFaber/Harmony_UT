# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "geometry_msgs;kdl_conversions;tf".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-ltf_conversions;-lorocos-kdl".split(';') if "-ltf_conversions;-lorocos-kdl" != "" else []
PROJECT_NAME = "tf_conversions"
PROJECT_SPACE_DIR = "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/install"
PROJECT_VERSION = "1.13.2"

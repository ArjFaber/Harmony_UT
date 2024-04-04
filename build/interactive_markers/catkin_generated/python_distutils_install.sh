#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/interactive_markers"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/install/lib/python3/dist-packages:/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build" \
    "/usr/bin/python3" \
    "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/src/interactive_markers/setup.py" \
    egg_info --egg-base /home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/interactive_markers \
    build --build-base "/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/build/interactive_markers" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/install" --install-scripts="/home/arjan/Desktop/ros_noetic_base_2204/catkin_ws/install/bin"

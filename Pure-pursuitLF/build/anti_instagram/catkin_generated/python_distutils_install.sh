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
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/code/catkin_ws/src/dt-core/packages/anti_instagram"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/code/catkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/code/catkin_ws/install/lib/python2.7/dist-packages:/code/catkin_ws/build/anti_instagram/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/code/catkin_ws/build/anti_instagram" \
    "/usr/bin/python" \
    "/code/catkin_ws/src/dt-core/packages/anti_instagram/setup.py" \
    build --build-base "/code/catkin_ws/build/anti_instagram" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/code/catkin_ws/install" --install-scripts="/code/catkin_ws/install/bin"

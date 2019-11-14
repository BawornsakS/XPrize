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

echo_and_run cd "/home/bally/Bally_Workspace/src/rosbot_description/src/rosbot_description"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/bally/Bally_Workspace/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/bally/Bally_Workspace/install/lib/python2.7/dist-packages:/home/bally/Bally_Workspace/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/bally/Bally_Workspace/build" \
    "/usr/bin/python2" \
    "/home/bally/Bally_Workspace/src/rosbot_description/src/rosbot_description/setup.py" \
    build --build-base "/home/bally/Bally_Workspace/build/rosbot_description/src/rosbot_description" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/bally/Bally_Workspace/install" --install-scripts="/home/bally/Bally_Workspace/install/bin"

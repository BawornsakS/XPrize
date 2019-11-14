execute_process(COMMAND "/home/bally/Bally_Workspace/build/rosbot_description/src/rosbot_description/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/bally/Bally_Workspace/build/rosbot_description/src/rosbot_description/catkin_generated/python_distutils_install.sh) returned error code ")
endif()

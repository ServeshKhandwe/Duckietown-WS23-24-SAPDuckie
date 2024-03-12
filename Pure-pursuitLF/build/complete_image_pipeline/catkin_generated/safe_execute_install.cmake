execute_process(COMMAND "/code/catkin_ws/build/complete_image_pipeline/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/code/catkin_ws/build/complete_image_pipeline/catkin_generated/python_distutils_install.sh) returned error code ")
endif()

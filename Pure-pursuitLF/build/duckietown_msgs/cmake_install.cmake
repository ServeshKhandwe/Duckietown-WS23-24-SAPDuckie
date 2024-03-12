# Install script for directory: /code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/code/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/code/catkin_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/code/catkin_ws/install" TYPE PROGRAM FILES "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/_setup_util.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/code/catkin_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/code/catkin_ws/install" TYPE PROGRAM FILES "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/env.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/code/catkin_ws/install/setup.bash;/code/catkin_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/code/catkin_ws/install" TYPE FILE FILES
    "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/setup.bash"
    "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/local_setup.bash"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/code/catkin_ws/install/setup.sh;/code/catkin_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/code/catkin_ws/install" TYPE FILE FILES
    "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/setup.sh"
    "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/local_setup.sh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/code/catkin_ws/install/setup.zsh;/code/catkin_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/code/catkin_ws/install" TYPE FILE FILES
    "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/setup.zsh"
    "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/code/catkin_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/code/catkin_ws/install" TYPE FILE FILES "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/msg" TYPE FILE FILES
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/AntiInstagramHealth.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/AntiInstagramTransform.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/AntiInstagramTransform_CB.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/AprilTagDetection.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/AprilTagDetectionArray.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/AprilTagsWithInfos.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/AprilTagExtended.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/BoolStamped.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/CarControl.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/CoordinationClearance.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/CoordinationSignal.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/DuckiebotLED.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/FSMState.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/IntersectionPose.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/IntersectionPoseImg.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/IntersectionPoseImgDebug.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/KinematicsParameters.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/KinematicsWeights.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/LanePose.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/LEDDetection.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/LEDDetectionArray.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/LEDDetectionDebugInfo.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/LEDInterpreter.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/LEDPattern.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/LightSensor.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/MaintenanceState.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/ObstacleImageDetection.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/ObstacleImageDetectionList.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/ObstacleProjectedDetection.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/ObstacleProjectedDetectionList.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/ObstacleType.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Pixel.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Pose2DStamped.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Rect.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Rects.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/SceneSegments.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Segment.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/SegmentList.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/SignalsDetection.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/SignalsDetectionETHZ17.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/SourceTargetNodes.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/StopLineReading.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/TagInfo.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/ThetaDotSample.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Trajectory.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/TurnIDandType.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Twist2DStamped.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Vector2D.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/VehicleCorners.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/VehiclePose.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Vsample.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/WheelsCmd.msg"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/WheelsCmdStamped.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/srv" TYPE FILE FILES
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/srv/SetValue.srv"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/srv/SetVariable.srv"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/srv/GetVariable.srv"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/srv/IMUstatus.srv"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/srv/LFstatus.srv"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/srv/ToFstatus.srv"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/srv/SensorsStatus.srv"
    "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/srv/SetFSMState.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/code/catkin_ws/devel/.private/duckietown_msgs/include/duckietown_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/code/catkin_ws/devel/.private/duckietown_msgs/lib/python2.7/dist-packages/duckietown_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/code/catkin_ws/devel/.private/duckietown_msgs/lib/python2.7/dist-packages/duckietown_msgs")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgs-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs/cmake" TYPE FILE FILES
    "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgsConfig.cmake"
    "/code/catkin_ws/build/duckietown_msgs/catkin_generated/installspace/duckietown_msgsConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/duckietown_msgs" TYPE FILE FILES "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/code/catkin_ws/build/duckietown_msgs/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/code/catkin_ws/build/duckietown_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

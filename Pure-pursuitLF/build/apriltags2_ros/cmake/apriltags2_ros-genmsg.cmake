# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "apriltags2_ros: 2 messages, 1 services")

set(MSG_I_FLAGS "-Iapriltags2_ros:/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/kinetic/share/sensor_msgs/cmake/../msg;-Iduckietown_msgs:/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(apriltags2_ros_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_custom_target(_apriltags2_ros_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "apriltags2_ros" "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/srv/AnalyzeSingleImage.srv" "sensor_msgs/RegionOfInterest:std_msgs/Header:sensor_msgs/CameraInfo:geometry_msgs/Quaternion:apriltags2_ros/AprilTagDetection:geometry_msgs/Point:apriltags2_ros/AprilTagDetectionArray:geometry_msgs/PoseWithCovariance:geometry_msgs/PoseWithCovarianceStamped:geometry_msgs/Pose"
)

get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg" NAME_WE)
add_custom_target(_apriltags2_ros_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "apriltags2_ros" "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg" "std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point:geometry_msgs/PoseWithCovariance:geometry_msgs/PoseWithCovarianceStamped:geometry_msgs/Pose"
)

get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_custom_target(_apriltags2_ros_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "apriltags2_ros" "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetectionArray.msg" "std_msgs/Header:geometry_msgs/Quaternion:apriltags2_ros/AprilTagDetection:geometry_msgs/Point:geometry_msgs/PoseWithCovariance:geometry_msgs/PoseWithCovarianceStamped:geometry_msgs/Pose"
)

#
#  langs = gencpp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(apriltags2_ros
  "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltags2_ros
)
_generate_msg_cpp(apriltags2_ros
  "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetectionArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltags2_ros
)

### Generating Services
_generate_srv_cpp(apriltags2_ros
  "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/srv/AnalyzeSingleImage.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetectionArray.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltags2_ros
)

### Generating Module File
_generate_module_cpp(apriltags2_ros
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltags2_ros
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(apriltags2_ros_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(apriltags2_ros_generate_messages apriltags2_ros_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_dependencies(apriltags2_ros_generate_messages_cpp _apriltags2_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg" NAME_WE)
add_dependencies(apriltags2_ros_generate_messages_cpp _apriltags2_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_dependencies(apriltags2_ros_generate_messages_cpp _apriltags2_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(apriltags2_ros_gencpp)
add_dependencies(apriltags2_ros_gencpp apriltags2_ros_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS apriltags2_ros_generate_messages_cpp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(apriltags2_ros
  "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltags2_ros
)
_generate_msg_py(apriltags2_ros
  "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetectionArray.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltags2_ros
)

### Generating Services
_generate_srv_py(apriltags2_ros
  "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/srv/AnalyzeSingleImage.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/sensor_msgs/cmake/../msg/RegionOfInterest.msg;/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/kinetic/share/sensor_msgs/cmake/../msg/CameraInfo.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetectionArray.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/PoseWithCovarianceStamped.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Pose.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltags2_ros
)

### Generating Module File
_generate_module_py(apriltags2_ros
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltags2_ros
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(apriltags2_ros_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(apriltags2_ros_generate_messages apriltags2_ros_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/srv/AnalyzeSingleImage.srv" NAME_WE)
add_dependencies(apriltags2_ros_generate_messages_py _apriltags2_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetection.msg" NAME_WE)
add_dependencies(apriltags2_ros_generate_messages_py _apriltags2_ros_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/code/catkin_ws/src/dt-core/packages/apriltags2_ros/apriltags2_ros/msg/AprilTagDetectionArray.msg" NAME_WE)
add_dependencies(apriltags2_ros_generate_messages_py _apriltags2_ros_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(apriltags2_ros_genpy)
add_dependencies(apriltags2_ros_genpy apriltags2_ros_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS apriltags2_ros_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltags2_ros)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/apriltags2_ros
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(apriltags2_ros_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(apriltags2_ros_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(apriltags2_ros_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET duckietown_msgs_generate_messages_cpp)
  add_dependencies(apriltags2_ros_generate_messages_cpp duckietown_msgs_generate_messages_cpp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltags2_ros)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltags2_ros\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/apriltags2_ros
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(apriltags2_ros_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(apriltags2_ros_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(apriltags2_ros_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET duckietown_msgs_generate_messages_py)
  add_dependencies(apriltags2_ros_generate_messages_py duckietown_msgs_generate_messages_py)
endif()

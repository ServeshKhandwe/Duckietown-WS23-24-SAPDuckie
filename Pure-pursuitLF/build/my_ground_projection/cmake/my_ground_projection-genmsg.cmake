# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "my_ground_projection: 0 messages, 3 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/kinetic/share/sensor_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/kinetic/share/geometry_msgs/cmake/../msg;-Iduckietown_msgs:/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(my_ground_projection_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetImageCoord.srv" NAME_WE)
add_custom_target(_my_ground_projection_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "my_ground_projection" "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetImageCoord.srv" "geometry_msgs/Point:duckietown_msgs/Vector2D"
)

get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/EstimateHomography.srv" NAME_WE)
add_custom_target(_my_ground_projection_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "my_ground_projection" "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/EstimateHomography.srv" ""
)

get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetGroundCoord.srv" NAME_WE)
add_custom_target(_my_ground_projection_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "my_ground_projection" "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetGroundCoord.srv" "duckietown_msgs/Vector2D:geometry_msgs/Point"
)

#
#  langs = gencpp;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(my_ground_projection
  "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetImageCoord.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Vector2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/my_ground_projection
)
_generate_srv_cpp(my_ground_projection
  "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/EstimateHomography.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/my_ground_projection
)
_generate_srv_cpp(my_ground_projection
  "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetGroundCoord.srv"
  "${MSG_I_FLAGS}"
  "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Vector2D.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/my_ground_projection
)

### Generating Module File
_generate_module_cpp(my_ground_projection
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/my_ground_projection
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(my_ground_projection_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(my_ground_projection_generate_messages my_ground_projection_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetImageCoord.srv" NAME_WE)
add_dependencies(my_ground_projection_generate_messages_cpp _my_ground_projection_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/EstimateHomography.srv" NAME_WE)
add_dependencies(my_ground_projection_generate_messages_cpp _my_ground_projection_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetGroundCoord.srv" NAME_WE)
add_dependencies(my_ground_projection_generate_messages_cpp _my_ground_projection_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(my_ground_projection_gencpp)
add_dependencies(my_ground_projection_gencpp my_ground_projection_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS my_ground_projection_generate_messages_cpp)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(my_ground_projection
  "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetImageCoord.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg;/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Vector2D.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection
)
_generate_srv_py(my_ground_projection
  "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/EstimateHomography.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection
)
_generate_srv_py(my_ground_projection
  "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetGroundCoord.srv"
  "${MSG_I_FLAGS}"
  "/code/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg/Vector2D.msg;/opt/ros/kinetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection
)

### Generating Module File
_generate_module_py(my_ground_projection
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(my_ground_projection_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(my_ground_projection_generate_messages my_ground_projection_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetImageCoord.srv" NAME_WE)
add_dependencies(my_ground_projection_generate_messages_py _my_ground_projection_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/EstimateHomography.srv" NAME_WE)
add_dependencies(my_ground_projection_generate_messages_py _my_ground_projection_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/code/catkin_ws/src/pp-navigation/packages/my_ground_projection/srv/GetGroundCoord.srv" NAME_WE)
add_dependencies(my_ground_projection_generate_messages_py _my_ground_projection_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(my_ground_projection_genpy)
add_dependencies(my_ground_projection_genpy my_ground_projection_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS my_ground_projection_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/my_ground_projection)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/my_ground_projection
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(my_ground_projection_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(my_ground_projection_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(my_ground_projection_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET duckietown_msgs_generate_messages_cpp)
  add_dependencies(my_ground_projection_generate_messages_cpp duckietown_msgs_generate_messages_cpp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection
    DESTINATION ${genpy_INSTALL_DIR}
    # skip all init files
    PATTERN "__init__.py" EXCLUDE
    PATTERN "__init__.pyc" EXCLUDE
  )
  # install init files which are not in the root folder of the generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection
    DESTINATION ${genpy_INSTALL_DIR}
    FILES_MATCHING
    REGEX "${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/my_ground_projection/.+/__init__.pyc?$"
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(my_ground_projection_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(my_ground_projection_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(my_ground_projection_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET duckietown_msgs_generate_messages_py)
  add_dependencies(my_ground_projection_generate_messages_py duckietown_msgs_generate_messages_py)
endif()

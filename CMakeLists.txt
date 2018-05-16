cmake_minimum_required(VERSION 2.8.3)
project(quadrobot_msgs)

find_package(catkin REQUIRED COMPONENTS  
  message_generation
  roscpp
  std_msgs
  geometry_msgs
)

add_message_files(
  FILES
  Plane.msg
  PlaneArray.msg
)

## Generate services in the 'srv' folder
# add_service_files(
#   FILES
#   Service1.srv
#   Service2.srv
# )

## Generate actions in the 'action' folder
# add_action_files(
#   FILES
#   Action1.action
#   Action2.action
# )

generate_messages(
  DEPENDENCIES
  geometry_msgs   
  std_msgs
)
catkin_package(
  CATKIN_DEPENDS
  std_msgs
  geometry_msgs
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

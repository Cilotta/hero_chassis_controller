# Install script for directory: /home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cilotta/hero_chassis_controller/install")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/cilotta/hero_chassis_controller/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/cilotta/hero_chassis_controller/install" TYPE PROGRAM FILES "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/cilotta/hero_chassis_controller/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/cilotta/hero_chassis_controller/install" TYPE PROGRAM FILES "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/cilotta/hero_chassis_controller/install/setup.bash;/home/cilotta/hero_chassis_controller/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/cilotta/hero_chassis_controller/install" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/setup.bash"
    "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/cilotta/hero_chassis_controller/install/setup.sh;/home/cilotta/hero_chassis_controller/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/cilotta/hero_chassis_controller/install" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/setup.sh"
    "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/cilotta/hero_chassis_controller/install/setup.zsh;/home/cilotta/hero_chassis_controller/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/cilotta/hero_chassis_controller/install" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/setup.zsh"
    "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/cilotta/hero_chassis_controller/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/cilotta/hero_chassis_controller/install" TYPE FILE FILES "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/.rosinstall")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/msg" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/ActuatorState.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/BalanceState.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/DbusData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/ChassisCmd.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/ShootCmd.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/ShootState.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/GimbalCmd.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/GimbalDesError.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/LpData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/KalmanData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/MovingAverageData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/GpioData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/TofRadarData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/MultiDofCmd.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/TagMsg.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/TagMsgArray.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/SentryDeviate.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/srv" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/srv/ContinousDetectorSwitch.srv"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/srv/StatusChange.srv"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/srv/SetLimitVel.srv"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/srv/CameraStatus.srv"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/srv/EnableImuTrigger.srv"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/srv/EnableGyro.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/msg/detection" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/detection/TargetDetection.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/detection/TargetDetectionArray.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/detection/TrackData.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/msg/referee" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/CapacityData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/GameRobotStatus.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/GameStatus.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/StateCmd.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/EngineerUi.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/GameRobotHp.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/PowerHeatData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/EventData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/DartStatus.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/IcraBuffDebuffZoneStatus.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/SupplyProjectileAction.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/DartRemainingTime.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/RobotHurt.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/CurrentSentryPosData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/ShootData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/BulletAllowance.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/RfidStatus.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/DartClientCmd.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/ManualToReferee.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/RadarData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/RadarMarkData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/RobotsPositionData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/ClientMapSendData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/ClientMapReceiveData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/MapSentryData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/PowerManagementSampleAndStatusData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/PowerManagementInitializationExceptionData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/PowerManagementProcessStackOverflowData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/PowerManagementSystemExceptionData.msg"
    "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/msg/referee/PowerManagementUnknownExceptionData.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/action" TYPE FILE FILES "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/action/Engineer.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/msg" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/rm_msgs/msg/EngineerAction.msg"
    "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/rm_msgs/msg/EngineerActionGoal.msg"
    "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/rm_msgs/msg/EngineerActionResult.msg"
    "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/rm_msgs/msg/EngineerActionFeedback.msg"
    "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/rm_msgs/msg/EngineerGoal.msg"
    "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/rm_msgs/msg/EngineerResult.msg"
    "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/rm_msgs/msg/EngineerFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/cmake" TYPE FILE FILES "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/rm_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/include/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/roseus/ros/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/common-lisp/ros/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/share/gennodejs/ros/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/lib/python3/dist-packages/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/cilotta/hero_chassis_controller/devel/.private/rm_msgs/lib/python3/dist-packages/rm_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/rm_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/cmake" TYPE FILE FILES "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/rm_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs/cmake" TYPE FILE FILES
    "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/rm_msgsConfig.cmake"
    "/home/cilotta/hero_chassis_controller/build/rm_msgs/catkin_generated/installspace/rm_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/rm_msgs" TYPE FILE FILES "/home/cilotta/hero_chassis_controller/src/rm_control/rm_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/cilotta/hero_chassis_controller/build/rm_msgs/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/cilotta/hero_chassis_controller/build/rm_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

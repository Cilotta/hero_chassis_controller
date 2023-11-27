
"use strict";

let GimbalCmd = require('./GimbalCmd.js');
let ShootState = require('./ShootState.js');
let KalmanData = require('./KalmanData.js');
let GpioData = require('./GpioData.js');
let SentryDeviate = require('./SentryDeviate.js');
let GimbalDesError = require('./GimbalDesError.js');
let TagMsgArray = require('./TagMsgArray.js');
let BalanceState = require('./BalanceState.js');
let MultiDofCmd = require('./MultiDofCmd.js');
let ActuatorState = require('./ActuatorState.js');
let LpData = require('./LpData.js');
let ShootCmd = require('./ShootCmd.js');
let ChassisCmd = require('./ChassisCmd.js');
let TagMsg = require('./TagMsg.js');
let MovingAverageData = require('./MovingAverageData.js');
let DbusData = require('./DbusData.js');
let TofRadarData = require('./TofRadarData.js');
let TargetDetectionArray = require('./TargetDetectionArray.js');
let TrackData = require('./TrackData.js');
let TargetDetection = require('./TargetDetection.js');
let DartRemainingTime = require('./DartRemainingTime.js');
let PowerManagementSampleAndStatusData = require('./PowerManagementSampleAndStatusData.js');
let GameRobotStatus = require('./GameRobotStatus.js');
let ClientMapSendData = require('./ClientMapSendData.js');
let EngineerUi = require('./EngineerUi.js');
let EventData = require('./EventData.js');
let SupplyProjectileAction = require('./SupplyProjectileAction.js');
let CapacityData = require('./CapacityData.js');
let DartClientCmd = require('./DartClientCmd.js');
let RobotHurt = require('./RobotHurt.js');
let StateCmd = require('./StateCmd.js');
let RobotsPositionData = require('./RobotsPositionData.js');
let ClientMapReceiveData = require('./ClientMapReceiveData.js');
let ManualToReferee = require('./ManualToReferee.js');
let PowerManagementSystemExceptionData = require('./PowerManagementSystemExceptionData.js');
let MapSentryData = require('./MapSentryData.js');
let DartStatus = require('./DartStatus.js');
let PowerHeatData = require('./PowerHeatData.js');
let RadarMarkData = require('./RadarMarkData.js');
let GameStatus = require('./GameStatus.js');
let IcraBuffDebuffZoneStatus = require('./IcraBuffDebuffZoneStatus.js');
let PowerManagementProcessStackOverflowData = require('./PowerManagementProcessStackOverflowData.js');
let ShootData = require('./ShootData.js');
let GameRobotHp = require('./GameRobotHp.js');
let RadarData = require('./RadarData.js');
let RfidStatus = require('./RfidStatus.js');
let PowerManagementUnknownExceptionData = require('./PowerManagementUnknownExceptionData.js');
let BulletAllowance = require('./BulletAllowance.js');
let PowerManagementInitializationExceptionData = require('./PowerManagementInitializationExceptionData.js');
let CurrentSentryPosData = require('./CurrentSentryPosData.js');
let EngineerActionResult = require('./EngineerActionResult.js');
let EngineerGoal = require('./EngineerGoal.js');
let EngineerActionFeedback = require('./EngineerActionFeedback.js');
let EngineerFeedback = require('./EngineerFeedback.js');
let EngineerResult = require('./EngineerResult.js');
let EngineerActionGoal = require('./EngineerActionGoal.js');
let EngineerAction = require('./EngineerAction.js');

module.exports = {
  GimbalCmd: GimbalCmd,
  ShootState: ShootState,
  KalmanData: KalmanData,
  GpioData: GpioData,
  SentryDeviate: SentryDeviate,
  GimbalDesError: GimbalDesError,
  TagMsgArray: TagMsgArray,
  BalanceState: BalanceState,
  MultiDofCmd: MultiDofCmd,
  ActuatorState: ActuatorState,
  LpData: LpData,
  ShootCmd: ShootCmd,
  ChassisCmd: ChassisCmd,
  TagMsg: TagMsg,
  MovingAverageData: MovingAverageData,
  DbusData: DbusData,
  TofRadarData: TofRadarData,
  TargetDetectionArray: TargetDetectionArray,
  TrackData: TrackData,
  TargetDetection: TargetDetection,
  DartRemainingTime: DartRemainingTime,
  PowerManagementSampleAndStatusData: PowerManagementSampleAndStatusData,
  GameRobotStatus: GameRobotStatus,
  ClientMapSendData: ClientMapSendData,
  EngineerUi: EngineerUi,
  EventData: EventData,
  SupplyProjectileAction: SupplyProjectileAction,
  CapacityData: CapacityData,
  DartClientCmd: DartClientCmd,
  RobotHurt: RobotHurt,
  StateCmd: StateCmd,
  RobotsPositionData: RobotsPositionData,
  ClientMapReceiveData: ClientMapReceiveData,
  ManualToReferee: ManualToReferee,
  PowerManagementSystemExceptionData: PowerManagementSystemExceptionData,
  MapSentryData: MapSentryData,
  DartStatus: DartStatus,
  PowerHeatData: PowerHeatData,
  RadarMarkData: RadarMarkData,
  GameStatus: GameStatus,
  IcraBuffDebuffZoneStatus: IcraBuffDebuffZoneStatus,
  PowerManagementProcessStackOverflowData: PowerManagementProcessStackOverflowData,
  ShootData: ShootData,
  GameRobotHp: GameRobotHp,
  RadarData: RadarData,
  RfidStatus: RfidStatus,
  PowerManagementUnknownExceptionData: PowerManagementUnknownExceptionData,
  BulletAllowance: BulletAllowance,
  PowerManagementInitializationExceptionData: PowerManagementInitializationExceptionData,
  CurrentSentryPosData: CurrentSentryPosData,
  EngineerActionResult: EngineerActionResult,
  EngineerGoal: EngineerGoal,
  EngineerActionFeedback: EngineerActionFeedback,
  EngineerFeedback: EngineerFeedback,
  EngineerResult: EngineerResult,
  EngineerActionGoal: EngineerActionGoal,
  EngineerAction: EngineerAction,
};

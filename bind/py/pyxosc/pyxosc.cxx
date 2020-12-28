//
//  OpenSCENARIO_py.cxx
//  xsd2cxx- for OpenDrive CXX classes
//
//  Created by Javed Shaik on Sat Jul 11 12:40:05 2020
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 0473a170-1000-40b0-89cf-3489fc527163 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
//
// pybind11
//
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
//
#include "xosc.h"
namespace py = pybind11;
PYBIND11_MODULE(pyxosc,m)
{
    m.doc() = "Python Bindings for OpenSCENARIO - OPENSCENARIO";
	py::class_<Action_U, std::shared_ptr<Action_U>>(m,"Action_U")
		.def_readwrite("GlobalAction", &Action_U::m_GlobalAction ) //GlobalAction
		.def_readwrite("UserDefinedAction", &Action_U::m_UserDefinedAction ) //UserDefinedAction
		.def_readwrite("PrivateAction", &Action_U::m_PrivateAction ) //PrivateAction
;
	py::class_<AssignControllerAction_U, std::shared_ptr<AssignControllerAction_U>>(m,"AssignControllerAction_U")
		.def_readwrite("Controller", &AssignControllerAction_U::m_Controller ) //Controller
		.def_readwrite("CatalogReference", &AssignControllerAction_U::m_CatalogReference ) //CatalogReference
;
	py::class_<AssignRouteAction_U, std::shared_ptr<AssignRouteAction_U>>(m,"AssignRouteAction_U")
		.def_readwrite("Route", &AssignRouteAction_U::m_Route ) //Route
		.def_readwrite("CatalogReference", &AssignRouteAction_U::m_CatalogReference ) //CatalogReference
;
	py::class_<ByValueCondition_U, std::shared_ptr<ByValueCondition_U>>(m,"ByValueCondition_U")
		.def_readwrite("ParameterCondition", &ByValueCondition_U::m_ParameterCondition ) //ParameterCondition
		.def_readwrite("TimeOfDayCondition", &ByValueCondition_U::m_TimeOfDayCondition ) //TimeOfDayCondition
		.def_readwrite("SimulationTimeCondition", &ByValueCondition_U::m_SimulationTimeCondition ) //SimulationTimeCondition
		.def_readwrite("StoryboardElementStateCondition", &ByValueCondition_U::m_StoryboardElementStateCondition ) //StoryboardElementStateCondition
		.def_readwrite("UserDefinedValueCondition", &ByValueCondition_U::m_UserDefinedValueCondition ) //UserDefinedValueCondition
		.def_readwrite("TrafficSignalCondition", &ByValueCondition_U::m_TrafficSignalCondition ) //TrafficSignalCondition
		.def_readwrite("TrafficSignalControllerCondition", &ByValueCondition_U::m_TrafficSignalControllerCondition ) //TrafficSignalControllerCondition
;
	py::class_<CollisionCondition_U, std::shared_ptr<CollisionCondition_U>>(m,"CollisionCondition_U")
		.def_readwrite("EntityRef", &CollisionCondition_U::m_EntityRef ) //EntityRef
		.def_readwrite("ByType", &CollisionCondition_U::m_ByType ) //ByObjectType
;
	py::class_<Condition_U, std::shared_ptr<Condition_U>>(m,"Condition_U")
		.def_readwrite("ByEntityCondition", &Condition_U::m_ByEntityCondition ) //ByEntityCondition
		.def_readwrite("ByValueCondition", &Condition_U::m_ByValueCondition ) //ByValueCondition
;
	py::class_<ControllerDistributionEntry_U, std::shared_ptr<ControllerDistributionEntry_U>>(m,"ControllerDistributionEntry_U")
		.def_readwrite("Controller", &ControllerDistributionEntry_U::m_Controller ) //Controller
		.def_readwrite("CatalogReference", &ControllerDistributionEntry_U::m_CatalogReference ) //CatalogReference
;
	py::class_<EntityAction_U, std::shared_ptr<EntityAction_U>>(m,"EntityAction_U")
		.def_readwrite("AddEntityAction", &EntityAction_U::m_AddEntityAction ) //AddEntityAction
		.def_readwrite("DeleteEntityAction", &EntityAction_U::m_DeleteEntityAction ) //DeleteEntityAction
;
	py::class_<EntityCondition_U, std::shared_ptr<EntityCondition_U>>(m,"EntityCondition_U")
		.def_readwrite("EndOfRoadCondition", &EntityCondition_U::m_EndOfRoadCondition ) //EndOfRoadCondition
		.def_readwrite("CollisionCondition", &EntityCondition_U::m_CollisionCondition ) //CollisionCondition
		.def_readwrite("OffroadCondition", &EntityCondition_U::m_OffroadCondition ) //OffroadCondition
		.def_readwrite("TimeHeadwayCondition", &EntityCondition_U::m_TimeHeadwayCondition ) //TimeHeadwayCondition
		.def_readwrite("TimeToCollisionCondition", &EntityCondition_U::m_TimeToCollisionCondition ) //TimeToCollisionCondition
		.def_readwrite("AccelerationCondition", &EntityCondition_U::m_AccelerationCondition ) //AccelerationCondition
		.def_readwrite("StandStillCondition", &EntityCondition_U::m_StandStillCondition ) //StandStillCondition
		.def_readwrite("SpeedCondition", &EntityCondition_U::m_SpeedCondition ) //SpeedCondition
		.def_readwrite("RelativeSpeedCondition", &EntityCondition_U::m_RelativeSpeedCondition ) //RelativeSpeedCondition
		.def_readwrite("TraveledDistanceCondition", &EntityCondition_U::m_TraveledDistanceCondition ) //TraveledDistanceCondition
		.def_readwrite("ReachPositionCondition", &EntityCondition_U::m_ReachPositionCondition ) //ReachPositionCondition
		.def_readwrite("DistanceCondition", &EntityCondition_U::m_DistanceCondition ) //DistanceCondition
		.def_readwrite("RelativeDistanceCondition", &EntityCondition_U::m_RelativeDistanceCondition ) //RelativeDistanceCondition
;
	py::class_<EnvironmentAction_U, std::shared_ptr<EnvironmentAction_U>>(m,"EnvironmentAction_U")
		.def_readwrite("Environment", &EnvironmentAction_U::m_Environment ) //Environment
		.def_readwrite("CatalogReference", &EnvironmentAction_U::m_CatalogReference ) //CatalogReference
;
	py::class_<FinalSpeed_U, std::shared_ptr<FinalSpeed_U>>(m,"FinalSpeed_U")
		.def_readwrite("AbsoluteSpeed", &FinalSpeed_U::m_AbsoluteSpeed ) //AbsoluteSpeed
		.def_readwrite("RelativeSpeedToMaster", &FinalSpeed_U::m_RelativeSpeedToMaster ) //RelativeSpeedToMaster
;
	py::class_<GlobalAction_U, std::shared_ptr<GlobalAction_U>>(m,"GlobalAction_U")
		.def_readwrite("EnvironmentAction", &GlobalAction_U::m_EnvironmentAction ) //EnvironmentAction
		.def_readwrite("EntityAction", &GlobalAction_U::m_EntityAction ) //EntityAction
		.def_readwrite("ParameterAction", &GlobalAction_U::m_ParameterAction ) //ParameterAction
		.def_readwrite("InfrastructureAction", &GlobalAction_U::m_InfrastructureAction ) //InfrastructureAction
		.def_readwrite("TrafficAction", &GlobalAction_U::m_TrafficAction ) //TrafficAction
;
	py::class_<InRoutePosition_U, std::shared_ptr<InRoutePosition_U>>(m,"InRoutePosition_U")
		.def_readwrite("FromCurrentEntity", &InRoutePosition_U::m_FromCurrentEntity ) //PositionOfCurrentEntity
		.def_readwrite("FromRoadCoordinates", &InRoutePosition_U::m_FromRoadCoordinates ) //PositionInRoadCoordinates
		.def_readwrite("FromLaneCoordinates", &InRoutePosition_U::m_FromLaneCoordinates ) //PositionInLaneCoordinates
;
	py::class_<LaneChangeTarget_U, std::shared_ptr<LaneChangeTarget_U>>(m,"LaneChangeTarget_U")
		.def_readwrite("RelativeTargetLane", &LaneChangeTarget_U::m_RelativeTargetLane ) //RelativeTargetLane
		.def_readwrite("AbsoluteTargetLane", &LaneChangeTarget_U::m_AbsoluteTargetLane ) //AbsoluteTargetLane
;
	py::class_<LaneOffsetTarget_U, std::shared_ptr<LaneOffsetTarget_U>>(m,"LaneOffsetTarget_U")
		.def_readwrite("RelativeTargetLaneOffset", &LaneOffsetTarget_U::m_RelativeTargetLaneOffset ) //RelativeTargetLaneOffset
		.def_readwrite("AbsoluteTargetLaneOffset", &LaneOffsetTarget_U::m_AbsoluteTargetLaneOffset ) //AbsoluteTargetLaneOffset
;
	py::class_<LateralAction_U, std::shared_ptr<LateralAction_U>>(m,"LateralAction_U")
		.def_readwrite("LaneChangeAction", &LateralAction_U::m_LaneChangeAction ) //LaneChangeAction
		.def_readwrite("LaneOffsetAction", &LateralAction_U::m_LaneOffsetAction ) //LaneOffsetAction
		.def_readwrite("LateralDistanceAction", &LateralAction_U::m_LateralDistanceAction ) //LateralDistanceAction
;
	py::class_<LongitudinalAction_U, std::shared_ptr<LongitudinalAction_U>>(m,"LongitudinalAction_U")
		.def_readwrite("SpeedAction", &LongitudinalAction_U::m_SpeedAction ) //SpeedAction
		.def_readwrite("LongitudinalDistanceAction", &LongitudinalAction_U::m_LongitudinalDistanceAction ) //LongitudinalDistanceAction
;
	py::class_<ModifyRule_U, std::shared_ptr<ModifyRule_U>>(m,"ModifyRule_U")
		.def_readwrite("AddValue", &ModifyRule_U::m_AddValue ) //ParameterAddValueRule
		.def_readwrite("MultiplyByValue", &ModifyRule_U::m_MultiplyByValue ) //ParameterMultiplyByValueRule
;
	py::class_<ObjectController_U, std::shared_ptr<ObjectController_U>>(m,"ObjectController_U")
		.def_readwrite("CatalogReference", &ObjectController_U::m_CatalogReference ) //CatalogReference
		.def_readwrite("Controller", &ObjectController_U::m_Controller ) //Controller
;
	py::class_<ParameterAction_U, std::shared_ptr<ParameterAction_U>>(m,"ParameterAction_U")
		.def_readwrite("SetAction", &ParameterAction_U::m_SetAction ) //ParameterSetAction
		.def_readwrite("ModifyAction", &ParameterAction_U::m_ModifyAction ) //ParameterModifyAction
;
	py::class_<Position_U, std::shared_ptr<Position_U>>(m,"Position_U")
		.def_readwrite("WorldPosition", &Position_U::m_WorldPosition ) //WorldPosition
		.def_readwrite("RelativeWorldPosition", &Position_U::m_RelativeWorldPosition ) //RelativeWorldPosition
		.def_readwrite("RelativeObjectPosition", &Position_U::m_RelativeObjectPosition ) //RelativeObjectPosition
		.def_readwrite("RoadPosition", &Position_U::m_RoadPosition ) //RoadPosition
		.def_readwrite("RelativeRoadPosition", &Position_U::m_RelativeRoadPosition ) //RelativeRoadPosition
		.def_readwrite("LanePosition", &Position_U::m_LanePosition ) //LanePosition
		.def_readwrite("RelativeLanePosition", &Position_U::m_RelativeLanePosition ) //RelativeLanePosition
		.def_readwrite("RoutePosition", &Position_U::m_RoutePosition ) //RoutePosition
;
	py::class_<PrivateAction_U, std::shared_ptr<PrivateAction_U>>(m,"PrivateAction_U")
		.def_readwrite("LongitudinalAction", &PrivateAction_U::m_LongitudinalAction ) //LongitudinalAction
		.def_readwrite("LateralAction", &PrivateAction_U::m_LateralAction ) //LateralAction
		.def_readwrite("VisibilityAction", &PrivateAction_U::m_VisibilityAction ) //VisibilityAction
		.def_readwrite("SynchronizeAction", &PrivateAction_U::m_SynchronizeAction ) //SynchronizeAction
		.def_readwrite("ActivateControllerAction", &PrivateAction_U::m_ActivateControllerAction ) //ActivateControllerAction
		.def_readwrite("ControllerAction", &PrivateAction_U::m_ControllerAction ) //ControllerAction
		.def_readwrite("TeleportAction", &PrivateAction_U::m_TeleportAction ) //TeleportAction
		.def_readwrite("RoutingAction", &PrivateAction_U::m_RoutingAction ) //RoutingAction
;
	py::class_<RouteRef_U, std::shared_ptr<RouteRef_U>>(m,"RouteRef_U")
		.def_readwrite("Route", &RouteRef_U::m_Route ) //Route
		.def_readwrite("CatalogReference", &RouteRef_U::m_CatalogReference ) //CatalogReference
;
	py::class_<RoutingAction_U, std::shared_ptr<RoutingAction_U>>(m,"RoutingAction_U")
		.def_readwrite("AssignRouteAction", &RoutingAction_U::m_AssignRouteAction ) //AssignRouteAction
		.def_readwrite("FollowTrajectoryAction", &RoutingAction_U::m_FollowTrajectoryAction ) //FollowTrajectoryAction
		.def_readwrite("AcquirePositionAction", &RoutingAction_U::m_AcquirePositionAction ) //AcquirePositionAction
;
	py::class_<SelectedEntities_U, std::shared_ptr<SelectedEntities_U>>(m,"SelectedEntities_U")
		.def_readwrite("EntityRef", &SelectedEntities_U::m_EntityRefs ) //EntityRef
		.def_readwrite("ByType", &SelectedEntities_U::m_ByTypes ) //ByType
;
	py::class_<Shape_U, std::shared_ptr<Shape_U>>(m,"Shape_U")
		.def_readwrite("Polyline", &Shape_U::m_Polyline ) //Polyline
		.def_readwrite("Clothoid", &Shape_U::m_Clothoid ) //Clothoid
		.def_readwrite("Nurbs", &Shape_U::m_Nurbs ) //Nurbs
;
	py::class_<SpeedActionTarget_U, std::shared_ptr<SpeedActionTarget_U>>(m,"SpeedActionTarget_U")
		.def_readwrite("RelativeTargetSpeed", &SpeedActionTarget_U::m_RelativeTargetSpeed ) //RelativeTargetSpeed
		.def_readwrite("AbsoluteTargetSpeed", &SpeedActionTarget_U::m_AbsoluteTargetSpeed ) //AbsoluteTargetSpeed
;
	py::class_<TimeReference_U, std::shared_ptr<TimeReference_U>>(m,"TimeReference_U")
		.def_readwrite("None", &TimeReference_U::m_None ) //None
		.def_readwrite("Timing", &TimeReference_U::m_Timing ) //Timing
;
	py::class_<TimeToCollisionConditionTarget_U, std::shared_ptr<TimeToCollisionConditionTarget_U>>(m,"TimeToCollisionConditionTarget_U")
		.def_readwrite("Position", &TimeToCollisionConditionTarget_U::m_Position ) //Position
		.def_readwrite("EntityRef", &TimeToCollisionConditionTarget_U::m_EntityRef ) //EntityRef
;
	py::class_<TrafficAction_U, std::shared_ptr<TrafficAction_U>>(m,"TrafficAction_U")
		.def_readwrite("TrafficSourceAction", &TrafficAction_U::m_TrafficSourceAction ) //TrafficSourceAction
		.def_readwrite("TrafficSinkAction", &TrafficAction_U::m_TrafficSinkAction ) //TrafficSinkAction
		.def_readwrite("TrafficSwarmAction", &TrafficAction_U::m_TrafficSwarmAction ) //TrafficSwarmAction
;
	py::class_<TrafficSignalAction_U, std::shared_ptr<TrafficSignalAction_U>>(m,"TrafficSignalAction_U")
		.def_readwrite("TrafficSignalControllerAction", &TrafficSignalAction_U::m_TrafficSignalControllerAction ) //TrafficSignalControllerAction
		.def_readwrite("TrafficSignalStateAction", &TrafficSignalAction_U::m_TrafficSignalStateAction ) //TrafficSignalStateAction
;
//
	py::class_<AbsoluteSpeed, std::shared_ptr<AbsoluteSpeed>>(m,"AbsoluteSpeed","")
		.def_readwrite("value", &AbsoluteSpeed::value, "")
;
//
	py::class_<AbsoluteTargetLane, std::shared_ptr<AbsoluteTargetLane>>(m,"AbsoluteTargetLane","")
		.def_readwrite("value", &AbsoluteTargetLane::value, "")
;
//
	py::class_<AbsoluteTargetLaneOffset, std::shared_ptr<AbsoluteTargetLaneOffset>>(m,"AbsoluteTargetLaneOffset","")
		.def_readwrite("value", &AbsoluteTargetLaneOffset::value, "")
;
//
	py::class_<AbsoluteTargetSpeed, std::shared_ptr<AbsoluteTargetSpeed>>(m,"AbsoluteTargetSpeed","")
		.def_readwrite("value", &AbsoluteTargetSpeed::value, "")
;
//
	py::class_<AccelerationCondition, std::shared_ptr<AccelerationCondition>>(m,"AccelerationCondition","")
		.def_readwrite("rule", &AccelerationCondition::rule, "")
		.def_readwrite("value", &AccelerationCondition::value, "")
;
//
	py::class_<AcquirePositionAction, std::shared_ptr<AcquirePositionAction>>(m,"AcquirePositionAction","")
		.def_readwrite("Position", &AcquirePositionAction::m_Position ) //Position
;
//
	py::class_<Act, std::shared_ptr<Act>>(m,"Act","")
		.def_readwrite("name", &Act::name, "")
		.def_readwrite("ManeuverGroup", &Act::m_ManeuverGroups ) //ManeuverGroup
		.def_readwrite("StartTrigger", &Act::m_StartTrigger ) //Trigger
		.def_readwrite("StopTrigger", &Act::m_StopTrigger ) //Trigger
;
//
	py::class_<Action, std::shared_ptr<Action>>(m,"Action","")
		.def_readwrite("name", &Action::name, "")
		.def_readwrite("Action", &Action::m_Action ) //
;
//
	py::class_<ActivateControllerAction, std::shared_ptr<ActivateControllerAction>>(m,"ActivateControllerAction","")
		.def_readwrite("lateral", &ActivateControllerAction::lateral, "")
		.def_readwrite("longitudinal", &ActivateControllerAction::longitudinal, "")
;
//
	py::class_<Actors, std::shared_ptr<Actors>>(m,"Actors","")
		.def_readwrite("selectTriggeringEntities", &Actors::selectTriggeringEntities, "")
		.def_readwrite("EntityRef", &Actors::m_EntityRefs ) //EntityRef
;
//
	py::class_<AddEntityAction, std::shared_ptr<AddEntityAction>>(m,"AddEntityAction","")
		.def_readwrite("Position", &AddEntityAction::m_Position ) //Position
;
//
	py::class_<AssignControllerAction, std::shared_ptr<AssignControllerAction>>(m,"AssignControllerAction","")
		.def_readwrite("AssignControllerAction", &AssignControllerAction::m_AssignControllerAction ) //
;
//
	py::class_<AssignRouteAction, std::shared_ptr<AssignRouteAction>>(m,"AssignRouteAction","")
		.def_readwrite("AssignRouteAction", &AssignRouteAction::m_AssignRouteAction ) //
;
//
	py::class_<Axle, std::shared_ptr<Axle>>(m,"Axle","")
		.def_readwrite("maxSteering", &Axle::maxSteering, "")
		.def_readwrite("positionX", &Axle::positionX, "")
		.def_readwrite("positionZ", &Axle::positionZ, "")
		.def_readwrite("trackWidth", &Axle::trackWidth, "")
		.def_readwrite("wheelDiameter", &Axle::wheelDiameter, "")
;
//
	py::class_<Axles, std::shared_ptr<Axles>>(m,"Axles","")
		.def_readwrite("FrontAxle", &Axles::m_FrontAxle ) //Axle
		.def_readwrite("RearAxle", &Axles::m_RearAxle ) //Axle
		.def_readwrite("AdditionalAxle", &Axles::m_AdditionalAxles ) //Axle
;
//
	py::class_<BoundingBox, std::shared_ptr<BoundingBox>>(m,"BoundingBox","")
		.def_readwrite("Center", &BoundingBox::m_Center ) //Center
		.def_readwrite("Dimensions", &BoundingBox::m_Dimensions ) //Dimensions
;
//
	py::class_<ByEntityCondition, std::shared_ptr<ByEntityCondition>>(m,"ByEntityCondition","")
		.def_readwrite("TriggeringEntities", &ByEntityCondition::m_TriggeringEntities ) //TriggeringEntities
		.def_readwrite("EntityCondition", &ByEntityCondition::m_EntityCondition ) //EntityCondition
;
//
	py::class_<ByObjectType, std::shared_ptr<ByObjectType>>(m,"ByObjectType","")
		.def_readwrite("type", &ByObjectType::type, "")
;
//
	py::class_<ByType, std::shared_ptr<ByType>>(m,"ByType","")
		.def_readwrite("objectType", &ByType::objectType, "")
;
//
	py::class_<ByValueCondition, std::shared_ptr<ByValueCondition>>(m,"ByValueCondition","")
		.def_readwrite("ByValueCondition", &ByValueCondition::m_ByValueCondition ) //
;
//
	py::class_<Catalog, std::shared_ptr<Catalog>>(m,"Catalog","")
		.def_readwrite("name", &Catalog::name, "")
		.def_readwrite("Vehicle", &Catalog::m_Vehicles ) //Vehicle
		.def_readwrite("Controller", &Catalog::m_Controllers ) //Controller
		.def_readwrite("Pedestrian", &Catalog::m_Pedestrians ) //Pedestrian
		.def_readwrite("MiscObject", &Catalog::m_MiscObjects ) //MiscObject
		.def_readwrite("Environment", &Catalog::m_Environments ) //Environment
		.def_readwrite("Maneuver", &Catalog::m_Maneuvers ) //Maneuver
		.def_readwrite("Trajectory", &Catalog::m_Trajectorys ) //Trajectory
		.def_readwrite("Route", &Catalog::m_Routes ) //Route
;
//
	py::class_<CatalogLocations, std::shared_ptr<CatalogLocations>>(m,"CatalogLocations","")
		.def_readwrite("VehicleCatalog", &CatalogLocations::m_VehicleCatalog ) //VehicleCatalogLocation
		.def_readwrite("ControllerCatalog", &CatalogLocations::m_ControllerCatalog ) //ControllerCatalogLocation
		.def_readwrite("PedestrianCatalog", &CatalogLocations::m_PedestrianCatalog ) //PedestrianCatalogLocation
		.def_readwrite("MiscObjectCatalog", &CatalogLocations::m_MiscObjectCatalog ) //MiscObjectCatalogLocation
		.def_readwrite("EnvironmentCatalog", &CatalogLocations::m_EnvironmentCatalog ) //EnvironmentCatalogLocation
		.def_readwrite("ManeuverCatalog", &CatalogLocations::m_ManeuverCatalog ) //ManeuverCatalogLocation
		.def_readwrite("TrajectoryCatalog", &CatalogLocations::m_TrajectoryCatalog ) //TrajectoryCatalogLocation
		.def_readwrite("RouteCatalog", &CatalogLocations::m_RouteCatalog ) //RouteCatalogLocation
;
//
	py::class_<CatalogReference, std::shared_ptr<CatalogReference>>(m,"CatalogReference","")
		.def_readwrite("catalogName", &CatalogReference::catalogName, "")
		.def_readwrite("entryName", &CatalogReference::entryName, "")
		.def_readwrite("ParameterAssignments", &CatalogReference::m_ParameterAssignments ) //ParameterAssignments
;
//
	py::class_<Center, std::shared_ptr<Center>>(m,"Center","")
		.def_readwrite("x", &Center::x, "")
		.def_readwrite("y", &Center::y, "")
		.def_readwrite("z", &Center::z, "")
;
//
	py::class_<CentralSwarmObject, std::shared_ptr<CentralSwarmObject>>(m,"CentralSwarmObject","")
		.def_readwrite("entityRef", &CentralSwarmObject::entityRef, "")
;
//
	py::class_<Clothoid, std::shared_ptr<Clothoid>>(m,"Clothoid","")
		.def_readwrite("curvature", &Clothoid::curvature, "")
		.def_readwrite("curvatureDot", &Clothoid::curvatureDot, "")
		.def_readwrite("length", &Clothoid::length, "")
		.def_readwrite("startTime", &Clothoid::startTime, "")
		.def_readwrite("stopTime", &Clothoid::stopTime, "")
		.def_readwrite("Position", &Clothoid::m_Position ) //Position
;
//
	py::class_<CollisionCondition, std::shared_ptr<CollisionCondition>>(m,"CollisionCondition","")
		.def_readwrite("CollisionCondition", &CollisionCondition::m_CollisionCondition ) //
;
//
	py::class_<Condition, std::shared_ptr<Condition>>(m,"Condition","")
		.def_readwrite("conditionEdge", &Condition::conditionEdge, "")
		.def_readwrite("delay", &Condition::delay, "")
		.def_readwrite("name", &Condition::name, "")
		.def_readwrite("Condition", &Condition::m_Condition ) //
;
//
	py::class_<ConditionGroup, std::shared_ptr<ConditionGroup>>(m,"ConditionGroup","")
		.def_readwrite("Condition", &ConditionGroup::m_Conditions ) //Condition
;
//
	py::class_<Controller, std::shared_ptr<Controller>>(m,"Controller","")
		.def_readwrite("name", &Controller::name, "")
		.def_readwrite("ParameterDeclarations", &Controller::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("Properties", &Controller::m_Properties ) //Properties
;
//
	py::class_<ControllerAction, std::shared_ptr<ControllerAction>>(m,"ControllerAction","")
		.def_readwrite("AssignControllerAction", &ControllerAction::m_AssignControllerAction ) //AssignControllerAction
		.def_readwrite("OverrideControllerValueAction", &ControllerAction::m_OverrideControllerValueAction ) //OverrideControllerValueAction
;
//
	py::class_<ControllerCatalogLocation, std::shared_ptr<ControllerCatalogLocation>>(m,"ControllerCatalogLocation","")
		.def_readwrite("Directory", &ControllerCatalogLocation::m_Directory ) //Directory
;
//
	py::class_<ControllerDistribution, std::shared_ptr<ControllerDistribution>>(m,"ControllerDistribution","")
		.def_readwrite("ControllerDistributionEntry", &ControllerDistribution::m_ControllerDistributionEntrys ) //ControllerDistributionEntry
;
//
	py::class_<ControllerDistributionEntry, std::shared_ptr<ControllerDistributionEntry>>(m,"ControllerDistributionEntry","")
		.def_readwrite("weight", &ControllerDistributionEntry::weight, "")
		.def_readwrite("ControllerDistributionEntry", &ControllerDistributionEntry::m_ControllerDistributionEntry ) //
;
//
	py::class_<ControlPoint, std::shared_ptr<ControlPoint>>(m,"ControlPoint","")
		.def_readwrite("time", &ControlPoint::time, "")
		.def_readwrite("weight", &ControlPoint::weight, "")
		.def_readwrite("Position", &ControlPoint::m_Position ) //Position
;
//
	py::class_<CustomCommandAction, std::shared_ptr<CustomCommandAction>>(m,"CustomCommandAction","")
		.def_readwrite("type", &CustomCommandAction::type, "")
;
//
	py::class_<DeleteEntityAction, std::shared_ptr<DeleteEntityAction>>(m,"DeleteEntityAction","")
;
//
	py::class_<Dimensions, std::shared_ptr<Dimensions>>(m,"Dimensions","")
		.def_readwrite("height", &Dimensions::height, "")
		.def_readwrite("length", &Dimensions::length, "")
		.def_readwrite("width", &Dimensions::width, "")
;
//
	py::class_<Directory, std::shared_ptr<Directory>>(m,"Directory","")
		.def_readwrite("path", &Directory::path, "")
;
//
	py::class_<DistanceCondition, std::shared_ptr<DistanceCondition>>(m,"DistanceCondition","")
		.def_readwrite("alongRoute", &DistanceCondition::alongRoute, "")
		.def_readwrite("freespace", &DistanceCondition::freespace, "")
		.def_readwrite("rule", &DistanceCondition::rule, "")
		.def_readwrite("value", &DistanceCondition::value, "")
		.def_readwrite("Position", &DistanceCondition::m_Position ) //Position
;
//
	py::class_<DynamicConstraints, std::shared_ptr<DynamicConstraints>>(m,"DynamicConstraints","")
		.def_readwrite("maxAcceleration", &DynamicConstraints::maxAcceleration, "")
		.def_readwrite("maxDeceleration", &DynamicConstraints::maxDeceleration, "")
		.def_readwrite("maxSpeed", &DynamicConstraints::maxSpeed, "")
;
//
	py::class_<EndOfRoadCondition, std::shared_ptr<EndOfRoadCondition>>(m,"EndOfRoadCondition","")
		.def_readwrite("duration", &EndOfRoadCondition::duration, "")
;
//
	py::class_<Entities, std::shared_ptr<Entities>>(m,"Entities","")
		.def_readwrite("ScenarioObject", &Entities::m_ScenarioObjects ) //ScenarioObject
		.def_readwrite("EntitySelection", &Entities::m_EntitySelections ) //EntitySelection
;
//
	py::class_<EntityAction, std::shared_ptr<EntityAction>>(m,"EntityAction","")
		.def_readwrite("entityRef", &EntityAction::entityRef, "")
		.def_readwrite("EntityAction", &EntityAction::m_EntityAction ) //
;
//
	py::class_<EntityCondition, std::shared_ptr<EntityCondition>>(m,"EntityCondition","")
		.def_readwrite("EntityCondition", &EntityCondition::m_EntityCondition ) //
;
//
	py::class_<EntityRef, std::shared_ptr<EntityRef>>(m,"EntityRef","")
		.def_readwrite("entityRef", &EntityRef::entityRef, "")
;
//
	py::class_<EntitySelection, std::shared_ptr<EntitySelection>>(m,"EntitySelection","")
		.def_readwrite("name", &EntitySelection::name, "")
		.def_readwrite("Members", &EntitySelection::m_Members ) //SelectedEntities
;
//
	py::class_<Environment, std::shared_ptr<Environment>>(m,"Environment","")
		.def_readwrite("name", &Environment::name, "")
		.def_readwrite("ParameterDeclarations", &Environment::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("TimeOfDay", &Environment::m_TimeOfDay ) //TimeOfDay
		.def_readwrite("Weather", &Environment::m_Weather ) //Weather
		.def_readwrite("RoadCondition", &Environment::m_RoadCondition ) //RoadCondition
;
//
	py::class_<EnvironmentAction, std::shared_ptr<EnvironmentAction>>(m,"EnvironmentAction","")
		.def_readwrite("EnvironmentAction", &EnvironmentAction::m_EnvironmentAction ) //
;
//
	py::class_<EnvironmentCatalogLocation, std::shared_ptr<EnvironmentCatalogLocation>>(m,"EnvironmentCatalogLocation","")
		.def_readwrite("Directory", &EnvironmentCatalogLocation::m_Directory ) //Directory
;
//
	py::class_<Event, std::shared_ptr<Event>>(m,"Event","")
		.def_readwrite("maximumExecutionCount", &Event::maximumExecutionCount, "")
		.def_readwrite("name", &Event::name, "")
		.def_readwrite("priority", &Event::priority, "")
		.def_readwrite("Action", &Event::m_Actions ) //Action
		.def_readwrite("StartTrigger", &Event::m_StartTrigger ) //Trigger
;
//
	py::class_<File, std::shared_ptr<File>>(m,"File","")
		.def_readwrite("filepath", &File::filepath, "")
;
//
	py::class_<FileHeader, std::shared_ptr<FileHeader>>(m,"FileHeader","")
		.def_readwrite("author", &FileHeader::author, "")
		.def_readwrite("date", &FileHeader::date, "")
		.def_readwrite("description", &FileHeader::description, "")
		.def_readwrite("revMajor", &FileHeader::revMajor, "")
		.def_readwrite("revMinor", &FileHeader::revMinor, "")
;
//
	py::class_<FinalSpeed, std::shared_ptr<FinalSpeed>>(m,"FinalSpeed","")
		.def_readwrite("FinalSpeed", &FinalSpeed::m_FinalSpeed ) //
;
//
	py::class_<Fog, std::shared_ptr<Fog>>(m,"Fog","")
		.def_readwrite("visualRange", &Fog::visualRange, "")
		.def_readwrite("BoundingBox", &Fog::m_BoundingBox ) //BoundingBox
;
//
	py::class_<FollowTrajectoryAction, std::shared_ptr<FollowTrajectoryAction>>(m,"FollowTrajectoryAction","")
		.def_readwrite("Trajectory", &FollowTrajectoryAction::m_Trajectory ) //Trajectory
		.def_readwrite("CatalogReference", &FollowTrajectoryAction::m_CatalogReference ) //CatalogReference
		.def_readwrite("TimeReference", &FollowTrajectoryAction::m_TimeReference ) //TimeReference
		.def_readwrite("TrajectoryFollowingMode", &FollowTrajectoryAction::m_TrajectoryFollowingMode ) //TrajectoryFollowingMode
;
//
	py::class_<GlobalAction, std::shared_ptr<GlobalAction>>(m,"GlobalAction","")
		.def_readwrite("GlobalAction", &GlobalAction::m_GlobalAction ) //
;
//
	py::class_<InfrastructureAction, std::shared_ptr<InfrastructureAction>>(m,"InfrastructureAction","")
		.def_readwrite("TrafficSignalAction", &InfrastructureAction::m_TrafficSignalAction ) //TrafficSignalAction
;
//
	py::class_<Init, std::shared_ptr<Init>>(m,"Init","")
		.def_readwrite("Actions", &Init::m_Actions ) //InitActions
;
//
	py::class_<InitActions, std::shared_ptr<InitActions>>(m,"InitActions","")
		.def_readwrite("GlobalAction", &InitActions::m_GlobalActions ) //GlobalAction
		.def_readwrite("UserDefinedAction", &InitActions::m_UserDefinedActions ) //UserDefinedAction
		.def_readwrite("Private", &InitActions::m_Privates ) //Private
;
//
	py::class_<InRoutePosition, std::shared_ptr<InRoutePosition>>(m,"InRoutePosition","")
		.def_readwrite("InRoutePosition", &InRoutePosition::m_InRoutePosition ) //
;
//
	py::class_<Knot, std::shared_ptr<Knot>>(m,"Knot","")
		.def_readwrite("value", &Knot::value, "")
;
//
	py::class_<LaneChangeAction, std::shared_ptr<LaneChangeAction>>(m,"LaneChangeAction","")
		.def_readwrite("targetLaneOffset", &LaneChangeAction::targetLaneOffset, "")
		.def_readwrite("LaneChangeActionDynamics", &LaneChangeAction::m_LaneChangeActionDynamics ) //TransitionDynamics
		.def_readwrite("LaneChangeTarget", &LaneChangeAction::m_LaneChangeTarget ) //LaneChangeTarget
;
//
	py::class_<LaneChangeTarget, std::shared_ptr<LaneChangeTarget>>(m,"LaneChangeTarget","")
		.def_readwrite("LaneChangeTarget", &LaneChangeTarget::m_LaneChangeTarget ) //
;
//
	py::class_<LaneOffsetAction, std::shared_ptr<LaneOffsetAction>>(m,"LaneOffsetAction","")
		.def_readwrite("continuous", &LaneOffsetAction::continuous, "")
		.def_readwrite("LaneOffsetActionDynamics", &LaneOffsetAction::m_LaneOffsetActionDynamics ) //LaneOffsetActionDynamics
		.def_readwrite("LaneOffsetTarget", &LaneOffsetAction::m_LaneOffsetTarget ) //LaneOffsetTarget
;
//
	py::class_<LaneOffsetActionDynamics, std::shared_ptr<LaneOffsetActionDynamics>>(m,"LaneOffsetActionDynamics","")
		.def_readwrite("dynamicsShape", &LaneOffsetActionDynamics::dynamicsShape, "")
		.def_readwrite("maxLateralAcc", &LaneOffsetActionDynamics::maxLateralAcc, "")
;
//
	py::class_<LaneOffsetTarget, std::shared_ptr<LaneOffsetTarget>>(m,"LaneOffsetTarget","")
		.def_readwrite("LaneOffsetTarget", &LaneOffsetTarget::m_LaneOffsetTarget ) //
;
//
	py::class_<LanePosition, std::shared_ptr<LanePosition>>(m,"LanePosition","")
		.def_readwrite("laneId", &LanePosition::laneId, "")
		.def_readwrite("offset", &LanePosition::offset, "")
		.def_readwrite("roadId", &LanePosition::roadId, "")
		.def_readwrite("s", &LanePosition::s, "")
		.def_readwrite("Orientation", &LanePosition::m_Orientation ) //Orientation
;
//
	py::class_<LateralAction, std::shared_ptr<LateralAction>>(m,"LateralAction","")
		.def_readwrite("LateralAction", &LateralAction::m_LateralAction ) //
;
//
	py::class_<LateralDistanceAction, std::shared_ptr<LateralDistanceAction>>(m,"LateralDistanceAction","")
		.def_readwrite("entityRef", &LateralDistanceAction::entityRef, "")
		.def_readwrite("continuous", &LateralDistanceAction::continuous, "")
		.def_readwrite("distance", &LateralDistanceAction::distance, "")
		.def_readwrite("freespace", &LateralDistanceAction::freespace, "")
		.def_readwrite("DynamicConstraints", &LateralDistanceAction::m_DynamicConstraints ) //DynamicConstraints
;
//
	py::class_<LongitudinalAction, std::shared_ptr<LongitudinalAction>>(m,"LongitudinalAction","")
		.def_readwrite("LongitudinalAction", &LongitudinalAction::m_LongitudinalAction ) //
;
//
	py::class_<LongitudinalDistanceAction, std::shared_ptr<LongitudinalDistanceAction>>(m,"LongitudinalDistanceAction","")
		.def_readwrite("entityRef", &LongitudinalDistanceAction::entityRef, "")
		.def_readwrite("continuous", &LongitudinalDistanceAction::continuous, "")
		.def_readwrite("distance", &LongitudinalDistanceAction::distance, "")
		.def_readwrite("freespace", &LongitudinalDistanceAction::freespace, "")
		.def_readwrite("timeGap", &LongitudinalDistanceAction::timeGap, "")
		.def_readwrite("DynamicConstraints", &LongitudinalDistanceAction::m_DynamicConstraints ) //DynamicConstraints
;
//
	py::class_<Maneuver, std::shared_ptr<Maneuver>>(m,"Maneuver","")
		.def_readwrite("name", &Maneuver::name, "")
		.def_readwrite("ParameterDeclarations", &Maneuver::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("Event", &Maneuver::m_Events ) //Event
;
//
	py::class_<ManeuverCatalogLocation, std::shared_ptr<ManeuverCatalogLocation>>(m,"ManeuverCatalogLocation","")
		.def_readwrite("Directory", &ManeuverCatalogLocation::m_Directory ) //Directory
;
//
	py::class_<ManeuverGroup, std::shared_ptr<ManeuverGroup>>(m,"ManeuverGroup","")
		.def_readwrite("maximumExecutionCount", &ManeuverGroup::maximumExecutionCount, "")
		.def_readwrite("name", &ManeuverGroup::name, "")
		.def_readwrite("Actors", &ManeuverGroup::m_Actors ) //Actors
		.def_readwrite("CatalogReference", &ManeuverGroup::m_CatalogReferences ) //CatalogReference
		.def_readwrite("Maneuver", &ManeuverGroup::m_Maneuvers ) //Maneuver
;
//
	py::class_<MiscObject, std::shared_ptr<MiscObject>>(m,"MiscObject","")
		.def_readwrite("mass", &MiscObject::mass, "")
		.def_readwrite("miscObjectCategory", &MiscObject::miscObjectCategory, "")
		.def_readwrite("name", &MiscObject::name, "")
		.def_readwrite("ParameterDeclarations", &MiscObject::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("BoundingBox", &MiscObject::m_BoundingBox ) //BoundingBox
		.def_readwrite("Properties", &MiscObject::m_Properties ) //Properties
;
//
	py::class_<MiscObjectCatalogLocation, std::shared_ptr<MiscObjectCatalogLocation>>(m,"MiscObjectCatalogLocation","")
		.def_readwrite("Directory", &MiscObjectCatalogLocation::m_Directory ) //Directory
;
//
	py::class_<ModifyRule, std::shared_ptr<ModifyRule>>(m,"ModifyRule","")
		.def_readwrite("ModifyRule", &ModifyRule::m_ModifyRule ) //
;
//
	py::class_<None, std::shared_ptr<None>>(m,"None","")
;
//
	py::class_<Nurbs, std::shared_ptr<Nurbs>>(m,"Nurbs","")
		.def_readwrite("order", &Nurbs::order, "")
		.def_readwrite("ControlPoint", &Nurbs::m_ControlPoints ) //ControlPoint
		.def_readwrite("Knot", &Nurbs::m_Knots ) //Knot
;
//
	py::class_<ObjectController, std::shared_ptr<ObjectController>>(m,"ObjectController","")
		.def_readwrite("ObjectController", &ObjectController::m_ObjectController ) //
;
//
	py::class_<OffroadCondition, std::shared_ptr<OffroadCondition>>(m,"OffroadCondition","")
		.def_readwrite("duration", &OffroadCondition::duration, "")
;
//
	py::class_<OpenScenario, std::shared_ptr<OpenScenario>>(m,"OpenScenario","")
		.def_readwrite("FileHeader", &OpenScenario::m_FileHeader ) //FileHeader
	.def_readwrite("OpenScenarioCategory", &OpenScenario::m_OpenScenarioCategory ) // group read
;
//
	py::class_<Orientation, std::shared_ptr<Orientation>>(m,"Orientation","")
		.def_readwrite("h", &Orientation::h, "")
		.def_readwrite("p", &Orientation::p, "")
		.def_readwrite("r", &Orientation::r, "")
		.def_readwrite("type", &Orientation::type, "")
;
//
	py::class_<OverrideBrakeAction, std::shared_ptr<OverrideBrakeAction>>(m,"OverrideBrakeAction","")
		.def_readwrite("active", &OverrideBrakeAction::active, "")
		.def_readwrite("value", &OverrideBrakeAction::value, "")
;
//
	py::class_<OverrideClutchAction, std::shared_ptr<OverrideClutchAction>>(m,"OverrideClutchAction","")
		.def_readwrite("active", &OverrideClutchAction::active, "")
		.def_readwrite("value", &OverrideClutchAction::value, "")
;
//
	py::class_<OverrideControllerValueAction, std::shared_ptr<OverrideControllerValueAction>>(m,"OverrideControllerValueAction","")
		.def_readwrite("Throttle", &OverrideControllerValueAction::m_Throttle ) //OverrideThrottleAction
		.def_readwrite("Brake", &OverrideControllerValueAction::m_Brake ) //OverrideBrakeAction
		.def_readwrite("Clutch", &OverrideControllerValueAction::m_Clutch ) //OverrideClutchAction
		.def_readwrite("ParkingBrake", &OverrideControllerValueAction::m_ParkingBrake ) //OverrideParkingBrakeAction
		.def_readwrite("SteeringWheel", &OverrideControllerValueAction::m_SteeringWheel ) //OverrideSteeringWheelAction
		.def_readwrite("Gear", &OverrideControllerValueAction::m_Gear ) //OverrideGearAction
;
//
	py::class_<OverrideGearAction, std::shared_ptr<OverrideGearAction>>(m,"OverrideGearAction","")
		.def_readwrite("active", &OverrideGearAction::active, "")
		.def_readwrite("number", &OverrideGearAction::number, "")
;
//
	py::class_<OverrideParkingBrakeAction, std::shared_ptr<OverrideParkingBrakeAction>>(m,"OverrideParkingBrakeAction","")
		.def_readwrite("active", &OverrideParkingBrakeAction::active, "")
		.def_readwrite("value", &OverrideParkingBrakeAction::value, "")
;
//
	py::class_<OverrideSteeringWheelAction, std::shared_ptr<OverrideSteeringWheelAction>>(m,"OverrideSteeringWheelAction","")
		.def_readwrite("active", &OverrideSteeringWheelAction::active, "")
		.def_readwrite("value", &OverrideSteeringWheelAction::value, "")
;
//
	py::class_<OverrideThrottleAction, std::shared_ptr<OverrideThrottleAction>>(m,"OverrideThrottleAction","")
		.def_readwrite("active", &OverrideThrottleAction::active, "")
		.def_readwrite("value", &OverrideThrottleAction::value, "")
;
//
	py::class_<ParameterAction, std::shared_ptr<ParameterAction>>(m,"ParameterAction","")
		.def_readwrite("parameterRef", &ParameterAction::parameterRef, "")
		.def_readwrite("ParameterAction", &ParameterAction::m_ParameterAction ) //
;
//
	py::class_<ParameterAddValueRule, std::shared_ptr<ParameterAddValueRule>>(m,"ParameterAddValueRule","")
		.def_readwrite("value", &ParameterAddValueRule::value, "")
;
//
	py::class_<ParameterAssignment, std::shared_ptr<ParameterAssignment>>(m,"ParameterAssignment","")
		.def_readwrite("parameterRef", &ParameterAssignment::parameterRef, "")
		.def_readwrite("value", &ParameterAssignment::value, "")
;
//
	py::class_<ParameterAssignments, std::shared_ptr<ParameterAssignments>>(m,"ParameterAssignments","")
		.def_readwrite("ParameterAssignment", &ParameterAssignments::m_ParameterAssignments ) //ParameterAssignment
;
//
	py::class_<ParameterCondition, std::shared_ptr<ParameterCondition>>(m,"ParameterCondition","")
		.def_readwrite("parameterRef", &ParameterCondition::parameterRef, "")
		.def_readwrite("rule", &ParameterCondition::rule, "")
		.def_readwrite("value", &ParameterCondition::value, "")
;
//
	py::class_<ParameterDeclaration, std::shared_ptr<ParameterDeclaration>>(m,"ParameterDeclaration","")
		.def_readwrite("name", &ParameterDeclaration::name, "")
		.def_readwrite("parameterType", &ParameterDeclaration::parameterType, "")
		.def_readwrite("value", &ParameterDeclaration::value, "")
;
//
	py::class_<ParameterDeclarations, std::shared_ptr<ParameterDeclarations>>(m,"ParameterDeclarations","")
		.def_readwrite("ParameterDeclaration", &ParameterDeclarations::m_ParameterDeclarations ) //ParameterDeclaration
;
//
	py::class_<ParameterModifyAction, std::shared_ptr<ParameterModifyAction>>(m,"ParameterModifyAction","")
		.def_readwrite("Rule", &ParameterModifyAction::m_Rule ) //ModifyRule
;
//
	py::class_<ParameterMultiplyByValueRule, std::shared_ptr<ParameterMultiplyByValueRule>>(m,"ParameterMultiplyByValueRule","")
		.def_readwrite("value", &ParameterMultiplyByValueRule::value, "")
;
//
	py::class_<ParameterSetAction, std::shared_ptr<ParameterSetAction>>(m,"ParameterSetAction","")
		.def_readwrite("value", &ParameterSetAction::value, "")
;
//
	py::class_<Pedestrian, std::shared_ptr<Pedestrian>>(m,"Pedestrian","")
		.def_readwrite("mass", &Pedestrian::mass, "")
		.def_readwrite("model", &Pedestrian::model, "")
		.def_readwrite("name", &Pedestrian::name, "")
		.def_readwrite("pedestrianCategory", &Pedestrian::pedestrianCategory, "")
		.def_readwrite("ParameterDeclarations", &Pedestrian::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("BoundingBox", &Pedestrian::m_BoundingBox ) //BoundingBox
		.def_readwrite("Properties", &Pedestrian::m_Properties ) //Properties
;
//
	py::class_<PedestrianCatalogLocation, std::shared_ptr<PedestrianCatalogLocation>>(m,"PedestrianCatalogLocation","")
		.def_readwrite("Directory", &PedestrianCatalogLocation::m_Directory ) //Directory
;
//
	py::class_<Performance, std::shared_ptr<Performance>>(m,"Performance","")
		.def_readwrite("maxAcceleration", &Performance::maxAcceleration, "")
		.def_readwrite("maxDeceleration", &Performance::maxDeceleration, "")
		.def_readwrite("maxSpeed", &Performance::maxSpeed, "")
;
//
	py::class_<Phase, std::shared_ptr<Phase>>(m,"Phase","")
		.def_readwrite("duration", &Phase::duration, "")
		.def_readwrite("name", &Phase::name, "")
		.def_readwrite("TrafficSignalState", &Phase::m_TrafficSignalStates ) //TrafficSignalState
;
//
	py::class_<Polyline, std::shared_ptr<Polyline>>(m,"Polyline","")
		.def_readwrite("Vertex", &Polyline::m_Vertexs ) //Vertex
;
//
	py::class_<Position, std::shared_ptr<Position>>(m,"Position","")
		.def_readwrite("Position", &Position::m_Position ) //
;
//
	py::class_<PositionInLaneCoordinates, std::shared_ptr<PositionInLaneCoordinates>>(m,"PositionInLaneCoordinates","")
		.def_readwrite("laneId", &PositionInLaneCoordinates::laneId, "")
		.def_readwrite("laneOffset", &PositionInLaneCoordinates::laneOffset, "")
		.def_readwrite("pathS", &PositionInLaneCoordinates::pathS, "")
;
//
	py::class_<PositionInRoadCoordinates, std::shared_ptr<PositionInRoadCoordinates>>(m,"PositionInRoadCoordinates","")
		.def_readwrite("pathS", &PositionInRoadCoordinates::pathS, "")
		.def_readwrite("t", &PositionInRoadCoordinates::t, "")
;
//
	py::class_<PositionOfCurrentEntity, std::shared_ptr<PositionOfCurrentEntity>>(m,"PositionOfCurrentEntity","")
		.def_readwrite("entityRef", &PositionOfCurrentEntity::entityRef, "")
;
//
	py::class_<Precipitation, std::shared_ptr<Precipitation>>(m,"Precipitation","")
		.def_readwrite("intensity", &Precipitation::intensity, "")
		.def_readwrite("precipitationType", &Precipitation::precipitationType, "")
;
//
	py::class_<Private, std::shared_ptr<Private>>(m,"Private","")
		.def_readwrite("entityRef", &Private::entityRef, "")
		.def_readwrite("PrivateAction", &Private::m_PrivateActions ) //PrivateAction
;
//
	py::class_<PrivateAction, std::shared_ptr<PrivateAction>>(m,"PrivateAction","")
		.def_readwrite("PrivateAction", &PrivateAction::m_PrivateAction ) //
;
//
	py::class_<Properties, std::shared_ptr<Properties>>(m,"Properties","")
		.def_readwrite("Property", &Properties::m_Propertys ) //Property
		.def_readwrite("File", &Properties::m_Files ) //File
;
//
	py::class_<Property, std::shared_ptr<Property>>(m,"Property","")
		.def_readwrite("name", &Property::name, "")
		.def_readwrite("value", &Property::value, "")
;
//
	py::class_<ReachPositionCondition, std::shared_ptr<ReachPositionCondition>>(m,"ReachPositionCondition","")
		.def_readwrite("tolerance", &ReachPositionCondition::tolerance, "")
		.def_readwrite("Position", &ReachPositionCondition::m_Position ) //Position
;
//
	py::class_<RelativeDistanceCondition, std::shared_ptr<RelativeDistanceCondition>>(m,"RelativeDistanceCondition","")
		.def_readwrite("entityRef", &RelativeDistanceCondition::entityRef, "")
		.def_readwrite("freespace", &RelativeDistanceCondition::freespace, "")
		.def_readwrite("relativeDistanceType", &RelativeDistanceCondition::relativeDistanceType, "")
		.def_readwrite("rule", &RelativeDistanceCondition::rule, "")
		.def_readwrite("value", &RelativeDistanceCondition::value, "")
;
//
	py::class_<RelativeLanePosition, std::shared_ptr<RelativeLanePosition>>(m,"RelativeLanePosition","")
		.def_readwrite("entityRef", &RelativeLanePosition::entityRef, "")
		.def_readwrite("dLane", &RelativeLanePosition::dLane, "")
		.def_readwrite("ds", &RelativeLanePosition::ds, "")
		.def_readwrite("offset", &RelativeLanePosition::offset, "")
		.def_readwrite("Orientation", &RelativeLanePosition::m_Orientation ) //Orientation
;
//
	py::class_<RelativeObjectPosition, std::shared_ptr<RelativeObjectPosition>>(m,"RelativeObjectPosition","")
		.def_readwrite("entityRef", &RelativeObjectPosition::entityRef, "")
		.def_readwrite("dx", &RelativeObjectPosition::dx, "")
		.def_readwrite("dy", &RelativeObjectPosition::dy, "")
		.def_readwrite("dz", &RelativeObjectPosition::dz, "")
		.def_readwrite("Orientation", &RelativeObjectPosition::m_Orientation ) //Orientation
;
//
	py::class_<RelativeRoadPosition, std::shared_ptr<RelativeRoadPosition>>(m,"RelativeRoadPosition","")
		.def_readwrite("entityRef", &RelativeRoadPosition::entityRef, "")
		.def_readwrite("ds", &RelativeRoadPosition::ds, "")
		.def_readwrite("dt", &RelativeRoadPosition::dt, "")
		.def_readwrite("Orientation", &RelativeRoadPosition::m_Orientation ) //Orientation
;
//
	py::class_<RelativeSpeedCondition, std::shared_ptr<RelativeSpeedCondition>>(m,"RelativeSpeedCondition","")
		.def_readwrite("entityRef", &RelativeSpeedCondition::entityRef, "")
		.def_readwrite("rule", &RelativeSpeedCondition::rule, "")
		.def_readwrite("value", &RelativeSpeedCondition::value, "")
;
//
	py::class_<RelativeSpeedToMaster, std::shared_ptr<RelativeSpeedToMaster>>(m,"RelativeSpeedToMaster","")
		.def_readwrite("speedTargetValueType", &RelativeSpeedToMaster::speedTargetValueType, "")
		.def_readwrite("value", &RelativeSpeedToMaster::value, "")
;
//
	py::class_<RelativeTargetLane, std::shared_ptr<RelativeTargetLane>>(m,"RelativeTargetLane","")
		.def_readwrite("entityRef", &RelativeTargetLane::entityRef, "")
		.def_readwrite("value", &RelativeTargetLane::value, "")
;
//
	py::class_<RelativeTargetLaneOffset, std::shared_ptr<RelativeTargetLaneOffset>>(m,"RelativeTargetLaneOffset","")
		.def_readwrite("entityRef", &RelativeTargetLaneOffset::entityRef, "")
		.def_readwrite("value", &RelativeTargetLaneOffset::value, "")
;
//
	py::class_<RelativeTargetSpeed, std::shared_ptr<RelativeTargetSpeed>>(m,"RelativeTargetSpeed","")
		.def_readwrite("entityRef", &RelativeTargetSpeed::entityRef, "")
		.def_readwrite("continuous", &RelativeTargetSpeed::continuous, "")
		.def_readwrite("speedTargetValueType", &RelativeTargetSpeed::speedTargetValueType, "")
		.def_readwrite("value", &RelativeTargetSpeed::value, "")
;
//
	py::class_<RelativeWorldPosition, std::shared_ptr<RelativeWorldPosition>>(m,"RelativeWorldPosition","")
		.def_readwrite("entityRef", &RelativeWorldPosition::entityRef, "")
		.def_readwrite("dx", &RelativeWorldPosition::dx, "")
		.def_readwrite("dy", &RelativeWorldPosition::dy, "")
		.def_readwrite("dz", &RelativeWorldPosition::dz, "")
		.def_readwrite("Orientation", &RelativeWorldPosition::m_Orientation ) //Orientation
;
//
	py::class_<RoadCondition, std::shared_ptr<RoadCondition>>(m,"RoadCondition","")
		.def_readwrite("frictionScaleFactor", &RoadCondition::frictionScaleFactor, "")
		.def_readwrite("Properties", &RoadCondition::m_Properties ) //Properties
;
//
	py::class_<RoadNetwork, std::shared_ptr<RoadNetwork>>(m,"RoadNetwork","")
		.def_readwrite("LogicFile", &RoadNetwork::m_LogicFile ) //File
		.def_readwrite("SceneGraphFile", &RoadNetwork::m_SceneGraphFile ) //File
		.def_readwrite("TrafficSignals", &RoadNetwork::m_TrafficSignals ) //TrafficSignals
;
//
	py::class_<RoadPosition, std::shared_ptr<RoadPosition>>(m,"RoadPosition","")
		.def_readwrite("roadId", &RoadPosition::roadId, "")
		.def_readwrite("s", &RoadPosition::s, "")
		.def_readwrite("t", &RoadPosition::t, "")
		.def_readwrite("Orientation", &RoadPosition::m_Orientation ) //Orientation
;
//
	py::class_<Route, std::shared_ptr<Route>>(m,"Route","")
		.def_readwrite("closed", &Route::closed, "")
		.def_readwrite("name", &Route::name, "")
		.def_readwrite("ParameterDeclarations", &Route::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("Waypoint", &Route::m_Waypoints ) //Waypoint
;
//
	py::class_<RouteCatalogLocation, std::shared_ptr<RouteCatalogLocation>>(m,"RouteCatalogLocation","")
		.def_readwrite("Directory", &RouteCatalogLocation::m_Directory ) //Directory
;
//
	py::class_<RoutePosition, std::shared_ptr<RoutePosition>>(m,"RoutePosition","")
		.def_readwrite("RouteRef", &RoutePosition::m_RouteRef ) //RouteRef
		.def_readwrite("Orientation", &RoutePosition::m_Orientation ) //Orientation
		.def_readwrite("InRoutePosition", &RoutePosition::m_InRoutePosition ) //InRoutePosition
;
//
	py::class_<RouteRef, std::shared_ptr<RouteRef>>(m,"RouteRef","")
		.def_readwrite("RouteRef", &RouteRef::m_RouteRef ) //
;
//
	py::class_<RoutingAction, std::shared_ptr<RoutingAction>>(m,"RoutingAction","")
		.def_readwrite("RoutingAction", &RoutingAction::m_RoutingAction ) //
;
//
	py::class_<ScenarioObject, std::shared_ptr<ScenarioObject>>(m,"ScenarioObject","")
		.def_readwrite("name", &ScenarioObject::name, "")
		.def_readwrite("ObjectController", &ScenarioObject::m_ObjectController ) //ObjectController
	.def_readwrite("EntityObject", &ScenarioObject::m_EntityObject ) // group read
;
//
	py::class_<SelectedEntities, std::shared_ptr<SelectedEntities>>(m,"SelectedEntities","")
		.def_readwrite("SelectedEntities", &SelectedEntities::m_SelectedEntities ) //
;
//
	py::class_<Shape, std::shared_ptr<Shape>>(m,"Shape","")
		.def_readwrite("Shape", &Shape::m_Shape ) //
;
//
	py::class_<SimulationTimeCondition, std::shared_ptr<SimulationTimeCondition>>(m,"SimulationTimeCondition","")
		.def_readwrite("rule", &SimulationTimeCondition::rule, "")
		.def_readwrite("value", &SimulationTimeCondition::value, "")
;
//
	py::class_<SpeedAction, std::shared_ptr<SpeedAction>>(m,"SpeedAction","")
		.def_readwrite("SpeedActionDynamics", &SpeedAction::m_SpeedActionDynamics ) //TransitionDynamics
		.def_readwrite("SpeedActionTarget", &SpeedAction::m_SpeedActionTarget ) //SpeedActionTarget
;
//
	py::class_<SpeedActionTarget, std::shared_ptr<SpeedActionTarget>>(m,"SpeedActionTarget","")
		.def_readwrite("SpeedActionTarget", &SpeedActionTarget::m_SpeedActionTarget ) //
;
//
	py::class_<SpeedCondition, std::shared_ptr<SpeedCondition>>(m,"SpeedCondition","")
		.def_readwrite("rule", &SpeedCondition::rule, "")
		.def_readwrite("value", &SpeedCondition::value, "")
;
//
	py::class_<StandStillCondition, std::shared_ptr<StandStillCondition>>(m,"StandStillCondition","")
		.def_readwrite("duration", &StandStillCondition::duration, "")
;
//
	py::class_<Story, std::shared_ptr<Story>>(m,"Story","")
		.def_readwrite("name", &Story::name, "")
		.def_readwrite("ParameterDeclarations", &Story::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("Act", &Story::m_Acts ) //Act
;
//
	py::class_<Storyboard, std::shared_ptr<Storyboard>>(m,"Storyboard","")
		.def_readwrite("Init", &Storyboard::m_Init ) //Init
		.def_readwrite("Story", &Storyboard::m_Storys ) //Story
		.def_readwrite("StopTrigger", &Storyboard::m_StopTrigger ) //Trigger
;
//
	py::class_<StoryboardElementStateCondition, std::shared_ptr<StoryboardElementStateCondition>>(m,"StoryboardElementStateCondition","")
		.def_readwrite("storyboardElementRef", &StoryboardElementStateCondition::storyboardElementRef, "")
		.def_readwrite("state", &StoryboardElementStateCondition::state, "")
		.def_readwrite("storyboardElementType", &StoryboardElementStateCondition::storyboardElementType, "")
;
//
	py::class_<Sun, std::shared_ptr<Sun>>(m,"Sun","")
		.def_readwrite("azimuth", &Sun::azimuth, "")
		.def_readwrite("elevation", &Sun::elevation, "")
		.def_readwrite("intensity", &Sun::intensity, "")
;
//
	py::class_<SynchronizeAction, std::shared_ptr<SynchronizeAction>>(m,"SynchronizeAction","")
		.def_readwrite("masterEntityRef", &SynchronizeAction::masterEntityRef, "")
		.def_readwrite("TargetPositionMaster", &SynchronizeAction::m_TargetPositionMaster ) //Position
		.def_readwrite("TargetPosition", &SynchronizeAction::m_TargetPosition ) //Position
		.def_readwrite("FinalSpeed", &SynchronizeAction::m_FinalSpeed ) //FinalSpeed
;
//
	py::class_<TeleportAction, std::shared_ptr<TeleportAction>>(m,"TeleportAction","")
		.def_readwrite("Position", &TeleportAction::m_Position ) //Position
;
//
	py::class_<TimeHeadwayCondition, std::shared_ptr<TimeHeadwayCondition>>(m,"TimeHeadwayCondition","")
		.def_readwrite("entityRef", &TimeHeadwayCondition::entityRef, "")
		.def_readwrite("alongRoute", &TimeHeadwayCondition::alongRoute, "")
		.def_readwrite("freespace", &TimeHeadwayCondition::freespace, "")
		.def_readwrite("rule", &TimeHeadwayCondition::rule, "")
		.def_readwrite("value", &TimeHeadwayCondition::value, "")
;
//
	py::class_<TimeOfDay, std::shared_ptr<TimeOfDay>>(m,"TimeOfDay","")
		.def_readwrite("animation", &TimeOfDay::animation, "")
		.def_readwrite("dateTime", &TimeOfDay::dateTime, "")
;
//
	py::class_<TimeOfDayCondition, std::shared_ptr<TimeOfDayCondition>>(m,"TimeOfDayCondition","")
		.def_readwrite("dateTime", &TimeOfDayCondition::dateTime, "")
		.def_readwrite("rule", &TimeOfDayCondition::rule, "")
;
//
	py::class_<TimeReference, std::shared_ptr<TimeReference>>(m,"TimeReference","")
		.def_readwrite("TimeReference", &TimeReference::m_TimeReference ) //
;
//
	py::class_<TimeToCollisionCondition, std::shared_ptr<TimeToCollisionCondition>>(m,"TimeToCollisionCondition","")
		.def_readwrite("alongRoute", &TimeToCollisionCondition::alongRoute, "")
		.def_readwrite("freespace", &TimeToCollisionCondition::freespace, "")
		.def_readwrite("rule", &TimeToCollisionCondition::rule, "")
		.def_readwrite("value", &TimeToCollisionCondition::value, "")
		.def_readwrite("TimeToCollisionConditionTarget", &TimeToCollisionCondition::m_TimeToCollisionConditionTarget ) //TimeToCollisionConditionTarget
;
//
	py::class_<TimeToCollisionConditionTarget, std::shared_ptr<TimeToCollisionConditionTarget>>(m,"TimeToCollisionConditionTarget","")
		.def_readwrite("TimeToCollisionConditionTarget", &TimeToCollisionConditionTarget::m_TimeToCollisionConditionTarget ) //
;
//
	py::class_<Timing, std::shared_ptr<Timing>>(m,"Timing","")
		.def_readwrite("domainAbsoluteRelative", &Timing::domainAbsoluteRelative, "")
		.def_readwrite("offset", &Timing::offset, "")
		.def_readwrite("scale", &Timing::scale, "")
;
//
	py::class_<TrafficAction, std::shared_ptr<TrafficAction>>(m,"TrafficAction","")
		.def_readwrite("TrafficAction", &TrafficAction::m_TrafficAction ) //
;
//
	py::class_<TrafficDefinition, std::shared_ptr<TrafficDefinition>>(m,"TrafficDefinition","")
		.def_readwrite("name", &TrafficDefinition::name, "")
		.def_readwrite("VehicleCategoryDistribution", &TrafficDefinition::m_VehicleCategoryDistribution ) //VehicleCategoryDistribution
		.def_readwrite("ControllerDistribution", &TrafficDefinition::m_ControllerDistribution ) //ControllerDistribution
;
//
	py::class_<TrafficSignalAction, std::shared_ptr<TrafficSignalAction>>(m,"TrafficSignalAction","")
		.def_readwrite("TrafficSignalAction", &TrafficSignalAction::m_TrafficSignalAction ) //
;
//
	py::class_<TrafficSignalCondition, std::shared_ptr<TrafficSignalCondition>>(m,"TrafficSignalCondition","")
		.def_readwrite("name", &TrafficSignalCondition::name, "")
		.def_readwrite("state", &TrafficSignalCondition::state, "")
;
//
	py::class_<TrafficSignalController, std::shared_ptr<TrafficSignalController>>(m,"TrafficSignalController","")
		.def_readwrite("delay", &TrafficSignalController::delay, "")
		.def_readwrite("name", &TrafficSignalController::name, "")
		.def_readwrite("reference", &TrafficSignalController::reference, "")
		.def_readwrite("Phase", &TrafficSignalController::m_Phases ) //Phase
;
//
	py::class_<TrafficSignals, std::shared_ptr<TrafficSignals>>(m,"TrafficSignals","")
		.def_readwrite("TrafficSignalController", &TrafficSignals::m_TrafficSignalControllers ) //TrafficSignalController
;
//
	py::class_<TrafficSignalControllerAction, std::shared_ptr<TrafficSignalControllerAction>>(m,"TrafficSignalControllerAction","")
		.def_readwrite("trafficSignalControllerRef", &TrafficSignalControllerAction::trafficSignalControllerRef, "")
		.def_readwrite("phase", &TrafficSignalControllerAction::phase, "")
;
//
	py::class_<TrafficSignalControllerCondition, std::shared_ptr<TrafficSignalControllerCondition>>(m,"TrafficSignalControllerCondition","")
		.def_readwrite("trafficSignalControllerRef", &TrafficSignalControllerCondition::trafficSignalControllerRef, "")
		.def_readwrite("phase", &TrafficSignalControllerCondition::phase, "")
;
//
	py::class_<TrafficSignalState, std::shared_ptr<TrafficSignalState>>(m,"TrafficSignalState","")
		.def_readwrite("state", &TrafficSignalState::state, "")
		.def_readwrite("trafficSignalId", &TrafficSignalState::trafficSignalId, "")
;
//
	py::class_<TrafficSignalStateAction, std::shared_ptr<TrafficSignalStateAction>>(m,"TrafficSignalStateAction","")
		.def_readwrite("name", &TrafficSignalStateAction::name, "")
		.def_readwrite("state", &TrafficSignalStateAction::state, "")
;
//
	py::class_<TrafficSinkAction, std::shared_ptr<TrafficSinkAction>>(m,"TrafficSinkAction","")
		.def_readwrite("radius", &TrafficSinkAction::radius, "")
		.def_readwrite("rate", &TrafficSinkAction::rate, "")
		.def_readwrite("Position", &TrafficSinkAction::m_Position ) //Position
		.def_readwrite("TrafficDefinition", &TrafficSinkAction::m_TrafficDefinition ) //TrafficDefinition
;
//
	py::class_<TrafficSourceAction, std::shared_ptr<TrafficSourceAction>>(m,"TrafficSourceAction","")
		.def_readwrite("radius", &TrafficSourceAction::radius, "")
		.def_readwrite("rate", &TrafficSourceAction::rate, "")
		.def_readwrite("velocity", &TrafficSourceAction::velocity, "")
		.def_readwrite("Position", &TrafficSourceAction::m_Position ) //Position
		.def_readwrite("TrafficDefinition", &TrafficSourceAction::m_TrafficDefinition ) //TrafficDefinition
;
//
	py::class_<TrafficSwarmAction, std::shared_ptr<TrafficSwarmAction>>(m,"TrafficSwarmAction","")
		.def_readwrite("innerRadius", &TrafficSwarmAction::innerRadius, "")
		.def_readwrite("numberOfVehicles", &TrafficSwarmAction::numberOfVehicles, "")
		.def_readwrite("offset", &TrafficSwarmAction::offset, "")
		.def_readwrite("semiMajorAxis", &TrafficSwarmAction::semiMajorAxis, "")
		.def_readwrite("semiMinorAxis", &TrafficSwarmAction::semiMinorAxis, "")
		.def_readwrite("velocity", &TrafficSwarmAction::velocity, "")
		.def_readwrite("CentralObject", &TrafficSwarmAction::m_CentralObject ) //CentralSwarmObject
		.def_readwrite("TrafficDefinition", &TrafficSwarmAction::m_TrafficDefinition ) //TrafficDefinition
;
//
	py::class_<Trajectory, std::shared_ptr<Trajectory>>(m,"Trajectory","")
		.def_readwrite("closed", &Trajectory::closed, "")
		.def_readwrite("name", &Trajectory::name, "")
		.def_readwrite("ParameterDeclarations", &Trajectory::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("Shape", &Trajectory::m_Shape ) //Shape
;
//
	py::class_<TrajectoryCatalogLocation, std::shared_ptr<TrajectoryCatalogLocation>>(m,"TrajectoryCatalogLocation","")
		.def_readwrite("Directory", &TrajectoryCatalogLocation::m_Directory ) //Directory
;
//
	py::class_<TrajectoryFollowingMode, std::shared_ptr<TrajectoryFollowingMode>>(m,"TrajectoryFollowingMode","")
		.def_readwrite("followingMode", &TrajectoryFollowingMode::followingMode, "")
;
//
	py::class_<TransitionDynamics, std::shared_ptr<TransitionDynamics>>(m,"TransitionDynamics","")
		.def_readwrite("dynamicsDimension", &TransitionDynamics::dynamicsDimension, "")
		.def_readwrite("dynamicsShape", &TransitionDynamics::dynamicsShape, "")
		.def_readwrite("value", &TransitionDynamics::value, "")
;
//
	py::class_<TraveledDistanceCondition, std::shared_ptr<TraveledDistanceCondition>>(m,"TraveledDistanceCondition","")
		.def_readwrite("value", &TraveledDistanceCondition::value, "")
;
//
	py::class_<Trigger, std::shared_ptr<Trigger>>(m,"Trigger","")
		.def_readwrite("ConditionGroup", &Trigger::m_ConditionGroups ) //ConditionGroup
;
//
	py::class_<TriggeringEntities, std::shared_ptr<TriggeringEntities>>(m,"TriggeringEntities","")
		.def_readwrite("triggeringEntitiesRule", &TriggeringEntities::triggeringEntitiesRule, "")
		.def_readwrite("EntityRef", &TriggeringEntities::m_EntityRefs ) //EntityRef
;
//
	py::class_<UserDefinedAction, std::shared_ptr<UserDefinedAction>>(m,"UserDefinedAction","")
		.def_readwrite("CustomCommandAction", &UserDefinedAction::m_CustomCommandAction ) //CustomCommandAction
;
//
	py::class_<UserDefinedValueCondition, std::shared_ptr<UserDefinedValueCondition>>(m,"UserDefinedValueCondition","")
		.def_readwrite("name", &UserDefinedValueCondition::name, "")
		.def_readwrite("rule", &UserDefinedValueCondition::rule, "")
		.def_readwrite("value", &UserDefinedValueCondition::value, "")
;
//
	py::class_<Vehicle, std::shared_ptr<Vehicle>>(m,"Vehicle","")
		.def_readwrite("name", &Vehicle::name, "")
		.def_readwrite("vehicleCategory", &Vehicle::vehicleCategory, "")
		.def_readwrite("ParameterDeclarations", &Vehicle::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("BoundingBox", &Vehicle::m_BoundingBox ) //BoundingBox
		.def_readwrite("Performance", &Vehicle::m_Performance ) //Performance
		.def_readwrite("Axles", &Vehicle::m_Axles ) //Axles
		.def_readwrite("Properties", &Vehicle::m_Properties ) //Properties
;
//
	py::class_<VehicleCatalogLocation, std::shared_ptr<VehicleCatalogLocation>>(m,"VehicleCatalogLocation","")
		.def_readwrite("Directory", &VehicleCatalogLocation::m_Directory ) //Directory
;
//
	py::class_<VehicleCategoryDistribution, std::shared_ptr<VehicleCategoryDistribution>>(m,"VehicleCategoryDistribution","")
		.def_readwrite("VehicleCategoryDistributionEntry", &VehicleCategoryDistribution::m_VehicleCategoryDistributionEntrys ) //VehicleCategoryDistributionEntry
;
//
	py::class_<VehicleCategoryDistributionEntry, std::shared_ptr<VehicleCategoryDistributionEntry>>(m,"VehicleCategoryDistributionEntry","")
		.def_readwrite("category", &VehicleCategoryDistributionEntry::category, "")
		.def_readwrite("weight", &VehicleCategoryDistributionEntry::weight, "")
;
//
	py::class_<Vertex, std::shared_ptr<Vertex>>(m,"Vertex","")
		.def_readwrite("time", &Vertex::time, "")
		.def_readwrite("Position", &Vertex::m_Position ) //Position
;
//
	py::class_<VisibilityAction, std::shared_ptr<VisibilityAction>>(m,"VisibilityAction","")
		.def_readwrite("graphics", &VisibilityAction::graphics, "")
		.def_readwrite("sensors", &VisibilityAction::sensors, "")
		.def_readwrite("traffic", &VisibilityAction::traffic, "")
;
//
	py::class_<Waypoint, std::shared_ptr<Waypoint>>(m,"Waypoint","")
		.def_readwrite("routeStrategy", &Waypoint::routeStrategy, "")
		.def_readwrite("Position", &Waypoint::m_Position ) //Position
;
//
	py::class_<Weather, std::shared_ptr<Weather>>(m,"Weather","")
		.def_readwrite("cloudState", &Weather::cloudState, "")
		.def_readwrite("Sun", &Weather::m_Sun ) //Sun
		.def_readwrite("Fog", &Weather::m_Fog ) //Fog
		.def_readwrite("Precipitation", &Weather::m_Precipitation ) //Precipitation
;
//
	py::class_<WorldPosition, std::shared_ptr<WorldPosition>>(m,"WorldPosition","")
		.def_readwrite("h", &WorldPosition::h, "")
		.def_readwrite("p", &WorldPosition::p, "")
		.def_readwrite("r", &WorldPosition::r, "")
		.def_readwrite("x", &WorldPosition::x, "")
		.def_readwrite("y", &WorldPosition::y, "")
		.def_readwrite("z", &WorldPosition::z, "")
;
	// xs:group -> aliased to group definition
	py::class_<CatalogDefinition, std::shared_ptr<CatalogDefinition>>(m,"CatalogDefinition","Group CatalogDefinition")
		.def_readwrite("Catalog", &CatalogDefinition::m_Catalog ) //Catalog
	;
	// xs:group -> aliased to group definition
	py::class_<EntityObject, std::shared_ptr<EntityObject>>(m,"EntityObject","Group EntityObject")
		.def_readwrite("CatalogReference", &EntityObject::m_CatalogReference ) //CatalogReference
		.def_readwrite("Vehicle", &EntityObject::m_Vehicle ) //Vehicle
		.def_readwrite("Pedestrian", &EntityObject::m_Pedestrian ) //Pedestrian
		.def_readwrite("MiscObject", &EntityObject::m_MiscObject ) //MiscObject
	;
	// xs:group -> aliased to group definition
	py::class_<OpenScenarioCategory, std::shared_ptr<OpenScenarioCategory>>(m,"OpenScenarioCategory","Group OpenScenarioCategory")
	.def_readwrite("ScenarioDefinition", &OpenScenarioCategory::m_ScenarioDefinition ) // group read
	.def_readwrite("CatalogDefinition", &OpenScenarioCategory::m_CatalogDefinition ) // group read
	;
	// xs:group -> aliased to group definition
	py::class_<ScenarioDefinition, std::shared_ptr<ScenarioDefinition>>(m,"ScenarioDefinition","Group ScenarioDefinition")
		.def_readwrite("ParameterDeclarations", &ScenarioDefinition::m_ParameterDeclarations ) //ParameterDeclarations
		.def_readwrite("CatalogLocations", &ScenarioDefinition::m_CatalogLocations ) //CatalogLocations
		.def_readwrite("RoadNetwork", &ScenarioDefinition::m_RoadNetwork ) //RoadNetwork
		.def_readwrite("Entities", &ScenarioDefinition::m_Entities ) //Entities
		.def_readwrite("Storyboard", &ScenarioDefinition::m_Storyboard ) //Storyboard
	;
//
	py::enum_<e_CloudState>(m,"e_CloudState", py::arithmetic(),"")
		.value(enum2str<e_CloudState>(e_CloudState::CLOUDY).c_str(),e_CloudState::CLOUDY,"")            //cloudy
		.value(enum2str<e_CloudState>(e_CloudState::FREE).c_str(),e_CloudState::FREE,"")            //free
		.value(enum2str<e_CloudState>(e_CloudState::OVERCAST).c_str(),e_CloudState::OVERCAST,"")            //overcast
		.value(enum2str<e_CloudState>(e_CloudState::RAINY).c_str(),e_CloudState::RAINY,"")            //rainy
		.value(enum2str<e_CloudState>(e_CloudState::SKYOFF).c_str(),e_CloudState::SKYOFF,"");            //skyOff
	;
	py::enum_<e_ConditionEdge>(m,"e_ConditionEdge", py::arithmetic(),"")
		.value(enum2str<e_ConditionEdge>(e_ConditionEdge::FALLING).c_str(),e_ConditionEdge::FALLING,"")            //falling
		.value(enum2str<e_ConditionEdge>(e_ConditionEdge::NONE).c_str(),e_ConditionEdge::NONE,"")            //none
		.value(enum2str<e_ConditionEdge>(e_ConditionEdge::RISING).c_str(),e_ConditionEdge::RISING,"")            //rising
		.value(enum2str<e_ConditionEdge>(e_ConditionEdge::RISINGORFALLING).c_str(),e_ConditionEdge::RISINGORFALLING,"");            //risingOrFalling
	;
	py::enum_<e_DynamicsDimension>(m,"e_DynamicsDimension", py::arithmetic(),"")
		.value(enum2str<e_DynamicsDimension>(e_DynamicsDimension::DISTANCE).c_str(),e_DynamicsDimension::DISTANCE,"")            //distance
		.value(enum2str<e_DynamicsDimension>(e_DynamicsDimension::RATE).c_str(),e_DynamicsDimension::RATE,"")            //rate
		.value(enum2str<e_DynamicsDimension>(e_DynamicsDimension::TIME).c_str(),e_DynamicsDimension::TIME,"");            //time
	;
	py::enum_<e_DynamicsShape>(m,"e_DynamicsShape", py::arithmetic(),"")
		.value(enum2str<e_DynamicsShape>(e_DynamicsShape::CUBIC).c_str(),e_DynamicsShape::CUBIC,"")            //cubic
		.value(enum2str<e_DynamicsShape>(e_DynamicsShape::LINEAR).c_str(),e_DynamicsShape::LINEAR,"")            //linear
		.value(enum2str<e_DynamicsShape>(e_DynamicsShape::SINUSOIDAL).c_str(),e_DynamicsShape::SINUSOIDAL,"")            //sinusoidal
		.value(enum2str<e_DynamicsShape>(e_DynamicsShape::STEP).c_str(),e_DynamicsShape::STEP,"");            //step
	;
	py::enum_<e_FollowingMode>(m,"e_FollowingMode", py::arithmetic(),"")
		.value(enum2str<e_FollowingMode>(e_FollowingMode::FOLLOW).c_str(),e_FollowingMode::FOLLOW,"")            //follow
		.value(enum2str<e_FollowingMode>(e_FollowingMode::POSITION).c_str(),e_FollowingMode::POSITION,"");            //position
	;
	py::enum_<e_MiscObjectCategory>(m,"e_MiscObjectCategory", py::arithmetic(),"")
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::BARRIER).c_str(),e_MiscObjectCategory::BARRIER,"")            //barrier
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::BUILDING).c_str(),e_MiscObjectCategory::BUILDING,"")            //building
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::CROSSWALK).c_str(),e_MiscObjectCategory::CROSSWALK,"")            //crosswalk
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::GANTRY).c_str(),e_MiscObjectCategory::GANTRY,"")            //gantry
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::NONE).c_str(),e_MiscObjectCategory::NONE,"")            //none
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::OBSTACLE).c_str(),e_MiscObjectCategory::OBSTACLE,"")            //obstacle
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::PARKINGSPACE).c_str(),e_MiscObjectCategory::PARKINGSPACE,"")            //parkingSpace
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::PATCH).c_str(),e_MiscObjectCategory::PATCH,"")            //patch
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::POLE).c_str(),e_MiscObjectCategory::POLE,"")            //pole
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::RAILING).c_str(),e_MiscObjectCategory::RAILING,"")            //railing
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::ROADMARK).c_str(),e_MiscObjectCategory::ROADMARK,"")            //roadMark
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::SOUNDBARRIER).c_str(),e_MiscObjectCategory::SOUNDBARRIER,"")            //soundBarrier
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::STREETLAMP).c_str(),e_MiscObjectCategory::STREETLAMP,"")            //streetLamp
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::TRAFFICISLAND).c_str(),e_MiscObjectCategory::TRAFFICISLAND,"")            //trafficIsland
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::TREE).c_str(),e_MiscObjectCategory::TREE,"")            //tree
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::VEGETATION).c_str(),e_MiscObjectCategory::VEGETATION,"")            //vegetation
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::WIND).c_str(),e_MiscObjectCategory::WIND,"");            //wind
	;
	py::enum_<e_ObjectType>(m,"e_ObjectType", py::arithmetic(),"")
		.value(enum2str<e_ObjectType>(e_ObjectType::MISCELLANEOUS).c_str(),e_ObjectType::MISCELLANEOUS,"")            //miscellaneous
		.value(enum2str<e_ObjectType>(e_ObjectType::PEDESTRIAN).c_str(),e_ObjectType::PEDESTRIAN,"")            //pedestrian
		.value(enum2str<e_ObjectType>(e_ObjectType::VEHICLE).c_str(),e_ObjectType::VEHICLE,"");            //vehicle
	;
	py::enum_<e_ParameterType>(m,"e_ParameterType", py::arithmetic(),"")
		.value(enum2str<e_ParameterType>(e_ParameterType::BOOLEAN).c_str(),e_ParameterType::BOOLEAN,"")            //boolean
		.value(enum2str<e_ParameterType>(e_ParameterType::DATETIME).c_str(),e_ParameterType::DATETIME,"")            //dateTime
		.value(enum2str<e_ParameterType>(e_ParameterType::DOUBLE).c_str(),e_ParameterType::DOUBLE,"")            //double
		.value(enum2str<e_ParameterType>(e_ParameterType::INTEGER).c_str(),e_ParameterType::INTEGER,"")            //integer
		.value(enum2str<e_ParameterType>(e_ParameterType::STRING).c_str(),e_ParameterType::STRING,"")            //string
		.value(enum2str<e_ParameterType>(e_ParameterType::UNSIGNEDINT).c_str(),e_ParameterType::UNSIGNEDINT,"")            //unsignedInt
		.value(enum2str<e_ParameterType>(e_ParameterType::UNSIGNEDSHORT).c_str(),e_ParameterType::UNSIGNEDSHORT,"");            //unsignedShort
	;
	py::enum_<e_PedestrianCategory>(m,"e_PedestrianCategory", py::arithmetic(),"")
		.value(enum2str<e_PedestrianCategory>(e_PedestrianCategory::ANIMAL).c_str(),e_PedestrianCategory::ANIMAL,"")            //animal
		.value(enum2str<e_PedestrianCategory>(e_PedestrianCategory::PEDESTRIAN).c_str(),e_PedestrianCategory::PEDESTRIAN,"")            //pedestrian
		.value(enum2str<e_PedestrianCategory>(e_PedestrianCategory::WHEELCHAIR).c_str(),e_PedestrianCategory::WHEELCHAIR,"");            //wheelchair
	;
	py::enum_<e_PrecipitationType>(m,"e_PrecipitationType", py::arithmetic(),"")
		.value(enum2str<e_PrecipitationType>(e_PrecipitationType::DRY).c_str(),e_PrecipitationType::DRY,"")            //dry
		.value(enum2str<e_PrecipitationType>(e_PrecipitationType::RAIN).c_str(),e_PrecipitationType::RAIN,"")            //rain
		.value(enum2str<e_PrecipitationType>(e_PrecipitationType::SNOW).c_str(),e_PrecipitationType::SNOW,"");            //snow
	;
	py::enum_<e_Priority>(m,"e_Priority", py::arithmetic(),"")
		.value(enum2str<e_Priority>(e_Priority::OVERWRITE).c_str(),e_Priority::OVERWRITE,"")            //overwrite
		.value(enum2str<e_Priority>(e_Priority::PARALLEL).c_str(),e_Priority::PARALLEL,"")            //parallel
		.value(enum2str<e_Priority>(e_Priority::SKIP).c_str(),e_Priority::SKIP,"");            //skip
	;
	py::enum_<e_ReferenceContext>(m,"e_ReferenceContext", py::arithmetic(),"")
		.value(enum2str<e_ReferenceContext>(e_ReferenceContext::ABSOLUTE).c_str(),e_ReferenceContext::ABSOLUTE,"")            //absolute
		.value(enum2str<e_ReferenceContext>(e_ReferenceContext::RELATIVE).c_str(),e_ReferenceContext::RELATIVE,"");            //relative
	;
	py::enum_<e_RelativeDistanceType>(m,"e_RelativeDistanceType", py::arithmetic(),"")
		.value(enum2str<e_RelativeDistanceType>(e_RelativeDistanceType::CARTESIANDISTANCE).c_str(),e_RelativeDistanceType::CARTESIANDISTANCE,"")            //cartesianDistance
		.value(enum2str<e_RelativeDistanceType>(e_RelativeDistanceType::LATERAL).c_str(),e_RelativeDistanceType::LATERAL,"")            //lateral
		.value(enum2str<e_RelativeDistanceType>(e_RelativeDistanceType::LONGITUDINAL).c_str(),e_RelativeDistanceType::LONGITUDINAL,"");            //longitudinal
	;
	py::enum_<e_RouteStrategy>(m,"e_RouteStrategy", py::arithmetic(),"")
		.value(enum2str<e_RouteStrategy>(e_RouteStrategy::FASTEST).c_str(),e_RouteStrategy::FASTEST,"")            //fastest
		.value(enum2str<e_RouteStrategy>(e_RouteStrategy::LEASTINTERSECTIONS).c_str(),e_RouteStrategy::LEASTINTERSECTIONS,"")            //leastIntersections
		.value(enum2str<e_RouteStrategy>(e_RouteStrategy::RANDOM).c_str(),e_RouteStrategy::RANDOM,"")            //random
		.value(enum2str<e_RouteStrategy>(e_RouteStrategy::SHORTEST).c_str(),e_RouteStrategy::SHORTEST,"");            //shortest
	;
	py::enum_<e_Rule>(m,"e_Rule", py::arithmetic(),"")
		.value(enum2str<e_Rule>(e_Rule::EQUALTO).c_str(),e_Rule::EQUALTO,"")            //equalTo
		.value(enum2str<e_Rule>(e_Rule::GREATERTHAN).c_str(),e_Rule::GREATERTHAN,"")            //greaterThan
		.value(enum2str<e_Rule>(e_Rule::LESSTHAN).c_str(),e_Rule::LESSTHAN,"");            //lessThan
	;
	py::enum_<e_SpeedTargetValueType>(m,"e_SpeedTargetValueType", py::arithmetic(),"")
		.value(enum2str<e_SpeedTargetValueType>(e_SpeedTargetValueType::DELTA).c_str(),e_SpeedTargetValueType::DELTA,"")            //delta
		.value(enum2str<e_SpeedTargetValueType>(e_SpeedTargetValueType::FACTOR).c_str(),e_SpeedTargetValueType::FACTOR,"");            //factor
	;
	py::enum_<e_StoryboardElementState>(m,"e_StoryboardElementState", py::arithmetic(),"")
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::COMPLETESTATE).c_str(),e_StoryboardElementState::COMPLETESTATE,"")            //completeState
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::ENDTRANSITION).c_str(),e_StoryboardElementState::ENDTRANSITION,"")            //endTransition
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::RUNNINGSTATE).c_str(),e_StoryboardElementState::RUNNINGSTATE,"")            //runningState
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::SKIPTRANSITION).c_str(),e_StoryboardElementState::SKIPTRANSITION,"")            //skipTransition
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::STANDBYSTATE).c_str(),e_StoryboardElementState::STANDBYSTATE,"")            //standbyState
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::STARTTRANSITION).c_str(),e_StoryboardElementState::STARTTRANSITION,"")            //startTransition
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::STOPTRANSITION).c_str(),e_StoryboardElementState::STOPTRANSITION,"");            //stopTransition
	;
	py::enum_<e_StoryboardElementType>(m,"e_StoryboardElementType", py::arithmetic(),"")
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::ACT).c_str(),e_StoryboardElementType::ACT,"")            //act
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::ACTION).c_str(),e_StoryboardElementType::ACTION,"")            //action
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::EVENT).c_str(),e_StoryboardElementType::EVENT,"")            //event
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::MANEUVER).c_str(),e_StoryboardElementType::MANEUVER,"")            //maneuver
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::MANEUVERGROUP).c_str(),e_StoryboardElementType::MANEUVERGROUP,"")            //maneuverGroup
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::STORY).c_str(),e_StoryboardElementType::STORY,"");            //story
	;
	py::enum_<e_TriggeringEntitiesRule>(m,"e_TriggeringEntitiesRule", py::arithmetic(),"")
		.value(enum2str<e_TriggeringEntitiesRule>(e_TriggeringEntitiesRule::ALL).c_str(),e_TriggeringEntitiesRule::ALL,"")            //all
		.value(enum2str<e_TriggeringEntitiesRule>(e_TriggeringEntitiesRule::ANY).c_str(),e_TriggeringEntitiesRule::ANY,"");            //any
	;
	py::enum_<e_VehicleCategory>(m,"e_VehicleCategory", py::arithmetic(),"")
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::BICYCLE).c_str(),e_VehicleCategory::BICYCLE,"")            //bicycle
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::BUS).c_str(),e_VehicleCategory::BUS,"")            //bus
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::CAR).c_str(),e_VehicleCategory::CAR,"")            //car
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::MOTORBIKE).c_str(),e_VehicleCategory::MOTORBIKE,"")            //motorbike
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::SEMITRAILER).c_str(),e_VehicleCategory::SEMITRAILER,"")            //semitrailer
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::TRAILER).c_str(),e_VehicleCategory::TRAILER,"")            //trailer
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::TRAIN).c_str(),e_VehicleCategory::TRAIN,"")            //train
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::TRAM).c_str(),e_VehicleCategory::TRAM,"")            //tram
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::TRUCK).c_str(),e_VehicleCategory::TRUCK,"")            //truck
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::VAN).c_str(),e_VehicleCategory::VAN,"");            //van
	;
	py::class_<Boolean, std::shared_ptr<Boolean>>(m,"Boolean") // union definition
		.def_readwrite("m_parameter",&Boolean::m_parameter)
		.def_readwrite("m_boolean",&Boolean::m_boolean)
	;
	py::class_<DateTime, std::shared_ptr<DateTime>>(m,"DateTime") // union definition
		.def_readwrite("m_parameter",&DateTime::m_parameter)
		.def_readwrite("m_dateTime",&DateTime::m_dateTime)
	;
	py::class_<Double, std::shared_ptr<Double>>(m,"Double") // union definition
		.def_readwrite("m_parameter",&Double::m_parameter)
		.def_readwrite("m_double",&Double::m_double)
	;
	py::class_<Int, std::shared_ptr<Int>>(m,"Int") // union definition
		.def_readwrite("m_parameter",&Int::m_parameter)
		.def_readwrite("m_int",&Int::m_int)
	;
	py::class_<String, std::shared_ptr<String>>(m,"String") // union definition
		.def_readwrite("m_parameter",&String::m_parameter)
		.def_readwrite("m_string",&String::m_string)
	;
	py::class_<UnsignedInt, std::shared_ptr<UnsignedInt>>(m,"UnsignedInt") // union definition
		.def_readwrite("m_parameter",&UnsignedInt::m_parameter)
		.def_readwrite("m_unsignedInt",&UnsignedInt::m_unsignedInt)
	;
	py::class_<UnsignedShort, std::shared_ptr<UnsignedShort>>(m,"UnsignedShort") // union definition
		.def_readwrite("m_parameter",&UnsignedShort::m_parameter)
		.def_readwrite("m_unsignedShort",&UnsignedShort::m_unsignedShort)
	;
	py::class_<CloudState, std::shared_ptr<CloudState>>(m,"CloudState") // union definition
		.def_readwrite("m_parameter",&CloudState::m_parameter)
		.def_readwrite("cloudState",&CloudState::cloudState)
	;
	py::class_<ConditionEdge, std::shared_ptr<ConditionEdge>>(m,"ConditionEdge") // union definition
		.def_readwrite("m_parameter",&ConditionEdge::m_parameter)
		.def_readwrite("conditionEdge",&ConditionEdge::conditionEdge)
	;
	py::class_<DynamicsDimension, std::shared_ptr<DynamicsDimension>>(m,"DynamicsDimension") // union definition
		.def_readwrite("m_parameter",&DynamicsDimension::m_parameter)
		.def_readwrite("dynamicsDimension",&DynamicsDimension::dynamicsDimension)
	;
	py::class_<DynamicsShape, std::shared_ptr<DynamicsShape>>(m,"DynamicsShape") // union definition
		.def_readwrite("m_parameter",&DynamicsShape::m_parameter)
		.def_readwrite("dynamicsShape",&DynamicsShape::dynamicsShape)
	;
	py::class_<FollowingMode, std::shared_ptr<FollowingMode>>(m,"FollowingMode") // union definition
		.def_readwrite("m_parameter",&FollowingMode::m_parameter)
		.def_readwrite("followingMode",&FollowingMode::followingMode)
	;
	py::class_<MiscObjectCategory, std::shared_ptr<MiscObjectCategory>>(m,"MiscObjectCategory") // union definition
		.def_readwrite("m_parameter",&MiscObjectCategory::m_parameter)
		.def_readwrite("miscObjectCategory",&MiscObjectCategory::miscObjectCategory)
	;
	py::class_<ObjectType, std::shared_ptr<ObjectType>>(m,"ObjectType") // union definition
		.def_readwrite("m_parameter",&ObjectType::m_parameter)
		.def_readwrite("objectType",&ObjectType::objectType)
	;
	py::class_<ParameterType, std::shared_ptr<ParameterType>>(m,"ParameterType") // union definition
		.def_readwrite("m_parameter",&ParameterType::m_parameter)
		.def_readwrite("parameterType",&ParameterType::parameterType)
	;
	py::class_<PedestrianCategory, std::shared_ptr<PedestrianCategory>>(m,"PedestrianCategory") // union definition
		.def_readwrite("m_parameter",&PedestrianCategory::m_parameter)
		.def_readwrite("pedestrianCategory",&PedestrianCategory::pedestrianCategory)
	;
	py::class_<PrecipitationType, std::shared_ptr<PrecipitationType>>(m,"PrecipitationType") // union definition
		.def_readwrite("m_parameter",&PrecipitationType::m_parameter)
		.def_readwrite("precipitationType",&PrecipitationType::precipitationType)
	;
	py::class_<Priority, std::shared_ptr<Priority>>(m,"Priority") // union definition
		.def_readwrite("m_parameter",&Priority::m_parameter)
		.def_readwrite("priority",&Priority::priority)
	;
	py::class_<ReferenceContext, std::shared_ptr<ReferenceContext>>(m,"ReferenceContext") // union definition
		.def_readwrite("m_parameter",&ReferenceContext::m_parameter)
		.def_readwrite("referenceContext",&ReferenceContext::referenceContext)
	;
	py::class_<RelativeDistanceType, std::shared_ptr<RelativeDistanceType>>(m,"RelativeDistanceType") // union definition
		.def_readwrite("m_parameter",&RelativeDistanceType::m_parameter)
		.def_readwrite("relativeDistanceType",&RelativeDistanceType::relativeDistanceType)
	;
	py::class_<RouteStrategy, std::shared_ptr<RouteStrategy>>(m,"RouteStrategy") // union definition
		.def_readwrite("m_parameter",&RouteStrategy::m_parameter)
		.def_readwrite("routeStrategy",&RouteStrategy::routeStrategy)
	;
	py::class_<Rule, std::shared_ptr<Rule>>(m,"Rule") // union definition
		.def_readwrite("m_parameter",&Rule::m_parameter)
		.def_readwrite("rule",&Rule::rule)
	;
	py::class_<SpeedTargetValueType, std::shared_ptr<SpeedTargetValueType>>(m,"SpeedTargetValueType") // union definition
		.def_readwrite("m_parameter",&SpeedTargetValueType::m_parameter)
		.def_readwrite("speedTargetValueType",&SpeedTargetValueType::speedTargetValueType)
	;
	py::class_<StoryboardElementState, std::shared_ptr<StoryboardElementState>>(m,"StoryboardElementState") // union definition
		.def_readwrite("m_parameter",&StoryboardElementState::m_parameter)
		.def_readwrite("storyboardElementState",&StoryboardElementState::storyboardElementState)
	;
	py::class_<StoryboardElementType, std::shared_ptr<StoryboardElementType>>(m,"StoryboardElementType") // union definition
		.def_readwrite("m_parameter",&StoryboardElementType::m_parameter)
		.def_readwrite("storyboardElementType",&StoryboardElementType::storyboardElementType)
	;
	py::class_<TriggeringEntitiesRule, std::shared_ptr<TriggeringEntitiesRule>>(m,"TriggeringEntitiesRule") // union definition
		.def_readwrite("m_parameter",&TriggeringEntitiesRule::m_parameter)
		.def_readwrite("triggeringEntitiesRule",&TriggeringEntitiesRule::triggeringEntitiesRule)
	;
	py::class_<VehicleCategory, std::shared_ptr<VehicleCategory>>(m,"VehicleCategory") // union definition
		.def_readwrite("m_parameter",&VehicleCategory::m_parameter)
		.def_readwrite("vehicleCategory",&VehicleCategory::vehicleCategory)
	;
//
	py::class_<xosc,std::shared_ptr<xosc>>(m, "xosc", "Main Clazz for interfacing with OpenSCENARIO")
		.def(py::init<>())
		.def("load", &xosc::load, py::arg("filename"))
		.def("parse", &xosc::parse)
		.def_readwrite("OpenSCENARIO", &xosc::m_OpenSCENARIO);
}


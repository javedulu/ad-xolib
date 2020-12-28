//
//  OpenSCENARIO_js.cxx
//  xsd2cxx- for OpenDrive CXX classes
//
//  Created by Javed Shaik on Sun Dec 27 22:22:52 2020
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : e2c6e6f7-538a-4a19-8f6d-ddf00d885420 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
//
// emscripten (embind)
//
#include <emscripten/bind.h>
//
#include "xosc.h"

using namespace emscripten;
EMSCRIPTEN_BINDINGS(jsxosc)
{
	class_<Action_U>("Action_U")
		.smart_ptr_constructor("Action_U",&std::make_shared<Action_U>)
		.property("GlobalAction", &Action_U::m_GlobalAction ) //GlobalAction
		.property("UserDefinedAction", &Action_U::m_UserDefinedAction ) //UserDefinedAction
		.property("PrivateAction", &Action_U::m_PrivateAction ) //PrivateAction
;
	class_<AssignControllerAction_U>("AssignControllerAction_U")
		.smart_ptr_constructor("AssignControllerAction_U",&std::make_shared<AssignControllerAction_U>)
		.property("Controller", &AssignControllerAction_U::m_Controller ) //Controller
		.property("CatalogReference", &AssignControllerAction_U::m_CatalogReference ) //CatalogReference
;
	class_<AssignRouteAction_U>("AssignRouteAction_U")
		.smart_ptr_constructor("AssignRouteAction_U",&std::make_shared<AssignRouteAction_U>)
		.property("Route", &AssignRouteAction_U::m_Route ) //Route
		.property("CatalogReference", &AssignRouteAction_U::m_CatalogReference ) //CatalogReference
;
	class_<ByValueCondition_U>("ByValueCondition_U")
		.smart_ptr_constructor("ByValueCondition_U",&std::make_shared<ByValueCondition_U>)
		.property("ParameterCondition", &ByValueCondition_U::m_ParameterCondition ) //ParameterCondition
		.property("TimeOfDayCondition", &ByValueCondition_U::m_TimeOfDayCondition ) //TimeOfDayCondition
		.property("SimulationTimeCondition", &ByValueCondition_U::m_SimulationTimeCondition ) //SimulationTimeCondition
		.property("StoryboardElementStateCondition", &ByValueCondition_U::m_StoryboardElementStateCondition ) //StoryboardElementStateCondition
		.property("UserDefinedValueCondition", &ByValueCondition_U::m_UserDefinedValueCondition ) //UserDefinedValueCondition
		.property("TrafficSignalCondition", &ByValueCondition_U::m_TrafficSignalCondition ) //TrafficSignalCondition
		.property("TrafficSignalControllerCondition", &ByValueCondition_U::m_TrafficSignalControllerCondition ) //TrafficSignalControllerCondition
;
	class_<CollisionCondition_U>("CollisionCondition_U")
		.smart_ptr_constructor("CollisionCondition_U",&std::make_shared<CollisionCondition_U>)
		.property("EntityRef", &CollisionCondition_U::m_EntityRef ) //EntityRef
		.property("ByType", &CollisionCondition_U::m_ByType ) //ByObjectType
;
	class_<Condition_U>("Condition_U")
		.smart_ptr_constructor("Condition_U",&std::make_shared<Condition_U>)
		.property("ByEntityCondition", &Condition_U::m_ByEntityCondition ) //ByEntityCondition
		.property("ByValueCondition", &Condition_U::m_ByValueCondition ) //ByValueCondition
;
	class_<ControllerDistributionEntry_U>("ControllerDistributionEntry_U")
		.smart_ptr_constructor("ControllerDistributionEntry_U",&std::make_shared<ControllerDistributionEntry_U>)
		.property("Controller", &ControllerDistributionEntry_U::m_Controller ) //Controller
		.property("CatalogReference", &ControllerDistributionEntry_U::m_CatalogReference ) //CatalogReference
;
	class_<EntityAction_U>("EntityAction_U")
		.smart_ptr_constructor("EntityAction_U",&std::make_shared<EntityAction_U>)
		.property("AddEntityAction", &EntityAction_U::m_AddEntityAction ) //AddEntityAction
		.property("DeleteEntityAction", &EntityAction_U::m_DeleteEntityAction ) //DeleteEntityAction
;
	class_<EntityCondition_U>("EntityCondition_U")
		.smart_ptr_constructor("EntityCondition_U",&std::make_shared<EntityCondition_U>)
		.property("EndOfRoadCondition", &EntityCondition_U::m_EndOfRoadCondition ) //EndOfRoadCondition
		.property("CollisionCondition", &EntityCondition_U::m_CollisionCondition ) //CollisionCondition
		.property("OffroadCondition", &EntityCondition_U::m_OffroadCondition ) //OffroadCondition
		.property("TimeHeadwayCondition", &EntityCondition_U::m_TimeHeadwayCondition ) //TimeHeadwayCondition
		.property("TimeToCollisionCondition", &EntityCondition_U::m_TimeToCollisionCondition ) //TimeToCollisionCondition
		.property("AccelerationCondition", &EntityCondition_U::m_AccelerationCondition ) //AccelerationCondition
		.property("StandStillCondition", &EntityCondition_U::m_StandStillCondition ) //StandStillCondition
		.property("SpeedCondition", &EntityCondition_U::m_SpeedCondition ) //SpeedCondition
		.property("RelativeSpeedCondition", &EntityCondition_U::m_RelativeSpeedCondition ) //RelativeSpeedCondition
		.property("TraveledDistanceCondition", &EntityCondition_U::m_TraveledDistanceCondition ) //TraveledDistanceCondition
		.property("ReachPositionCondition", &EntityCondition_U::m_ReachPositionCondition ) //ReachPositionCondition
		.property("DistanceCondition", &EntityCondition_U::m_DistanceCondition ) //DistanceCondition
		.property("RelativeDistanceCondition", &EntityCondition_U::m_RelativeDistanceCondition ) //RelativeDistanceCondition
;
	class_<EnvironmentAction_U>("EnvironmentAction_U")
		.smart_ptr_constructor("EnvironmentAction_U",&std::make_shared<EnvironmentAction_U>)
		.property("Environment", &EnvironmentAction_U::m_Environment ) //Environment
		.property("CatalogReference", &EnvironmentAction_U::m_CatalogReference ) //CatalogReference
;
	class_<FinalSpeed_U>("FinalSpeed_U")
		.smart_ptr_constructor("FinalSpeed_U",&std::make_shared<FinalSpeed_U>)
		.property("AbsoluteSpeed", &FinalSpeed_U::m_AbsoluteSpeed ) //AbsoluteSpeed
		.property("RelativeSpeedToMaster", &FinalSpeed_U::m_RelativeSpeedToMaster ) //RelativeSpeedToMaster
;
	class_<GlobalAction_U>("GlobalAction_U")
		.smart_ptr_constructor("GlobalAction_U",&std::make_shared<GlobalAction_U>)
		.property("EnvironmentAction", &GlobalAction_U::m_EnvironmentAction ) //EnvironmentAction
		.property("EntityAction", &GlobalAction_U::m_EntityAction ) //EntityAction
		.property("ParameterAction", &GlobalAction_U::m_ParameterAction ) //ParameterAction
		.property("InfrastructureAction", &GlobalAction_U::m_InfrastructureAction ) //InfrastructureAction
		.property("TrafficAction", &GlobalAction_U::m_TrafficAction ) //TrafficAction
;
	class_<InRoutePosition_U>("InRoutePosition_U")
		.smart_ptr_constructor("InRoutePosition_U",&std::make_shared<InRoutePosition_U>)
		.property("FromCurrentEntity", &InRoutePosition_U::m_FromCurrentEntity ) //PositionOfCurrentEntity
		.property("FromRoadCoordinates", &InRoutePosition_U::m_FromRoadCoordinates ) //PositionInRoadCoordinates
		.property("FromLaneCoordinates", &InRoutePosition_U::m_FromLaneCoordinates ) //PositionInLaneCoordinates
;
	class_<LaneChangeTarget_U>("LaneChangeTarget_U")
		.smart_ptr_constructor("LaneChangeTarget_U",&std::make_shared<LaneChangeTarget_U>)
		.property("RelativeTargetLane", &LaneChangeTarget_U::m_RelativeTargetLane ) //RelativeTargetLane
		.property("AbsoluteTargetLane", &LaneChangeTarget_U::m_AbsoluteTargetLane ) //AbsoluteTargetLane
;
	class_<LaneOffsetTarget_U>("LaneOffsetTarget_U")
		.smart_ptr_constructor("LaneOffsetTarget_U",&std::make_shared<LaneOffsetTarget_U>)
		.property("RelativeTargetLaneOffset", &LaneOffsetTarget_U::m_RelativeTargetLaneOffset ) //RelativeTargetLaneOffset
		.property("AbsoluteTargetLaneOffset", &LaneOffsetTarget_U::m_AbsoluteTargetLaneOffset ) //AbsoluteTargetLaneOffset
;
	class_<LateralAction_U>("LateralAction_U")
		.smart_ptr_constructor("LateralAction_U",&std::make_shared<LateralAction_U>)
		.property("LaneChangeAction", &LateralAction_U::m_LaneChangeAction ) //LaneChangeAction
		.property("LaneOffsetAction", &LateralAction_U::m_LaneOffsetAction ) //LaneOffsetAction
		.property("LateralDistanceAction", &LateralAction_U::m_LateralDistanceAction ) //LateralDistanceAction
;
	class_<LongitudinalAction_U>("LongitudinalAction_U")
		.smart_ptr_constructor("LongitudinalAction_U",&std::make_shared<LongitudinalAction_U>)
		.property("SpeedAction", &LongitudinalAction_U::m_SpeedAction ) //SpeedAction
		.property("LongitudinalDistanceAction", &LongitudinalAction_U::m_LongitudinalDistanceAction ) //LongitudinalDistanceAction
;
	class_<ModifyRule_U>("ModifyRule_U")
		.smart_ptr_constructor("ModifyRule_U",&std::make_shared<ModifyRule_U>)
		.property("AddValue", &ModifyRule_U::m_AddValue ) //ParameterAddValueRule
		.property("MultiplyByValue", &ModifyRule_U::m_MultiplyByValue ) //ParameterMultiplyByValueRule
;
	class_<ObjectController_U>("ObjectController_U")
		.smart_ptr_constructor("ObjectController_U",&std::make_shared<ObjectController_U>)
		.property("CatalogReference", &ObjectController_U::m_CatalogReference ) //CatalogReference
		.property("Controller", &ObjectController_U::m_Controller ) //Controller
;
	class_<ParameterAction_U>("ParameterAction_U")
		.smart_ptr_constructor("ParameterAction_U",&std::make_shared<ParameterAction_U>)
		.property("SetAction", &ParameterAction_U::m_SetAction ) //ParameterSetAction
		.property("ModifyAction", &ParameterAction_U::m_ModifyAction ) //ParameterModifyAction
;
	class_<Position_U>("Position_U")
		.smart_ptr_constructor("Position_U",&std::make_shared<Position_U>)
		.property("WorldPosition", &Position_U::m_WorldPosition ) //WorldPosition
		.property("RelativeWorldPosition", &Position_U::m_RelativeWorldPosition ) //RelativeWorldPosition
		.property("RelativeObjectPosition", &Position_U::m_RelativeObjectPosition ) //RelativeObjectPosition
		.property("RoadPosition", &Position_U::m_RoadPosition ) //RoadPosition
		.property("RelativeRoadPosition", &Position_U::m_RelativeRoadPosition ) //RelativeRoadPosition
		.property("LanePosition", &Position_U::m_LanePosition ) //LanePosition
		.property("RelativeLanePosition", &Position_U::m_RelativeLanePosition ) //RelativeLanePosition
		.property("RoutePosition", &Position_U::m_RoutePosition ) //RoutePosition
;
	class_<PrivateAction_U>("PrivateAction_U")
		.smart_ptr_constructor("PrivateAction_U",&std::make_shared<PrivateAction_U>)
		.property("LongitudinalAction", &PrivateAction_U::m_LongitudinalAction ) //LongitudinalAction
		.property("LateralAction", &PrivateAction_U::m_LateralAction ) //LateralAction
		.property("VisibilityAction", &PrivateAction_U::m_VisibilityAction ) //VisibilityAction
		.property("SynchronizeAction", &PrivateAction_U::m_SynchronizeAction ) //SynchronizeAction
		.property("ActivateControllerAction", &PrivateAction_U::m_ActivateControllerAction ) //ActivateControllerAction
		.property("ControllerAction", &PrivateAction_U::m_ControllerAction ) //ControllerAction
		.property("TeleportAction", &PrivateAction_U::m_TeleportAction ) //TeleportAction
		.property("RoutingAction", &PrivateAction_U::m_RoutingAction ) //RoutingAction
;
	class_<RouteRef_U>("RouteRef_U")
		.smart_ptr_constructor("RouteRef_U",&std::make_shared<RouteRef_U>)
		.property("Route", &RouteRef_U::m_Route ) //Route
		.property("CatalogReference", &RouteRef_U::m_CatalogReference ) //CatalogReference
;
	class_<RoutingAction_U>("RoutingAction_U")
		.smart_ptr_constructor("RoutingAction_U",&std::make_shared<RoutingAction_U>)
		.property("AssignRouteAction", &RoutingAction_U::m_AssignRouteAction ) //AssignRouteAction
		.property("FollowTrajectoryAction", &RoutingAction_U::m_FollowTrajectoryAction ) //FollowTrajectoryAction
		.property("AcquirePositionAction", &RoutingAction_U::m_AcquirePositionAction ) //AcquirePositionAction
;
	class_<SelectedEntities_U>("SelectedEntities_U")
		.smart_ptr_constructor("SelectedEntities_U",&std::make_shared<SelectedEntities_U>)
		.property("EntityRef", &SelectedEntities_U::m_EntityRefs ) //EntityRef
		.property("ByType", &SelectedEntities_U::m_ByTypes ) //ByType
;
	class_<Shape_U>("Shape_U")
		.smart_ptr_constructor("Shape_U",&std::make_shared<Shape_U>)
		.property("Polyline", &Shape_U::m_Polyline ) //Polyline
		.property("Clothoid", &Shape_U::m_Clothoid ) //Clothoid
		.property("Nurbs", &Shape_U::m_Nurbs ) //Nurbs
;
	class_<SpeedActionTarget_U>("SpeedActionTarget_U")
		.smart_ptr_constructor("SpeedActionTarget_U",&std::make_shared<SpeedActionTarget_U>)
		.property("RelativeTargetSpeed", &SpeedActionTarget_U::m_RelativeTargetSpeed ) //RelativeTargetSpeed
		.property("AbsoluteTargetSpeed", &SpeedActionTarget_U::m_AbsoluteTargetSpeed ) //AbsoluteTargetSpeed
;
	class_<TimeReference_U>("TimeReference_U")
		.smart_ptr_constructor("TimeReference_U",&std::make_shared<TimeReference_U>)
		.property("None", &TimeReference_U::m_None ) //None
		.property("Timing", &TimeReference_U::m_Timing ) //Timing
;
	class_<TimeToCollisionConditionTarget_U>("TimeToCollisionConditionTarget_U")
		.smart_ptr_constructor("TimeToCollisionConditionTarget_U",&std::make_shared<TimeToCollisionConditionTarget_U>)
		.property("Position", &TimeToCollisionConditionTarget_U::m_Position ) //Position
		.property("EntityRef", &TimeToCollisionConditionTarget_U::m_EntityRef ) //EntityRef
;
	class_<TrafficAction_U>("TrafficAction_U")
		.smart_ptr_constructor("TrafficAction_U",&std::make_shared<TrafficAction_U>)
		.property("TrafficSourceAction", &TrafficAction_U::m_TrafficSourceAction ) //TrafficSourceAction
		.property("TrafficSinkAction", &TrafficAction_U::m_TrafficSinkAction ) //TrafficSinkAction
		.property("TrafficSwarmAction", &TrafficAction_U::m_TrafficSwarmAction ) //TrafficSwarmAction
;
	class_<TrafficSignalAction_U>("TrafficSignalAction_U")
		.smart_ptr_constructor("TrafficSignalAction_U",&std::make_shared<TrafficSignalAction_U>)
		.property("TrafficSignalControllerAction", &TrafficSignalAction_U::m_TrafficSignalControllerAction ) //TrafficSignalControllerAction
		.property("TrafficSignalStateAction", &TrafficSignalAction_U::m_TrafficSignalStateAction ) //TrafficSignalStateAction
;
//
	class_<AbsoluteSpeed>("AbsoluteSpeed") 
		.smart_ptr_constructor("AbsoluteSpeed",&std::make_shared<AbsoluteSpeed>) 
		.property("value", &AbsoluteSpeed::value) 
; 
//
	class_<AbsoluteTargetLane>("AbsoluteTargetLane") 
		.smart_ptr_constructor("AbsoluteTargetLane",&std::make_shared<AbsoluteTargetLane>) 
		.property("value", &AbsoluteTargetLane::value) 
; 
//
	class_<AbsoluteTargetLaneOffset>("AbsoluteTargetLaneOffset") 
		.smart_ptr_constructor("AbsoluteTargetLaneOffset",&std::make_shared<AbsoluteTargetLaneOffset>) 
		.property("value", &AbsoluteTargetLaneOffset::value) 
; 
//
	class_<AbsoluteTargetSpeed>("AbsoluteTargetSpeed") 
		.smart_ptr_constructor("AbsoluteTargetSpeed",&std::make_shared<AbsoluteTargetSpeed>) 
		.property("value", &AbsoluteTargetSpeed::value) 
; 
//
	class_<AccelerationCondition>("AccelerationCondition") 
		.smart_ptr_constructor("AccelerationCondition",&std::make_shared<AccelerationCondition>) 
		.property("rule", &AccelerationCondition::rule) 
		.property("value", &AccelerationCondition::value) 
; 
//
	class_<AcquirePositionAction>("AcquirePositionAction") 
		.smart_ptr_constructor("AcquirePositionAction",&std::make_shared<AcquirePositionAction>) 
		.property("Position", &AcquirePositionAction::m_Position ) //Position
; 
//
	class_<Act>("Act") 
		.smart_ptr_constructor("Act",&std::make_shared<Act>) 
		.property("name", &Act::name) 
		.property("ManeuverGroup", &Act::m_ManeuverGroups ) //ManeuverGroup
		.property("StartTrigger", &Act::m_StartTrigger ) //Trigger
		.property("StopTrigger", &Act::m_StopTrigger ) //Trigger
; 
//
	class_<Action>("Action") 
		.smart_ptr_constructor("Action",&std::make_shared<Action>) 
		.property("name", &Action::name) 
		.property("Action", &Action::m_Action ) //
; 
//
	class_<ActivateControllerAction>("ActivateControllerAction") 
		.smart_ptr_constructor("ActivateControllerAction",&std::make_shared<ActivateControllerAction>) 
		.property("lateral", &ActivateControllerAction::lateral) 
		.property("longitudinal", &ActivateControllerAction::longitudinal) 
; 
//
	class_<Actors>("Actors") 
		.smart_ptr_constructor("Actors",&std::make_shared<Actors>) 
		.property("selectTriggeringEntities", &Actors::selectTriggeringEntities) 
		.property("EntityRef", &Actors::m_EntityRefs ) //EntityRef
; 
//
	class_<AddEntityAction>("AddEntityAction") 
		.smart_ptr_constructor("AddEntityAction",&std::make_shared<AddEntityAction>) 
		.property("Position", &AddEntityAction::m_Position ) //Position
; 
//
	class_<AssignControllerAction>("AssignControllerAction") 
		.smart_ptr_constructor("AssignControllerAction",&std::make_shared<AssignControllerAction>) 
		.property("AssignControllerAction", &AssignControllerAction::m_AssignControllerAction ) //
; 
//
	class_<AssignRouteAction>("AssignRouteAction") 
		.smart_ptr_constructor("AssignRouteAction",&std::make_shared<AssignRouteAction>) 
		.property("AssignRouteAction", &AssignRouteAction::m_AssignRouteAction ) //
; 
//
	class_<Axle>("Axle") 
		.smart_ptr_constructor("Axle",&std::make_shared<Axle>) 
		.property("maxSteering", &Axle::maxSteering) 
		.property("positionX", &Axle::positionX) 
		.property("positionZ", &Axle::positionZ) 
		.property("trackWidth", &Axle::trackWidth) 
		.property("wheelDiameter", &Axle::wheelDiameter) 
; 
//
	class_<Axles>("Axles") 
		.smart_ptr_constructor("Axles",&std::make_shared<Axles>) 
		.property("FrontAxle", &Axles::m_FrontAxle ) //Axle
		.property("RearAxle", &Axles::m_RearAxle ) //Axle
		.property("AdditionalAxle", &Axles::m_AdditionalAxles ) //Axle
; 
//
	class_<BoundingBox>("BoundingBox") 
		.smart_ptr_constructor("BoundingBox",&std::make_shared<BoundingBox>) 
		.property("Center", &BoundingBox::m_Center ) //Center
		.property("Dimensions", &BoundingBox::m_Dimensions ) //Dimensions
; 
//
	class_<ByEntityCondition>("ByEntityCondition") 
		.smart_ptr_constructor("ByEntityCondition",&std::make_shared<ByEntityCondition>) 
		.property("TriggeringEntities", &ByEntityCondition::m_TriggeringEntities ) //TriggeringEntities
		.property("EntityCondition", &ByEntityCondition::m_EntityCondition ) //EntityCondition
; 
//
	class_<ByObjectType>("ByObjectType") 
		.smart_ptr_constructor("ByObjectType",&std::make_shared<ByObjectType>) 
		.property("type", &ByObjectType::type) 
; 
//
	class_<ByType>("ByType") 
		.smart_ptr_constructor("ByType",&std::make_shared<ByType>) 
		.property("objectType", &ByType::objectType) 
; 
//
	class_<ByValueCondition>("ByValueCondition") 
		.smart_ptr_constructor("ByValueCondition",&std::make_shared<ByValueCondition>) 
		.property("ByValueCondition", &ByValueCondition::m_ByValueCondition ) //
; 
//
	class_<Catalog>("Catalog") 
		.smart_ptr_constructor("Catalog",&std::make_shared<Catalog>) 
		.property("name", &Catalog::name) 
		.property("Vehicle", &Catalog::m_Vehicles ) //Vehicle
		.property("Controller", &Catalog::m_Controllers ) //Controller
		.property("Pedestrian", &Catalog::m_Pedestrians ) //Pedestrian
		.property("MiscObject", &Catalog::m_MiscObjects ) //MiscObject
		.property("Environment", &Catalog::m_Environments ) //Environment
		.property("Maneuver", &Catalog::m_Maneuvers ) //Maneuver
		.property("Trajectory", &Catalog::m_Trajectorys ) //Trajectory
		.property("Route", &Catalog::m_Routes ) //Route
; 
//
	class_<CatalogLocations>("CatalogLocations") 
		.smart_ptr_constructor("CatalogLocations",&std::make_shared<CatalogLocations>) 
		.property("VehicleCatalog", &CatalogLocations::m_VehicleCatalog ) //VehicleCatalogLocation
		.property("ControllerCatalog", &CatalogLocations::m_ControllerCatalog ) //ControllerCatalogLocation
		.property("PedestrianCatalog", &CatalogLocations::m_PedestrianCatalog ) //PedestrianCatalogLocation
		.property("MiscObjectCatalog", &CatalogLocations::m_MiscObjectCatalog ) //MiscObjectCatalogLocation
		.property("EnvironmentCatalog", &CatalogLocations::m_EnvironmentCatalog ) //EnvironmentCatalogLocation
		.property("ManeuverCatalog", &CatalogLocations::m_ManeuverCatalog ) //ManeuverCatalogLocation
		.property("TrajectoryCatalog", &CatalogLocations::m_TrajectoryCatalog ) //TrajectoryCatalogLocation
		.property("RouteCatalog", &CatalogLocations::m_RouteCatalog ) //RouteCatalogLocation
; 
//
	class_<CatalogReference>("CatalogReference") 
		.smart_ptr_constructor("CatalogReference",&std::make_shared<CatalogReference>) 
		.property("catalogName", &CatalogReference::catalogName) 
		.property("entryName", &CatalogReference::entryName) 
		.property("ParameterAssignments", &CatalogReference::m_ParameterAssignments ) //ParameterAssignments
; 
//
	class_<Center>("Center") 
		.smart_ptr_constructor("Center",&std::make_shared<Center>) 
		.property("x", &Center::x) 
		.property("y", &Center::y) 
		.property("z", &Center::z) 
; 
//
	class_<CentralSwarmObject>("CentralSwarmObject") 
		.smart_ptr_constructor("CentralSwarmObject",&std::make_shared<CentralSwarmObject>) 
		.property("entityRef", &CentralSwarmObject::entityRef) 
; 
//
	class_<Clothoid>("Clothoid") 
		.smart_ptr_constructor("Clothoid",&std::make_shared<Clothoid>) 
		.property("curvature", &Clothoid::curvature) 
		.property("curvatureDot", &Clothoid::curvatureDot) 
		.property("length", &Clothoid::length) 
		.property("startTime", &Clothoid::startTime) 
		.property("stopTime", &Clothoid::stopTime) 
		.property("Position", &Clothoid::m_Position ) //Position
; 
//
	class_<CollisionCondition>("CollisionCondition") 
		.smart_ptr_constructor("CollisionCondition",&std::make_shared<CollisionCondition>) 
		.property("CollisionCondition", &CollisionCondition::m_CollisionCondition ) //
; 
//
	class_<Condition>("Condition") 
		.smart_ptr_constructor("Condition",&std::make_shared<Condition>) 
		.property("conditionEdge", &Condition::conditionEdge) 
		.property("delay", &Condition::delay) 
		.property("name", &Condition::name) 
		.property("Condition", &Condition::m_Condition ) //
; 
//
	class_<ConditionGroup>("ConditionGroup") 
		.smart_ptr_constructor("ConditionGroup",&std::make_shared<ConditionGroup>) 
		.property("Condition", &ConditionGroup::m_Conditions ) //Condition
; 
//
	class_<Controller>("Controller") 
		.smart_ptr_constructor("Controller",&std::make_shared<Controller>) 
		.property("name", &Controller::name) 
		.property("ParameterDeclarations", &Controller::m_ParameterDeclarations ) //ParameterDeclarations
		.property("Properties", &Controller::m_Properties ) //Properties
; 
//
	class_<ControllerAction>("ControllerAction") 
		.smart_ptr_constructor("ControllerAction",&std::make_shared<ControllerAction>) 
		.property("AssignControllerAction", &ControllerAction::m_AssignControllerAction ) //AssignControllerAction
		.property("OverrideControllerValueAction", &ControllerAction::m_OverrideControllerValueAction ) //OverrideControllerValueAction
; 
//
	class_<ControllerCatalogLocation>("ControllerCatalogLocation") 
		.smart_ptr_constructor("ControllerCatalogLocation",&std::make_shared<ControllerCatalogLocation>) 
		.property("Directory", &ControllerCatalogLocation::m_Directory ) //Directory
; 
//
	class_<ControllerDistribution>("ControllerDistribution") 
		.smart_ptr_constructor("ControllerDistribution",&std::make_shared<ControllerDistribution>) 
		.property("ControllerDistributionEntry", &ControllerDistribution::m_ControllerDistributionEntrys ) //ControllerDistributionEntry
; 
//
	class_<ControllerDistributionEntry>("ControllerDistributionEntry") 
		.smart_ptr_constructor("ControllerDistributionEntry",&std::make_shared<ControllerDistributionEntry>) 
		.property("weight", &ControllerDistributionEntry::weight) 
		.property("ControllerDistributionEntry", &ControllerDistributionEntry::m_ControllerDistributionEntry ) //
; 
//
	class_<ControlPoint>("ControlPoint") 
		.smart_ptr_constructor("ControlPoint",&std::make_shared<ControlPoint>) 
		.property("time", &ControlPoint::time) 
		.property("weight", &ControlPoint::weight) 
		.property("Position", &ControlPoint::m_Position ) //Position
; 
//
	class_<CustomCommandAction>("CustomCommandAction") 
		.smart_ptr_constructor("CustomCommandAction",&std::make_shared<CustomCommandAction>) 
		.property("type", &CustomCommandAction::type) 
; 
//
	class_<DeleteEntityAction>("DeleteEntityAction") 
		.smart_ptr_constructor("DeleteEntityAction",&std::make_shared<DeleteEntityAction>) 
; 
//
	class_<Dimensions>("Dimensions") 
		.smart_ptr_constructor("Dimensions",&std::make_shared<Dimensions>) 
		.property("height", &Dimensions::height) 
		.property("length", &Dimensions::length) 
		.property("width", &Dimensions::width) 
; 
//
	class_<Directory>("Directory") 
		.smart_ptr_constructor("Directory",&std::make_shared<Directory>) 
		.property("path", &Directory::path) 
; 
//
	class_<DistanceCondition>("DistanceCondition") 
		.smart_ptr_constructor("DistanceCondition",&std::make_shared<DistanceCondition>) 
		.property("alongRoute", &DistanceCondition::alongRoute) 
		.property("freespace", &DistanceCondition::freespace) 
		.property("rule", &DistanceCondition::rule) 
		.property("value", &DistanceCondition::value) 
		.property("Position", &DistanceCondition::m_Position ) //Position
; 
//
	class_<DynamicConstraints>("DynamicConstraints") 
		.smart_ptr_constructor("DynamicConstraints",&std::make_shared<DynamicConstraints>) 
		.property("maxAcceleration", &DynamicConstraints::maxAcceleration) 
		.property("maxDeceleration", &DynamicConstraints::maxDeceleration) 
		.property("maxSpeed", &DynamicConstraints::maxSpeed) 
; 
//
	class_<EndOfRoadCondition>("EndOfRoadCondition") 
		.smart_ptr_constructor("EndOfRoadCondition",&std::make_shared<EndOfRoadCondition>) 
		.property("duration", &EndOfRoadCondition::duration) 
; 
//
	class_<Entities>("Entities") 
		.smart_ptr_constructor("Entities",&std::make_shared<Entities>) 
		.property("ScenarioObject", &Entities::m_ScenarioObjects ) //ScenarioObject
		.property("EntitySelection", &Entities::m_EntitySelections ) //EntitySelection
; 
//
	class_<EntityAction>("EntityAction") 
		.smart_ptr_constructor("EntityAction",&std::make_shared<EntityAction>) 
		.property("entityRef", &EntityAction::entityRef) 
		.property("EntityAction", &EntityAction::m_EntityAction ) //
; 
//
	class_<EntityCondition>("EntityCondition") 
		.smart_ptr_constructor("EntityCondition",&std::make_shared<EntityCondition>) 
		.property("EntityCondition", &EntityCondition::m_EntityCondition ) //
; 
//
	class_<EntityRef>("EntityRef") 
		.smart_ptr_constructor("EntityRef",&std::make_shared<EntityRef>) 
		.property("entityRef", &EntityRef::entityRef) 
; 
//
	class_<EntitySelection>("EntitySelection") 
		.smart_ptr_constructor("EntitySelection",&std::make_shared<EntitySelection>) 
		.property("name", &EntitySelection::name) 
		.property("Members", &EntitySelection::m_Members ) //SelectedEntities
; 
//
	class_<Environment>("Environment") 
		.smart_ptr_constructor("Environment",&std::make_shared<Environment>) 
		.property("name", &Environment::name) 
		.property("ParameterDeclarations", &Environment::m_ParameterDeclarations ) //ParameterDeclarations
		.property("TimeOfDay", &Environment::m_TimeOfDay ) //TimeOfDay
		.property("Weather", &Environment::m_Weather ) //Weather
		.property("RoadCondition", &Environment::m_RoadCondition ) //RoadCondition
; 
//
	class_<EnvironmentAction>("EnvironmentAction") 
		.smart_ptr_constructor("EnvironmentAction",&std::make_shared<EnvironmentAction>) 
		.property("EnvironmentAction", &EnvironmentAction::m_EnvironmentAction ) //
; 
//
	class_<EnvironmentCatalogLocation>("EnvironmentCatalogLocation") 
		.smart_ptr_constructor("EnvironmentCatalogLocation",&std::make_shared<EnvironmentCatalogLocation>) 
		.property("Directory", &EnvironmentCatalogLocation::m_Directory ) //Directory
; 
//
	class_<Event>("Event") 
		.smart_ptr_constructor("Event",&std::make_shared<Event>) 
		.property("maximumExecutionCount", &Event::maximumExecutionCount) 
		.property("name", &Event::name) 
		.property("priority", &Event::priority) 
		.property("Action", &Event::m_Actions ) //Action
		.property("StartTrigger", &Event::m_StartTrigger ) //Trigger
; 
//
	class_<File>("File") 
		.smart_ptr_constructor("File",&std::make_shared<File>) 
		.property("filepath", &File::filepath) 
; 
//
	class_<FileHeader>("FileHeader") 
		.smart_ptr_constructor("FileHeader",&std::make_shared<FileHeader>) 
		.property("author", &FileHeader::author) 
		.property("date", &FileHeader::date) 
		.property("description", &FileHeader::description) 
		.property("revMajor", &FileHeader::revMajor) 
		.property("revMinor", &FileHeader::revMinor) 
; 
//
	class_<FinalSpeed>("FinalSpeed") 
		.smart_ptr_constructor("FinalSpeed",&std::make_shared<FinalSpeed>) 
		.property("FinalSpeed", &FinalSpeed::m_FinalSpeed ) //
; 
//
	class_<Fog>("Fog") 
		.smart_ptr_constructor("Fog",&std::make_shared<Fog>) 
		.property("visualRange", &Fog::visualRange) 
		.property("BoundingBox", &Fog::m_BoundingBox ) //BoundingBox
; 
//
	class_<FollowTrajectoryAction>("FollowTrajectoryAction") 
		.smart_ptr_constructor("FollowTrajectoryAction",&std::make_shared<FollowTrajectoryAction>) 
		.property("Trajectory", &FollowTrajectoryAction::m_Trajectory ) //Trajectory
		.property("CatalogReference", &FollowTrajectoryAction::m_CatalogReference ) //CatalogReference
		.property("TimeReference", &FollowTrajectoryAction::m_TimeReference ) //TimeReference
		.property("TrajectoryFollowingMode", &FollowTrajectoryAction::m_TrajectoryFollowingMode ) //TrajectoryFollowingMode
; 
//
	class_<GlobalAction>("GlobalAction") 
		.smart_ptr_constructor("GlobalAction",&std::make_shared<GlobalAction>) 
		.property("GlobalAction", &GlobalAction::m_GlobalAction ) //
; 
//
	class_<InfrastructureAction>("InfrastructureAction") 
		.smart_ptr_constructor("InfrastructureAction",&std::make_shared<InfrastructureAction>) 
		.property("TrafficSignalAction", &InfrastructureAction::m_TrafficSignalAction ) //TrafficSignalAction
; 
//
	class_<Init>("Init") 
		.smart_ptr_constructor("Init",&std::make_shared<Init>) 
		.property("Actions", &Init::m_Actions ) //InitActions
; 
//
	class_<InitActions>("InitActions") 
		.smart_ptr_constructor("InitActions",&std::make_shared<InitActions>) 
		.property("GlobalAction", &InitActions::m_GlobalActions ) //GlobalAction
		.property("UserDefinedAction", &InitActions::m_UserDefinedActions ) //UserDefinedAction
		.property("Private", &InitActions::m_Privates ) //Private
; 
//
	class_<InRoutePosition>("InRoutePosition") 
		.smart_ptr_constructor("InRoutePosition",&std::make_shared<InRoutePosition>) 
		.property("InRoutePosition", &InRoutePosition::m_InRoutePosition ) //
; 
//
	class_<Knot>("Knot") 
		.smart_ptr_constructor("Knot",&std::make_shared<Knot>) 
		.property("value", &Knot::value) 
; 
//
	class_<LaneChangeAction>("LaneChangeAction") 
		.smart_ptr_constructor("LaneChangeAction",&std::make_shared<LaneChangeAction>) 
		.property("targetLaneOffset", &LaneChangeAction::targetLaneOffset) 
		.property("LaneChangeActionDynamics", &LaneChangeAction::m_LaneChangeActionDynamics ) //TransitionDynamics
		.property("LaneChangeTarget", &LaneChangeAction::m_LaneChangeTarget ) //LaneChangeTarget
; 
//
	class_<LaneChangeTarget>("LaneChangeTarget") 
		.smart_ptr_constructor("LaneChangeTarget",&std::make_shared<LaneChangeTarget>) 
		.property("LaneChangeTarget", &LaneChangeTarget::m_LaneChangeTarget ) //
; 
//
	class_<LaneOffsetAction>("LaneOffsetAction") 
		.smart_ptr_constructor("LaneOffsetAction",&std::make_shared<LaneOffsetAction>) 
		.property("continuous", &LaneOffsetAction::continuous) 
		.property("LaneOffsetActionDynamics", &LaneOffsetAction::m_LaneOffsetActionDynamics ) //LaneOffsetActionDynamics
		.property("LaneOffsetTarget", &LaneOffsetAction::m_LaneOffsetTarget ) //LaneOffsetTarget
; 
//
	class_<LaneOffsetActionDynamics>("LaneOffsetActionDynamics") 
		.smart_ptr_constructor("LaneOffsetActionDynamics",&std::make_shared<LaneOffsetActionDynamics>) 
		.property("dynamicsShape", &LaneOffsetActionDynamics::dynamicsShape) 
		.property("maxLateralAcc", &LaneOffsetActionDynamics::maxLateralAcc) 
; 
//
	class_<LaneOffsetTarget>("LaneOffsetTarget") 
		.smart_ptr_constructor("LaneOffsetTarget",&std::make_shared<LaneOffsetTarget>) 
		.property("LaneOffsetTarget", &LaneOffsetTarget::m_LaneOffsetTarget ) //
; 
//
	class_<LanePosition>("LanePosition") 
		.smart_ptr_constructor("LanePosition",&std::make_shared<LanePosition>) 
		.property("laneId", &LanePosition::laneId) 
		.property("offset", &LanePosition::offset) 
		.property("roadId", &LanePosition::roadId) 
		.property("s", &LanePosition::s) 
		.property("Orientation", &LanePosition::m_Orientation ) //Orientation
; 
//
	class_<LateralAction>("LateralAction") 
		.smart_ptr_constructor("LateralAction",&std::make_shared<LateralAction>) 
		.property("LateralAction", &LateralAction::m_LateralAction ) //
; 
//
	class_<LateralDistanceAction>("LateralDistanceAction") 
		.smart_ptr_constructor("LateralDistanceAction",&std::make_shared<LateralDistanceAction>) 
		.property("entityRef", &LateralDistanceAction::entityRef) 
		.property("continuous", &LateralDistanceAction::continuous) 
		.property("distance", &LateralDistanceAction::distance) 
		.property("freespace", &LateralDistanceAction::freespace) 
		.property("DynamicConstraints", &LateralDistanceAction::m_DynamicConstraints ) //DynamicConstraints
; 
//
	class_<LongitudinalAction>("LongitudinalAction") 
		.smart_ptr_constructor("LongitudinalAction",&std::make_shared<LongitudinalAction>) 
		.property("LongitudinalAction", &LongitudinalAction::m_LongitudinalAction ) //
; 
//
	class_<LongitudinalDistanceAction>("LongitudinalDistanceAction") 
		.smart_ptr_constructor("LongitudinalDistanceAction",&std::make_shared<LongitudinalDistanceAction>) 
		.property("entityRef", &LongitudinalDistanceAction::entityRef) 
		.property("continuous", &LongitudinalDistanceAction::continuous) 
		.property("distance", &LongitudinalDistanceAction::distance) 
		.property("freespace", &LongitudinalDistanceAction::freespace) 
		.property("timeGap", &LongitudinalDistanceAction::timeGap) 
		.property("DynamicConstraints", &LongitudinalDistanceAction::m_DynamicConstraints ) //DynamicConstraints
; 
//
	class_<Maneuver>("Maneuver") 
		.smart_ptr_constructor("Maneuver",&std::make_shared<Maneuver>) 
		.property("name", &Maneuver::name) 
		.property("ParameterDeclarations", &Maneuver::m_ParameterDeclarations ) //ParameterDeclarations
		.property("Event", &Maneuver::m_Events ) //Event
; 
//
	class_<ManeuverCatalogLocation>("ManeuverCatalogLocation") 
		.smart_ptr_constructor("ManeuverCatalogLocation",&std::make_shared<ManeuverCatalogLocation>) 
		.property("Directory", &ManeuverCatalogLocation::m_Directory ) //Directory
; 
//
	class_<ManeuverGroup>("ManeuverGroup") 
		.smart_ptr_constructor("ManeuverGroup",&std::make_shared<ManeuverGroup>) 
		.property("maximumExecutionCount", &ManeuverGroup::maximumExecutionCount) 
		.property("name", &ManeuverGroup::name) 
		.property("Actors", &ManeuverGroup::m_Actors ) //Actors
		.property("CatalogReference", &ManeuverGroup::m_CatalogReferences ) //CatalogReference
		.property("Maneuver", &ManeuverGroup::m_Maneuvers ) //Maneuver
; 
//
	class_<MiscObject>("MiscObject") 
		.smart_ptr_constructor("MiscObject",&std::make_shared<MiscObject>) 
		.property("mass", &MiscObject::mass) 
		.property("miscObjectCategory", &MiscObject::miscObjectCategory) 
		.property("name", &MiscObject::name) 
		.property("ParameterDeclarations", &MiscObject::m_ParameterDeclarations ) //ParameterDeclarations
		.property("BoundingBox", &MiscObject::m_BoundingBox ) //BoundingBox
		.property("Properties", &MiscObject::m_Properties ) //Properties
; 
//
	class_<MiscObjectCatalogLocation>("MiscObjectCatalogLocation") 
		.smart_ptr_constructor("MiscObjectCatalogLocation",&std::make_shared<MiscObjectCatalogLocation>) 
		.property("Directory", &MiscObjectCatalogLocation::m_Directory ) //Directory
; 
//
	class_<ModifyRule>("ModifyRule") 
		.smart_ptr_constructor("ModifyRule",&std::make_shared<ModifyRule>) 
		.property("ModifyRule", &ModifyRule::m_ModifyRule ) //
; 
//
	class_<None>("None") 
		.smart_ptr_constructor("None",&std::make_shared<None>) 
; 
//
	class_<Nurbs>("Nurbs") 
		.smart_ptr_constructor("Nurbs",&std::make_shared<Nurbs>) 
		.property("order", &Nurbs::order) 
		.property("ControlPoint", &Nurbs::m_ControlPoints ) //ControlPoint
		.property("Knot", &Nurbs::m_Knots ) //Knot
; 
//
	class_<ObjectController>("ObjectController") 
		.smart_ptr_constructor("ObjectController",&std::make_shared<ObjectController>) 
		.property("ObjectController", &ObjectController::m_ObjectController ) //
; 
//
	class_<OffroadCondition>("OffroadCondition") 
		.smart_ptr_constructor("OffroadCondition",&std::make_shared<OffroadCondition>) 
		.property("duration", &OffroadCondition::duration) 
; 
//
	class_<OpenScenario>("OpenScenario") 
		.smart_ptr_constructor("OpenScenario",&std::make_shared<OpenScenario>) 
		.property("FileHeader", &OpenScenario::m_FileHeader ) //FileHeader
	.property("OpenScenarioCategory", &OpenScenario::m_OpenScenarioCategory ) // group read 
; 
//
	class_<Orientation>("Orientation") 
		.smart_ptr_constructor("Orientation",&std::make_shared<Orientation>) 
		.property("h", &Orientation::h) 
		.property("p", &Orientation::p) 
		.property("r", &Orientation::r) 
		.property("type", &Orientation::type) 
; 
//
	class_<OverrideBrakeAction>("OverrideBrakeAction") 
		.smart_ptr_constructor("OverrideBrakeAction",&std::make_shared<OverrideBrakeAction>) 
		.property("active", &OverrideBrakeAction::active) 
		.property("value", &OverrideBrakeAction::value) 
; 
//
	class_<OverrideClutchAction>("OverrideClutchAction") 
		.smart_ptr_constructor("OverrideClutchAction",&std::make_shared<OverrideClutchAction>) 
		.property("active", &OverrideClutchAction::active) 
		.property("value", &OverrideClutchAction::value) 
; 
//
	class_<OverrideControllerValueAction>("OverrideControllerValueAction") 
		.smart_ptr_constructor("OverrideControllerValueAction",&std::make_shared<OverrideControllerValueAction>) 
		.property("Throttle", &OverrideControllerValueAction::m_Throttle ) //OverrideThrottleAction
		.property("Brake", &OverrideControllerValueAction::m_Brake ) //OverrideBrakeAction
		.property("Clutch", &OverrideControllerValueAction::m_Clutch ) //OverrideClutchAction
		.property("ParkingBrake", &OverrideControllerValueAction::m_ParkingBrake ) //OverrideParkingBrakeAction
		.property("SteeringWheel", &OverrideControllerValueAction::m_SteeringWheel ) //OverrideSteeringWheelAction
		.property("Gear", &OverrideControllerValueAction::m_Gear ) //OverrideGearAction
; 
//
	class_<OverrideGearAction>("OverrideGearAction") 
		.smart_ptr_constructor("OverrideGearAction",&std::make_shared<OverrideGearAction>) 
		.property("active", &OverrideGearAction::active) 
		.property("number", &OverrideGearAction::number) 
; 
//
	class_<OverrideParkingBrakeAction>("OverrideParkingBrakeAction") 
		.smart_ptr_constructor("OverrideParkingBrakeAction",&std::make_shared<OverrideParkingBrakeAction>) 
		.property("active", &OverrideParkingBrakeAction::active) 
		.property("value", &OverrideParkingBrakeAction::value) 
; 
//
	class_<OverrideSteeringWheelAction>("OverrideSteeringWheelAction") 
		.smart_ptr_constructor("OverrideSteeringWheelAction",&std::make_shared<OverrideSteeringWheelAction>) 
		.property("active", &OverrideSteeringWheelAction::active) 
		.property("value", &OverrideSteeringWheelAction::value) 
; 
//
	class_<OverrideThrottleAction>("OverrideThrottleAction") 
		.smart_ptr_constructor("OverrideThrottleAction",&std::make_shared<OverrideThrottleAction>) 
		.property("active", &OverrideThrottleAction::active) 
		.property("value", &OverrideThrottleAction::value) 
; 
//
	class_<ParameterAction>("ParameterAction") 
		.smart_ptr_constructor("ParameterAction",&std::make_shared<ParameterAction>) 
		.property("parameterRef", &ParameterAction::parameterRef) 
		.property("ParameterAction", &ParameterAction::m_ParameterAction ) //
; 
//
	class_<ParameterAddValueRule>("ParameterAddValueRule") 
		.smart_ptr_constructor("ParameterAddValueRule",&std::make_shared<ParameterAddValueRule>) 
		.property("value", &ParameterAddValueRule::value) 
; 
//
	class_<ParameterAssignment>("ParameterAssignment") 
		.smart_ptr_constructor("ParameterAssignment",&std::make_shared<ParameterAssignment>) 
		.property("parameterRef", &ParameterAssignment::parameterRef) 
		.property("value", &ParameterAssignment::value) 
; 
//
	class_<ParameterAssignments>("ParameterAssignments") 
		.smart_ptr_constructor("ParameterAssignments",&std::make_shared<ParameterAssignments>) 
		.property("ParameterAssignment", &ParameterAssignments::m_ParameterAssignments ) //ParameterAssignment
; 
//
	class_<ParameterCondition>("ParameterCondition") 
		.smart_ptr_constructor("ParameterCondition",&std::make_shared<ParameterCondition>) 
		.property("parameterRef", &ParameterCondition::parameterRef) 
		.property("rule", &ParameterCondition::rule) 
		.property("value", &ParameterCondition::value) 
; 
//
	class_<ParameterDeclaration>("ParameterDeclaration") 
		.smart_ptr_constructor("ParameterDeclaration",&std::make_shared<ParameterDeclaration>) 
		.property("name", &ParameterDeclaration::name) 
		.property("parameterType", &ParameterDeclaration::parameterType) 
		.property("value", &ParameterDeclaration::value) 
; 
//
	class_<ParameterDeclarations>("ParameterDeclarations") 
		.smart_ptr_constructor("ParameterDeclarations",&std::make_shared<ParameterDeclarations>) 
		.property("ParameterDeclaration", &ParameterDeclarations::m_ParameterDeclarations ) //ParameterDeclaration
; 
//
	class_<ParameterModifyAction>("ParameterModifyAction") 
		.smart_ptr_constructor("ParameterModifyAction",&std::make_shared<ParameterModifyAction>) 
		.property("Rule", &ParameterModifyAction::m_Rule ) //ModifyRule
; 
//
	class_<ParameterMultiplyByValueRule>("ParameterMultiplyByValueRule") 
		.smart_ptr_constructor("ParameterMultiplyByValueRule",&std::make_shared<ParameterMultiplyByValueRule>) 
		.property("value", &ParameterMultiplyByValueRule::value) 
; 
//
	class_<ParameterSetAction>("ParameterSetAction") 
		.smart_ptr_constructor("ParameterSetAction",&std::make_shared<ParameterSetAction>) 
		.property("value", &ParameterSetAction::value) 
; 
//
	class_<Pedestrian>("Pedestrian") 
		.smart_ptr_constructor("Pedestrian",&std::make_shared<Pedestrian>) 
		.property("mass", &Pedestrian::mass) 
		.property("model", &Pedestrian::model) 
		.property("name", &Pedestrian::name) 
		.property("pedestrianCategory", &Pedestrian::pedestrianCategory) 
		.property("ParameterDeclarations", &Pedestrian::m_ParameterDeclarations ) //ParameterDeclarations
		.property("BoundingBox", &Pedestrian::m_BoundingBox ) //BoundingBox
		.property("Properties", &Pedestrian::m_Properties ) //Properties
; 
//
	class_<PedestrianCatalogLocation>("PedestrianCatalogLocation") 
		.smart_ptr_constructor("PedestrianCatalogLocation",&std::make_shared<PedestrianCatalogLocation>) 
		.property("Directory", &PedestrianCatalogLocation::m_Directory ) //Directory
; 
//
	class_<Performance>("Performance") 
		.smart_ptr_constructor("Performance",&std::make_shared<Performance>) 
		.property("maxAcceleration", &Performance::maxAcceleration) 
		.property("maxDeceleration", &Performance::maxDeceleration) 
		.property("maxSpeed", &Performance::maxSpeed) 
; 
//
	class_<Phase>("Phase") 
		.smart_ptr_constructor("Phase",&std::make_shared<Phase>) 
		.property("duration", &Phase::duration) 
		.property("name", &Phase::name) 
		.property("TrafficSignalState", &Phase::m_TrafficSignalStates ) //TrafficSignalState
; 
//
	class_<Polyline>("Polyline") 
		.smart_ptr_constructor("Polyline",&std::make_shared<Polyline>) 
		.property("Vertex", &Polyline::m_Vertexs ) //Vertex
; 
//
	class_<Position>("Position") 
		.smart_ptr_constructor("Position",&std::make_shared<Position>) 
		.property("Position", &Position::m_Position ) //
; 
//
	class_<PositionInLaneCoordinates>("PositionInLaneCoordinates") 
		.smart_ptr_constructor("PositionInLaneCoordinates",&std::make_shared<PositionInLaneCoordinates>) 
		.property("laneId", &PositionInLaneCoordinates::laneId) 
		.property("laneOffset", &PositionInLaneCoordinates::laneOffset) 
		.property("pathS", &PositionInLaneCoordinates::pathS) 
; 
//
	class_<PositionInRoadCoordinates>("PositionInRoadCoordinates") 
		.smart_ptr_constructor("PositionInRoadCoordinates",&std::make_shared<PositionInRoadCoordinates>) 
		.property("pathS", &PositionInRoadCoordinates::pathS) 
		.property("t", &PositionInRoadCoordinates::t) 
; 
//
	class_<PositionOfCurrentEntity>("PositionOfCurrentEntity") 
		.smart_ptr_constructor("PositionOfCurrentEntity",&std::make_shared<PositionOfCurrentEntity>) 
		.property("entityRef", &PositionOfCurrentEntity::entityRef) 
; 
//
	class_<Precipitation>("Precipitation") 
		.smart_ptr_constructor("Precipitation",&std::make_shared<Precipitation>) 
		.property("intensity", &Precipitation::intensity) 
		.property("precipitationType", &Precipitation::precipitationType) 
; 
//
	class_<Private>("Private") 
		.smart_ptr_constructor("Private",&std::make_shared<Private>) 
		.property("entityRef", &Private::entityRef) 
		.property("PrivateAction", &Private::m_PrivateActions ) //PrivateAction
; 
//
	class_<PrivateAction>("PrivateAction") 
		.smart_ptr_constructor("PrivateAction",&std::make_shared<PrivateAction>) 
		.property("PrivateAction", &PrivateAction::m_PrivateAction ) //
; 
//
	class_<Properties>("Properties") 
		.smart_ptr_constructor("Properties",&std::make_shared<Properties>) 
		.property("Property", &Properties::m_Propertys ) //Property
		.property("File", &Properties::m_Files ) //File
; 
//
	class_<Property>("Property") 
		.smart_ptr_constructor("Property",&std::make_shared<Property>) 
		.property("name", &Property::name) 
		.property("value", &Property::value) 
; 
//
	class_<ReachPositionCondition>("ReachPositionCondition") 
		.smart_ptr_constructor("ReachPositionCondition",&std::make_shared<ReachPositionCondition>) 
		.property("tolerance", &ReachPositionCondition::tolerance) 
		.property("Position", &ReachPositionCondition::m_Position ) //Position
; 
//
	class_<RelativeDistanceCondition>("RelativeDistanceCondition") 
		.smart_ptr_constructor("RelativeDistanceCondition",&std::make_shared<RelativeDistanceCondition>) 
		.property("entityRef", &RelativeDistanceCondition::entityRef) 
		.property("freespace", &RelativeDistanceCondition::freespace) 
		.property("relativeDistanceType", &RelativeDistanceCondition::relativeDistanceType) 
		.property("rule", &RelativeDistanceCondition::rule) 
		.property("value", &RelativeDistanceCondition::value) 
; 
//
	class_<RelativeLanePosition>("RelativeLanePosition") 
		.smart_ptr_constructor("RelativeLanePosition",&std::make_shared<RelativeLanePosition>) 
		.property("entityRef", &RelativeLanePosition::entityRef) 
		.property("dLane", &RelativeLanePosition::dLane) 
		.property("ds", &RelativeLanePosition::ds) 
		.property("offset", &RelativeLanePosition::offset) 
		.property("Orientation", &RelativeLanePosition::m_Orientation ) //Orientation
; 
//
	class_<RelativeObjectPosition>("RelativeObjectPosition") 
		.smart_ptr_constructor("RelativeObjectPosition",&std::make_shared<RelativeObjectPosition>) 
		.property("entityRef", &RelativeObjectPosition::entityRef) 
		.property("dx", &RelativeObjectPosition::dx) 
		.property("dy", &RelativeObjectPosition::dy) 
		.property("dz", &RelativeObjectPosition::dz) 
		.property("Orientation", &RelativeObjectPosition::m_Orientation ) //Orientation
; 
//
	class_<RelativeRoadPosition>("RelativeRoadPosition") 
		.smart_ptr_constructor("RelativeRoadPosition",&std::make_shared<RelativeRoadPosition>) 
		.property("entityRef", &RelativeRoadPosition::entityRef) 
		.property("ds", &RelativeRoadPosition::ds) 
		.property("dt", &RelativeRoadPosition::dt) 
		.property("Orientation", &RelativeRoadPosition::m_Orientation ) //Orientation
; 
//
	class_<RelativeSpeedCondition>("RelativeSpeedCondition") 
		.smart_ptr_constructor("RelativeSpeedCondition",&std::make_shared<RelativeSpeedCondition>) 
		.property("entityRef", &RelativeSpeedCondition::entityRef) 
		.property("rule", &RelativeSpeedCondition::rule) 
		.property("value", &RelativeSpeedCondition::value) 
; 
//
	class_<RelativeSpeedToMaster>("RelativeSpeedToMaster") 
		.smart_ptr_constructor("RelativeSpeedToMaster",&std::make_shared<RelativeSpeedToMaster>) 
		.property("speedTargetValueType", &RelativeSpeedToMaster::speedTargetValueType) 
		.property("value", &RelativeSpeedToMaster::value) 
; 
//
	class_<RelativeTargetLane>("RelativeTargetLane") 
		.smart_ptr_constructor("RelativeTargetLane",&std::make_shared<RelativeTargetLane>) 
		.property("entityRef", &RelativeTargetLane::entityRef) 
		.property("value", &RelativeTargetLane::value) 
; 
//
	class_<RelativeTargetLaneOffset>("RelativeTargetLaneOffset") 
		.smart_ptr_constructor("RelativeTargetLaneOffset",&std::make_shared<RelativeTargetLaneOffset>) 
		.property("entityRef", &RelativeTargetLaneOffset::entityRef) 
		.property("value", &RelativeTargetLaneOffset::value) 
; 
//
	class_<RelativeTargetSpeed>("RelativeTargetSpeed") 
		.smart_ptr_constructor("RelativeTargetSpeed",&std::make_shared<RelativeTargetSpeed>) 
		.property("entityRef", &RelativeTargetSpeed::entityRef) 
		.property("continuous", &RelativeTargetSpeed::continuous) 
		.property("speedTargetValueType", &RelativeTargetSpeed::speedTargetValueType) 
		.property("value", &RelativeTargetSpeed::value) 
; 
//
	class_<RelativeWorldPosition>("RelativeWorldPosition") 
		.smart_ptr_constructor("RelativeWorldPosition",&std::make_shared<RelativeWorldPosition>) 
		.property("entityRef", &RelativeWorldPosition::entityRef) 
		.property("dx", &RelativeWorldPosition::dx) 
		.property("dy", &RelativeWorldPosition::dy) 
		.property("dz", &RelativeWorldPosition::dz) 
		.property("Orientation", &RelativeWorldPosition::m_Orientation ) //Orientation
; 
//
	class_<RoadCondition>("RoadCondition") 
		.smart_ptr_constructor("RoadCondition",&std::make_shared<RoadCondition>) 
		.property("frictionScaleFactor", &RoadCondition::frictionScaleFactor) 
		.property("Properties", &RoadCondition::m_Properties ) //Properties
; 
//
	class_<RoadNetwork>("RoadNetwork") 
		.smart_ptr_constructor("RoadNetwork",&std::make_shared<RoadNetwork>) 
		.property("LogicFile", &RoadNetwork::m_LogicFile ) //File
		.property("SceneGraphFile", &RoadNetwork::m_SceneGraphFile ) //File
		.property("TrafficSignals", &RoadNetwork::m_TrafficSignals ) //TrafficSignals
; 
//
	class_<RoadPosition>("RoadPosition") 
		.smart_ptr_constructor("RoadPosition",&std::make_shared<RoadPosition>) 
		.property("roadId", &RoadPosition::roadId) 
		.property("s", &RoadPosition::s) 
		.property("t", &RoadPosition::t) 
		.property("Orientation", &RoadPosition::m_Orientation ) //Orientation
; 
//
	class_<Route>("Route") 
		.smart_ptr_constructor("Route",&std::make_shared<Route>) 
		.property("closed", &Route::closed) 
		.property("name", &Route::name) 
		.property("ParameterDeclarations", &Route::m_ParameterDeclarations ) //ParameterDeclarations
		.property("Waypoint", &Route::m_Waypoints ) //Waypoint
; 
//
	class_<RouteCatalogLocation>("RouteCatalogLocation") 
		.smart_ptr_constructor("RouteCatalogLocation",&std::make_shared<RouteCatalogLocation>) 
		.property("Directory", &RouteCatalogLocation::m_Directory ) //Directory
; 
//
	class_<RoutePosition>("RoutePosition") 
		.smart_ptr_constructor("RoutePosition",&std::make_shared<RoutePosition>) 
		.property("RouteRef", &RoutePosition::m_RouteRef ) //RouteRef
		.property("Orientation", &RoutePosition::m_Orientation ) //Orientation
		.property("InRoutePosition", &RoutePosition::m_InRoutePosition ) //InRoutePosition
; 
//
	class_<RouteRef>("RouteRef") 
		.smart_ptr_constructor("RouteRef",&std::make_shared<RouteRef>) 
		.property("RouteRef", &RouteRef::m_RouteRef ) //
; 
//
	class_<RoutingAction>("RoutingAction") 
		.smart_ptr_constructor("RoutingAction",&std::make_shared<RoutingAction>) 
		.property("RoutingAction", &RoutingAction::m_RoutingAction ) //
; 
//
	class_<ScenarioObject>("ScenarioObject") 
		.smart_ptr_constructor("ScenarioObject",&std::make_shared<ScenarioObject>) 
		.property("name", &ScenarioObject::name) 
		.property("ObjectController", &ScenarioObject::m_ObjectController ) //ObjectController
	.property("EntityObject", &ScenarioObject::m_EntityObject ) // group read 
; 
//
	class_<SelectedEntities>("SelectedEntities") 
		.smart_ptr_constructor("SelectedEntities",&std::make_shared<SelectedEntities>) 
		.property("SelectedEntities", &SelectedEntities::m_SelectedEntities ) //
; 
//
	class_<Shape>("Shape") 
		.smart_ptr_constructor("Shape",&std::make_shared<Shape>) 
		.property("Shape", &Shape::m_Shape ) //
; 
//
	class_<SimulationTimeCondition>("SimulationTimeCondition") 
		.smart_ptr_constructor("SimulationTimeCondition",&std::make_shared<SimulationTimeCondition>) 
		.property("rule", &SimulationTimeCondition::rule) 
		.property("value", &SimulationTimeCondition::value) 
; 
//
	class_<SpeedAction>("SpeedAction") 
		.smart_ptr_constructor("SpeedAction",&std::make_shared<SpeedAction>) 
		.property("SpeedActionDynamics", &SpeedAction::m_SpeedActionDynamics ) //TransitionDynamics
		.property("SpeedActionTarget", &SpeedAction::m_SpeedActionTarget ) //SpeedActionTarget
; 
//
	class_<SpeedActionTarget>("SpeedActionTarget") 
		.smart_ptr_constructor("SpeedActionTarget",&std::make_shared<SpeedActionTarget>) 
		.property("SpeedActionTarget", &SpeedActionTarget::m_SpeedActionTarget ) //
; 
//
	class_<SpeedCondition>("SpeedCondition") 
		.smart_ptr_constructor("SpeedCondition",&std::make_shared<SpeedCondition>) 
		.property("rule", &SpeedCondition::rule) 
		.property("value", &SpeedCondition::value) 
; 
//
	class_<StandStillCondition>("StandStillCondition") 
		.smart_ptr_constructor("StandStillCondition",&std::make_shared<StandStillCondition>) 
		.property("duration", &StandStillCondition::duration) 
; 
//
	class_<Story>("Story") 
		.smart_ptr_constructor("Story",&std::make_shared<Story>) 
		.property("name", &Story::name) 
		.property("ParameterDeclarations", &Story::m_ParameterDeclarations ) //ParameterDeclarations
		.property("Act", &Story::m_Acts ) //Act
; 
//
	class_<Storyboard>("Storyboard") 
		.smart_ptr_constructor("Storyboard",&std::make_shared<Storyboard>) 
		.property("Init", &Storyboard::m_Init ) //Init
		.property("Story", &Storyboard::m_Storys ) //Story
		.property("StopTrigger", &Storyboard::m_StopTrigger ) //Trigger
; 
//
	class_<StoryboardElementStateCondition>("StoryboardElementStateCondition") 
		.smart_ptr_constructor("StoryboardElementStateCondition",&std::make_shared<StoryboardElementStateCondition>) 
		.property("storyboardElementRef", &StoryboardElementStateCondition::storyboardElementRef) 
		.property("state", &StoryboardElementStateCondition::state) 
		.property("storyboardElementType", &StoryboardElementStateCondition::storyboardElementType) 
; 
//
	class_<Sun>("Sun") 
		.smart_ptr_constructor("Sun",&std::make_shared<Sun>) 
		.property("azimuth", &Sun::azimuth) 
		.property("elevation", &Sun::elevation) 
		.property("intensity", &Sun::intensity) 
; 
//
	class_<SynchronizeAction>("SynchronizeAction") 
		.smart_ptr_constructor("SynchronizeAction",&std::make_shared<SynchronizeAction>) 
		.property("masterEntityRef", &SynchronizeAction::masterEntityRef) 
		.property("TargetPositionMaster", &SynchronizeAction::m_TargetPositionMaster ) //Position
		.property("TargetPosition", &SynchronizeAction::m_TargetPosition ) //Position
		.property("FinalSpeed", &SynchronizeAction::m_FinalSpeed ) //FinalSpeed
; 
//
	class_<TeleportAction>("TeleportAction") 
		.smart_ptr_constructor("TeleportAction",&std::make_shared<TeleportAction>) 
		.property("Position", &TeleportAction::m_Position ) //Position
; 
//
	class_<TimeHeadwayCondition>("TimeHeadwayCondition") 
		.smart_ptr_constructor("TimeHeadwayCondition",&std::make_shared<TimeHeadwayCondition>) 
		.property("entityRef", &TimeHeadwayCondition::entityRef) 
		.property("alongRoute", &TimeHeadwayCondition::alongRoute) 
		.property("freespace", &TimeHeadwayCondition::freespace) 
		.property("rule", &TimeHeadwayCondition::rule) 
		.property("value", &TimeHeadwayCondition::value) 
; 
//
	class_<TimeOfDay>("TimeOfDay") 
		.smart_ptr_constructor("TimeOfDay",&std::make_shared<TimeOfDay>) 
		.property("animation", &TimeOfDay::animation) 
		.property("dateTime", &TimeOfDay::dateTime) 
; 
//
	class_<TimeOfDayCondition>("TimeOfDayCondition") 
		.smart_ptr_constructor("TimeOfDayCondition",&std::make_shared<TimeOfDayCondition>) 
		.property("dateTime", &TimeOfDayCondition::dateTime) 
		.property("rule", &TimeOfDayCondition::rule) 
; 
//
	class_<TimeReference>("TimeReference") 
		.smart_ptr_constructor("TimeReference",&std::make_shared<TimeReference>) 
		.property("TimeReference", &TimeReference::m_TimeReference ) //
; 
//
	class_<TimeToCollisionCondition>("TimeToCollisionCondition") 
		.smart_ptr_constructor("TimeToCollisionCondition",&std::make_shared<TimeToCollisionCondition>) 
		.property("alongRoute", &TimeToCollisionCondition::alongRoute) 
		.property("freespace", &TimeToCollisionCondition::freespace) 
		.property("rule", &TimeToCollisionCondition::rule) 
		.property("value", &TimeToCollisionCondition::value) 
		.property("TimeToCollisionConditionTarget", &TimeToCollisionCondition::m_TimeToCollisionConditionTarget ) //TimeToCollisionConditionTarget
; 
//
	class_<TimeToCollisionConditionTarget>("TimeToCollisionConditionTarget") 
		.smart_ptr_constructor("TimeToCollisionConditionTarget",&std::make_shared<TimeToCollisionConditionTarget>) 
		.property("TimeToCollisionConditionTarget", &TimeToCollisionConditionTarget::m_TimeToCollisionConditionTarget ) //
; 
//
	class_<Timing>("Timing") 
		.smart_ptr_constructor("Timing",&std::make_shared<Timing>) 
		.property("domainAbsoluteRelative", &Timing::domainAbsoluteRelative) 
		.property("offset", &Timing::offset) 
		.property("scale", &Timing::scale) 
; 
//
	class_<TrafficAction>("TrafficAction") 
		.smart_ptr_constructor("TrafficAction",&std::make_shared<TrafficAction>) 
		.property("TrafficAction", &TrafficAction::m_TrafficAction ) //
; 
//
	class_<TrafficDefinition>("TrafficDefinition") 
		.smart_ptr_constructor("TrafficDefinition",&std::make_shared<TrafficDefinition>) 
		.property("name", &TrafficDefinition::name) 
		.property("VehicleCategoryDistribution", &TrafficDefinition::m_VehicleCategoryDistribution ) //VehicleCategoryDistribution
		.property("ControllerDistribution", &TrafficDefinition::m_ControllerDistribution ) //ControllerDistribution
; 
//
	class_<TrafficSignalAction>("TrafficSignalAction") 
		.smart_ptr_constructor("TrafficSignalAction",&std::make_shared<TrafficSignalAction>) 
		.property("TrafficSignalAction", &TrafficSignalAction::m_TrafficSignalAction ) //
; 
//
	class_<TrafficSignalCondition>("TrafficSignalCondition") 
		.smart_ptr_constructor("TrafficSignalCondition",&std::make_shared<TrafficSignalCondition>) 
		.property("name", &TrafficSignalCondition::name) 
		.property("state", &TrafficSignalCondition::state) 
; 
//
	class_<TrafficSignalController>("TrafficSignalController") 
		.smart_ptr_constructor("TrafficSignalController",&std::make_shared<TrafficSignalController>) 
		.property("delay", &TrafficSignalController::delay) 
		.property("name", &TrafficSignalController::name) 
		.property("reference", &TrafficSignalController::reference) 
		.property("Phase", &TrafficSignalController::m_Phases ) //Phase
; 
//
	class_<TrafficSignals>("TrafficSignals") 
		.smart_ptr_constructor("TrafficSignals",&std::make_shared<TrafficSignals>) 
		.property("TrafficSignalController", &TrafficSignals::m_TrafficSignalControllers ) //TrafficSignalController
; 
//
	class_<TrafficSignalControllerAction>("TrafficSignalControllerAction") 
		.smart_ptr_constructor("TrafficSignalControllerAction",&std::make_shared<TrafficSignalControllerAction>) 
		.property("trafficSignalControllerRef", &TrafficSignalControllerAction::trafficSignalControllerRef) 
		.property("phase", &TrafficSignalControllerAction::phase) 
; 
//
	class_<TrafficSignalControllerCondition>("TrafficSignalControllerCondition") 
		.smart_ptr_constructor("TrafficSignalControllerCondition",&std::make_shared<TrafficSignalControllerCondition>) 
		.property("trafficSignalControllerRef", &TrafficSignalControllerCondition::trafficSignalControllerRef) 
		.property("phase", &TrafficSignalControllerCondition::phase) 
; 
//
	class_<TrafficSignalState>("TrafficSignalState") 
		.smart_ptr_constructor("TrafficSignalState",&std::make_shared<TrafficSignalState>) 
		.property("state", &TrafficSignalState::state) 
		.property("trafficSignalId", &TrafficSignalState::trafficSignalId) 
; 
//
	class_<TrafficSignalStateAction>("TrafficSignalStateAction") 
		.smart_ptr_constructor("TrafficSignalStateAction",&std::make_shared<TrafficSignalStateAction>) 
		.property("name", &TrafficSignalStateAction::name) 
		.property("state", &TrafficSignalStateAction::state) 
; 
//
	class_<TrafficSinkAction>("TrafficSinkAction") 
		.smart_ptr_constructor("TrafficSinkAction",&std::make_shared<TrafficSinkAction>) 
		.property("radius", &TrafficSinkAction::radius) 
		.property("rate", &TrafficSinkAction::rate) 
		.property("Position", &TrafficSinkAction::m_Position ) //Position
		.property("TrafficDefinition", &TrafficSinkAction::m_TrafficDefinition ) //TrafficDefinition
; 
//
	class_<TrafficSourceAction>("TrafficSourceAction") 
		.smart_ptr_constructor("TrafficSourceAction",&std::make_shared<TrafficSourceAction>) 
		.property("radius", &TrafficSourceAction::radius) 
		.property("rate", &TrafficSourceAction::rate) 
		.property("velocity", &TrafficSourceAction::velocity) 
		.property("Position", &TrafficSourceAction::m_Position ) //Position
		.property("TrafficDefinition", &TrafficSourceAction::m_TrafficDefinition ) //TrafficDefinition
; 
//
	class_<TrafficSwarmAction>("TrafficSwarmAction") 
		.smart_ptr_constructor("TrafficSwarmAction",&std::make_shared<TrafficSwarmAction>) 
		.property("innerRadius", &TrafficSwarmAction::innerRadius) 
		.property("numberOfVehicles", &TrafficSwarmAction::numberOfVehicles) 
		.property("offset", &TrafficSwarmAction::offset) 
		.property("semiMajorAxis", &TrafficSwarmAction::semiMajorAxis) 
		.property("semiMinorAxis", &TrafficSwarmAction::semiMinorAxis) 
		.property("velocity", &TrafficSwarmAction::velocity) 
		.property("CentralObject", &TrafficSwarmAction::m_CentralObject ) //CentralSwarmObject
		.property("TrafficDefinition", &TrafficSwarmAction::m_TrafficDefinition ) //TrafficDefinition
; 
//
	class_<Trajectory>("Trajectory") 
		.smart_ptr_constructor("Trajectory",&std::make_shared<Trajectory>) 
		.property("closed", &Trajectory::closed) 
		.property("name", &Trajectory::name) 
		.property("ParameterDeclarations", &Trajectory::m_ParameterDeclarations ) //ParameterDeclarations
		.property("Shape", &Trajectory::m_Shape ) //Shape
; 
//
	class_<TrajectoryCatalogLocation>("TrajectoryCatalogLocation") 
		.smart_ptr_constructor("TrajectoryCatalogLocation",&std::make_shared<TrajectoryCatalogLocation>) 
		.property("Directory", &TrajectoryCatalogLocation::m_Directory ) //Directory
; 
//
	class_<TrajectoryFollowingMode>("TrajectoryFollowingMode") 
		.smart_ptr_constructor("TrajectoryFollowingMode",&std::make_shared<TrajectoryFollowingMode>) 
		.property("followingMode", &TrajectoryFollowingMode::followingMode) 
; 
//
	class_<TransitionDynamics>("TransitionDynamics") 
		.smart_ptr_constructor("TransitionDynamics",&std::make_shared<TransitionDynamics>) 
		.property("dynamicsDimension", &TransitionDynamics::dynamicsDimension) 
		.property("dynamicsShape", &TransitionDynamics::dynamicsShape) 
		.property("value", &TransitionDynamics::value) 
; 
//
	class_<TraveledDistanceCondition>("TraveledDistanceCondition") 
		.smart_ptr_constructor("TraveledDistanceCondition",&std::make_shared<TraveledDistanceCondition>) 
		.property("value", &TraveledDistanceCondition::value) 
; 
//
	class_<Trigger>("Trigger") 
		.smart_ptr_constructor("Trigger",&std::make_shared<Trigger>) 
		.property("ConditionGroup", &Trigger::m_ConditionGroups ) //ConditionGroup
; 
//
	class_<TriggeringEntities>("TriggeringEntities") 
		.smart_ptr_constructor("TriggeringEntities",&std::make_shared<TriggeringEntities>) 
		.property("triggeringEntitiesRule", &TriggeringEntities::triggeringEntitiesRule) 
		.property("EntityRef", &TriggeringEntities::m_EntityRefs ) //EntityRef
; 
//
	class_<UserDefinedAction>("UserDefinedAction") 
		.smart_ptr_constructor("UserDefinedAction",&std::make_shared<UserDefinedAction>) 
		.property("CustomCommandAction", &UserDefinedAction::m_CustomCommandAction ) //CustomCommandAction
; 
//
	class_<UserDefinedValueCondition>("UserDefinedValueCondition") 
		.smart_ptr_constructor("UserDefinedValueCondition",&std::make_shared<UserDefinedValueCondition>) 
		.property("name", &UserDefinedValueCondition::name) 
		.property("rule", &UserDefinedValueCondition::rule) 
		.property("value", &UserDefinedValueCondition::value) 
; 
//
	class_<Vehicle>("Vehicle") 
		.smart_ptr_constructor("Vehicle",&std::make_shared<Vehicle>) 
		.property("name", &Vehicle::name) 
		.property("vehicleCategory", &Vehicle::vehicleCategory) 
		.property("ParameterDeclarations", &Vehicle::m_ParameterDeclarations ) //ParameterDeclarations
		.property("BoundingBox", &Vehicle::m_BoundingBox ) //BoundingBox
		.property("Performance", &Vehicle::m_Performance ) //Performance
		.property("Axles", &Vehicle::m_Axles ) //Axles
		.property("Properties", &Vehicle::m_Properties ) //Properties
; 
//
	class_<VehicleCatalogLocation>("VehicleCatalogLocation") 
		.smart_ptr_constructor("VehicleCatalogLocation",&std::make_shared<VehicleCatalogLocation>) 
		.property("Directory", &VehicleCatalogLocation::m_Directory ) //Directory
; 
//
	class_<VehicleCategoryDistribution>("VehicleCategoryDistribution") 
		.smart_ptr_constructor("VehicleCategoryDistribution",&std::make_shared<VehicleCategoryDistribution>) 
		.property("VehicleCategoryDistributionEntry", &VehicleCategoryDistribution::m_VehicleCategoryDistributionEntrys ) //VehicleCategoryDistributionEntry
; 
//
	class_<VehicleCategoryDistributionEntry>("VehicleCategoryDistributionEntry") 
		.smart_ptr_constructor("VehicleCategoryDistributionEntry",&std::make_shared<VehicleCategoryDistributionEntry>) 
		.property("category", &VehicleCategoryDistributionEntry::category) 
		.property("weight", &VehicleCategoryDistributionEntry::weight) 
; 
//
	class_<Vertex>("Vertex") 
		.smart_ptr_constructor("Vertex",&std::make_shared<Vertex>) 
		.property("time", &Vertex::time) 
		.property("Position", &Vertex::m_Position ) //Position
; 
//
	class_<VisibilityAction>("VisibilityAction") 
		.smart_ptr_constructor("VisibilityAction",&std::make_shared<VisibilityAction>) 
		.property("graphics", &VisibilityAction::graphics) 
		.property("sensors", &VisibilityAction::sensors) 
		.property("traffic", &VisibilityAction::traffic) 
; 
//
	class_<Waypoint>("Waypoint") 
		.smart_ptr_constructor("Waypoint",&std::make_shared<Waypoint>) 
		.property("routeStrategy", &Waypoint::routeStrategy) 
		.property("Position", &Waypoint::m_Position ) //Position
; 
//
	class_<Weather>("Weather") 
		.smart_ptr_constructor("Weather",&std::make_shared<Weather>) 
		.property("cloudState", &Weather::cloudState) 
		.property("Sun", &Weather::m_Sun ) //Sun
		.property("Fog", &Weather::m_Fog ) //Fog
		.property("Precipitation", &Weather::m_Precipitation ) //Precipitation
; 
//
	class_<WorldPosition>("WorldPosition") 
		.smart_ptr_constructor("WorldPosition",&std::make_shared<WorldPosition>) 
		.property("h", &WorldPosition::h) 
		.property("p", &WorldPosition::p) 
		.property("r", &WorldPosition::r) 
		.property("x", &WorldPosition::x) 
		.property("y", &WorldPosition::y) 
		.property("z", &WorldPosition::z) 
; 
	// xs:group -> aliased to group definition
	class_<CatalogDefinition>("CatalogDefinition")  // Group CatalogDefinition
		.smart_ptr_constructor("CatalogDefinition",&std::make_shared<CatalogDefinition>) 
		.property("Catalog", &CatalogDefinition::m_Catalog ) //Catalog
	;
	// xs:group -> aliased to group definition
	class_<EntityObject>("EntityObject")  // Group EntityObject
		.smart_ptr_constructor("EntityObject",&std::make_shared<EntityObject>) 
		.property("CatalogReference", &EntityObject::m_CatalogReference ) //CatalogReference
		.property("Vehicle", &EntityObject::m_Vehicle ) //Vehicle
		.property("Pedestrian", &EntityObject::m_Pedestrian ) //Pedestrian
		.property("MiscObject", &EntityObject::m_MiscObject ) //MiscObject
	;
	// xs:group -> aliased to group definition
	class_<OpenScenarioCategory>("OpenScenarioCategory")  // Group OpenScenarioCategory
		.smart_ptr_constructor("OpenScenarioCategory",&std::make_shared<OpenScenarioCategory>) 
	.property("ScenarioDefinition", &OpenScenarioCategory::m_ScenarioDefinition ) // group read 
	.property("CatalogDefinition", &OpenScenarioCategory::m_CatalogDefinition ) // group read 
	;
	// xs:group -> aliased to group definition
	class_<ScenarioDefinition>("ScenarioDefinition")  // Group ScenarioDefinition
		.smart_ptr_constructor("ScenarioDefinition",&std::make_shared<ScenarioDefinition>) 
		.property("ParameterDeclarations", &ScenarioDefinition::m_ParameterDeclarations ) //ParameterDeclarations
		.property("CatalogLocations", &ScenarioDefinition::m_CatalogLocations ) //CatalogLocations
		.property("RoadNetwork", &ScenarioDefinition::m_RoadNetwork ) //RoadNetwork
		.property("Entities", &ScenarioDefinition::m_Entities ) //Entities
		.property("Storyboard", &ScenarioDefinition::m_Storyboard ) //Storyboard
	;
//
	//@js::enum_<e_CloudState>(m,"e_CloudState", js::arithmetic(),"")
	enum_<e_CloudState>("e_CloudState")  //""
		.value(enum2str<e_CloudState>(e_CloudState::CLOUDY).c_str(),e_CloudState::CLOUDY)            //cloudy
		.value(enum2str<e_CloudState>(e_CloudState::FREE).c_str(),e_CloudState::FREE)            //free
		.value(enum2str<e_CloudState>(e_CloudState::OVERCAST).c_str(),e_CloudState::OVERCAST)            //overcast
		.value(enum2str<e_CloudState>(e_CloudState::RAINY).c_str(),e_CloudState::RAINY)            //rainy
		.value(enum2str<e_CloudState>(e_CloudState::SKYOFF).c_str(),e_CloudState::SKYOFF);            //skyOff
	;
	//@js::enum_<e_ConditionEdge>(m,"e_ConditionEdge", js::arithmetic(),"")
	enum_<e_ConditionEdge>("e_ConditionEdge")  //""
		.value(enum2str<e_ConditionEdge>(e_ConditionEdge::FALLING).c_str(),e_ConditionEdge::FALLING)            //falling
		.value(enum2str<e_ConditionEdge>(e_ConditionEdge::NONE).c_str(),e_ConditionEdge::NONE)            //none
		.value(enum2str<e_ConditionEdge>(e_ConditionEdge::RISING).c_str(),e_ConditionEdge::RISING)            //rising
		.value(enum2str<e_ConditionEdge>(e_ConditionEdge::RISINGORFALLING).c_str(),e_ConditionEdge::RISINGORFALLING);            //risingOrFalling
	;
	//@js::enum_<e_DynamicsDimension>(m,"e_DynamicsDimension", js::arithmetic(),"")
	enum_<e_DynamicsDimension>("e_DynamicsDimension")  //""
		.value(enum2str<e_DynamicsDimension>(e_DynamicsDimension::DISTANCE).c_str(),e_DynamicsDimension::DISTANCE)            //distance
		.value(enum2str<e_DynamicsDimension>(e_DynamicsDimension::RATE).c_str(),e_DynamicsDimension::RATE)            //rate
		.value(enum2str<e_DynamicsDimension>(e_DynamicsDimension::TIME).c_str(),e_DynamicsDimension::TIME);            //time
	;
	//@js::enum_<e_DynamicsShape>(m,"e_DynamicsShape", js::arithmetic(),"")
	enum_<e_DynamicsShape>("e_DynamicsShape")  //""
		.value(enum2str<e_DynamicsShape>(e_DynamicsShape::CUBIC).c_str(),e_DynamicsShape::CUBIC)            //cubic
		.value(enum2str<e_DynamicsShape>(e_DynamicsShape::LINEAR).c_str(),e_DynamicsShape::LINEAR)            //linear
		.value(enum2str<e_DynamicsShape>(e_DynamicsShape::SINUSOIDAL).c_str(),e_DynamicsShape::SINUSOIDAL)            //sinusoidal
		.value(enum2str<e_DynamicsShape>(e_DynamicsShape::STEP).c_str(),e_DynamicsShape::STEP);            //step
	;
	//@js::enum_<e_FollowingMode>(m,"e_FollowingMode", js::arithmetic(),"")
	enum_<e_FollowingMode>("e_FollowingMode")  //""
		.value(enum2str<e_FollowingMode>(e_FollowingMode::FOLLOW).c_str(),e_FollowingMode::FOLLOW)            //follow
		.value(enum2str<e_FollowingMode>(e_FollowingMode::POSITION).c_str(),e_FollowingMode::POSITION);            //position
	;
	//@js::enum_<e_MiscObjectCategory>(m,"e_MiscObjectCategory", js::arithmetic(),"")
	enum_<e_MiscObjectCategory>("e_MiscObjectCategory")  //""
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::BARRIER).c_str(),e_MiscObjectCategory::BARRIER)            //barrier
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::BUILDING).c_str(),e_MiscObjectCategory::BUILDING)            //building
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::CROSSWALK).c_str(),e_MiscObjectCategory::CROSSWALK)            //crosswalk
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::GANTRY).c_str(),e_MiscObjectCategory::GANTRY)            //gantry
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::NONE).c_str(),e_MiscObjectCategory::NONE)            //none
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::OBSTACLE).c_str(),e_MiscObjectCategory::OBSTACLE)            //obstacle
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::PARKINGSPACE).c_str(),e_MiscObjectCategory::PARKINGSPACE)            //parkingSpace
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::PATCH).c_str(),e_MiscObjectCategory::PATCH)            //patch
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::POLE).c_str(),e_MiscObjectCategory::POLE)            //pole
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::RAILING).c_str(),e_MiscObjectCategory::RAILING)            //railing
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::ROADMARK).c_str(),e_MiscObjectCategory::ROADMARK)            //roadMark
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::SOUNDBARRIER).c_str(),e_MiscObjectCategory::SOUNDBARRIER)            //soundBarrier
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::STREETLAMP).c_str(),e_MiscObjectCategory::STREETLAMP)            //streetLamp
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::TRAFFICISLAND).c_str(),e_MiscObjectCategory::TRAFFICISLAND)            //trafficIsland
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::TREE).c_str(),e_MiscObjectCategory::TREE)            //tree
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::VEGETATION).c_str(),e_MiscObjectCategory::VEGETATION)            //vegetation
		.value(enum2str<e_MiscObjectCategory>(e_MiscObjectCategory::WIND).c_str(),e_MiscObjectCategory::WIND);            //wind
	;
	//@js::enum_<e_ObjectType>(m,"e_ObjectType", js::arithmetic(),"")
	enum_<e_ObjectType>("e_ObjectType")  //""
		.value(enum2str<e_ObjectType>(e_ObjectType::MISCELLANEOUS).c_str(),e_ObjectType::MISCELLANEOUS)            //miscellaneous
		.value(enum2str<e_ObjectType>(e_ObjectType::PEDESTRIAN).c_str(),e_ObjectType::PEDESTRIAN)            //pedestrian
		.value(enum2str<e_ObjectType>(e_ObjectType::VEHICLE).c_str(),e_ObjectType::VEHICLE);            //vehicle
	;
	//@js::enum_<e_ParameterType>(m,"e_ParameterType", js::arithmetic(),"")
	enum_<e_ParameterType>("e_ParameterType")  //""
		.value(enum2str<e_ParameterType>(e_ParameterType::BOOLEAN).c_str(),e_ParameterType::BOOLEAN)            //boolean
		.value(enum2str<e_ParameterType>(e_ParameterType::DATETIME).c_str(),e_ParameterType::DATETIME)            //dateTime
		.value(enum2str<e_ParameterType>(e_ParameterType::DOUBLE).c_str(),e_ParameterType::DOUBLE)            //double
		.value(enum2str<e_ParameterType>(e_ParameterType::INTEGER).c_str(),e_ParameterType::INTEGER)            //integer
		.value(enum2str<e_ParameterType>(e_ParameterType::STRING).c_str(),e_ParameterType::STRING)            //string
		.value(enum2str<e_ParameterType>(e_ParameterType::UNSIGNEDINT).c_str(),e_ParameterType::UNSIGNEDINT)            //unsignedInt
		.value(enum2str<e_ParameterType>(e_ParameterType::UNSIGNEDSHORT).c_str(),e_ParameterType::UNSIGNEDSHORT);            //unsignedShort
	;
	//@js::enum_<e_PedestrianCategory>(m,"e_PedestrianCategory", js::arithmetic(),"")
	enum_<e_PedestrianCategory>("e_PedestrianCategory")  //""
		.value(enum2str<e_PedestrianCategory>(e_PedestrianCategory::ANIMAL).c_str(),e_PedestrianCategory::ANIMAL)            //animal
		.value(enum2str<e_PedestrianCategory>(e_PedestrianCategory::PEDESTRIAN).c_str(),e_PedestrianCategory::PEDESTRIAN)            //pedestrian
		.value(enum2str<e_PedestrianCategory>(e_PedestrianCategory::WHEELCHAIR).c_str(),e_PedestrianCategory::WHEELCHAIR);            //wheelchair
	;
	//@js::enum_<e_PrecipitationType>(m,"e_PrecipitationType", js::arithmetic(),"")
	enum_<e_PrecipitationType>("e_PrecipitationType")  //""
		.value(enum2str<e_PrecipitationType>(e_PrecipitationType::DRY).c_str(),e_PrecipitationType::DRY)            //dry
		.value(enum2str<e_PrecipitationType>(e_PrecipitationType::RAIN).c_str(),e_PrecipitationType::RAIN)            //rain
		.value(enum2str<e_PrecipitationType>(e_PrecipitationType::SNOW).c_str(),e_PrecipitationType::SNOW);            //snow
	;
	//@js::enum_<e_Priority>(m,"e_Priority", js::arithmetic(),"")
	enum_<e_Priority>("e_Priority")  //""
		.value(enum2str<e_Priority>(e_Priority::OVERWRITE).c_str(),e_Priority::OVERWRITE)            //overwrite
		.value(enum2str<e_Priority>(e_Priority::PARALLEL).c_str(),e_Priority::PARALLEL)            //parallel
		.value(enum2str<e_Priority>(e_Priority::SKIP).c_str(),e_Priority::SKIP);            //skip
	;
	//@js::enum_<e_ReferenceContext>(m,"e_ReferenceContext", js::arithmetic(),"")
	enum_<e_ReferenceContext>("e_ReferenceContext")  //""
		.value(enum2str<e_ReferenceContext>(e_ReferenceContext::ABSOLUTE).c_str(),e_ReferenceContext::ABSOLUTE)            //absolute
		.value(enum2str<e_ReferenceContext>(e_ReferenceContext::RELATIVE).c_str(),e_ReferenceContext::RELATIVE);            //relative
	;
	//@js::enum_<e_RelativeDistanceType>(m,"e_RelativeDistanceType", js::arithmetic(),"")
	enum_<e_RelativeDistanceType>("e_RelativeDistanceType")  //""
		.value(enum2str<e_RelativeDistanceType>(e_RelativeDistanceType::CARTESIANDISTANCE).c_str(),e_RelativeDistanceType::CARTESIANDISTANCE)            //cartesianDistance
		.value(enum2str<e_RelativeDistanceType>(e_RelativeDistanceType::LATERAL).c_str(),e_RelativeDistanceType::LATERAL)            //lateral
		.value(enum2str<e_RelativeDistanceType>(e_RelativeDistanceType::LONGITUDINAL).c_str(),e_RelativeDistanceType::LONGITUDINAL);            //longitudinal
	;
	//@js::enum_<e_RouteStrategy>(m,"e_RouteStrategy", js::arithmetic(),"")
	enum_<e_RouteStrategy>("e_RouteStrategy")  //""
		.value(enum2str<e_RouteStrategy>(e_RouteStrategy::FASTEST).c_str(),e_RouteStrategy::FASTEST)            //fastest
		.value(enum2str<e_RouteStrategy>(e_RouteStrategy::LEASTINTERSECTIONS).c_str(),e_RouteStrategy::LEASTINTERSECTIONS)            //leastIntersections
		.value(enum2str<e_RouteStrategy>(e_RouteStrategy::RANDOM).c_str(),e_RouteStrategy::RANDOM)            //random
		.value(enum2str<e_RouteStrategy>(e_RouteStrategy::SHORTEST).c_str(),e_RouteStrategy::SHORTEST);            //shortest
	;
	//@js::enum_<e_Rule>(m,"e_Rule", js::arithmetic(),"")
	enum_<e_Rule>("e_Rule")  //""
		.value(enum2str<e_Rule>(e_Rule::EQUALTO).c_str(),e_Rule::EQUALTO)            //equalTo
		.value(enum2str<e_Rule>(e_Rule::GREATERTHAN).c_str(),e_Rule::GREATERTHAN)            //greaterThan
		.value(enum2str<e_Rule>(e_Rule::LESSTHAN).c_str(),e_Rule::LESSTHAN);            //lessThan
	;
	//@js::enum_<e_SpeedTargetValueType>(m,"e_SpeedTargetValueType", js::arithmetic(),"")
	enum_<e_SpeedTargetValueType>("e_SpeedTargetValueType")  //""
		.value(enum2str<e_SpeedTargetValueType>(e_SpeedTargetValueType::DELTA).c_str(),e_SpeedTargetValueType::DELTA)            //delta
		.value(enum2str<e_SpeedTargetValueType>(e_SpeedTargetValueType::FACTOR).c_str(),e_SpeedTargetValueType::FACTOR);            //factor
	;
	//@js::enum_<e_StoryboardElementState>(m,"e_StoryboardElementState", js::arithmetic(),"")
	enum_<e_StoryboardElementState>("e_StoryboardElementState")  //""
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::COMPLETESTATE).c_str(),e_StoryboardElementState::COMPLETESTATE)            //completeState
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::ENDTRANSITION).c_str(),e_StoryboardElementState::ENDTRANSITION)            //endTransition
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::RUNNINGSTATE).c_str(),e_StoryboardElementState::RUNNINGSTATE)            //runningState
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::SKIPTRANSITION).c_str(),e_StoryboardElementState::SKIPTRANSITION)            //skipTransition
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::STANDBYSTATE).c_str(),e_StoryboardElementState::STANDBYSTATE)            //standbyState
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::STARTTRANSITION).c_str(),e_StoryboardElementState::STARTTRANSITION)            //startTransition
		.value(enum2str<e_StoryboardElementState>(e_StoryboardElementState::STOPTRANSITION).c_str(),e_StoryboardElementState::STOPTRANSITION);            //stopTransition
	;
	//@js::enum_<e_StoryboardElementType>(m,"e_StoryboardElementType", js::arithmetic(),"")
	enum_<e_StoryboardElementType>("e_StoryboardElementType")  //""
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::ACT).c_str(),e_StoryboardElementType::ACT)            //act
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::ACTION).c_str(),e_StoryboardElementType::ACTION)            //action
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::EVENT).c_str(),e_StoryboardElementType::EVENT)            //event
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::MANEUVER).c_str(),e_StoryboardElementType::MANEUVER)            //maneuver
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::MANEUVERGROUP).c_str(),e_StoryboardElementType::MANEUVERGROUP)            //maneuverGroup
		.value(enum2str<e_StoryboardElementType>(e_StoryboardElementType::STORY).c_str(),e_StoryboardElementType::STORY);            //story
	;
	//@js::enum_<e_TriggeringEntitiesRule>(m,"e_TriggeringEntitiesRule", js::arithmetic(),"")
	enum_<e_TriggeringEntitiesRule>("e_TriggeringEntitiesRule")  //""
		.value(enum2str<e_TriggeringEntitiesRule>(e_TriggeringEntitiesRule::ALL).c_str(),e_TriggeringEntitiesRule::ALL)            //all
		.value(enum2str<e_TriggeringEntitiesRule>(e_TriggeringEntitiesRule::ANY).c_str(),e_TriggeringEntitiesRule::ANY);            //any
	;
	//@js::enum_<e_VehicleCategory>(m,"e_VehicleCategory", js::arithmetic(),"")
	enum_<e_VehicleCategory>("e_VehicleCategory")  //""
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::BICYCLE).c_str(),e_VehicleCategory::BICYCLE)            //bicycle
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::BUS).c_str(),e_VehicleCategory::BUS)            //bus
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::CAR).c_str(),e_VehicleCategory::CAR)            //car
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::MOTORBIKE).c_str(),e_VehicleCategory::MOTORBIKE)            //motorbike
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::SEMITRAILER).c_str(),e_VehicleCategory::SEMITRAILER)            //semitrailer
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::TRAILER).c_str(),e_VehicleCategory::TRAILER)            //trailer
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::TRAIN).c_str(),e_VehicleCategory::TRAIN)            //train
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::TRAM).c_str(),e_VehicleCategory::TRAM)            //tram
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::TRUCK).c_str(),e_VehicleCategory::TRUCK)            //truck
		.value(enum2str<e_VehicleCategory>(e_VehicleCategory::VAN).c_str(),e_VehicleCategory::VAN);            //van
	;
	class_<Boolean>("Boolean") // union definition
		.smart_ptr_constructor("Boolean",&std::make_shared<Boolean>) 
		.property("m_parameter",&Boolean::m_parameter)
		.property("m_boolean",&Boolean::m_boolean)
	;
	class_<DateTime>("DateTime") // union definition
		.smart_ptr_constructor("DateTime",&std::make_shared<DateTime>) 
		.property("m_parameter",&DateTime::m_parameter)
		.property("m_dateTime",&DateTime::m_dateTime)
	;
	class_<Double>("Double") // union definition
		.smart_ptr_constructor("Double",&std::make_shared<Double>) 
		.property("m_parameter",&Double::m_parameter)
		.property("m_double",&Double::m_double)
	;
	class_<Int>("Int") // union definition
		.smart_ptr_constructor("Int",&std::make_shared<Int>) 
		.property("m_parameter",&Int::m_parameter)
		.property("m_int",&Int::m_int)
	;
	class_<String>("String") // union definition
		.smart_ptr_constructor("String",&std::make_shared<String>) 
		.property("m_parameter",&String::m_parameter)
		.property("m_string",&String::m_string)
	;
	class_<UnsignedInt>("UnsignedInt") // union definition
		.smart_ptr_constructor("UnsignedInt",&std::make_shared<UnsignedInt>) 
		.property("m_parameter",&UnsignedInt::m_parameter)
		.property("m_unsignedInt",&UnsignedInt::m_unsignedInt)
	;
	class_<UnsignedShort>("UnsignedShort") // union definition
		.smart_ptr_constructor("UnsignedShort",&std::make_shared<UnsignedShort>) 
		.property("m_parameter",&UnsignedShort::m_parameter)
		.property("m_unsignedShort",&UnsignedShort::m_unsignedShort)
	;
	class_<CloudState>("CloudState") // union definition
		.smart_ptr_constructor("CloudState",&std::make_shared<CloudState>) 
		.property("m_parameter",&CloudState::m_parameter)
		.property("cloudState",&CloudState::cloudState)
	;
	class_<ConditionEdge>("ConditionEdge") // union definition
		.smart_ptr_constructor("ConditionEdge",&std::make_shared<ConditionEdge>) 
		.property("m_parameter",&ConditionEdge::m_parameter)
		.property("conditionEdge",&ConditionEdge::conditionEdge)
	;
	class_<DynamicsDimension>("DynamicsDimension") // union definition
		.smart_ptr_constructor("DynamicsDimension",&std::make_shared<DynamicsDimension>) 
		.property("m_parameter",&DynamicsDimension::m_parameter)
		.property("dynamicsDimension",&DynamicsDimension::dynamicsDimension)
	;
	class_<DynamicsShape>("DynamicsShape") // union definition
		.smart_ptr_constructor("DynamicsShape",&std::make_shared<DynamicsShape>) 
		.property("m_parameter",&DynamicsShape::m_parameter)
		.property("dynamicsShape",&DynamicsShape::dynamicsShape)
	;
	class_<FollowingMode>("FollowingMode") // union definition
		.smart_ptr_constructor("FollowingMode",&std::make_shared<FollowingMode>) 
		.property("m_parameter",&FollowingMode::m_parameter)
		.property("followingMode",&FollowingMode::followingMode)
	;
	class_<MiscObjectCategory>("MiscObjectCategory") // union definition
		.smart_ptr_constructor("MiscObjectCategory",&std::make_shared<MiscObjectCategory>) 
		.property("m_parameter",&MiscObjectCategory::m_parameter)
		.property("miscObjectCategory",&MiscObjectCategory::miscObjectCategory)
	;
	class_<ObjectType>("ObjectType") // union definition
		.smart_ptr_constructor("ObjectType",&std::make_shared<ObjectType>) 
		.property("m_parameter",&ObjectType::m_parameter)
		.property("objectType",&ObjectType::objectType)
	;
	class_<ParameterType>("ParameterType") // union definition
		.smart_ptr_constructor("ParameterType",&std::make_shared<ParameterType>) 
		.property("m_parameter",&ParameterType::m_parameter)
		.property("parameterType",&ParameterType::parameterType)
	;
	class_<PedestrianCategory>("PedestrianCategory") // union definition
		.smart_ptr_constructor("PedestrianCategory",&std::make_shared<PedestrianCategory>) 
		.property("m_parameter",&PedestrianCategory::m_parameter)
		.property("pedestrianCategory",&PedestrianCategory::pedestrianCategory)
	;
	class_<PrecipitationType>("PrecipitationType") // union definition
		.smart_ptr_constructor("PrecipitationType",&std::make_shared<PrecipitationType>) 
		.property("m_parameter",&PrecipitationType::m_parameter)
		.property("precipitationType",&PrecipitationType::precipitationType)
	;
	class_<Priority>("Priority") // union definition
		.smart_ptr_constructor("Priority",&std::make_shared<Priority>) 
		.property("m_parameter",&Priority::m_parameter)
		.property("priority",&Priority::priority)
	;
	class_<ReferenceContext>("ReferenceContext") // union definition
		.smart_ptr_constructor("ReferenceContext",&std::make_shared<ReferenceContext>) 
		.property("m_parameter",&ReferenceContext::m_parameter)
		.property("referenceContext",&ReferenceContext::referenceContext)
	;
	class_<RelativeDistanceType>("RelativeDistanceType") // union definition
		.smart_ptr_constructor("RelativeDistanceType",&std::make_shared<RelativeDistanceType>) 
		.property("m_parameter",&RelativeDistanceType::m_parameter)
		.property("relativeDistanceType",&RelativeDistanceType::relativeDistanceType)
	;
	class_<RouteStrategy>("RouteStrategy") // union definition
		.smart_ptr_constructor("RouteStrategy",&std::make_shared<RouteStrategy>) 
		.property("m_parameter",&RouteStrategy::m_parameter)
		.property("routeStrategy",&RouteStrategy::routeStrategy)
	;
	class_<Rule>("Rule") // union definition
		.smart_ptr_constructor("Rule",&std::make_shared<Rule>) 
		.property("m_parameter",&Rule::m_parameter)
		.property("rule",&Rule::rule)
	;
	class_<SpeedTargetValueType>("SpeedTargetValueType") // union definition
		.smart_ptr_constructor("SpeedTargetValueType",&std::make_shared<SpeedTargetValueType>) 
		.property("m_parameter",&SpeedTargetValueType::m_parameter)
		.property("speedTargetValueType",&SpeedTargetValueType::speedTargetValueType)
	;
	class_<StoryboardElementState>("StoryboardElementState") // union definition
		.smart_ptr_constructor("StoryboardElementState",&std::make_shared<StoryboardElementState>) 
		.property("m_parameter",&StoryboardElementState::m_parameter)
		.property("storyboardElementState",&StoryboardElementState::storyboardElementState)
	;
	class_<StoryboardElementType>("StoryboardElementType") // union definition
		.smart_ptr_constructor("StoryboardElementType",&std::make_shared<StoryboardElementType>) 
		.property("m_parameter",&StoryboardElementType::m_parameter)
		.property("storyboardElementType",&StoryboardElementType::storyboardElementType)
	;
	class_<TriggeringEntitiesRule>("TriggeringEntitiesRule") // union definition
		.smart_ptr_constructor("TriggeringEntitiesRule",&std::make_shared<TriggeringEntitiesRule>) 
		.property("m_parameter",&TriggeringEntitiesRule::m_parameter)
		.property("triggeringEntitiesRule",&TriggeringEntitiesRule::triggeringEntitiesRule)
	;
	class_<VehicleCategory>("VehicleCategory") // union definition
		.smart_ptr_constructor("VehicleCategory",&std::make_shared<VehicleCategory>) 
		.property("m_parameter",&VehicleCategory::m_parameter)
		.property("vehicleCategory",&VehicleCategory::vehicleCategory)
	;
//
	class_<xosc>("xosc")  // "Main Clazz for interfacing with OpenSCENARIO"
		.smart_ptr_constructor("xosc",&std::make_shared<xosc>) 
		//.function("load", &xosc::load, js::arg("filename"))
		.function("parse", &xosc::parse)
		.property("OpenSCENARIO", &xosc::m_OpenSCENARIO);
}

//
//  OpenSCENARIO.cxx
//  xsd2cxx- for OpenDrive CXX classes
//
//  Created by Javed Shaik on Sat Jul 11 12:40:05 2020
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 0473a170-1000-40b0-89cf-3489fc527163 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
//
#include "xosc.h"
Boolean::Boolean(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	m_boolean = attr.as_bool();
}
DateTime::DateTime(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	m_dateTime = attr.as_string();
}
Double::Double(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	m_double = attr.as_double();
}
Int::Int(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	m_int = attr.as_int();
}
String::String(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	m_string = attr.as_string();
}
UnsignedInt::UnsignedInt(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	m_unsignedInt = attr.as_ullong();
}
UnsignedShort::UnsignedShort(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	m_unsignedShort = attr.as_ullong();
}
CloudState::CloudState(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_CloudState>(attr.as_string())) { cloudState = str2enum<e_CloudState>(attr.as_string()); }
}
ConditionEdge::ConditionEdge(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_ConditionEdge>(attr.as_string())) { conditionEdge = str2enum<e_ConditionEdge>(attr.as_string()); }
}
DynamicsDimension::DynamicsDimension(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_DynamicsDimension>(attr.as_string())) { dynamicsDimension = str2enum<e_DynamicsDimension>(attr.as_string()); }
}
DynamicsShape::DynamicsShape(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_DynamicsShape>(attr.as_string())) { dynamicsShape = str2enum<e_DynamicsShape>(attr.as_string()); }
}
FollowingMode::FollowingMode(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_FollowingMode>(attr.as_string())) { followingMode = str2enum<e_FollowingMode>(attr.as_string()); }
}
MiscObjectCategory::MiscObjectCategory(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_MiscObjectCategory>(attr.as_string())) { miscObjectCategory = str2enum<e_MiscObjectCategory>(attr.as_string()); }
}
ObjectType::ObjectType(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_ObjectType>(attr.as_string())) { objectType = str2enum<e_ObjectType>(attr.as_string()); }
}
ParameterType::ParameterType(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_ParameterType>(attr.as_string())) { parameterType = str2enum<e_ParameterType>(attr.as_string()); }
}
PedestrianCategory::PedestrianCategory(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_PedestrianCategory>(attr.as_string())) { pedestrianCategory = str2enum<e_PedestrianCategory>(attr.as_string()); }
}
PrecipitationType::PrecipitationType(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_PrecipitationType>(attr.as_string())) { precipitationType = str2enum<e_PrecipitationType>(attr.as_string()); }
}
Priority::Priority(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_Priority>(attr.as_string())) { priority = str2enum<e_Priority>(attr.as_string()); }
}
ReferenceContext::ReferenceContext(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_ReferenceContext>(attr.as_string())) { referenceContext = str2enum<e_ReferenceContext>(attr.as_string()); }
}
RelativeDistanceType::RelativeDistanceType(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_RelativeDistanceType>(attr.as_string())) { relativeDistanceType = str2enum<e_RelativeDistanceType>(attr.as_string()); }
}
RouteStrategy::RouteStrategy(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_RouteStrategy>(attr.as_string())) { routeStrategy = str2enum<e_RouteStrategy>(attr.as_string()); }
}
Rule::Rule(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_Rule>(attr.as_string())) { rule = str2enum<e_Rule>(attr.as_string()); }
}
SpeedTargetValueType::SpeedTargetValueType(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_SpeedTargetValueType>(attr.as_string())) { speedTargetValueType = str2enum<e_SpeedTargetValueType>(attr.as_string()); }
}
StoryboardElementState::StoryboardElementState(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_StoryboardElementState>(attr.as_string())) { storyboardElementState = str2enum<e_StoryboardElementState>(attr.as_string()); }
}
StoryboardElementType::StoryboardElementType(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_StoryboardElementType>(attr.as_string())) { storyboardElementType = str2enum<e_StoryboardElementType>(attr.as_string()); }
}
TriggeringEntitiesRule::TriggeringEntitiesRule(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_TriggeringEntitiesRule>(attr.as_string())) { triggeringEntitiesRule = str2enum<e_TriggeringEntitiesRule>(attr.as_string()); }
}
VehicleCategory::VehicleCategory(pugi::xml_attribute attr)
{
	if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_VehicleCategory>(attr.as_string())) { vehicleCategory = str2enum<e_VehicleCategory>(attr.as_string()); }
}
Action_U::Action_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"GlobalAction")==0) { m_GlobalAction = std::make_shared<GlobalAction>(node); }
	if (strcmp(node.name(),"UserDefinedAction")==0) { m_UserDefinedAction = std::make_shared<UserDefinedAction>(node); }
	if (strcmp(node.name(),"PrivateAction")==0) { m_PrivateAction = std::make_shared<PrivateAction>(node); }
}
AssignControllerAction_U::AssignControllerAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }
	if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }
}
AssignRouteAction_U::AssignRouteAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"Route")==0) { m_Route = std::make_shared<Route>(node); }
	if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }
}
ByValueCondition_U::ByValueCondition_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"ParameterCondition")==0) { m_ParameterCondition = std::make_shared<ParameterCondition>(node); }
	if (strcmp(node.name(),"TimeOfDayCondition")==0) { m_TimeOfDayCondition = std::make_shared<TimeOfDayCondition>(node); }
	if (strcmp(node.name(),"SimulationTimeCondition")==0) { m_SimulationTimeCondition = std::make_shared<SimulationTimeCondition>(node); }
	if (strcmp(node.name(),"StoryboardElementStateCondition")==0) { m_StoryboardElementStateCondition = std::make_shared<StoryboardElementStateCondition>(node); }
	if (strcmp(node.name(),"UserDefinedValueCondition")==0) { m_UserDefinedValueCondition = std::make_shared<UserDefinedValueCondition>(node); }
	if (strcmp(node.name(),"TrafficSignalCondition")==0) { m_TrafficSignalCondition = std::make_shared<TrafficSignalCondition>(node); }
	if (strcmp(node.name(),"TrafficSignalControllerCondition")==0) { m_TrafficSignalControllerCondition = std::make_shared<TrafficSignalControllerCondition>(node); }
}
CollisionCondition_U::CollisionCondition_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"EntityRef")==0) { m_EntityRef = std::make_shared<EntityRef>(node); }
	if (strcmp(node.name(),"ByType")==0) { m_ByType = std::make_shared<ByObjectType>(node); }
}
Condition_U::Condition_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"ByEntityCondition")==0) { m_ByEntityCondition = std::make_shared<ByEntityCondition>(node); }
	if (strcmp(node.name(),"ByValueCondition")==0) { m_ByValueCondition = std::make_shared<ByValueCondition>(node); }
}
ControllerDistributionEntry_U::ControllerDistributionEntry_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }
	if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }
}
EntityAction_U::EntityAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"AddEntityAction")==0) { m_AddEntityAction = std::make_shared<AddEntityAction>(node); }
	if (strcmp(node.name(),"DeleteEntityAction")==0) { m_DeleteEntityAction = std::make_shared<DeleteEntityAction>(node); }
}
EntityCondition_U::EntityCondition_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"EndOfRoadCondition")==0) { m_EndOfRoadCondition = std::make_shared<EndOfRoadCondition>(node); }
	if (strcmp(node.name(),"CollisionCondition")==0) { m_CollisionCondition = std::make_shared<CollisionCondition>(node); }
	if (strcmp(node.name(),"OffroadCondition")==0) { m_OffroadCondition = std::make_shared<OffroadCondition>(node); }
	if (strcmp(node.name(),"TimeHeadwayCondition")==0) { m_TimeHeadwayCondition = std::make_shared<TimeHeadwayCondition>(node); }
	if (strcmp(node.name(),"TimeToCollisionCondition")==0) { m_TimeToCollisionCondition = std::make_shared<TimeToCollisionCondition>(node); }
	if (strcmp(node.name(),"AccelerationCondition")==0) { m_AccelerationCondition = std::make_shared<AccelerationCondition>(node); }
	if (strcmp(node.name(),"StandStillCondition")==0) { m_StandStillCondition = std::make_shared<StandStillCondition>(node); }
	if (strcmp(node.name(),"SpeedCondition")==0) { m_SpeedCondition = std::make_shared<SpeedCondition>(node); }
	if (strcmp(node.name(),"RelativeSpeedCondition")==0) { m_RelativeSpeedCondition = std::make_shared<RelativeSpeedCondition>(node); }
	if (strcmp(node.name(),"TraveledDistanceCondition")==0) { m_TraveledDistanceCondition = std::make_shared<TraveledDistanceCondition>(node); }
	if (strcmp(node.name(),"ReachPositionCondition")==0) { m_ReachPositionCondition = std::make_shared<ReachPositionCondition>(node); }
	if (strcmp(node.name(),"DistanceCondition")==0) { m_DistanceCondition = std::make_shared<DistanceCondition>(node); }
	if (strcmp(node.name(),"RelativeDistanceCondition")==0) { m_RelativeDistanceCondition = std::make_shared<RelativeDistanceCondition>(node); }
}
EnvironmentAction_U::EnvironmentAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"Environment")==0) { m_Environment = std::make_shared<Environment>(node); }
	if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }
}
FinalSpeed_U::FinalSpeed_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"AbsoluteSpeed")==0) { m_AbsoluteSpeed = std::make_shared<AbsoluteSpeed>(node); }
	if (strcmp(node.name(),"RelativeSpeedToMaster")==0) { m_RelativeSpeedToMaster = std::make_shared<RelativeSpeedToMaster>(node); }
}
GlobalAction_U::GlobalAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"EnvironmentAction")==0) { m_EnvironmentAction = std::make_shared<EnvironmentAction>(node); }
	if (strcmp(node.name(),"EntityAction")==0) { m_EntityAction = std::make_shared<EntityAction>(node); }
	if (strcmp(node.name(),"ParameterAction")==0) { m_ParameterAction = std::make_shared<ParameterAction>(node); }
	if (strcmp(node.name(),"InfrastructureAction")==0) { m_InfrastructureAction = std::make_shared<InfrastructureAction>(node); }
	if (strcmp(node.name(),"TrafficAction")==0) { m_TrafficAction = std::make_shared<TrafficAction>(node); }
}
InRoutePosition_U::InRoutePosition_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"FromCurrentEntity")==0) { m_FromCurrentEntity = std::make_shared<PositionOfCurrentEntity>(node); }
	if (strcmp(node.name(),"FromRoadCoordinates")==0) { m_FromRoadCoordinates = std::make_shared<PositionInRoadCoordinates>(node); }
	if (strcmp(node.name(),"FromLaneCoordinates")==0) { m_FromLaneCoordinates = std::make_shared<PositionInLaneCoordinates>(node); }
}
LaneChangeTarget_U::LaneChangeTarget_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"RelativeTargetLane")==0) { m_RelativeTargetLane = std::make_shared<RelativeTargetLane>(node); }
	if (strcmp(node.name(),"AbsoluteTargetLane")==0) { m_AbsoluteTargetLane = std::make_shared<AbsoluteTargetLane>(node); }
}
LaneOffsetTarget_U::LaneOffsetTarget_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"RelativeTargetLaneOffset")==0) { m_RelativeTargetLaneOffset = std::make_shared<RelativeTargetLaneOffset>(node); }
	if (strcmp(node.name(),"AbsoluteTargetLaneOffset")==0) { m_AbsoluteTargetLaneOffset = std::make_shared<AbsoluteTargetLaneOffset>(node); }
}
LateralAction_U::LateralAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"LaneChangeAction")==0) { m_LaneChangeAction = std::make_shared<LaneChangeAction>(node); }
	if (strcmp(node.name(),"LaneOffsetAction")==0) { m_LaneOffsetAction = std::make_shared<LaneOffsetAction>(node); }
	if (strcmp(node.name(),"LateralDistanceAction")==0) { m_LateralDistanceAction = std::make_shared<LateralDistanceAction>(node); }
}
LongitudinalAction_U::LongitudinalAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"SpeedAction")==0) { m_SpeedAction = std::make_shared<SpeedAction>(node); }
	if (strcmp(node.name(),"LongitudinalDistanceAction")==0) { m_LongitudinalDistanceAction = std::make_shared<LongitudinalDistanceAction>(node); }
}
ModifyRule_U::ModifyRule_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"AddValue")==0) { m_AddValue = std::make_shared<ParameterAddValueRule>(node); }
	if (strcmp(node.name(),"MultiplyByValue")==0) { m_MultiplyByValue = std::make_shared<ParameterMultiplyByValueRule>(node); }
}
ObjectController_U::ObjectController_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }
	if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }
}
ParameterAction_U::ParameterAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"SetAction")==0) { m_SetAction = std::make_shared<ParameterSetAction>(node); }
	if (strcmp(node.name(),"ModifyAction")==0) { m_ModifyAction = std::make_shared<ParameterModifyAction>(node); }
}
Position_U::Position_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"WorldPosition")==0) { m_WorldPosition = std::make_shared<WorldPosition>(node); }
	if (strcmp(node.name(),"RelativeWorldPosition")==0) { m_RelativeWorldPosition = std::make_shared<RelativeWorldPosition>(node); }
	if (strcmp(node.name(),"RelativeObjectPosition")==0) { m_RelativeObjectPosition = std::make_shared<RelativeObjectPosition>(node); }
	if (strcmp(node.name(),"RoadPosition")==0) { m_RoadPosition = std::make_shared<RoadPosition>(node); }
	if (strcmp(node.name(),"RelativeRoadPosition")==0) { m_RelativeRoadPosition = std::make_shared<RelativeRoadPosition>(node); }
	if (strcmp(node.name(),"LanePosition")==0) { m_LanePosition = std::make_shared<LanePosition>(node); }
	if (strcmp(node.name(),"RelativeLanePosition")==0) { m_RelativeLanePosition = std::make_shared<RelativeLanePosition>(node); }
	if (strcmp(node.name(),"RoutePosition")==0) { m_RoutePosition = std::make_shared<RoutePosition>(node); }
}
PrivateAction_U::PrivateAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"LongitudinalAction")==0) { m_LongitudinalAction = std::make_shared<LongitudinalAction>(node); }
	if (strcmp(node.name(),"LateralAction")==0) { m_LateralAction = std::make_shared<LateralAction>(node); }
	if (strcmp(node.name(),"VisibilityAction")==0) { m_VisibilityAction = std::make_shared<VisibilityAction>(node); }
	if (strcmp(node.name(),"SynchronizeAction")==0) { m_SynchronizeAction = std::make_shared<SynchronizeAction>(node); }
	if (strcmp(node.name(),"ActivateControllerAction")==0) { m_ActivateControllerAction = std::make_shared<ActivateControllerAction>(node); }
	if (strcmp(node.name(),"ControllerAction")==0) { m_ControllerAction = std::make_shared<ControllerAction>(node); }
	if (strcmp(node.name(),"TeleportAction")==0) { m_TeleportAction = std::make_shared<TeleportAction>(node); }
	if (strcmp(node.name(),"RoutingAction")==0) { m_RoutingAction = std::make_shared<RoutingAction>(node); }
}
RouteRef_U::RouteRef_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"Route")==0) { m_Route = std::make_shared<Route>(node); }
	if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }
}
RoutingAction_U::RoutingAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"AssignRouteAction")==0) { m_AssignRouteAction = std::make_shared<AssignRouteAction>(node); }
	if (strcmp(node.name(),"FollowTrajectoryAction")==0) { m_FollowTrajectoryAction = std::make_shared<FollowTrajectoryAction>(node); }
	if (strcmp(node.name(),"AcquirePositionAction")==0) { m_AcquirePositionAction = std::make_shared<AcquirePositionAction>(node); }
}
SelectedEntities_U::SelectedEntities_U(pugi::xml_node node)
{
	for (pugi::xml_node e_EntityRef : node.children())
	{
		if (strcmp(node.name(),"EntityRef")==0)
		{
			m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef));
		}
	}
	for (pugi::xml_node e_ByType : node.children())
	{
		if (strcmp(node.name(),"ByType")==0)
		{
			m_ByTypes.push_back(std::make_shared<ByType>(e_ByType));
		}
	}
}
Shape_U::Shape_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"Polyline")==0) { m_Polyline = std::make_shared<Polyline>(node); }
	if (strcmp(node.name(),"Clothoid")==0) { m_Clothoid = std::make_shared<Clothoid>(node); }
	if (strcmp(node.name(),"Nurbs")==0) { m_Nurbs = std::make_shared<Nurbs>(node); }
}
SpeedActionTarget_U::SpeedActionTarget_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"RelativeTargetSpeed")==0) { m_RelativeTargetSpeed = std::make_shared<RelativeTargetSpeed>(node); }
	if (strcmp(node.name(),"AbsoluteTargetSpeed")==0) { m_AbsoluteTargetSpeed = std::make_shared<AbsoluteTargetSpeed>(node); }
}
TimeReference_U::TimeReference_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"None")==0) { m_None = std::make_shared<None>(node); }
	if (strcmp(node.name(),"Timing")==0) { m_Timing = std::make_shared<Timing>(node); }
}
TimeToCollisionConditionTarget_U::TimeToCollisionConditionTarget_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"Position")==0) { m_Position = std::make_shared<Position>(node); }
	if (strcmp(node.name(),"EntityRef")==0) { m_EntityRef = std::make_shared<EntityRef>(node); }
}
TrafficAction_U::TrafficAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"TrafficSourceAction")==0) { m_TrafficSourceAction = std::make_shared<TrafficSourceAction>(node); }
	if (strcmp(node.name(),"TrafficSinkAction")==0) { m_TrafficSinkAction = std::make_shared<TrafficSinkAction>(node); }
	if (strcmp(node.name(),"TrafficSwarmAction")==0) { m_TrafficSwarmAction = std::make_shared<TrafficSwarmAction>(node); }
}
TrafficSignalAction_U::TrafficSignalAction_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"TrafficSignalControllerAction")==0) { m_TrafficSignalControllerAction = std::make_shared<TrafficSignalControllerAction>(node); }
	if (strcmp(node.name(),"TrafficSignalStateAction")==0) { m_TrafficSignalStateAction = std::make_shared<TrafficSignalStateAction>(node); }
}
AbsoluteSpeed::AbsoluteSpeed(pugi::xml_node node)
{
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
AbsoluteTargetLane::AbsoluteTargetLane(pugi::xml_node node)
{
	if (node.attribute("value")) { value = String(node.attribute("value")); }  // TODO: >> union - handle properly
}
AbsoluteTargetLaneOffset::AbsoluteTargetLaneOffset(pugi::xml_node node)
{
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
AbsoluteTargetSpeed::AbsoluteTargetSpeed(pugi::xml_node node)
{
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
AccelerationCondition::AccelerationCondition(pugi::xml_node node)
{
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
AcquirePositionAction::AcquirePositionAction(pugi::xml_node node)
{
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
Act::Act(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_ManeuverGroup = node.child("ManeuverGroup"); e_ManeuverGroup; e_ManeuverGroup= e_ManeuverGroup.next_sibling("ManeuverGroup"))
	{
		m_ManeuverGroups.push_back(std::make_shared<ManeuverGroup>(e_ManeuverGroup));
	}
	if (node.child("StartTrigger")) { m_StartTrigger = std::make_shared<Trigger>(node.child("StartTrigger")); }
	if (node.child("StopTrigger")) { m_StopTrigger = std::make_shared<Trigger>(node.child("StopTrigger")); }
}
Action::Action(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
    //Action_U	m_Action;
	if (node.first_child()) { m_Action = std::make_shared<Action_U>(node.first_child()); }
}
ActivateControllerAction::ActivateControllerAction(pugi::xml_node node)
{
	if (node.attribute("lateral")) { lateral = Boolean(node.attribute("lateral")); }  // TODO: >> union - handle properly
	if (node.attribute("longitudinal")) { longitudinal = Boolean(node.attribute("longitudinal")); }  // TODO: >> union - handle properly
}
Actors::Actors(pugi::xml_node node)
{
	if (node.attribute("selectTriggeringEntities")) { selectTriggeringEntities = Boolean(node.attribute("selectTriggeringEntities")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_EntityRef = node.child("EntityRef"); e_EntityRef; e_EntityRef= e_EntityRef.next_sibling("EntityRef"))
	{
		m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef));
	}
}
AddEntityAction::AddEntityAction(pugi::xml_node node)
{
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
AssignControllerAction::AssignControllerAction(pugi::xml_node node)
{
    //AssignControllerAction_U	m_AssignControllerAction;
	if (node.first_child()) { m_AssignControllerAction = std::make_shared<AssignControllerAction_U>(node.first_child()); }
}
AssignRouteAction::AssignRouteAction(pugi::xml_node node)
{
    //AssignRouteAction_U	m_AssignRouteAction;
	if (node.first_child()) { m_AssignRouteAction = std::make_shared<AssignRouteAction_U>(node.first_child()); }
}
Axle::Axle(pugi::xml_node node)
{
	if (node.attribute("maxSteering")) { maxSteering = Double(node.attribute("maxSteering")); }  // TODO: >> union - handle properly
	if (node.attribute("positionX")) { positionX = Double(node.attribute("positionX")); }  // TODO: >> union - handle properly
	if (node.attribute("positionZ")) { positionZ = Double(node.attribute("positionZ")); }  // TODO: >> union - handle properly
	if (node.attribute("trackWidth")) { trackWidth = Double(node.attribute("trackWidth")); }  // TODO: >> union - handle properly
	if (node.attribute("wheelDiameter")) { wheelDiameter = Double(node.attribute("wheelDiameter")); }  // TODO: >> union - handle properly
}
Axles::Axles(pugi::xml_node node)
{
	if (node.child("FrontAxle")) { m_FrontAxle = std::make_shared<Axle>(node.child("FrontAxle")); }
	if (node.child("RearAxle")) { m_RearAxle = std::make_shared<Axle>(node.child("RearAxle")); }
	for (pugi::xml_node e_AdditionalAxle = node.child("AdditionalAxle"); e_AdditionalAxle; e_AdditionalAxle= e_AdditionalAxle.next_sibling("AdditionalAxle"))
	{
		m_AdditionalAxles.push_back(std::make_shared<Axle>(e_AdditionalAxle));
	}
}
BoundingBox::BoundingBox(pugi::xml_node node)
{
	if (node.child("Center")) { m_Center = std::make_shared<Center>(node.child("Center")); }
	if (node.child("Dimensions")) { m_Dimensions = std::make_shared<Dimensions>(node.child("Dimensions")); }
}
ByEntityCondition::ByEntityCondition(pugi::xml_node node)
{
	if (node.child("TriggeringEntities")) { m_TriggeringEntities = std::make_shared<TriggeringEntities>(node.child("TriggeringEntities")); }
	if (node.child("EntityCondition")) { m_EntityCondition = std::make_shared<EntityCondition>(node.child("EntityCondition")); }
}
ByObjectType::ByObjectType(pugi::xml_node node)
{
	if (node.attribute("type")) { type = ObjectType(node.attribute("type")); }  // TODO: >> union - handle properly
}
ByType::ByType(pugi::xml_node node)
{
	if (node.attribute("objectType")) { objectType = ObjectType(node.attribute("objectType")); }  // TODO: >> union - handle properly
}
ByValueCondition::ByValueCondition(pugi::xml_node node)
{
    //ByValueCondition_U	m_ByValueCondition;
	if (node.first_child()) { m_ByValueCondition = std::make_shared<ByValueCondition_U>(node.first_child()); }
}
Catalog::Catalog(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_Vehicle = node.child("Vehicle"); e_Vehicle; e_Vehicle= e_Vehicle.next_sibling("Vehicle"))
	{
		m_Vehicles.push_back(std::make_shared<Vehicle>(e_Vehicle));
	}
	for (pugi::xml_node e_Controller = node.child("Controller"); e_Controller; e_Controller= e_Controller.next_sibling("Controller"))
	{
		m_Controllers.push_back(std::make_shared<Controller>(e_Controller));
	}
	for (pugi::xml_node e_Pedestrian = node.child("Pedestrian"); e_Pedestrian; e_Pedestrian= e_Pedestrian.next_sibling("Pedestrian"))
	{
		m_Pedestrians.push_back(std::make_shared<Pedestrian>(e_Pedestrian));
	}
	for (pugi::xml_node e_MiscObject = node.child("MiscObject"); e_MiscObject; e_MiscObject= e_MiscObject.next_sibling("MiscObject"))
	{
		m_MiscObjects.push_back(std::make_shared<MiscObject>(e_MiscObject));
	}
	for (pugi::xml_node e_Environment = node.child("Environment"); e_Environment; e_Environment= e_Environment.next_sibling("Environment"))
	{
		m_Environments.push_back(std::make_shared<Environment>(e_Environment));
	}
	for (pugi::xml_node e_Maneuver = node.child("Maneuver"); e_Maneuver; e_Maneuver= e_Maneuver.next_sibling("Maneuver"))
	{
		m_Maneuvers.push_back(std::make_shared<Maneuver>(e_Maneuver));
	}
	for (pugi::xml_node e_Trajectory = node.child("Trajectory"); e_Trajectory; e_Trajectory= e_Trajectory.next_sibling("Trajectory"))
	{
		m_Trajectorys.push_back(std::make_shared<Trajectory>(e_Trajectory));
	}
	for (pugi::xml_node e_Route = node.child("Route"); e_Route; e_Route= e_Route.next_sibling("Route"))
	{
		m_Routes.push_back(std::make_shared<Route>(e_Route));
	}
}
CatalogLocations::CatalogLocations(pugi::xml_node node)
{
	if (node.child("VehicleCatalog")) { m_VehicleCatalog = std::make_shared<VehicleCatalogLocation>(node.child("VehicleCatalog")); }
	if (node.child("ControllerCatalog")) { m_ControllerCatalog = std::make_shared<ControllerCatalogLocation>(node.child("ControllerCatalog")); }
	if (node.child("PedestrianCatalog")) { m_PedestrianCatalog = std::make_shared<PedestrianCatalogLocation>(node.child("PedestrianCatalog")); }
	if (node.child("MiscObjectCatalog")) { m_MiscObjectCatalog = std::make_shared<MiscObjectCatalogLocation>(node.child("MiscObjectCatalog")); }
	if (node.child("EnvironmentCatalog")) { m_EnvironmentCatalog = std::make_shared<EnvironmentCatalogLocation>(node.child("EnvironmentCatalog")); }
	if (node.child("ManeuverCatalog")) { m_ManeuverCatalog = std::make_shared<ManeuverCatalogLocation>(node.child("ManeuverCatalog")); }
	if (node.child("TrajectoryCatalog")) { m_TrajectoryCatalog = std::make_shared<TrajectoryCatalogLocation>(node.child("TrajectoryCatalog")); }
	if (node.child("RouteCatalog")) { m_RouteCatalog = std::make_shared<RouteCatalogLocation>(node.child("RouteCatalog")); }
}
CatalogReference::CatalogReference(pugi::xml_node node)
{
	if (node.attribute("catalogName")) { catalogName = String(node.attribute("catalogName")); }  // TODO: >> union - handle properly
	if (node.attribute("entryName")) { entryName = String(node.attribute("entryName")); }  // TODO: >> union - handle properly
	if (node.child("ParameterAssignments")) { m_ParameterAssignments = std::make_shared<ParameterAssignments>(node.child("ParameterAssignments")); }
}
Center::Center(pugi::xml_node node)
{
	if (node.attribute("x")) { x = Double(node.attribute("x")); }  // TODO: >> union - handle properly
	if (node.attribute("y")) { y = Double(node.attribute("y")); }  // TODO: >> union - handle properly
	if (node.attribute("z")) { z = Double(node.attribute("z")); }  // TODO: >> union - handle properly
}
CentralSwarmObject::CentralSwarmObject(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
}
Clothoid::Clothoid(pugi::xml_node node)
{
	if (node.attribute("curvature")) { curvature = Double(node.attribute("curvature")); }  // TODO: >> union - handle properly
	if (node.attribute("curvatureDot")) { curvatureDot = Double(node.attribute("curvatureDot")); }  // TODO: >> union - handle properly
	if (node.attribute("length")) { length = Double(node.attribute("length")); }  // TODO: >> union - handle properly
	if (node.attribute("startTime")) { startTime = Double(node.attribute("startTime")); }  // TODO: >> union - handle properly
	if (node.attribute("stopTime")) { stopTime = Double(node.attribute("stopTime")); }  // TODO: >> union - handle properly
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
CollisionCondition::CollisionCondition(pugi::xml_node node)
{
    //CollisionCondition_U	m_CollisionCondition;
	if (node.first_child()) { m_CollisionCondition = std::make_shared<CollisionCondition_U>(node.first_child()); }
}
Condition::Condition(pugi::xml_node node)
{
	if (node.attribute("conditionEdge")) { conditionEdge = ConditionEdge(node.attribute("conditionEdge")); }  // TODO: >> union - handle properly
	if (node.attribute("delay")) { delay = Double(node.attribute("delay")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
    //Condition_U	m_Condition;
	if (node.first_child()) { m_Condition = std::make_shared<Condition_U>(node.first_child()); }
}
ConditionGroup::ConditionGroup(pugi::xml_node node)
{
	for (pugi::xml_node e_Condition = node.child("Condition"); e_Condition; e_Condition= e_Condition.next_sibling("Condition"))
	{
		m_Conditions.push_back(std::make_shared<Condition>(e_Condition));
	}
}
Controller::Controller(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }
}
ControllerAction::ControllerAction(pugi::xml_node node)
{
	if (node.child("AssignControllerAction")) { m_AssignControllerAction = std::make_shared<AssignControllerAction>(node.child("AssignControllerAction")); }
	if (node.child("OverrideControllerValueAction")) { m_OverrideControllerValueAction = std::make_shared<OverrideControllerValueAction>(node.child("OverrideControllerValueAction")); }
}
ControllerCatalogLocation::ControllerCatalogLocation(pugi::xml_node node)
{
	if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }
}
ControllerDistribution::ControllerDistribution(pugi::xml_node node)
{
	for (pugi::xml_node e_ControllerDistributionEntry = node.child("ControllerDistributionEntry"); e_ControllerDistributionEntry; e_ControllerDistributionEntry= e_ControllerDistributionEntry.next_sibling("ControllerDistributionEntry"))
	{
		m_ControllerDistributionEntrys.push_back(std::make_shared<ControllerDistributionEntry>(e_ControllerDistributionEntry));
	}
}
ControllerDistributionEntry::ControllerDistributionEntry(pugi::xml_node node)
{
	if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // TODO: >> union - handle properly
    //ControllerDistributionEntry_U	m_ControllerDistributionEntry;
	if (node.first_child()) { m_ControllerDistributionEntry = std::make_shared<ControllerDistributionEntry_U>(node.first_child()); }
}
ControlPoint::ControlPoint(pugi::xml_node node)
{
	if (node.attribute("time")) { time = Double(node.attribute("time")); }  // TODO: >> union - handle properly
	if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // TODO: >> union - handle properly
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
CustomCommandAction::CustomCommandAction(pugi::xml_node node)
{
	if (node.attribute("type")) { type = String(node.attribute("type")); }  // TODO: >> union - handle properly
}
DeleteEntityAction::DeleteEntityAction(pugi::xml_node node)
{
}
Dimensions::Dimensions(pugi::xml_node node)
{
	if (node.attribute("height")) { height = Double(node.attribute("height")); }  // TODO: >> union - handle properly
	if (node.attribute("length")) { length = Double(node.attribute("length")); }  // TODO: >> union - handle properly
	if (node.attribute("width")) { width = Double(node.attribute("width")); }  // TODO: >> union - handle properly
}
Directory::Directory(pugi::xml_node node)
{
	if (node.attribute("path")) { path = String(node.attribute("path")); }  // TODO: >> union - handle properly
}
DistanceCondition::DistanceCondition(pugi::xml_node node)
{
	if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // TODO: >> union - handle properly
	if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // TODO: >> union - handle properly
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
DynamicConstraints::DynamicConstraints(pugi::xml_node node)
{
	if (node.attribute("maxAcceleration")) { maxAcceleration = Double(node.attribute("maxAcceleration")); }  // TODO: >> union - handle properly
	if (node.attribute("maxDeceleration")) { maxDeceleration = Double(node.attribute("maxDeceleration")); }  // TODO: >> union - handle properly
	if (node.attribute("maxSpeed")) { maxSpeed = Double(node.attribute("maxSpeed")); }  // TODO: >> union - handle properly
}
EndOfRoadCondition::EndOfRoadCondition(pugi::xml_node node)
{
	if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // TODO: >> union - handle properly
}
Entities::Entities(pugi::xml_node node)
{
	for (pugi::xml_node e_ScenarioObject = node.child("ScenarioObject"); e_ScenarioObject; e_ScenarioObject= e_ScenarioObject.next_sibling("ScenarioObject"))
	{
		m_ScenarioObjects.push_back(std::make_shared<ScenarioObject>(e_ScenarioObject));
	}
	for (pugi::xml_node e_EntitySelection = node.child("EntitySelection"); e_EntitySelection; e_EntitySelection= e_EntitySelection.next_sibling("EntitySelection"))
	{
		m_EntitySelections.push_back(std::make_shared<EntitySelection>(e_EntitySelection));
	}
}
EntityAction::EntityAction(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
    //EntityAction_U	m_EntityAction;
	if (node.first_child()) { m_EntityAction = std::make_shared<EntityAction_U>(node.first_child()); }
}
EntityCondition::EntityCondition(pugi::xml_node node)
{
    //EntityCondition_U	m_EntityCondition;
	if (node.first_child()) { m_EntityCondition = std::make_shared<EntityCondition_U>(node.first_child()); }
}
EntityRef::EntityRef(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
}
EntitySelection::EntitySelection(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("Members")) { m_Members = std::make_shared<SelectedEntities>(node.child("Members")); }
}
Environment::Environment(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	if (node.child("TimeOfDay")) { m_TimeOfDay = std::make_shared<TimeOfDay>(node.child("TimeOfDay")); }
	if (node.child("Weather")) { m_Weather = std::make_shared<Weather>(node.child("Weather")); }
	if (node.child("RoadCondition")) { m_RoadCondition = std::make_shared<RoadCondition>(node.child("RoadCondition")); }
}
EnvironmentAction::EnvironmentAction(pugi::xml_node node)
{
    //EnvironmentAction_U	m_EnvironmentAction;
	if (node.first_child()) { m_EnvironmentAction = std::make_shared<EnvironmentAction_U>(node.first_child()); }
}
EnvironmentCatalogLocation::EnvironmentCatalogLocation(pugi::xml_node node)
{
	if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }
}
Event::Event(pugi::xml_node node)
{
	if (node.attribute("maximumExecutionCount")) { maximumExecutionCount = UnsignedInt(node.attribute("maximumExecutionCount")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("priority")) { priority = Priority(node.attribute("priority")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_Action = node.child("Action"); e_Action; e_Action= e_Action.next_sibling("Action"))
	{
		m_Actions.push_back(std::make_shared<Action>(e_Action));
	}
	if (node.child("StartTrigger")) { m_StartTrigger = std::make_shared<Trigger>(node.child("StartTrigger")); }
}
File::File(pugi::xml_node node)
{
	if (node.attribute("filepath")) { filepath = String(node.attribute("filepath")); }  // TODO: >> union - handle properly
}
FileHeader::FileHeader(pugi::xml_node node)
{
	if (node.attribute("author")) { author = String(node.attribute("author")); }  // TODO: >> union - handle properly
	if (node.attribute("date")) { date = DateTime(node.attribute("date")); }  // TODO: >> union - handle properly
	if (node.attribute("description")) { description = String(node.attribute("description")); }  // TODO: >> union - handle properly
	if (node.attribute("revMajor")) { revMajor = UnsignedShort(node.attribute("revMajor")); }  // TODO: >> union - handle properly
	if (node.attribute("revMinor")) { revMinor = UnsignedShort(node.attribute("revMinor")); }  // TODO: >> union - handle properly
}
FinalSpeed::FinalSpeed(pugi::xml_node node)
{
    //FinalSpeed_U	m_FinalSpeed;
	if (node.first_child()) { m_FinalSpeed = std::make_shared<FinalSpeed_U>(node.first_child()); }
}
Fog::Fog(pugi::xml_node node)
{
	if (node.attribute("visualRange")) { visualRange = Double(node.attribute("visualRange")); }  // TODO: >> union - handle properly
	if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }
}
FollowTrajectoryAction::FollowTrajectoryAction(pugi::xml_node node)
{
	if (node.child("Trajectory")) { m_Trajectory = std::make_shared<Trajectory>(node.child("Trajectory")); }
	if (node.child("CatalogReference")) { m_CatalogReference = std::make_shared<CatalogReference>(node.child("CatalogReference")); }
	if (node.child("TimeReference")) { m_TimeReference = std::make_shared<TimeReference>(node.child("TimeReference")); }
	if (node.child("TrajectoryFollowingMode")) { m_TrajectoryFollowingMode = std::make_shared<TrajectoryFollowingMode>(node.child("TrajectoryFollowingMode")); }
}
GlobalAction::GlobalAction(pugi::xml_node node)
{
    //GlobalAction_U	m_GlobalAction;
	if (node.first_child()) { m_GlobalAction = std::make_shared<GlobalAction_U>(node.first_child()); }
}
InfrastructureAction::InfrastructureAction(pugi::xml_node node)
{
	if (node.child("TrafficSignalAction")) { m_TrafficSignalAction = std::make_shared<TrafficSignalAction>(node.child("TrafficSignalAction")); }
}
Init::Init(pugi::xml_node node)
{
	if (node.child("Actions")) { m_Actions = std::make_shared<InitActions>(node.child("Actions")); }
}
InitActions::InitActions(pugi::xml_node node)
{
	for (pugi::xml_node e_GlobalAction = node.child("GlobalAction"); e_GlobalAction; e_GlobalAction= e_GlobalAction.next_sibling("GlobalAction"))
	{
		m_GlobalActions.push_back(std::make_shared<GlobalAction>(e_GlobalAction));
	}
	for (pugi::xml_node e_UserDefinedAction = node.child("UserDefinedAction"); e_UserDefinedAction; e_UserDefinedAction= e_UserDefinedAction.next_sibling("UserDefinedAction"))
	{
		m_UserDefinedActions.push_back(std::make_shared<UserDefinedAction>(e_UserDefinedAction));
	}
	for (pugi::xml_node e_Private = node.child("Private"); e_Private; e_Private= e_Private.next_sibling("Private"))
	{
		m_Privates.push_back(std::make_shared<Private>(e_Private));
	}
}
InRoutePosition::InRoutePosition(pugi::xml_node node)
{
    //InRoutePosition_U	m_InRoutePosition;
	if (node.first_child()) { m_InRoutePosition = std::make_shared<InRoutePosition_U>(node.first_child()); }
}
Knot::Knot(pugi::xml_node node)
{
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
LaneChangeAction::LaneChangeAction(pugi::xml_node node)
{
	if (node.attribute("targetLaneOffset")) { targetLaneOffset = Double(node.attribute("targetLaneOffset")); }  // TODO: >> union - handle properly
	if (node.child("LaneChangeActionDynamics")) { m_LaneChangeActionDynamics = std::make_shared<TransitionDynamics>(node.child("LaneChangeActionDynamics")); }
	if (node.child("LaneChangeTarget")) { m_LaneChangeTarget = std::make_shared<LaneChangeTarget>(node.child("LaneChangeTarget")); }
}
LaneChangeTarget::LaneChangeTarget(pugi::xml_node node)
{
    //LaneChangeTarget_U	m_LaneChangeTarget;
	if (node.first_child()) { m_LaneChangeTarget = std::make_shared<LaneChangeTarget_U>(node.first_child()); }
}
LaneOffsetAction::LaneOffsetAction(pugi::xml_node node)
{
	if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // TODO: >> union - handle properly
	if (node.child("LaneOffsetActionDynamics")) { m_LaneOffsetActionDynamics = std::make_shared<LaneOffsetActionDynamics>(node.child("LaneOffsetActionDynamics")); }
	if (node.child("LaneOffsetTarget")) { m_LaneOffsetTarget = std::make_shared<LaneOffsetTarget>(node.child("LaneOffsetTarget")); }
}
LaneOffsetActionDynamics::LaneOffsetActionDynamics(pugi::xml_node node)
{
	if (node.attribute("dynamicsShape")) { dynamicsShape = DynamicsShape(node.attribute("dynamicsShape")); }  // TODO: >> union - handle properly
	if (node.attribute("maxLateralAcc")) { maxLateralAcc = Double(node.attribute("maxLateralAcc")); }  // TODO: >> union - handle properly
}
LaneOffsetTarget::LaneOffsetTarget(pugi::xml_node node)
{
    //LaneOffsetTarget_U	m_LaneOffsetTarget;
	if (node.first_child()) { m_LaneOffsetTarget = std::make_shared<LaneOffsetTarget_U>(node.first_child()); }
}
LanePosition::LanePosition(pugi::xml_node node)
{
	if (node.attribute("laneId")) { laneId = String(node.attribute("laneId")); }  // TODO: >> union - handle properly
	if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // TODO: >> union - handle properly
	if (node.attribute("roadId")) { roadId = String(node.attribute("roadId")); }  // TODO: >> union - handle properly
	if (node.attribute("s")) { s = Double(node.attribute("s")); }  // TODO: >> union - handle properly
	if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }
}
LateralAction::LateralAction(pugi::xml_node node)
{
    //LateralAction_U	m_LateralAction;
	if (node.first_child()) { m_LateralAction = std::make_shared<LateralAction_U>(node.first_child()); }
}
LateralDistanceAction::LateralDistanceAction(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // TODO: >> union - handle properly
	if (node.attribute("distance")) { distance = Double(node.attribute("distance")); }  // TODO: >> union - handle properly
	if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // TODO: >> union - handle properly
	if (node.child("DynamicConstraints")) { m_DynamicConstraints = std::make_shared<DynamicConstraints>(node.child("DynamicConstraints")); }
}
LongitudinalAction::LongitudinalAction(pugi::xml_node node)
{
    //LongitudinalAction_U	m_LongitudinalAction;
	if (node.first_child()) { m_LongitudinalAction = std::make_shared<LongitudinalAction_U>(node.first_child()); }
}
LongitudinalDistanceAction::LongitudinalDistanceAction(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // TODO: >> union - handle properly
	if (node.attribute("distance")) { distance = Double(node.attribute("distance")); }  // TODO: >> union - handle properly
	if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // TODO: >> union - handle properly
	if (node.attribute("timeGap")) { timeGap = Double(node.attribute("timeGap")); }  // TODO: >> union - handle properly
	if (node.child("DynamicConstraints")) { m_DynamicConstraints = std::make_shared<DynamicConstraints>(node.child("DynamicConstraints")); }
}
Maneuver::Maneuver(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	for (pugi::xml_node e_Event = node.child("Event"); e_Event; e_Event= e_Event.next_sibling("Event"))
	{
		m_Events.push_back(std::make_shared<Event>(e_Event));
	}
}
ManeuverCatalogLocation::ManeuverCatalogLocation(pugi::xml_node node)
{
	if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }
}
ManeuverGroup::ManeuverGroup(pugi::xml_node node)
{
	if (node.attribute("maximumExecutionCount")) { maximumExecutionCount = UnsignedInt(node.attribute("maximumExecutionCount")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("Actors")) { m_Actors = std::make_shared<Actors>(node.child("Actors")); }
	for (pugi::xml_node e_CatalogReference = node.child("CatalogReference"); e_CatalogReference; e_CatalogReference= e_CatalogReference.next_sibling("CatalogReference"))
	{
		m_CatalogReferences.push_back(std::make_shared<CatalogReference>(e_CatalogReference));
	}
	for (pugi::xml_node e_Maneuver = node.child("Maneuver"); e_Maneuver; e_Maneuver= e_Maneuver.next_sibling("Maneuver"))
	{
		m_Maneuvers.push_back(std::make_shared<Maneuver>(e_Maneuver));
	}
}
MiscObject::MiscObject(pugi::xml_node node)
{
	if (node.attribute("mass")) { mass = Double(node.attribute("mass")); }  // TODO: >> union - handle properly
	if (node.attribute("miscObjectCategory")) { miscObjectCategory = MiscObjectCategory(node.attribute("miscObjectCategory")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }
	if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }
}
MiscObjectCatalogLocation::MiscObjectCatalogLocation(pugi::xml_node node)
{
	if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }
}
ModifyRule::ModifyRule(pugi::xml_node node)
{
    //ModifyRule_U	m_ModifyRule;
	if (node.first_child()) { m_ModifyRule = std::make_shared<ModifyRule_U>(node.first_child()); }
}
None::None(pugi::xml_node node)
{
}
Nurbs::Nurbs(pugi::xml_node node)
{
	if (node.attribute("order")) { order = UnsignedInt(node.attribute("order")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_ControlPoint = node.child("ControlPoint"); e_ControlPoint; e_ControlPoint= e_ControlPoint.next_sibling("ControlPoint"))
	{
		m_ControlPoints.push_back(std::make_shared<ControlPoint>(e_ControlPoint));
	}
	for (pugi::xml_node e_Knot = node.child("Knot"); e_Knot; e_Knot= e_Knot.next_sibling("Knot"))
	{
		m_Knots.push_back(std::make_shared<Knot>(e_Knot));
	}
}
ObjectController::ObjectController(pugi::xml_node node)
{
    //ObjectController_U	m_ObjectController;
	if (node.first_child()) { m_ObjectController = std::make_shared<ObjectController_U>(node.first_child()); }
}
OffroadCondition::OffroadCondition(pugi::xml_node node)
{
	if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // TODO: >> union - handle properly
}
OpenScenario::OpenScenario(pugi::xml_node node)
{
	if (node.child("FileHeader")) { m_FileHeader = std::make_shared<FileHeader>(node.child("FileHeader")); }
	{ m_OpenScenarioCategory = std::make_shared<OpenScenarioCategory>(node); } // Node has no xml def, same node passes through until it finds an element.
}
Orientation::Orientation(pugi::xml_node node)
{
	if (node.attribute("h")) { h = Double(node.attribute("h")); }  // TODO: >> union - handle properly
	if (node.attribute("p")) { p = Double(node.attribute("p")); }  // TODO: >> union - handle properly
	if (node.attribute("r")) { r = Double(node.attribute("r")); }  // TODO: >> union - handle properly
	if (node.attribute("type")) { type = ReferenceContext(node.attribute("type")); }  // TODO: >> union - handle properly
}
OverrideBrakeAction::OverrideBrakeAction(pugi::xml_node node)
{
	if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
OverrideClutchAction::OverrideClutchAction(pugi::xml_node node)
{
	if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
OverrideControllerValueAction::OverrideControllerValueAction(pugi::xml_node node)
{
	if (node.child("Throttle")) { m_Throttle = std::make_shared<OverrideThrottleAction>(node.child("Throttle")); }
	if (node.child("Brake")) { m_Brake = std::make_shared<OverrideBrakeAction>(node.child("Brake")); }
	if (node.child("Clutch")) { m_Clutch = std::make_shared<OverrideClutchAction>(node.child("Clutch")); }
	if (node.child("ParkingBrake")) { m_ParkingBrake = std::make_shared<OverrideParkingBrakeAction>(node.child("ParkingBrake")); }
	if (node.child("SteeringWheel")) { m_SteeringWheel = std::make_shared<OverrideSteeringWheelAction>(node.child("SteeringWheel")); }
	if (node.child("Gear")) { m_Gear = std::make_shared<OverrideGearAction>(node.child("Gear")); }
}
OverrideGearAction::OverrideGearAction(pugi::xml_node node)
{
	if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // TODO: >> union - handle properly
	if (node.attribute("number")) { number = Double(node.attribute("number")); }  // TODO: >> union - handle properly
}
OverrideParkingBrakeAction::OverrideParkingBrakeAction(pugi::xml_node node)
{
	if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
OverrideSteeringWheelAction::OverrideSteeringWheelAction(pugi::xml_node node)
{
	if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
OverrideThrottleAction::OverrideThrottleAction(pugi::xml_node node)
{
	if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
ParameterAction::ParameterAction(pugi::xml_node node)
{
	if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // TODO: >> union - handle properly
    //ParameterAction_U	m_ParameterAction;
	if (node.first_child()) { m_ParameterAction = std::make_shared<ParameterAction_U>(node.first_child()); }
}
ParameterAddValueRule::ParameterAddValueRule(pugi::xml_node node)
{
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
ParameterAssignment::ParameterAssignment(pugi::xml_node node)
{
	if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = String(node.attribute("value")); }  // TODO: >> union - handle properly
}
ParameterAssignments::ParameterAssignments(pugi::xml_node node)
{
	for (pugi::xml_node e_ParameterAssignment = node.child("ParameterAssignment"); e_ParameterAssignment; e_ParameterAssignment= e_ParameterAssignment.next_sibling("ParameterAssignment"))
	{
		m_ParameterAssignments.push_back(std::make_shared<ParameterAssignment>(e_ParameterAssignment));
	}
}
ParameterCondition::ParameterCondition(pugi::xml_node node)
{
	if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // TODO: >> union - handle properly
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = String(node.attribute("value")); }  // TODO: >> union - handle properly
}
ParameterDeclaration::ParameterDeclaration(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("parameterType")) { parameterType = ParameterType(node.attribute("parameterType")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = String(node.attribute("value")); }  // TODO: >> union - handle properly
}
ParameterDeclarations::ParameterDeclarations(pugi::xml_node node)
{
	for (pugi::xml_node e_ParameterDeclaration = node.child("ParameterDeclaration"); e_ParameterDeclaration; e_ParameterDeclaration= e_ParameterDeclaration.next_sibling("ParameterDeclaration"))
	{
		m_ParameterDeclarations.push_back(std::make_shared<ParameterDeclaration>(e_ParameterDeclaration));
	}
}
ParameterModifyAction::ParameterModifyAction(pugi::xml_node node)
{
	if (node.child("Rule")) { m_Rule = std::make_shared<ModifyRule>(node.child("Rule")); }
}
ParameterMultiplyByValueRule::ParameterMultiplyByValueRule(pugi::xml_node node)
{
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
ParameterSetAction::ParameterSetAction(pugi::xml_node node)
{
	if (node.attribute("value")) { value = String(node.attribute("value")); }  // TODO: >> union - handle properly
}
Pedestrian::Pedestrian(pugi::xml_node node)
{
	if (node.attribute("mass")) { mass = Double(node.attribute("mass")); }  // TODO: >> union - handle properly
	if (node.attribute("model")) { model = String(node.attribute("model")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("pedestrianCategory")) { pedestrianCategory = PedestrianCategory(node.attribute("pedestrianCategory")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }
	if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }
}
PedestrianCatalogLocation::PedestrianCatalogLocation(pugi::xml_node node)
{
	if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }
}
Performance::Performance(pugi::xml_node node)
{
	if (node.attribute("maxAcceleration")) { maxAcceleration = Double(node.attribute("maxAcceleration")); }  // TODO: >> union - handle properly
	if (node.attribute("maxDeceleration")) { maxDeceleration = Double(node.attribute("maxDeceleration")); }  // TODO: >> union - handle properly
	if (node.attribute("maxSpeed")) { maxSpeed = Double(node.attribute("maxSpeed")); }  // TODO: >> union - handle properly
}
Phase::Phase(pugi::xml_node node)
{
	if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_TrafficSignalState = node.child("TrafficSignalState"); e_TrafficSignalState; e_TrafficSignalState= e_TrafficSignalState.next_sibling("TrafficSignalState"))
	{
		m_TrafficSignalStates.push_back(std::make_shared<TrafficSignalState>(e_TrafficSignalState));
	}
}
Polyline::Polyline(pugi::xml_node node)
{
	for (pugi::xml_node e_Vertex = node.child("Vertex"); e_Vertex; e_Vertex= e_Vertex.next_sibling("Vertex"))
	{
		m_Vertexs.push_back(std::make_shared<Vertex>(e_Vertex));
	}
}
Position::Position(pugi::xml_node node)
{
    //Position_U	m_Position;
	if (node.first_child()) { m_Position = std::make_shared<Position_U>(node.first_child()); }
}
PositionInLaneCoordinates::PositionInLaneCoordinates(pugi::xml_node node)
{
	if (node.attribute("laneId")) { laneId = String(node.attribute("laneId")); }  // TODO: >> union - handle properly
	if (node.attribute("laneOffset")) { laneOffset = Double(node.attribute("laneOffset")); }  // TODO: >> union - handle properly
	if (node.attribute("pathS")) { pathS = Double(node.attribute("pathS")); }  // TODO: >> union - handle properly
}
PositionInRoadCoordinates::PositionInRoadCoordinates(pugi::xml_node node)
{
	if (node.attribute("pathS")) { pathS = Double(node.attribute("pathS")); }  // TODO: >> union - handle properly
	if (node.attribute("t")) { t = Double(node.attribute("t")); }  // TODO: >> union - handle properly
}
PositionOfCurrentEntity::PositionOfCurrentEntity(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
}
Precipitation::Precipitation(pugi::xml_node node)
{
	if (node.attribute("intensity")) { intensity = Double(node.attribute("intensity")); }  // TODO: >> union - handle properly
	if (node.attribute("precipitationType")) { precipitationType = PrecipitationType(node.attribute("precipitationType")); }  // TODO: >> union - handle properly
}
Private::Private(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_PrivateAction = node.child("PrivateAction"); e_PrivateAction; e_PrivateAction= e_PrivateAction.next_sibling("PrivateAction"))
	{
		m_PrivateActions.push_back(std::make_shared<PrivateAction>(e_PrivateAction));
	}
}
PrivateAction::PrivateAction(pugi::xml_node node)
{
    //PrivateAction_U	m_PrivateAction;
	if (node.first_child()) { m_PrivateAction = std::make_shared<PrivateAction_U>(node.first_child()); }
}
Properties::Properties(pugi::xml_node node)
{
	for (pugi::xml_node e_Property = node.child("Property"); e_Property; e_Property= e_Property.next_sibling("Property"))
	{
		m_Propertys.push_back(std::make_shared<Property>(e_Property));
	}
	for (pugi::xml_node e_File = node.child("File"); e_File; e_File= e_File.next_sibling("File"))
	{
		m_Files.push_back(std::make_shared<File>(e_File));
	}
}
Property::Property(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = String(node.attribute("value")); }  // TODO: >> union - handle properly
}
ReachPositionCondition::ReachPositionCondition(pugi::xml_node node)
{
	if (node.attribute("tolerance")) { tolerance = Double(node.attribute("tolerance")); }  // TODO: >> union - handle properly
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
RelativeDistanceCondition::RelativeDistanceCondition(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // TODO: >> union - handle properly
	if (node.attribute("relativeDistanceType")) { relativeDistanceType = RelativeDistanceType(node.attribute("relativeDistanceType")); }  // TODO: >> union - handle properly
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
RelativeLanePosition::RelativeLanePosition(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("dLane")) { dLane = Int(node.attribute("dLane")); }  // TODO: >> union - handle properly
	if (node.attribute("ds")) { ds = Double(node.attribute("ds")); }  // TODO: >> union - handle properly
	if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // TODO: >> union - handle properly
	if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }
}
RelativeObjectPosition::RelativeObjectPosition(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("dx")) { dx = Double(node.attribute("dx")); }  // TODO: >> union - handle properly
	if (node.attribute("dy")) { dy = Double(node.attribute("dy")); }  // TODO: >> union - handle properly
	if (node.attribute("dz")) { dz = Double(node.attribute("dz")); }  // TODO: >> union - handle properly
	if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }
}
RelativeRoadPosition::RelativeRoadPosition(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("ds")) { ds = Double(node.attribute("ds")); }  // TODO: >> union - handle properly
	if (node.attribute("dt")) { dt = Double(node.attribute("dt")); }  // TODO: >> union - handle properly
	if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }
}
RelativeSpeedCondition::RelativeSpeedCondition(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
RelativeSpeedToMaster::RelativeSpeedToMaster(pugi::xml_node node)
{
	if (node.attribute("speedTargetValueType")) { speedTargetValueType = SpeedTargetValueType(node.attribute("speedTargetValueType")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
RelativeTargetLane::RelativeTargetLane(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Int(node.attribute("value")); }  // TODO: >> union - handle properly
}
RelativeTargetLaneOffset::RelativeTargetLaneOffset(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
RelativeTargetSpeed::RelativeTargetSpeed(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // TODO: >> union - handle properly
	if (node.attribute("speedTargetValueType")) { speedTargetValueType = SpeedTargetValueType(node.attribute("speedTargetValueType")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
RelativeWorldPosition::RelativeWorldPosition(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("dx")) { dx = Double(node.attribute("dx")); }  // TODO: >> union - handle properly
	if (node.attribute("dy")) { dy = Double(node.attribute("dy")); }  // TODO: >> union - handle properly
	if (node.attribute("dz")) { dz = Double(node.attribute("dz")); }  // TODO: >> union - handle properly
	if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }
}
RoadCondition::RoadCondition(pugi::xml_node node)
{
	if (node.attribute("frictionScaleFactor")) { frictionScaleFactor = Double(node.attribute("frictionScaleFactor")); }  // TODO: >> union - handle properly
	if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }
}
RoadNetwork::RoadNetwork(pugi::xml_node node)
{
	if (node.child("LogicFile")) { m_LogicFile = std::make_shared<File>(node.child("LogicFile")); }
	if (node.child("SceneGraphFile")) { m_SceneGraphFile = std::make_shared<File>(node.child("SceneGraphFile")); }
	if (node.child("TrafficSignals")) { m_TrafficSignals = std::make_shared<TrafficSignals>(node.child("TrafficSignals")); }
}
RoadPosition::RoadPosition(pugi::xml_node node)
{
	if (node.attribute("roadId")) { roadId = String(node.attribute("roadId")); }  // TODO: >> union - handle properly
	if (node.attribute("s")) { s = Double(node.attribute("s")); }  // TODO: >> union - handle properly
	if (node.attribute("t")) { t = Double(node.attribute("t")); }  // TODO: >> union - handle properly
	if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }
}
Route::Route(pugi::xml_node node)
{
	if (node.attribute("closed")) { closed = Boolean(node.attribute("closed")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	for (pugi::xml_node e_Waypoint = node.child("Waypoint"); e_Waypoint; e_Waypoint= e_Waypoint.next_sibling("Waypoint"))
	{
		m_Waypoints.push_back(std::make_shared<Waypoint>(e_Waypoint));
	}
}
RouteCatalogLocation::RouteCatalogLocation(pugi::xml_node node)
{
	if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }
}
RoutePosition::RoutePosition(pugi::xml_node node)
{
	if (node.child("RouteRef")) { m_RouteRef = std::make_shared<RouteRef>(node.child("RouteRef")); }
	if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }
	if (node.child("InRoutePosition")) { m_InRoutePosition = std::make_shared<InRoutePosition>(node.child("InRoutePosition")); }
}
RouteRef::RouteRef(pugi::xml_node node)
{
    //RouteRef_U	m_RouteRef;
	if (node.first_child()) { m_RouteRef = std::make_shared<RouteRef_U>(node.first_child()); }
}
RoutingAction::RoutingAction(pugi::xml_node node)
{
    //RoutingAction_U	m_RoutingAction;
	if (node.first_child()) { m_RoutingAction = std::make_shared<RoutingAction_U>(node.first_child()); }
}
ScenarioObject::ScenarioObject(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("ObjectController")) { m_ObjectController = std::make_shared<ObjectController>(node.child("ObjectController")); }
	{ m_EntityObject = std::make_shared<EntityObject>(node); } // Node has no xml def, same node passes through until it finds an element.
}
SelectedEntities::SelectedEntities(pugi::xml_node node)
{
    //SelectedEntities_U	m_SelectedEntities;
	if (node.first_child()) { m_SelectedEntities = std::make_shared<SelectedEntities_U>(node.first_child()); }
}
Shape::Shape(pugi::xml_node node)
{
    //Shape_U	m_Shape;
	if (node.first_child()) { m_Shape = std::make_shared<Shape_U>(node.first_child()); }
}
SimulationTimeCondition::SimulationTimeCondition(pugi::xml_node node)
{
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
SpeedAction::SpeedAction(pugi::xml_node node)
{
	if (node.child("SpeedActionDynamics")) { m_SpeedActionDynamics = std::make_shared<TransitionDynamics>(node.child("SpeedActionDynamics")); }
	if (node.child("SpeedActionTarget")) { m_SpeedActionTarget = std::make_shared<SpeedActionTarget>(node.child("SpeedActionTarget")); }
}
SpeedActionTarget::SpeedActionTarget(pugi::xml_node node)
{
    //SpeedActionTarget_U	m_SpeedActionTarget;
	if (node.first_child()) { m_SpeedActionTarget = std::make_shared<SpeedActionTarget_U>(node.first_child()); }
}
SpeedCondition::SpeedCondition(pugi::xml_node node)
{
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
StandStillCondition::StandStillCondition(pugi::xml_node node)
{
	if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // TODO: >> union - handle properly
}
Story::Story(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	for (pugi::xml_node e_Act = node.child("Act"); e_Act; e_Act= e_Act.next_sibling("Act"))
	{
		m_Acts.push_back(std::make_shared<Act>(e_Act));
	}
}
Storyboard::Storyboard(pugi::xml_node node)
{
	if (node.child("Init")) { m_Init = std::make_shared<Init>(node.child("Init")); }
	for (pugi::xml_node e_Story = node.child("Story"); e_Story; e_Story= e_Story.next_sibling("Story"))
	{
		m_Storys.push_back(std::make_shared<Story>(e_Story));
	}
	if (node.child("StopTrigger")) { m_StopTrigger = std::make_shared<Trigger>(node.child("StopTrigger")); }
}
StoryboardElementStateCondition::StoryboardElementStateCondition(pugi::xml_node node)
{
	if (node.attribute("storyboardElementRef")) { storyboardElementRef = String(node.attribute("storyboardElementRef")); }  // TODO: >> union - handle properly
	if (node.attribute("state")) { state = StoryboardElementState(node.attribute("state")); }  // TODO: >> union - handle properly
	if (node.attribute("storyboardElementType")) { storyboardElementType = StoryboardElementType(node.attribute("storyboardElementType")); }  // TODO: >> union - handle properly
}
Sun::Sun(pugi::xml_node node)
{
	if (node.attribute("azimuth")) { azimuth = Double(node.attribute("azimuth")); }  // TODO: >> union - handle properly
	if (node.attribute("elevation")) { elevation = Double(node.attribute("elevation")); }  // TODO: >> union - handle properly
	if (node.attribute("intensity")) { intensity = Double(node.attribute("intensity")); }  // TODO: >> union - handle properly
}
SynchronizeAction::SynchronizeAction(pugi::xml_node node)
{
	if (node.attribute("masterEntityRef")) { masterEntityRef = String(node.attribute("masterEntityRef")); }  // TODO: >> union - handle properly
	if (node.child("TargetPositionMaster")) { m_TargetPositionMaster = std::make_shared<Position>(node.child("TargetPositionMaster")); }
	if (node.child("TargetPosition")) { m_TargetPosition = std::make_shared<Position>(node.child("TargetPosition")); }
	if (node.child("FinalSpeed")) { m_FinalSpeed = std::make_shared<FinalSpeed>(node.child("FinalSpeed")); }
}
TeleportAction::TeleportAction(pugi::xml_node node)
{
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
TimeHeadwayCondition::TimeHeadwayCondition(pugi::xml_node node)
{
	if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // TODO: >> union - handle properly
	if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // TODO: >> union - handle properly
	if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // TODO: >> union - handle properly
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
TimeOfDay::TimeOfDay(pugi::xml_node node)
{
	if (node.attribute("animation")) { animation = Boolean(node.attribute("animation")); }  // TODO: >> union - handle properly
	if (node.attribute("dateTime")) { dateTime = DateTime(node.attribute("dateTime")); }  // TODO: >> union - handle properly
}
TimeOfDayCondition::TimeOfDayCondition(pugi::xml_node node)
{
	if (node.attribute("dateTime")) { dateTime = DateTime(node.attribute("dateTime")); }  // TODO: >> union - handle properly
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
}
TimeReference::TimeReference(pugi::xml_node node)
{
    //TimeReference_U	m_TimeReference;
	if (node.first_child()) { m_TimeReference = std::make_shared<TimeReference_U>(node.first_child()); }
}
TimeToCollisionCondition::TimeToCollisionCondition(pugi::xml_node node)
{
	if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // TODO: >> union - handle properly
	if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // TODO: >> union - handle properly
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
	if (node.child("TimeToCollisionConditionTarget")) { m_TimeToCollisionConditionTarget = std::make_shared<TimeToCollisionConditionTarget>(node.child("TimeToCollisionConditionTarget")); }
}
TimeToCollisionConditionTarget::TimeToCollisionConditionTarget(pugi::xml_node node)
{
    //TimeToCollisionConditionTarget_U	m_TimeToCollisionConditionTarget;
	if (node.first_child()) { m_TimeToCollisionConditionTarget = std::make_shared<TimeToCollisionConditionTarget_U>(node.first_child()); }
}
Timing::Timing(pugi::xml_node node)
{
	if (node.attribute("domainAbsoluteRelative")) { domainAbsoluteRelative = ReferenceContext(node.attribute("domainAbsoluteRelative")); }  // TODO: >> union - handle properly
	if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // TODO: >> union - handle properly
	if (node.attribute("scale")) { scale = Double(node.attribute("scale")); }  // TODO: >> union - handle properly
}
TrafficAction::TrafficAction(pugi::xml_node node)
{
    //TrafficAction_U	m_TrafficAction;
	if (node.first_child()) { m_TrafficAction = std::make_shared<TrafficAction_U>(node.first_child()); }
}
TrafficDefinition::TrafficDefinition(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("VehicleCategoryDistribution")) { m_VehicleCategoryDistribution = std::make_shared<VehicleCategoryDistribution>(node.child("VehicleCategoryDistribution")); }
	if (node.child("ControllerDistribution")) { m_ControllerDistribution = std::make_shared<ControllerDistribution>(node.child("ControllerDistribution")); }
}
TrafficSignalAction::TrafficSignalAction(pugi::xml_node node)
{
    //TrafficSignalAction_U	m_TrafficSignalAction;
	if (node.first_child()) { m_TrafficSignalAction = std::make_shared<TrafficSignalAction_U>(node.first_child()); }
}
TrafficSignalCondition::TrafficSignalCondition(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("state")) { state = String(node.attribute("state")); }  // TODO: >> union - handle properly
}
TrafficSignalController::TrafficSignalController(pugi::xml_node node)
{
	if (node.attribute("delay")) { delay = Double(node.attribute("delay")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("reference")) { reference = String(node.attribute("reference")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_Phase = node.child("Phase"); e_Phase; e_Phase= e_Phase.next_sibling("Phase"))
	{
		m_Phases.push_back(std::make_shared<Phase>(e_Phase));
	}
}
TrafficSignals::TrafficSignals(pugi::xml_node node)
{
	for (pugi::xml_node e_TrafficSignalController = node.child("TrafficSignalController"); e_TrafficSignalController; e_TrafficSignalController= e_TrafficSignalController.next_sibling("TrafficSignalController"))
	{
		m_TrafficSignalControllers.push_back(std::make_shared<TrafficSignalController>(e_TrafficSignalController));
	}
}
TrafficSignalControllerAction::TrafficSignalControllerAction(pugi::xml_node node)
{
	if (node.attribute("trafficSignalControllerRef")) { trafficSignalControllerRef = String(node.attribute("trafficSignalControllerRef")); }  // TODO: >> union - handle properly
	if (node.attribute("phase")) { phase = String(node.attribute("phase")); }  // TODO: >> union - handle properly
}
TrafficSignalControllerCondition::TrafficSignalControllerCondition(pugi::xml_node node)
{
	if (node.attribute("trafficSignalControllerRef")) { trafficSignalControllerRef = String(node.attribute("trafficSignalControllerRef")); }  // TODO: >> union - handle properly
	if (node.attribute("phase")) { phase = String(node.attribute("phase")); }  // TODO: >> union - handle properly
}
TrafficSignalState::TrafficSignalState(pugi::xml_node node)
{
	if (node.attribute("state")) { state = String(node.attribute("state")); }  // TODO: >> union - handle properly
	if (node.attribute("trafficSignalId")) { trafficSignalId = String(node.attribute("trafficSignalId")); }  // TODO: >> union - handle properly
}
TrafficSignalStateAction::TrafficSignalStateAction(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("state")) { state = String(node.attribute("state")); }  // TODO: >> union - handle properly
}
TrafficSinkAction::TrafficSinkAction(pugi::xml_node node)
{
	if (node.attribute("radius")) { radius = Double(node.attribute("radius")); }  // TODO: >> union - handle properly
	if (node.attribute("rate")) { rate = Double(node.attribute("rate")); }  // TODO: >> union - handle properly
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
	if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }
}
TrafficSourceAction::TrafficSourceAction(pugi::xml_node node)
{
	if (node.attribute("radius")) { radius = Double(node.attribute("radius")); }  // TODO: >> union - handle properly
	if (node.attribute("rate")) { rate = Double(node.attribute("rate")); }  // TODO: >> union - handle properly
	if (node.attribute("velocity")) { velocity = Double(node.attribute("velocity")); }  // TODO: >> union - handle properly
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
	if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }
}
TrafficSwarmAction::TrafficSwarmAction(pugi::xml_node node)
{
	if (node.attribute("innerRadius")) { innerRadius = Double(node.attribute("innerRadius")); }  // TODO: >> union - handle properly
	if (node.attribute("numberOfVehicles")) { numberOfVehicles = UnsignedInt(node.attribute("numberOfVehicles")); }  // TODO: >> union - handle properly
	if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // TODO: >> union - handle properly
	if (node.attribute("semiMajorAxis")) { semiMajorAxis = Double(node.attribute("semiMajorAxis")); }  // TODO: >> union - handle properly
	if (node.attribute("semiMinorAxis")) { semiMinorAxis = Double(node.attribute("semiMinorAxis")); }  // TODO: >> union - handle properly
	if (node.attribute("velocity")) { velocity = Double(node.attribute("velocity")); }  // TODO: >> union - handle properly
	if (node.child("CentralObject")) { m_CentralObject = std::make_shared<CentralSwarmObject>(node.child("CentralObject")); }
	if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }
}
Trajectory::Trajectory(pugi::xml_node node)
{
	if (node.attribute("closed")) { closed = Boolean(node.attribute("closed")); }  // TODO: >> union - handle properly
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	if (node.child("Shape")) { m_Shape = std::make_shared<Shape>(node.child("Shape")); }
}
TrajectoryCatalogLocation::TrajectoryCatalogLocation(pugi::xml_node node)
{
	if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }
}
TrajectoryFollowingMode::TrajectoryFollowingMode(pugi::xml_node node)
{
	if (node.attribute("followingMode")) { followingMode = FollowingMode(node.attribute("followingMode")); }  // TODO: >> union - handle properly
}
TransitionDynamics::TransitionDynamics(pugi::xml_node node)
{
	if (node.attribute("dynamicsDimension")) { dynamicsDimension = DynamicsDimension(node.attribute("dynamicsDimension")); }  // TODO: >> union - handle properly
	if (node.attribute("dynamicsShape")) { dynamicsShape = DynamicsShape(node.attribute("dynamicsShape")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
TraveledDistanceCondition::TraveledDistanceCondition(pugi::xml_node node)
{
	if (node.attribute("value")) { value = Double(node.attribute("value")); }  // TODO: >> union - handle properly
}
Trigger::Trigger(pugi::xml_node node)
{
	for (pugi::xml_node e_ConditionGroup = node.child("ConditionGroup"); e_ConditionGroup; e_ConditionGroup= e_ConditionGroup.next_sibling("ConditionGroup"))
	{
		m_ConditionGroups.push_back(std::make_shared<ConditionGroup>(e_ConditionGroup));
	}
}
TriggeringEntities::TriggeringEntities(pugi::xml_node node)
{
	if (node.attribute("triggeringEntitiesRule")) { triggeringEntitiesRule = TriggeringEntitiesRule(node.attribute("triggeringEntitiesRule")); }  // TODO: >> union - handle properly
	for (pugi::xml_node e_EntityRef = node.child("EntityRef"); e_EntityRef; e_EntityRef= e_EntityRef.next_sibling("EntityRef"))
	{
		m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef));
	}
}
UserDefinedAction::UserDefinedAction(pugi::xml_node node)
{
	if (node.child("CustomCommandAction")) { m_CustomCommandAction = std::make_shared<CustomCommandAction>(node.child("CustomCommandAction")); }
}
UserDefinedValueCondition::UserDefinedValueCondition(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // TODO: >> union - handle properly
	if (node.attribute("value")) { value = String(node.attribute("value")); }  // TODO: >> union - handle properly
}
Vehicle::Vehicle(pugi::xml_node node)
{
	if (node.attribute("name")) { name = String(node.attribute("name")); }  // TODO: >> union - handle properly
	if (node.attribute("vehicleCategory")) { vehicleCategory = VehicleCategory(node.attribute("vehicleCategory")); }  // TODO: >> union - handle properly
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }
	if (node.child("Performance")) { m_Performance = std::make_shared<Performance>(node.child("Performance")); }
	if (node.child("Axles")) { m_Axles = std::make_shared<Axles>(node.child("Axles")); }
	if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }
}
VehicleCatalogLocation::VehicleCatalogLocation(pugi::xml_node node)
{
	if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }
}
VehicleCategoryDistribution::VehicleCategoryDistribution(pugi::xml_node node)
{
	for (pugi::xml_node e_VehicleCategoryDistributionEntry = node.child("VehicleCategoryDistributionEntry"); e_VehicleCategoryDistributionEntry; e_VehicleCategoryDistributionEntry= e_VehicleCategoryDistributionEntry.next_sibling("VehicleCategoryDistributionEntry"))
	{
		m_VehicleCategoryDistributionEntrys.push_back(std::make_shared<VehicleCategoryDistributionEntry>(e_VehicleCategoryDistributionEntry));
	}
}
VehicleCategoryDistributionEntry::VehicleCategoryDistributionEntry(pugi::xml_node node)
{
	if (node.attribute("category")) { category = VehicleCategory(node.attribute("category")); }  // TODO: >> union - handle properly
	if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // TODO: >> union - handle properly
}
Vertex::Vertex(pugi::xml_node node)
{
	if (node.attribute("time")) { time = Double(node.attribute("time")); }  // TODO: >> union - handle properly
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
VisibilityAction::VisibilityAction(pugi::xml_node node)
{
	if (node.attribute("graphics")) { graphics = Boolean(node.attribute("graphics")); }  // TODO: >> union - handle properly
	if (node.attribute("sensors")) { sensors = Boolean(node.attribute("sensors")); }  // TODO: >> union - handle properly
	if (node.attribute("traffic")) { traffic = Boolean(node.attribute("traffic")); }  // TODO: >> union - handle properly
}
Waypoint::Waypoint(pugi::xml_node node)
{
	if (node.attribute("routeStrategy")) { routeStrategy = RouteStrategy(node.attribute("routeStrategy")); }  // TODO: >> union - handle properly
	if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }
}
Weather::Weather(pugi::xml_node node)
{
	if (node.attribute("cloudState")) { cloudState = CloudState(node.attribute("cloudState")); }  // TODO: >> union - handle properly
	if (node.child("Sun")) { m_Sun = std::make_shared<Sun>(node.child("Sun")); }
	if (node.child("Fog")) { m_Fog = std::make_shared<Fog>(node.child("Fog")); }
	if (node.child("Precipitation")) { m_Precipitation = std::make_shared<Precipitation>(node.child("Precipitation")); }
}
WorldPosition::WorldPosition(pugi::xml_node node)
{
	if (node.attribute("h")) { h = Double(node.attribute("h")); }  // TODO: >> union - handle properly
	if (node.attribute("p")) { p = Double(node.attribute("p")); }  // TODO: >> union - handle properly
	if (node.attribute("r")) { r = Double(node.attribute("r")); }  // TODO: >> union - handle properly
	if (node.attribute("x")) { x = Double(node.attribute("x")); }  // TODO: >> union - handle properly
	if (node.attribute("y")) { y = Double(node.attribute("y")); }  // TODO: >> union - handle properly
	if (node.attribute("z")) { z = Double(node.attribute("z")); }  // TODO: >> union - handle properly
}
// xs:group -> aliased to group definition
CatalogDefinition::CatalogDefinition(pugi::xml_node node)
{
	if (node.child("Catalog")) { m_Catalog = std::make_shared<Catalog>(node.child("Catalog")); }
}
// xs:group -> aliased to group definition
EntityObject::EntityObject(pugi::xml_node node)
{
	if (node.child("CatalogReference")) { m_CatalogReference = std::make_shared<CatalogReference>(node.child("CatalogReference")); }
	if (node.child("Vehicle")) { m_Vehicle = std::make_shared<Vehicle>(node.child("Vehicle")); }
	if (node.child("Pedestrian")) { m_Pedestrian = std::make_shared<Pedestrian>(node.child("Pedestrian")); }
	if (node.child("MiscObject")) { m_MiscObject = std::make_shared<MiscObject>(node.child("MiscObject")); }
}
// xs:group -> aliased to group definition
OpenScenarioCategory::OpenScenarioCategory(pugi::xml_node node)
{
	{ m_ScenarioDefinition = std::make_shared<ScenarioDefinition>(node); } // Node has no xml def, same node passes through until it finds an element.
	{ m_CatalogDefinition = std::make_shared<CatalogDefinition>(node); } // Node has no xml def, same node passes through until it finds an element.
}
// xs:group -> aliased to group definition
ScenarioDefinition::ScenarioDefinition(pugi::xml_node node)
{
	if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }
	if (node.child("CatalogLocations")) { m_CatalogLocations = std::make_shared<CatalogLocations>(node.child("CatalogLocations")); }
	if (node.child("RoadNetwork")) { m_RoadNetwork = std::make_shared<RoadNetwork>(node.child("RoadNetwork")); }
	if (node.child("Entities")) { m_Entities = std::make_shared<Entities>(node.child("Entities")); }
	if (node.child("Storyboard")) { m_Storyboard = std::make_shared<Storyboard>(node.child("Storyboard")); }
}
xosc::xosc()
{
}
void xosc::load(std::string xoscfilename )
{
	bool status = m_doc.load_file(xoscfilename.c_str());
	if (status)
	{
		std::cout << "Loaded XML File : " << xoscfilename.c_str()<<"\n";
	}
	else
	{
		std::cout << " Failed to load xml definition file .. " << xoscfilename.c_str() <<"\n";
		return;
	}
	m_root = m_doc.root();
}
void xosc::parse()
{
	try {
		m_OpenSCENARIO = std::make_shared<OpenSCENARIO>(m_root.child("OpenSCENARIO"));
		std::cout << "OpenSCENARIO parse successfully " << m_OpenSCENARIO<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR :Exception .. " << e.what() << std::endl;
	}
}
xosc::~xosc()
{
}


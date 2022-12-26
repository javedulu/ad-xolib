//
//  OpenSCENARIO_v1.2.cxx
//  Created by Javed Shaik on Mon Dec 26 09:49:16 2022
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 486a545d-cc8f-47ca-89a0-0a4f9294aca8 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
//
#include "xosc.h"
Boolean::Boolean(pugi::xml_attribute attr)
{
    if (  (m_expression = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_boolean = attr.as_bool(); 
}
void Boolean::save(pugi::xml_attribute attr) 
{
    if (m_expression) { attr = m_expression.value(); }  
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_boolean).c_str(); }   
}
DateTime::DateTime(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_dateTime = attr.as_string(); 
}
void DateTime::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_dateTime).c_str(); }   
}
Double::Double(pugi::xml_attribute attr)
{
    if (  (m_expression = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_double = attr.as_double(); 
}
void Double::save(pugi::xml_attribute attr) 
{
    if (m_expression) { attr = m_expression.value(); }  
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_double).c_str(); }   
}
Int::Int(pugi::xml_attribute attr)
{
    if (  (m_expression = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_int = attr.as_int(); 
}
void Int::save(pugi::xml_attribute attr) 
{
    if (m_expression) { attr = m_expression.value(); }  
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_int).c_str(); }   
}
String::String(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_string = attr.as_string(); 
}
void String::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_string).c_str(); }   
}
UnsignedInt::UnsignedInt(pugi::xml_attribute attr)
{
    if (  (m_expression = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_unsignedInt = attr.as_ullong(); 
}
void UnsignedInt::save(pugi::xml_attribute attr) 
{
    if (m_expression) { attr = m_expression.value(); }  
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_unsignedInt).c_str(); }   
}
UnsignedShort::UnsignedShort(pugi::xml_attribute attr)
{
    if (  (m_expression = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    m_unsignedShort = attr.as_ullong(); 
}
void UnsignedShort::save(pugi::xml_attribute attr) 
{
    if (m_expression) { attr = m_expression.value(); }  
    if (m_parameter) { attr = m_parameter.value(); }  
    { attr = to_str(m_unsignedShort).c_str(); }   
}
AutomaticGearType::AutomaticGearType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_AutomaticGearType>(attr.as_string())) { automaticGearType = str2enum<e_AutomaticGearType>(attr.as_string()); }
}
void AutomaticGearType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_AutomaticGearType>(automaticGearType)) attr = enum2str<e_AutomaticGearType>(automaticGearType).c_str();  
}
CloudState::CloudState(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_CloudState>(attr.as_string())) { cloudState = str2enum<e_CloudState>(attr.as_string()); }
}
void CloudState::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_CloudState>(cloudState)) attr = enum2str<e_CloudState>(cloudState).c_str();  
}
ColorType::ColorType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ColorType>(attr.as_string())) { colorType = str2enum<e_ColorType>(attr.as_string()); }
}
void ColorType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ColorType>(colorType)) attr = enum2str<e_ColorType>(colorType).c_str();  
}
ConditionEdge::ConditionEdge(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ConditionEdge>(attr.as_string())) { conditionEdge = str2enum<e_ConditionEdge>(attr.as_string()); }
}
void ConditionEdge::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ConditionEdge>(conditionEdge)) attr = enum2str<e_ConditionEdge>(conditionEdge).c_str();  
}
ControllerType::ControllerType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ControllerType>(attr.as_string())) { controllerType = str2enum<e_ControllerType>(attr.as_string()); }
}
void ControllerType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ControllerType>(controllerType)) attr = enum2str<e_ControllerType>(controllerType).c_str();  
}
CoordinateSystem::CoordinateSystem(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_CoordinateSystem>(attr.as_string())) { coordinateSystem = str2enum<e_CoordinateSystem>(attr.as_string()); }
}
void CoordinateSystem::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_CoordinateSystem>(coordinateSystem)) attr = enum2str<e_CoordinateSystem>(coordinateSystem).c_str();  
}
DirectionalDimension::DirectionalDimension(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_DirectionalDimension>(attr.as_string())) { directionalDimension = str2enum<e_DirectionalDimension>(attr.as_string()); }
}
void DirectionalDimension::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_DirectionalDimension>(directionalDimension)) attr = enum2str<e_DirectionalDimension>(directionalDimension).c_str();  
}
DynamicsDimension::DynamicsDimension(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_DynamicsDimension>(attr.as_string())) { dynamicsDimension = str2enum<e_DynamicsDimension>(attr.as_string()); }
}
void DynamicsDimension::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_DynamicsDimension>(dynamicsDimension)) attr = enum2str<e_DynamicsDimension>(dynamicsDimension).c_str();  
}
DynamicsShape::DynamicsShape(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_DynamicsShape>(attr.as_string())) { dynamicsShape = str2enum<e_DynamicsShape>(attr.as_string()); }
}
void DynamicsShape::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_DynamicsShape>(dynamicsShape)) attr = enum2str<e_DynamicsShape>(dynamicsShape).c_str();  
}
FollowingMode::FollowingMode(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_FollowingMode>(attr.as_string())) { followingMode = str2enum<e_FollowingMode>(attr.as_string()); }
}
void FollowingMode::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_FollowingMode>(followingMode)) attr = enum2str<e_FollowingMode>(followingMode).c_str();  
}
FractionalCloudCover::FractionalCloudCover(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_FractionalCloudCover>(attr.as_string())) { fractionalCloudCover = str2enum<e_FractionalCloudCover>(attr.as_string()); }
}
void FractionalCloudCover::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_FractionalCloudCover>(fractionalCloudCover)) attr = enum2str<e_FractionalCloudCover>(fractionalCloudCover).c_str();  
}
LateralDisplacement::LateralDisplacement(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_LateralDisplacement>(attr.as_string())) { lateralDisplacement = str2enum<e_LateralDisplacement>(attr.as_string()); }
}
void LateralDisplacement::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_LateralDisplacement>(lateralDisplacement)) attr = enum2str<e_LateralDisplacement>(lateralDisplacement).c_str();  
}
LightMode::LightMode(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_LightMode>(attr.as_string())) { lightMode = str2enum<e_LightMode>(attr.as_string()); }
}
void LightMode::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_LightMode>(lightMode)) attr = enum2str<e_LightMode>(lightMode).c_str();  
}
LongitudinalDisplacement::LongitudinalDisplacement(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_LongitudinalDisplacement>(attr.as_string())) { longitudinalDisplacement = str2enum<e_LongitudinalDisplacement>(attr.as_string()); }
}
void LongitudinalDisplacement::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_LongitudinalDisplacement>(longitudinalDisplacement)) attr = enum2str<e_LongitudinalDisplacement>(longitudinalDisplacement).c_str();  
}
MiscObjectCategory::MiscObjectCategory(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_MiscObjectCategory>(attr.as_string())) { miscObjectCategory = str2enum<e_MiscObjectCategory>(attr.as_string()); }
}
void MiscObjectCategory::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_MiscObjectCategory>(miscObjectCategory)) attr = enum2str<e_MiscObjectCategory>(miscObjectCategory).c_str();  
}
ObjectType::ObjectType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ObjectType>(attr.as_string())) { objectType = str2enum<e_ObjectType>(attr.as_string()); }
}
void ObjectType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ObjectType>(objectType)) attr = enum2str<e_ObjectType>(objectType).c_str();  
}
ParameterType::ParameterType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ParameterType>(attr.as_string())) { parameterType = str2enum<e_ParameterType>(attr.as_string()); }
}
void ParameterType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ParameterType>(parameterType)) attr = enum2str<e_ParameterType>(parameterType).c_str();  
}
PedestrianCategory::PedestrianCategory(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_PedestrianCategory>(attr.as_string())) { pedestrianCategory = str2enum<e_PedestrianCategory>(attr.as_string()); }
}
void PedestrianCategory::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_PedestrianCategory>(pedestrianCategory)) attr = enum2str<e_PedestrianCategory>(pedestrianCategory).c_str();  
}
PedestrianGestureType::PedestrianGestureType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_PedestrianGestureType>(attr.as_string())) { pedestrianGestureType = str2enum<e_PedestrianGestureType>(attr.as_string()); }
}
void PedestrianGestureType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_PedestrianGestureType>(pedestrianGestureType)) attr = enum2str<e_PedestrianGestureType>(pedestrianGestureType).c_str();  
}
PedestrianMotionType::PedestrianMotionType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_PedestrianMotionType>(attr.as_string())) { pedestrianMotionType = str2enum<e_PedestrianMotionType>(attr.as_string()); }
}
void PedestrianMotionType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_PedestrianMotionType>(pedestrianMotionType)) attr = enum2str<e_PedestrianMotionType>(pedestrianMotionType).c_str();  
}
PrecipitationType::PrecipitationType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_PrecipitationType>(attr.as_string())) { precipitationType = str2enum<e_PrecipitationType>(attr.as_string()); }
}
void PrecipitationType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_PrecipitationType>(precipitationType)) attr = enum2str<e_PrecipitationType>(precipitationType).c_str();  
}
Priority::Priority(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_Priority>(attr.as_string())) { priority = str2enum<e_Priority>(attr.as_string()); }
}
void Priority::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_Priority>(priority)) attr = enum2str<e_Priority>(priority).c_str();  
}
ReferenceContext::ReferenceContext(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_ReferenceContext>(attr.as_string())) { referenceContext = str2enum<e_ReferenceContext>(attr.as_string()); }
}
void ReferenceContext::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_ReferenceContext>(referenceContext)) attr = enum2str<e_ReferenceContext>(referenceContext).c_str();  
}
RelativeDistanceType::RelativeDistanceType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_RelativeDistanceType>(attr.as_string())) { relativeDistanceType = str2enum<e_RelativeDistanceType>(attr.as_string()); }
}
void RelativeDistanceType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_RelativeDistanceType>(relativeDistanceType)) attr = enum2str<e_RelativeDistanceType>(relativeDistanceType).c_str();  
}
Role::Role(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_Role>(attr.as_string())) { role = str2enum<e_Role>(attr.as_string()); }
}
void Role::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_Role>(role)) attr = enum2str<e_Role>(role).c_str();  
}
RouteStrategy::RouteStrategy(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_RouteStrategy>(attr.as_string())) { routeStrategy = str2enum<e_RouteStrategy>(attr.as_string()); }
}
void RouteStrategy::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_RouteStrategy>(routeStrategy)) attr = enum2str<e_RouteStrategy>(routeStrategy).c_str();  
}
RoutingAlgorithm::RoutingAlgorithm(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_RoutingAlgorithm>(attr.as_string())) { routingAlgorithm = str2enum<e_RoutingAlgorithm>(attr.as_string()); }
}
void RoutingAlgorithm::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_RoutingAlgorithm>(routingAlgorithm)) attr = enum2str<e_RoutingAlgorithm>(routingAlgorithm).c_str();  
}
Rule::Rule(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_Rule>(attr.as_string())) { rule = str2enum<e_Rule>(attr.as_string()); }
}
void Rule::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_Rule>(rule)) attr = enum2str<e_Rule>(rule).c_str();  
}
SpeedTargetValueType::SpeedTargetValueType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_SpeedTargetValueType>(attr.as_string())) { speedTargetValueType = str2enum<e_SpeedTargetValueType>(attr.as_string()); }
}
void SpeedTargetValueType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_SpeedTargetValueType>(speedTargetValueType)) attr = enum2str<e_SpeedTargetValueType>(speedTargetValueType).c_str();  
}
StoryboardElementState::StoryboardElementState(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_StoryboardElementState>(attr.as_string())) { storyboardElementState = str2enum<e_StoryboardElementState>(attr.as_string()); }
}
void StoryboardElementState::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_StoryboardElementState>(storyboardElementState)) attr = enum2str<e_StoryboardElementState>(storyboardElementState).c_str();  
}
StoryboardElementType::StoryboardElementType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_StoryboardElementType>(attr.as_string())) { storyboardElementType = str2enum<e_StoryboardElementType>(attr.as_string()); }
}
void StoryboardElementType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_StoryboardElementType>(storyboardElementType)) attr = enum2str<e_StoryboardElementType>(storyboardElementType).c_str();  
}
TriggeringEntitiesRule::TriggeringEntitiesRule(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_TriggeringEntitiesRule>(attr.as_string())) { triggeringEntitiesRule = str2enum<e_TriggeringEntitiesRule>(attr.as_string()); }
}
void TriggeringEntitiesRule::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_TriggeringEntitiesRule>(triggeringEntitiesRule)) attr = enum2str<e_TriggeringEntitiesRule>(triggeringEntitiesRule).c_str();  
}
VehicleCategory::VehicleCategory(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_VehicleCategory>(attr.as_string())) { vehicleCategory = str2enum<e_VehicleCategory>(attr.as_string()); }
}
void VehicleCategory::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_VehicleCategory>(vehicleCategory)) attr = enum2str<e_VehicleCategory>(vehicleCategory).c_str();  
}
VehicleComponentType::VehicleComponentType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_VehicleComponentType>(attr.as_string())) { vehicleComponentType = str2enum<e_VehicleComponentType>(attr.as_string()); }
}
void VehicleComponentType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_VehicleComponentType>(vehicleComponentType)) attr = enum2str<e_VehicleComponentType>(vehicleComponentType).c_str();  
}
VehicleLightType::VehicleLightType(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_VehicleLightType>(attr.as_string())) { vehicleLightType = str2enum<e_VehicleLightType>(attr.as_string()); }
}
void VehicleLightType::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_VehicleLightType>(vehicleLightType)) attr = enum2str<e_VehicleLightType>(vehicleLightType).c_str();  
}
Wetness::Wetness(pugi::xml_attribute attr)
{
    if (  (m_parameter = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_Wetness>(attr.as_string())) { wetness = str2enum<e_Wetness>(attr.as_string()); }
}
void Wetness::save(pugi::xml_attribute attr) 
{
    if (m_parameter) { attr = m_parameter.value(); }  
    if (isdefined<e_Wetness>(wetness)) attr = enum2str<e_Wetness>(wetness).c_str();  
}
Action_U::Action_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"GlobalAction")==0) { m_GlobalAction = std::make_shared<GlobalAction>(node); }  
    if (strcmp(node.name(),"UserDefinedAction")==0) { m_UserDefinedAction = std::make_shared<UserDefinedAction>(node); }  
    if (strcmp(node.name(),"PrivateAction")==0) { m_PrivateAction = std::make_shared<PrivateAction>(node); }  
}
void Action_U::save(pugi::xml_node node)
{
    if ( m_GlobalAction ) { m_GlobalAction->save(node.append_child("GlobalAction")); }  
    if ( m_UserDefinedAction ) { m_UserDefinedAction->save(node.append_child("UserDefinedAction")); }  
    if ( m_PrivateAction ) { m_PrivateAction->save(node.append_child("PrivateAction")); }  
}
AnimationType_U::AnimationType_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"ComponentAnimation")==0) { m_ComponentAnimation = std::make_shared<ComponentAnimation>(node); }  
    if (strcmp(node.name(),"PedestrianAnimation")==0) { m_PedestrianAnimation = std::make_shared<PedestrianAnimation>(node); }  
    if (strcmp(node.name(),"AnimationFile")==0) { m_AnimationFile = std::make_shared<AnimationFile>(node); }  
    if (strcmp(node.name(),"UserDefinedAnimation")==0) { m_UserDefinedAnimation = std::make_shared<UserDefinedAnimation>(node); }  
}
void AnimationType_U::save(pugi::xml_node node)
{
    if ( m_ComponentAnimation ) { m_ComponentAnimation->save(node.append_child("ComponentAnimation")); }  
    if ( m_PedestrianAnimation ) { m_PedestrianAnimation->save(node.append_child("PedestrianAnimation")); }  
    if ( m_AnimationFile ) { m_AnimationFile->save(node.append_child("AnimationFile")); }  
    if ( m_UserDefinedAnimation ) { m_UserDefinedAnimation->save(node.append_child("UserDefinedAnimation")); }  
}
AssignControllerAction_U::AssignControllerAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void AssignControllerAction_U::save(pugi::xml_node node)
{
    if ( m_Controller ) { m_Controller->save(node.append_child("Controller")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
AssignRouteAction_U::AssignRouteAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Route")==0) { m_Route = std::make_shared<Route>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void AssignRouteAction_U::save(pugi::xml_node node)
{
    if ( m_Route ) { m_Route->save(node.append_child("Route")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
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
    if (strcmp(node.name(),"VariableCondition")==0) { m_VariableCondition = std::make_shared<VariableCondition>(node); }  
}
void ByValueCondition_U::save(pugi::xml_node node)
{
    if ( m_ParameterCondition ) { m_ParameterCondition->save(node.append_child("ParameterCondition")); }  
    if ( m_TimeOfDayCondition ) { m_TimeOfDayCondition->save(node.append_child("TimeOfDayCondition")); }  
    if ( m_SimulationTimeCondition ) { m_SimulationTimeCondition->save(node.append_child("SimulationTimeCondition")); }  
    if ( m_StoryboardElementStateCondition ) { m_StoryboardElementStateCondition->save(node.append_child("StoryboardElementStateCondition")); }  
    if ( m_UserDefinedValueCondition ) { m_UserDefinedValueCondition->save(node.append_child("UserDefinedValueCondition")); }  
    if ( m_TrafficSignalCondition ) { m_TrafficSignalCondition->save(node.append_child("TrafficSignalCondition")); }  
    if ( m_TrafficSignalControllerCondition ) { m_TrafficSignalControllerCondition->save(node.append_child("TrafficSignalControllerCondition")); }  
    if ( m_VariableCondition ) { m_VariableCondition->save(node.append_child("VariableCondition")); }  
}
CollisionCondition_U::CollisionCondition_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"EntityRef")==0) { m_EntityRef = std::make_shared<EntityRef>(node); }  
    if (strcmp(node.name(),"ByType")==0) { m_ByType = std::make_shared<ByObjectType>(node); }  
}
void CollisionCondition_U::save(pugi::xml_node node)
{
    if ( m_EntityRef ) { m_EntityRef->save(node.append_child("EntityRef")); }  
    if ( m_ByType ) { m_ByType->save(node.append_child("ByType")); }  
}
Color_U::Color_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"ColorRgb")==0) { m_ColorRgb = std::make_shared<ColorRgb>(node); }  
    if (strcmp(node.name(),"ColorCmyk")==0) { m_ColorCmyk = std::make_shared<ColorCmyk>(node); }  
}
void Color_U::save(pugi::xml_node node)
{
    if ( m_ColorRgb ) { m_ColorRgb->save(node.append_child("ColorRgb")); }  
    if ( m_ColorCmyk ) { m_ColorCmyk->save(node.append_child("ColorCmyk")); }  
}
Condition_U::Condition_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"ByEntityCondition")==0) { m_ByEntityCondition = std::make_shared<ByEntityCondition>(node); }  
    if (strcmp(node.name(),"ByValueCondition")==0) { m_ByValueCondition = std::make_shared<ByValueCondition>(node); }  
}
void Condition_U::save(pugi::xml_node node)
{
    if ( m_ByEntityCondition ) { m_ByEntityCondition->save(node.append_child("ByEntityCondition")); }  
    if ( m_ByValueCondition ) { m_ByValueCondition->save(node.append_child("ByValueCondition")); }  
}
ControllerDistributionEntry_U::ControllerDistributionEntry_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void ControllerDistributionEntry_U::save(pugi::xml_node node)
{
    if ( m_Controller ) { m_Controller->save(node.append_child("Controller")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
EntityAction_U::EntityAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AddEntityAction")==0) { m_AddEntityAction = std::make_shared<AddEntityAction>(node); }  
    if (strcmp(node.name(),"DeleteEntityAction")==0) { m_DeleteEntityAction = std::make_shared<DeleteEntityAction>(node); }  
}
void EntityAction_U::save(pugi::xml_node node)
{
    if ( m_AddEntityAction ) { m_AddEntityAction->save(node.append_child("AddEntityAction")); }  
    if ( m_DeleteEntityAction ) { m_DeleteEntityAction->save(node.append_child("DeleteEntityAction")); }  
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
    if (strcmp(node.name(),"RelativeClearanceCondition")==0) { m_RelativeClearanceCondition = std::make_shared<RelativeClearanceCondition>(node); }  
}
void EntityCondition_U::save(pugi::xml_node node)
{
    if ( m_EndOfRoadCondition ) { m_EndOfRoadCondition->save(node.append_child("EndOfRoadCondition")); }  
    if ( m_CollisionCondition ) { m_CollisionCondition->save(node.append_child("CollisionCondition")); }  
    if ( m_OffroadCondition ) { m_OffroadCondition->save(node.append_child("OffroadCondition")); }  
    if ( m_TimeHeadwayCondition ) { m_TimeHeadwayCondition->save(node.append_child("TimeHeadwayCondition")); }  
    if ( m_TimeToCollisionCondition ) { m_TimeToCollisionCondition->save(node.append_child("TimeToCollisionCondition")); }  
    if ( m_AccelerationCondition ) { m_AccelerationCondition->save(node.append_child("AccelerationCondition")); }  
    if ( m_StandStillCondition ) { m_StandStillCondition->save(node.append_child("StandStillCondition")); }  
    if ( m_SpeedCondition ) { m_SpeedCondition->save(node.append_child("SpeedCondition")); }  
    if ( m_RelativeSpeedCondition ) { m_RelativeSpeedCondition->save(node.append_child("RelativeSpeedCondition")); }  
    if ( m_TraveledDistanceCondition ) { m_TraveledDistanceCondition->save(node.append_child("TraveledDistanceCondition")); }  
    if ( m_ReachPositionCondition ) { m_ReachPositionCondition->save(node.append_child("ReachPositionCondition")); }  
    if ( m_DistanceCondition ) { m_DistanceCondition->save(node.append_child("DistanceCondition")); }  
    if ( m_RelativeDistanceCondition ) { m_RelativeDistanceCondition->save(node.append_child("RelativeDistanceCondition")); }  
    if ( m_RelativeClearanceCondition ) { m_RelativeClearanceCondition->save(node.append_child("RelativeClearanceCondition")); }  
}
EnvironmentAction_U::EnvironmentAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Environment")==0) { m_Environment = std::make_shared<Environment>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void EnvironmentAction_U::save(pugi::xml_node node)
{
    if ( m_Environment ) { m_Environment->save(node.append_child("Environment")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
FinalSpeed_U::FinalSpeed_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AbsoluteSpeed")==0) { m_AbsoluteSpeed = std::make_shared<AbsoluteSpeed>(node); }  
    if (strcmp(node.name(),"RelativeSpeedToMaster")==0) { m_RelativeSpeedToMaster = std::make_shared<RelativeSpeedToMaster>(node); }  
}
void FinalSpeed_U::save(pugi::xml_node node)
{
    if ( m_AbsoluteSpeed ) { m_AbsoluteSpeed->save(node.append_child("AbsoluteSpeed")); }  
    if ( m_RelativeSpeedToMaster ) { m_RelativeSpeedToMaster->save(node.append_child("RelativeSpeedToMaster")); }  
}
GlobalAction_U::GlobalAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"EnvironmentAction")==0) { m_EnvironmentAction = std::make_shared<EnvironmentAction>(node); }  
    if (strcmp(node.name(),"EntityAction")==0) { m_EntityAction = std::make_shared<EntityAction>(node); }  
    if (strcmp(node.name(),"ParameterAction")==0) { m_ParameterAction = std::make_shared<ParameterAction>(node); }  
    if (strcmp(node.name(),"InfrastructureAction")==0) { m_InfrastructureAction = std::make_shared<InfrastructureAction>(node); }  
    if (strcmp(node.name(),"TrafficAction")==0) { m_TrafficAction = std::make_shared<TrafficAction>(node); }  
    if (strcmp(node.name(),"VariableAction")==0) { m_VariableAction = std::make_shared<VariableAction>(node); }  
}
void GlobalAction_U::save(pugi::xml_node node)
{
    if ( m_EnvironmentAction ) { m_EnvironmentAction->save(node.append_child("EnvironmentAction")); }  
    if ( m_EntityAction ) { m_EntityAction->save(node.append_child("EntityAction")); }  
    if ( m_ParameterAction ) { m_ParameterAction->save(node.append_child("ParameterAction")); }  
    if ( m_InfrastructureAction ) { m_InfrastructureAction->save(node.append_child("InfrastructureAction")); }  
    if ( m_TrafficAction ) { m_TrafficAction->save(node.append_child("TrafficAction")); }  
    if ( m_VariableAction ) { m_VariableAction->save(node.append_child("VariableAction")); }  
}
InRoutePosition_U::InRoutePosition_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"FromCurrentEntity")==0) { m_FromCurrentEntity = std::make_shared<PositionOfCurrentEntity>(node); }  
    if (strcmp(node.name(),"FromRoadCoordinates")==0) { m_FromRoadCoordinates = std::make_shared<PositionInRoadCoordinates>(node); }  
    if (strcmp(node.name(),"FromLaneCoordinates")==0) { m_FromLaneCoordinates = std::make_shared<PositionInLaneCoordinates>(node); }  
}
void InRoutePosition_U::save(pugi::xml_node node)
{
    if ( m_FromCurrentEntity ) { m_FromCurrentEntity->save(node.append_child("FromCurrentEntity")); }  
    if ( m_FromRoadCoordinates ) { m_FromRoadCoordinates->save(node.append_child("FromRoadCoordinates")); }  
    if ( m_FromLaneCoordinates ) { m_FromLaneCoordinates->save(node.append_child("FromLaneCoordinates")); }  
}
LaneChangeTarget_U::LaneChangeTarget_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"RelativeTargetLane")==0) { m_RelativeTargetLane = std::make_shared<RelativeTargetLane>(node); }  
    if (strcmp(node.name(),"AbsoluteTargetLane")==0) { m_AbsoluteTargetLane = std::make_shared<AbsoluteTargetLane>(node); }  
}
void LaneChangeTarget_U::save(pugi::xml_node node)
{
    if ( m_RelativeTargetLane ) { m_RelativeTargetLane->save(node.append_child("RelativeTargetLane")); }  
    if ( m_AbsoluteTargetLane ) { m_AbsoluteTargetLane->save(node.append_child("AbsoluteTargetLane")); }  
}
LaneOffsetTarget_U::LaneOffsetTarget_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"RelativeTargetLaneOffset")==0) { m_RelativeTargetLaneOffset = std::make_shared<RelativeTargetLaneOffset>(node); }  
    if (strcmp(node.name(),"AbsoluteTargetLaneOffset")==0) { m_AbsoluteTargetLaneOffset = std::make_shared<AbsoluteTargetLaneOffset>(node); }  
}
void LaneOffsetTarget_U::save(pugi::xml_node node)
{
    if ( m_RelativeTargetLaneOffset ) { m_RelativeTargetLaneOffset->save(node.append_child("RelativeTargetLaneOffset")); }  
    if ( m_AbsoluteTargetLaneOffset ) { m_AbsoluteTargetLaneOffset->save(node.append_child("AbsoluteTargetLaneOffset")); }  
}
LateralAction_U::LateralAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"LaneChangeAction")==0) { m_LaneChangeAction = std::make_shared<LaneChangeAction>(node); }  
    if (strcmp(node.name(),"LaneOffsetAction")==0) { m_LaneOffsetAction = std::make_shared<LaneOffsetAction>(node); }  
    if (strcmp(node.name(),"LateralDistanceAction")==0) { m_LateralDistanceAction = std::make_shared<LateralDistanceAction>(node); }  
}
void LateralAction_U::save(pugi::xml_node node)
{
    if ( m_LaneChangeAction ) { m_LaneChangeAction->save(node.append_child("LaneChangeAction")); }  
    if ( m_LaneOffsetAction ) { m_LaneOffsetAction->save(node.append_child("LaneOffsetAction")); }  
    if ( m_LateralDistanceAction ) { m_LateralDistanceAction->save(node.append_child("LateralDistanceAction")); }  
}
LongitudinalAction_U::LongitudinalAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"SpeedAction")==0) { m_SpeedAction = std::make_shared<SpeedAction>(node); }  
    if (strcmp(node.name(),"LongitudinalDistanceAction")==0) { m_LongitudinalDistanceAction = std::make_shared<LongitudinalDistanceAction>(node); }  
    if (strcmp(node.name(),"SpeedProfileAction")==0) { m_SpeedProfileAction = std::make_shared<SpeedProfileAction>(node); }  
}
void LongitudinalAction_U::save(pugi::xml_node node)
{
    if ( m_SpeedAction ) { m_SpeedAction->save(node.append_child("SpeedAction")); }  
    if ( m_LongitudinalDistanceAction ) { m_LongitudinalDistanceAction->save(node.append_child("LongitudinalDistanceAction")); }  
    if ( m_SpeedProfileAction ) { m_SpeedProfileAction->save(node.append_child("SpeedProfileAction")); }  
}
ModifyRule_U::ModifyRule_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AddValue")==0) { m_AddValue = std::make_shared<ParameterAddValueRule>(node); }  
    if (strcmp(node.name(),"MultiplyByValue")==0) { m_MultiplyByValue = std::make_shared<ParameterMultiplyByValueRule>(node); }  
}
void ModifyRule_U::save(pugi::xml_node node)
{
    if ( m_AddValue ) { m_AddValue->save(node.append_child("AddValue")); }  
    if ( m_MultiplyByValue ) { m_MultiplyByValue->save(node.append_child("MultiplyByValue")); }  
}
ObjectController_U::ObjectController_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
    if (strcmp(node.name(),"Controller")==0) { m_Controller = std::make_shared<Controller>(node); }  
}
void ObjectController_U::save(pugi::xml_node node)
{
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
    if ( m_Controller ) { m_Controller->save(node.append_child("Controller")); }  
}
ParameterAction_U::ParameterAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"SetAction")==0) { m_SetAction = std::make_shared<ParameterSetAction>(node); }  
    if (strcmp(node.name(),"ModifyAction")==0) { m_ModifyAction = std::make_shared<ParameterModifyAction>(node); }  
}
void ParameterAction_U::save(pugi::xml_node node)
{
    if ( m_SetAction ) { m_SetAction->save(node.append_child("SetAction")); }  
    if ( m_ModifyAction ) { m_ModifyAction->save(node.append_child("ModifyAction")); }  
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
    if (strcmp(node.name(),"GeoPosition")==0) { m_GeoPosition = std::make_shared<GeoPosition>(node); }  
    if (strcmp(node.name(),"TrajectoryPosition")==0) { m_TrajectoryPosition = std::make_shared<TrajectoryPosition>(node); }  
}
void Position_U::save(pugi::xml_node node)
{
    if ( m_WorldPosition ) { m_WorldPosition->save(node.append_child("WorldPosition")); }  
    if ( m_RelativeWorldPosition ) { m_RelativeWorldPosition->save(node.append_child("RelativeWorldPosition")); }  
    if ( m_RelativeObjectPosition ) { m_RelativeObjectPosition->save(node.append_child("RelativeObjectPosition")); }  
    if ( m_RoadPosition ) { m_RoadPosition->save(node.append_child("RoadPosition")); }  
    if ( m_RelativeRoadPosition ) { m_RelativeRoadPosition->save(node.append_child("RelativeRoadPosition")); }  
    if ( m_LanePosition ) { m_LanePosition->save(node.append_child("LanePosition")); }  
    if ( m_RelativeLanePosition ) { m_RelativeLanePosition->save(node.append_child("RelativeLanePosition")); }  
    if ( m_RoutePosition ) { m_RoutePosition->save(node.append_child("RoutePosition")); }  
    if ( m_GeoPosition ) { m_GeoPosition->save(node.append_child("GeoPosition")); }  
    if ( m_TrajectoryPosition ) { m_TrajectoryPosition->save(node.append_child("TrajectoryPosition")); }  
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
    if (strcmp(node.name(),"AppearanceAction")==0) { m_AppearanceAction = std::make_shared<AppearanceAction>(node); }  
}
void PrivateAction_U::save(pugi::xml_node node)
{
    if ( m_LongitudinalAction ) { m_LongitudinalAction->save(node.append_child("LongitudinalAction")); }  
    if ( m_LateralAction ) { m_LateralAction->save(node.append_child("LateralAction")); }  
    if ( m_VisibilityAction ) { m_VisibilityAction->save(node.append_child("VisibilityAction")); }  
    if ( m_SynchronizeAction ) { m_SynchronizeAction->save(node.append_child("SynchronizeAction")); }  
    if ( m_ActivateControllerAction ) { m_ActivateControllerAction->save(node.append_child("ActivateControllerAction")); }  
    if ( m_ControllerAction ) { m_ControllerAction->save(node.append_child("ControllerAction")); }  
    if ( m_TeleportAction ) { m_TeleportAction->save(node.append_child("TeleportAction")); }  
    if ( m_RoutingAction ) { m_RoutingAction->save(node.append_child("RoutingAction")); }  
    if ( m_AppearanceAction ) { m_AppearanceAction->save(node.append_child("AppearanceAction")); }  
}
RouteRef_U::RouteRef_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Route")==0) { m_Route = std::make_shared<Route>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void RouteRef_U::save(pugi::xml_node node)
{
    if ( m_Route ) { m_Route->save(node.append_child("Route")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
RoutingAction_U::RoutingAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AssignRouteAction")==0) { m_AssignRouteAction = std::make_shared<AssignRouteAction>(node); }  
    if (strcmp(node.name(),"FollowTrajectoryAction")==0) { m_FollowTrajectoryAction = std::make_shared<FollowTrajectoryAction>(node); }  
    if (strcmp(node.name(),"AcquirePositionAction")==0) { m_AcquirePositionAction = std::make_shared<AcquirePositionAction>(node); }  
}
void RoutingAction_U::save(pugi::xml_node node)
{
    if ( m_AssignRouteAction ) { m_AssignRouteAction->save(node.append_child("AssignRouteAction")); }  
    if ( m_FollowTrajectoryAction ) { m_FollowTrajectoryAction->save(node.append_child("FollowTrajectoryAction")); }  
    if ( m_AcquirePositionAction ) { m_AcquirePositionAction->save(node.append_child("AcquirePositionAction")); }  
}
SelectedEntities_U::SelectedEntities_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"EntityRef")==0)
    {
        m_EntityRefs.push_back(std::make_shared<EntityRef>(node));
    }
    // for (pugi::xml_node e_EntityRef : node.children())
    // {
    // 	if (strcmp(node.name(),"EntityRef")==0)
    // 	{
    // 		m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef)); 
    // 	}
    // }
    if (strcmp(node.name(),"ByType")==0)
    {
        m_ByTypes.push_back(std::make_shared<ByType>(node));
    }
    // for (pugi::xml_node e_ByType : node.children())
    // {
    // 	if (strcmp(node.name(),"ByType")==0)
    // 	{
    // 		m_ByTypes.push_back(std::make_shared<ByType>(e_ByType)); 
    // 	}
    // }
}
void SelectedEntities_U::save(pugi::xml_node node)
{
    for (std::shared_ptr<EntityRef> m_EntityRef : m_EntityRefs ){ m_EntityRef->save(node.append_child("EntityRef")); } 
    for (std::shared_ptr<ByType> m_ByType : m_ByTypes ){ m_ByType->save(node.append_child("ByType")); } 
}
Shape_U::Shape_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Polyline")==0) { m_Polyline = std::make_shared<Polyline>(node); }  
    if (strcmp(node.name(),"Clothoid")==0) { m_Clothoid = std::make_shared<Clothoid>(node); }  
    if (strcmp(node.name(),"Nurbs")==0) { m_Nurbs = std::make_shared<Nurbs>(node); }  
}
void Shape_U::save(pugi::xml_node node)
{
    if ( m_Polyline ) { m_Polyline->save(node.append_child("Polyline")); }  
    if ( m_Clothoid ) { m_Clothoid->save(node.append_child("Clothoid")); }  
    if ( m_Nurbs ) { m_Nurbs->save(node.append_child("Nurbs")); }  
}
SpeedActionTarget_U::SpeedActionTarget_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"RelativeTargetSpeed")==0) { m_RelativeTargetSpeed = std::make_shared<RelativeTargetSpeed>(node); }  
    if (strcmp(node.name(),"AbsoluteTargetSpeed")==0) { m_AbsoluteTargetSpeed = std::make_shared<AbsoluteTargetSpeed>(node); }  
}
void SpeedActionTarget_U::save(pugi::xml_node node)
{
    if ( m_RelativeTargetSpeed ) { m_RelativeTargetSpeed->save(node.append_child("RelativeTargetSpeed")); }  
    if ( m_AbsoluteTargetSpeed ) { m_AbsoluteTargetSpeed->save(node.append_child("AbsoluteTargetSpeed")); }  
}
TimeReference_U::TimeReference_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"None")==0) { m_None = std::make_shared<None>(node); }  
    if (strcmp(node.name(),"Timing")==0) { m_Timing = std::make_shared<Timing>(node); }  
}
void TimeReference_U::save(pugi::xml_node node)
{
    if ( m_None ) { m_None->save(node.append_child("None")); }  
    if ( m_Timing ) { m_Timing->save(node.append_child("Timing")); }  
}
TimeToCollisionConditionTarget_U::TimeToCollisionConditionTarget_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Position")==0) { m_Position = std::make_shared<Position>(node); }  
    if (strcmp(node.name(),"EntityRef")==0) { m_EntityRef = std::make_shared<EntityRef>(node); }  
}
void TimeToCollisionConditionTarget_U::save(pugi::xml_node node)
{
    if ( m_Position ) { m_Position->save(node.append_child("Position")); }  
    if ( m_EntityRef ) { m_EntityRef->save(node.append_child("EntityRef")); }  
}
TrafficAction_U::TrafficAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"TrafficSourceAction")==0) { m_TrafficSourceAction = std::make_shared<TrafficSourceAction>(node); }  
    if (strcmp(node.name(),"TrafficSinkAction")==0) { m_TrafficSinkAction = std::make_shared<TrafficSinkAction>(node); }  
    if (strcmp(node.name(),"TrafficSwarmAction")==0) { m_TrafficSwarmAction = std::make_shared<TrafficSwarmAction>(node); }  
    if (strcmp(node.name(),"TrafficStopAction")==0) { m_TrafficStopAction = std::make_shared<TrafficStopAction>(node); }  
}
void TrafficAction_U::save(pugi::xml_node node)
{
    if ( m_TrafficSourceAction ) { m_TrafficSourceAction->save(node.append_child("TrafficSourceAction")); }  
    if ( m_TrafficSinkAction ) { m_TrafficSinkAction->save(node.append_child("TrafficSinkAction")); }  
    if ( m_TrafficSwarmAction ) { m_TrafficSwarmAction->save(node.append_child("TrafficSwarmAction")); }  
    if ( m_TrafficStopAction ) { m_TrafficStopAction->save(node.append_child("TrafficStopAction")); }  
}
TrafficSignalAction_U::TrafficSignalAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"TrafficSignalControllerAction")==0) { m_TrafficSignalControllerAction = std::make_shared<TrafficSignalControllerAction>(node); }  
    if (strcmp(node.name(),"TrafficSignalStateAction")==0) { m_TrafficSignalStateAction = std::make_shared<TrafficSignalStateAction>(node); }  
}
void TrafficSignalAction_U::save(pugi::xml_node node)
{
    if ( m_TrafficSignalControllerAction ) { m_TrafficSignalControllerAction->save(node.append_child("TrafficSignalControllerAction")); }  
    if ( m_TrafficSignalStateAction ) { m_TrafficSignalStateAction->save(node.append_child("TrafficSignalStateAction")); }  
}
TrajectoryRef_U::TrajectoryRef_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"Trajectory")==0) { m_Trajectory = std::make_shared<Trajectory>(node); }  
    if (strcmp(node.name(),"CatalogReference")==0) { m_CatalogReference = std::make_shared<CatalogReference>(node); }  
}
void TrajectoryRef_U::save(pugi::xml_node node)
{
    if ( m_Trajectory ) { m_Trajectory->save(node.append_child("Trajectory")); }  
    if ( m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }  
}
VariableAction_U::VariableAction_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"SetAction")==0) { m_SetAction = std::make_shared<VariableSetAction>(node); }  
    if (strcmp(node.name(),"ModifyAction")==0) { m_ModifyAction = std::make_shared<VariableModifyAction>(node); }  
}
void VariableAction_U::save(pugi::xml_node node)
{
    if ( m_SetAction ) { m_SetAction->save(node.append_child("SetAction")); }  
    if ( m_ModifyAction ) { m_ModifyAction->save(node.append_child("ModifyAction")); }  
}
VariableModifyRule_U::VariableModifyRule_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"AddValue")==0) { m_AddValue = std::make_shared<VariableAddValueRule>(node); }  
    if (strcmp(node.name(),"MultiplyByValue")==0) { m_MultiplyByValue = std::make_shared<VariableMultiplyByValueRule>(node); }  
}
void VariableModifyRule_U::save(pugi::xml_node node)
{
    if ( m_AddValue ) { m_AddValue->save(node.append_child("AddValue")); }  
    if ( m_MultiplyByValue ) { m_MultiplyByValue->save(node.append_child("MultiplyByValue")); }  
}
AbsoluteSpeed::AbsoluteSpeed(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    { m_SteadyState = std::make_shared<SteadyState>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void AbsoluteSpeed::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
    { if (m_SteadyState ) { m_SteadyState->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
AbsoluteTargetLane::AbsoluteTargetLane(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void AbsoluteTargetLane::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
AbsoluteTargetLaneOffset::AbsoluteTargetLaneOffset(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void AbsoluteTargetLaneOffset::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
AbsoluteTargetSpeed::AbsoluteTargetSpeed(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void AbsoluteTargetSpeed::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
AccelerationCondition::AccelerationCondition(pugi::xml_node node) 
{
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("direction")) { direction = DirectionalDimension(node.attribute("direction")); }  // >> union - handle properly
}
void AccelerationCondition::save(pugi::xml_node node)
{
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    direction.save(node.append_attribute("direction")); 
}
AcquirePositionAction::AcquirePositionAction(pugi::xml_node node) 
{
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void AcquirePositionAction::save(pugi::xml_node node)
{
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
Act::Act(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    for (pugi::xml_node e_ManeuverGroup = node.child("ManeuverGroup"); e_ManeuverGroup; e_ManeuverGroup= e_ManeuverGroup.next_sibling("ManeuverGroup"))
    {
        m_ManeuverGroups.push_back(std::make_shared<ManeuverGroup>(e_ManeuverGroup));
    }
    if (node.child("StartTrigger")) { m_StartTrigger = std::make_shared<Trigger>(node.child("StartTrigger")); }  
    if (node.child("StopTrigger")) { m_StopTrigger = std::make_shared<Trigger>(node.child("StopTrigger")); }  
}
void Act::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    for (std::shared_ptr<ManeuverGroup> m_ManeuverGroup : m_ManeuverGroups ){ m_ManeuverGroup->save(node.append_child("ManeuverGroup")); } 
    if (m_StartTrigger ) { m_StartTrigger->save(node.append_child("StartTrigger")); }   
    if (m_StopTrigger ) { m_StopTrigger->save(node.append_child("StopTrigger")); }   
}
Action::Action(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.first_child()) { m_Action = std::make_shared<Action_U>(node.first_child()); }  
}
void Action::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_Action) { m_Action->save(node); }  
}
ActivateControllerAction::ActivateControllerAction(pugi::xml_node node) 
{
    if (node.attribute("controllerRef")) { controllerRef = String(node.attribute("controllerRef")); }  // >> union - handle properly
    if (node.attribute("lateral")) { lateral = Boolean(node.attribute("lateral")); }  // >> union - handle properly
    if (node.attribute("longitudinal")) { longitudinal = Boolean(node.attribute("longitudinal")); }  // >> union - handle properly
    if (node.attribute("animation")) { animation = Boolean(node.attribute("animation")); }  // >> union - handle properly
    if (node.attribute("lighting")) { lighting = Boolean(node.attribute("lighting")); }  // >> union - handle properly
}
void ActivateControllerAction::save(pugi::xml_node node)
{
    controllerRef.save(node.append_attribute("controllerRef")); 
    lateral.save(node.append_attribute("lateral")); 
    longitudinal.save(node.append_attribute("longitudinal")); 
    animation.save(node.append_attribute("animation")); 
    lighting.save(node.append_attribute("lighting")); 
}
Actors::Actors(pugi::xml_node node) 
{
    if (node.attribute("selectTriggeringEntities")) { selectTriggeringEntities = Boolean(node.attribute("selectTriggeringEntities")); }  // >> union - handle properly
    for (pugi::xml_node e_EntityRef = node.child("EntityRef"); e_EntityRef; e_EntityRef= e_EntityRef.next_sibling("EntityRef"))
    {
        m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef));
    }
}
void Actors::save(pugi::xml_node node)
{
    selectTriggeringEntities.save(node.append_attribute("selectTriggeringEntities")); 
    for (std::shared_ptr<EntityRef> m_EntityRef : m_EntityRefs ){ m_EntityRef->save(node.append_child("EntityRef")); } 
}
AddEntityAction::AddEntityAction(pugi::xml_node node) 
{
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void AddEntityAction::save(pugi::xml_node node)
{
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
AnimationAction::AnimationAction(pugi::xml_node node) 
{
    if (node.attribute("loop")) { loop = Boolean(node.attribute("loop")); }  // >> union - handle properly
    if (node.attribute("animationDuration")) { animationDuration = Double(node.attribute("animationDuration")); }  // >> union - handle properly
    if (node.child("AnimationType")) { m_AnimationType = std::make_shared<AnimationType>(node.child("AnimationType")); }  
    if (node.child("AnimationState")) { m_AnimationState = std::make_shared<AnimationState>(node.child("AnimationState")); }  
}
void AnimationAction::save(pugi::xml_node node)
{
    loop.save(node.append_attribute("loop")); 
    animationDuration.save(node.append_attribute("animationDuration")); 
    if (m_AnimationType ) { m_AnimationType->save(node.append_child("AnimationType")); }   
    if (m_AnimationState ) { m_AnimationState->save(node.append_child("AnimationState")); }   
}
AnimationFile::AnimationFile(pugi::xml_node node) 
{
    if (node.attribute("timeOffset")) { timeOffset = Double(node.attribute("timeOffset")); }  // >> union - handle properly
    if (node.child("File")) { m_File = std::make_shared<File>(node.child("File")); }  
}
void AnimationFile::save(pugi::xml_node node)
{
    timeOffset.save(node.append_attribute("timeOffset")); 
    if (m_File ) { m_File->save(node.append_child("File")); }   
}
AnimationState::AnimationState(pugi::xml_node node) 
{
    if (node.attribute("state")) { state = Double(node.attribute("state")); }  // >> union - handle properly
}
void AnimationState::save(pugi::xml_node node)
{
    state.save(node.append_attribute("state")); 
}
AnimationType::AnimationType(pugi::xml_node node) 
{
    if (node.first_child()) { m_AnimationType = std::make_shared<AnimationType_U>(node.first_child()); }  
}
void AnimationType::save(pugi::xml_node node)
{
    if (m_AnimationType) { m_AnimationType->save(node); }  
}
AppearanceAction::AppearanceAction(pugi::xml_node node) 
{
    if (node.child("LightStateAction")) { m_LightStateAction = std::make_shared<LightStateAction>(node.child("LightStateAction")); }  
    if (node.child("AnimationAction")) { m_AnimationAction = std::make_shared<AnimationAction>(node.child("AnimationAction")); }  
}
void AppearanceAction::save(pugi::xml_node node)
{
    if (m_LightStateAction ) { m_LightStateAction->save(node.append_child("LightStateAction")); }   
    if (m_AnimationAction ) { m_AnimationAction->save(node.append_child("AnimationAction")); }   
}
AssignControllerAction::AssignControllerAction(pugi::xml_node node) 
{
    if (node.attribute("activateLateral")) { activateLateral = Boolean(node.attribute("activateLateral")); }  // >> union - handle properly
    if (node.attribute("activateLongitudinal")) { activateLongitudinal = Boolean(node.attribute("activateLongitudinal")); }  // >> union - handle properly
    if (node.attribute("activateAnimation")) { activateAnimation = Boolean(node.attribute("activateAnimation")); }  // >> union - handle properly
    if (node.attribute("activateLighting")) { activateLighting = Boolean(node.attribute("activateLighting")); }  // >> union - handle properly
    if (node.first_child()) { m_AssignControllerAction = std::make_shared<AssignControllerAction_U>(node.first_child()); }  
}
void AssignControllerAction::save(pugi::xml_node node)
{
    activateLateral.save(node.append_attribute("activateLateral")); 
    activateLongitudinal.save(node.append_attribute("activateLongitudinal")); 
    activateAnimation.save(node.append_attribute("activateAnimation")); 
    activateLighting.save(node.append_attribute("activateLighting")); 
    if (m_AssignControllerAction) { m_AssignControllerAction->save(node); }  
}
AssignRouteAction::AssignRouteAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_AssignRouteAction = std::make_shared<AssignRouteAction_U>(node.first_child()); }  
}
void AssignRouteAction::save(pugi::xml_node node)
{
    if (m_AssignRouteAction) { m_AssignRouteAction->save(node); }  
}
AutomaticGear::AutomaticGear(pugi::xml_node node) 
{
    if (node.attribute("gear")) { gear = AutomaticGearType(node.attribute("gear")); }  // >> union - handle properly
}
void AutomaticGear::save(pugi::xml_node node)
{
    gear.save(node.append_attribute("gear")); 
}
Axle::Axle(pugi::xml_node node) 
{
    if (node.attribute("maxSteering")) { maxSteering = Double(node.attribute("maxSteering")); }  // >> union - handle properly
    if (node.attribute("positionX")) { positionX = Double(node.attribute("positionX")); }  // >> union - handle properly
    if (node.attribute("positionZ")) { positionZ = Double(node.attribute("positionZ")); }  // >> union - handle properly
    if (node.attribute("trackWidth")) { trackWidth = Double(node.attribute("trackWidth")); }  // >> union - handle properly
    if (node.attribute("wheelDiameter")) { wheelDiameter = Double(node.attribute("wheelDiameter")); }  // >> union - handle properly
}
void Axle::save(pugi::xml_node node)
{
    maxSteering.save(node.append_attribute("maxSteering")); 
    positionX.save(node.append_attribute("positionX")); 
    positionZ.save(node.append_attribute("positionZ")); 
    trackWidth.save(node.append_attribute("trackWidth")); 
    wheelDiameter.save(node.append_attribute("wheelDiameter")); 
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
void Axles::save(pugi::xml_node node)
{
    if (m_FrontAxle ) { m_FrontAxle->save(node.append_child("FrontAxle")); }   
    if (m_RearAxle ) { m_RearAxle->save(node.append_child("RearAxle")); }   
    for (std::shared_ptr<Axle> m_AdditionalAxle : m_AdditionalAxles ){ m_AdditionalAxle->save(node.append_child("AdditionalAxle")); } 
}
BoundingBox::BoundingBox(pugi::xml_node node) 
{
    if (node.child("Center")) { m_Center = std::make_shared<Center>(node.child("Center")); }  
    if (node.child("Dimensions")) { m_Dimensions = std::make_shared<Dimensions>(node.child("Dimensions")); }  
}
void BoundingBox::save(pugi::xml_node node)
{
    if (m_Center ) { m_Center->save(node.append_child("Center")); }   
    if (m_Dimensions ) { m_Dimensions->save(node.append_child("Dimensions")); }   
}
Brake::Brake(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("maxRate")) { maxRate = Double(node.attribute("maxRate")); }  // >> union - handle properly
}
void Brake::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
    maxRate.save(node.append_attribute("maxRate")); 
}
ByEntityCondition::ByEntityCondition(pugi::xml_node node) 
{
    if (node.child("TriggeringEntities")) { m_TriggeringEntities = std::make_shared<TriggeringEntities>(node.child("TriggeringEntities")); }  
    if (node.child("EntityCondition")) { m_EntityCondition = std::make_shared<EntityCondition>(node.child("EntityCondition")); }  
}
void ByEntityCondition::save(pugi::xml_node node)
{
    if (m_TriggeringEntities ) { m_TriggeringEntities->save(node.append_child("TriggeringEntities")); }   
    if (m_EntityCondition ) { m_EntityCondition->save(node.append_child("EntityCondition")); }   
}
ByObjectType::ByObjectType(pugi::xml_node node) 
{
    if (node.attribute("type")) { type = ObjectType(node.attribute("type")); }  // >> union - handle properly
}
void ByObjectType::save(pugi::xml_node node)
{
    type.save(node.append_attribute("type")); 
}
ByType::ByType(pugi::xml_node node) 
{
    if (node.attribute("objectType")) { objectType = ObjectType(node.attribute("objectType")); }  // >> union - handle properly
}
void ByType::save(pugi::xml_node node)
{
    objectType.save(node.append_attribute("objectType")); 
}
ByValueCondition::ByValueCondition(pugi::xml_node node) 
{
    if (node.first_child()) { m_ByValueCondition = std::make_shared<ByValueCondition_U>(node.first_child()); }  
}
void ByValueCondition::save(pugi::xml_node node)
{
    if (m_ByValueCondition) { m_ByValueCondition->save(node); }  
}
Catalog::Catalog(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
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
void Catalog::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    for (std::shared_ptr<Vehicle> m_Vehicle : m_Vehicles ){ m_Vehicle->save(node.append_child("Vehicle")); } 
    for (std::shared_ptr<Controller> m_Controller : m_Controllers ){ m_Controller->save(node.append_child("Controller")); } 
    for (std::shared_ptr<Pedestrian> m_Pedestrian : m_Pedestrians ){ m_Pedestrian->save(node.append_child("Pedestrian")); } 
    for (std::shared_ptr<MiscObject> m_MiscObject : m_MiscObjects ){ m_MiscObject->save(node.append_child("MiscObject")); } 
    for (std::shared_ptr<Environment> m_Environment : m_Environments ){ m_Environment->save(node.append_child("Environment")); } 
    for (std::shared_ptr<Maneuver> m_Maneuver : m_Maneuvers ){ m_Maneuver->save(node.append_child("Maneuver")); } 
    for (std::shared_ptr<Trajectory> m_Trajectory : m_Trajectorys ){ m_Trajectory->save(node.append_child("Trajectory")); } 
    for (std::shared_ptr<Route> m_Route : m_Routes ){ m_Route->save(node.append_child("Route")); } 
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
void CatalogLocations::save(pugi::xml_node node)
{
    if (m_VehicleCatalog ) { m_VehicleCatalog->save(node.append_child("VehicleCatalog")); }   
    if (m_ControllerCatalog ) { m_ControllerCatalog->save(node.append_child("ControllerCatalog")); }   
    if (m_PedestrianCatalog ) { m_PedestrianCatalog->save(node.append_child("PedestrianCatalog")); }   
    if (m_MiscObjectCatalog ) { m_MiscObjectCatalog->save(node.append_child("MiscObjectCatalog")); }   
    if (m_EnvironmentCatalog ) { m_EnvironmentCatalog->save(node.append_child("EnvironmentCatalog")); }   
    if (m_ManeuverCatalog ) { m_ManeuverCatalog->save(node.append_child("ManeuverCatalog")); }   
    if (m_TrajectoryCatalog ) { m_TrajectoryCatalog->save(node.append_child("TrajectoryCatalog")); }   
    if (m_RouteCatalog ) { m_RouteCatalog->save(node.append_child("RouteCatalog")); }   
}
CatalogReference::CatalogReference(pugi::xml_node node) 
{
    if (node.attribute("catalogName")) { catalogName = String(node.attribute("catalogName")); }  // >> union - handle properly
    if (node.attribute("entryName")) { entryName = String(node.attribute("entryName")); }  // >> union - handle properly
    if (node.child("ParameterAssignments")) { m_ParameterAssignments = std::make_shared<ParameterAssignments>(node.child("ParameterAssignments")); }  
}
void CatalogReference::save(pugi::xml_node node)
{
    catalogName.save(node.append_attribute("catalogName")); 
    entryName.save(node.append_attribute("entryName")); 
    if (m_ParameterAssignments ) { m_ParameterAssignments->save(node.append_child("ParameterAssignments")); }   
}
Center::Center(pugi::xml_node node) 
{
    if (node.attribute("x")) { x = Double(node.attribute("x")); }  // >> union - handle properly
    if (node.attribute("y")) { y = Double(node.attribute("y")); }  // >> union - handle properly
    if (node.attribute("z")) { z = Double(node.attribute("z")); }  // >> union - handle properly
}
void Center::save(pugi::xml_node node)
{
    x.save(node.append_attribute("x")); 
    y.save(node.append_attribute("y")); 
    z.save(node.append_attribute("z")); 
}
CentralSwarmObject::CentralSwarmObject(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
}
void CentralSwarmObject::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
}
Clothoid::Clothoid(pugi::xml_node node) 
{
    if (node.attribute("curvature")) { curvature = Double(node.attribute("curvature")); }  // >> union - handle properly
    if (node.attribute("curvatureDot")) { curvatureDot = Double(node.attribute("curvatureDot")); }  // >> union - handle properly
    if (node.attribute("length")) { length = Double(node.attribute("length")); }  // >> union - handle properly
    if (node.attribute("startTime")) { startTime = Double(node.attribute("startTime")); }  // >> union - handle properly
    if (node.attribute("stopTime")) { stopTime = Double(node.attribute("stopTime")); }  // >> union - handle properly
    if (node.attribute("curvaturePrime")) { curvaturePrime = Double(node.attribute("curvaturePrime")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void Clothoid::save(pugi::xml_node node)
{
    curvature.save(node.append_attribute("curvature")); 
    curvatureDot.save(node.append_attribute("curvatureDot")); 
    length.save(node.append_attribute("length")); 
    startTime.save(node.append_attribute("startTime")); 
    stopTime.save(node.append_attribute("stopTime")); 
    curvaturePrime.save(node.append_attribute("curvaturePrime")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
CollisionCondition::CollisionCondition(pugi::xml_node node) 
{
    if (node.first_child()) { m_CollisionCondition = std::make_shared<CollisionCondition_U>(node.first_child()); }  
}
void CollisionCondition::save(pugi::xml_node node)
{
    if (m_CollisionCondition) { m_CollisionCondition->save(node); }  
}
Color::Color(pugi::xml_node node) 
{
    if (node.attribute("colorType")) { colorType = ColorType(node.attribute("colorType")); }  // >> union - handle properly
    if (node.first_child()) { m_Color = std::make_shared<Color_U>(node.first_child()); }  
}
void Color::save(pugi::xml_node node)
{
    colorType.save(node.append_attribute("colorType")); 
    if (m_Color) { m_Color->save(node); }  
}
ColorCmyk::ColorCmyk(pugi::xml_node node) 
{
    if (node.attribute("cyan")) { cyan = Double(node.attribute("cyan")); }  // >> union - handle properly
    if (node.attribute("magenta")) { magenta = Double(node.attribute("magenta")); }  // >> union - handle properly
    if (node.attribute("yellow")) { yellow = Double(node.attribute("yellow")); }  // >> union - handle properly
    if (node.attribute("key")) { key = Double(node.attribute("key")); }  // >> union - handle properly
}
void ColorCmyk::save(pugi::xml_node node)
{
    cyan.save(node.append_attribute("cyan")); 
    magenta.save(node.append_attribute("magenta")); 
    yellow.save(node.append_attribute("yellow")); 
    key.save(node.append_attribute("key")); 
}
ColorRgb::ColorRgb(pugi::xml_node node) 
{
    if (node.attribute("red")) { red = Double(node.attribute("red")); }  // >> union - handle properly
    if (node.attribute("green")) { green = Double(node.attribute("green")); }  // >> union - handle properly
    if (node.attribute("blue")) { blue = Double(node.attribute("blue")); }  // >> union - handle properly
}
void ColorRgb::save(pugi::xml_node node)
{
    red.save(node.append_attribute("red")); 
    green.save(node.append_attribute("green")); 
    blue.save(node.append_attribute("blue")); 
}
ComponentAnimation::ComponentAnimation(pugi::xml_node node) 
{
    if (node.child("VehicleComponent")) { m_VehicleComponent = std::make_shared<VehicleComponent>(node.child("VehicleComponent")); }  
    if (node.child("UserDefinedComponent")) { m_UserDefinedComponent = std::make_shared<UserDefinedComponent>(node.child("UserDefinedComponent")); }  
}
void ComponentAnimation::save(pugi::xml_node node)
{
    if (m_VehicleComponent ) { m_VehicleComponent->save(node.append_child("VehicleComponent")); }   
    if (m_UserDefinedComponent ) { m_UserDefinedComponent->save(node.append_child("UserDefinedComponent")); }   
}
Condition::Condition(pugi::xml_node node) 
{
    if (node.attribute("conditionEdge")) { conditionEdge = ConditionEdge(node.attribute("conditionEdge")); }  // >> union - handle properly
    if (node.attribute("delay")) { delay = Double(node.attribute("delay")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.first_child()) { m_Condition = std::make_shared<Condition_U>(node.first_child()); }  
}
void Condition::save(pugi::xml_node node)
{
    conditionEdge.save(node.append_attribute("conditionEdge")); 
    delay.save(node.append_attribute("delay")); 
    name.save(node.append_attribute("name")); 
    if (m_Condition) { m_Condition->save(node); }  
}
ConditionGroup::ConditionGroup(pugi::xml_node node) 
{
    for (pugi::xml_node e_Condition = node.child("Condition"); e_Condition; e_Condition= e_Condition.next_sibling("Condition"))
    {
        m_Conditions.push_back(std::make_shared<Condition>(e_Condition));
    }
}
void ConditionGroup::save(pugi::xml_node node)
{
    for (std::shared_ptr<Condition> m_Condition : m_Conditions ){ m_Condition->save(node.append_child("Condition")); } 
}
Controller::Controller(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("controllerType")) { controllerType = ControllerType(node.attribute("controllerType")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void Controller::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    controllerType.save(node.append_attribute("controllerType")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
ControllerAction::ControllerAction(pugi::xml_node node) 
{
    if (node.child("AssignControllerAction")) { m_AssignControllerAction = std::make_shared<AssignControllerAction>(node.child("AssignControllerAction")); }  
    if (node.child("OverrideControllerValueAction")) { m_OverrideControllerValueAction = std::make_shared<OverrideControllerValueAction>(node.child("OverrideControllerValueAction")); }  
    if (node.child("ActivateControllerAction")) { m_ActivateControllerAction = std::make_shared<ActivateControllerAction>(node.child("ActivateControllerAction")); }  
}
void ControllerAction::save(pugi::xml_node node)
{
    if (m_AssignControllerAction ) { m_AssignControllerAction->save(node.append_child("AssignControllerAction")); }   
    if (m_OverrideControllerValueAction ) { m_OverrideControllerValueAction->save(node.append_child("OverrideControllerValueAction")); }   
    if (m_ActivateControllerAction ) { m_ActivateControllerAction->save(node.append_child("ActivateControllerAction")); }   
}
ControllerCatalogLocation::ControllerCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void ControllerCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
ControllerDistribution::ControllerDistribution(pugi::xml_node node) 
{
    for (pugi::xml_node e_ControllerDistributionEntry = node.child("ControllerDistributionEntry"); e_ControllerDistributionEntry; e_ControllerDistributionEntry= e_ControllerDistributionEntry.next_sibling("ControllerDistributionEntry"))
    {
        m_ControllerDistributionEntrys.push_back(std::make_shared<ControllerDistributionEntry>(e_ControllerDistributionEntry));
    }
}
void ControllerDistribution::save(pugi::xml_node node)
{
    for (std::shared_ptr<ControllerDistributionEntry> m_ControllerDistributionEntry : m_ControllerDistributionEntrys ){ m_ControllerDistributionEntry->save(node.append_child("ControllerDistributionEntry")); } 
}
ControllerDistributionEntry::ControllerDistributionEntry(pugi::xml_node node) 
{
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
    if (node.first_child()) { m_ControllerDistributionEntry = std::make_shared<ControllerDistributionEntry_U>(node.first_child()); }  
}
void ControllerDistributionEntry::save(pugi::xml_node node)
{
    weight.save(node.append_attribute("weight")); 
    if (m_ControllerDistributionEntry) { m_ControllerDistributionEntry->save(node); }  
}
ControlPoint::ControlPoint(pugi::xml_node node) 
{
    if (node.attribute("time")) { time = Double(node.attribute("time")); }  // >> union - handle properly
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void ControlPoint::save(pugi::xml_node node)
{
    time.save(node.append_attribute("time")); 
    weight.save(node.append_attribute("weight")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
CustomCommandAction::CustomCommandAction(pugi::xml_node node) 
{
    if (node.attribute("type")) { type = String(node.attribute("type")); }  // >> union - handle properly
}
void CustomCommandAction::save(pugi::xml_node node)
{
    type.save(node.append_attribute("type")); 
}
CustomContent::CustomContent(pugi::xml_node node) 
{
}
void CustomContent::save(pugi::xml_node node)
{
}
DeleteEntityAction::DeleteEntityAction(pugi::xml_node node) 
{
}
void DeleteEntityAction::save(pugi::xml_node node)
{
}
Deterministic::Deterministic(pugi::xml_node node) 
{
    { m_DeterministicParameterDistribution = std::make_shared<DeterministicParameterDistribution>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void Deterministic::save(pugi::xml_node node)
{
    { if (m_DeterministicParameterDistribution ) { m_DeterministicParameterDistribution->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
DeterministicMultiParameterDistribution::DeterministicMultiParameterDistribution(pugi::xml_node node) 
{
    { m_DeterministicMultiParameterDistributionType = std::make_shared<DeterministicMultiParameterDistributionType>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void DeterministicMultiParameterDistribution::save(pugi::xml_node node)
{
    { if (m_DeterministicMultiParameterDistributionType ) { m_DeterministicMultiParameterDistributionType->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
DeterministicSingleParameterDistribution::DeterministicSingleParameterDistribution(pugi::xml_node node) 
{
    if (node.attribute("parameterName")) { parameterName = String(node.attribute("parameterName")); }  // >> union - handle properly
    { m_DeterministicSingleParameterDistributionType = std::make_shared<DeterministicSingleParameterDistributionType>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void DeterministicSingleParameterDistribution::save(pugi::xml_node node)
{
    parameterName.save(node.append_attribute("parameterName")); 
    { if (m_DeterministicSingleParameterDistributionType ) { m_DeterministicSingleParameterDistributionType->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
Dimensions::Dimensions(pugi::xml_node node) 
{
    if (node.attribute("height")) { height = Double(node.attribute("height")); }  // >> union - handle properly
    if (node.attribute("length")) { length = Double(node.attribute("length")); }  // >> union - handle properly
    if (node.attribute("width")) { width = Double(node.attribute("width")); }  // >> union - handle properly
}
void Dimensions::save(pugi::xml_node node)
{
    height.save(node.append_attribute("height")); 
    length.save(node.append_attribute("length")); 
    width.save(node.append_attribute("width")); 
}
DirectionOfTravelDistribution::DirectionOfTravelDistribution(pugi::xml_node node) 
{
    if (node.attribute("same")) { same = Double(node.attribute("same")); }  // >> union - handle properly
    if (node.attribute("opposite")) { opposite = Double(node.attribute("opposite")); }  // >> union - handle properly
}
void DirectionOfTravelDistribution::save(pugi::xml_node node)
{
    same.save(node.append_attribute("same")); 
    opposite.save(node.append_attribute("opposite")); 
}
Directory::Directory(pugi::xml_node node) 
{
    if (node.attribute("path")) { path = String(node.attribute("path")); }  // >> union - handle properly
}
void Directory::save(pugi::xml_node node)
{
    path.save(node.append_attribute("path")); 
}
DistanceCondition::DistanceCondition(pugi::xml_node node) 
{
    if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("coordinateSystem")) { coordinateSystem = CoordinateSystem(node.attribute("coordinateSystem")); }  // >> union - handle properly
    if (node.attribute("relativeDistanceType")) { relativeDistanceType = RelativeDistanceType(node.attribute("relativeDistanceType")); }  // >> union - handle properly
    if (node.attribute("routingAlgorithm")) { routingAlgorithm = RoutingAlgorithm(node.attribute("routingAlgorithm")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void DistanceCondition::save(pugi::xml_node node)
{
    alongRoute.save(node.append_attribute("alongRoute")); 
    freespace.save(node.append_attribute("freespace")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    coordinateSystem.save(node.append_attribute("coordinateSystem")); 
    relativeDistanceType.save(node.append_attribute("relativeDistanceType")); 
    routingAlgorithm.save(node.append_attribute("routingAlgorithm")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
DistributionRange::DistributionRange(pugi::xml_node node) 
{
    if (node.attribute("stepWidth")) { stepWidth = Double(node.attribute("stepWidth")); }  // >> union - handle properly
    if (node.child("Range")) { m_Range = std::make_shared<Range>(node.child("Range")); }  
}
void DistributionRange::save(pugi::xml_node node)
{
    stepWidth.save(node.append_attribute("stepWidth")); 
    if (m_Range ) { m_Range->save(node.append_child("Range")); }   
}
DistributionSet::DistributionSet(pugi::xml_node node) 
{
    for (pugi::xml_node e_Element = node.child("Element"); e_Element; e_Element= e_Element.next_sibling("Element"))
    {
        m_Elements.push_back(std::make_shared<DistributionSetElement>(e_Element));
    }
}
void DistributionSet::save(pugi::xml_node node)
{
    for (std::shared_ptr<DistributionSetElement> m_Element : m_Elements ){ m_Element->save(node.append_child("Element")); } 
}
DistributionSetElement::DistributionSetElement(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void DistributionSetElement::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
DomeImage::DomeImage(pugi::xml_node node) 
{
    if (node.attribute("azimuthOffset")) { azimuthOffset = Double(node.attribute("azimuthOffset")); }  // >> union - handle properly
    if (node.child("DomeFile")) { m_DomeFile = std::make_shared<File>(node.child("DomeFile")); }  
}
void DomeImage::save(pugi::xml_node node)
{
    azimuthOffset.save(node.append_attribute("azimuthOffset")); 
    if (m_DomeFile ) { m_DomeFile->save(node.append_child("DomeFile")); }   
}
DynamicConstraints::DynamicConstraints(pugi::xml_node node) 
{
    if (node.attribute("maxAcceleration")) { maxAcceleration = Double(node.attribute("maxAcceleration")); }  // >> union - handle properly
    if (node.attribute("maxAccelerationRate")) { maxAccelerationRate = Double(node.attribute("maxAccelerationRate")); }  // >> union - handle properly
    if (node.attribute("maxDeceleration")) { maxDeceleration = Double(node.attribute("maxDeceleration")); }  // >> union - handle properly
    if (node.attribute("maxDecelerationRate")) { maxDecelerationRate = Double(node.attribute("maxDecelerationRate")); }  // >> union - handle properly
    if (node.attribute("maxSpeed")) { maxSpeed = Double(node.attribute("maxSpeed")); }  // >> union - handle properly
}
void DynamicConstraints::save(pugi::xml_node node)
{
    maxAcceleration.save(node.append_attribute("maxAcceleration")); 
    maxAccelerationRate.save(node.append_attribute("maxAccelerationRate")); 
    maxDeceleration.save(node.append_attribute("maxDeceleration")); 
    maxDecelerationRate.save(node.append_attribute("maxDecelerationRate")); 
    maxSpeed.save(node.append_attribute("maxSpeed")); 
}
EndOfRoadCondition::EndOfRoadCondition(pugi::xml_node node) 
{
    if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // >> union - handle properly
}
void EndOfRoadCondition::save(pugi::xml_node node)
{
    duration.save(node.append_attribute("duration")); 
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
void Entities::save(pugi::xml_node node)
{
    for (std::shared_ptr<ScenarioObject> m_ScenarioObject : m_ScenarioObjects ){ m_ScenarioObject->save(node.append_child("ScenarioObject")); } 
    for (std::shared_ptr<EntitySelection> m_EntitySelection : m_EntitySelections ){ m_EntitySelection->save(node.append_child("EntitySelection")); } 
}
EntityAction::EntityAction(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.first_child()) { m_EntityAction = std::make_shared<EntityAction_U>(node.first_child()); }  
}
void EntityAction::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    if (m_EntityAction) { m_EntityAction->save(node); }  
}
EntityCondition::EntityCondition(pugi::xml_node node) 
{
    if (node.first_child()) { m_EntityCondition = std::make_shared<EntityCondition_U>(node.first_child()); }  
}
void EntityCondition::save(pugi::xml_node node)
{
    if (m_EntityCondition) { m_EntityCondition->save(node); }  
}
EntityRef::EntityRef(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
}
void EntityRef::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
}
EntitySelection::EntitySelection(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("Members")) { m_Members = std::make_shared<SelectedEntities>(node.child("Members")); }  
}
void EntitySelection::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_Members ) { m_Members->save(node.append_child("Members")); }   
}
Environment::Environment(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("TimeOfDay")) { m_TimeOfDay = std::make_shared<TimeOfDay>(node.child("TimeOfDay")); }  
    if (node.child("Weather")) { m_Weather = std::make_shared<Weather>(node.child("Weather")); }  
    if (node.child("RoadCondition")) { m_RoadCondition = std::make_shared<RoadCondition>(node.child("RoadCondition")); }  
}
void Environment::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_TimeOfDay ) { m_TimeOfDay->save(node.append_child("TimeOfDay")); }   
    if (m_Weather ) { m_Weather->save(node.append_child("Weather")); }   
    if (m_RoadCondition ) { m_RoadCondition->save(node.append_child("RoadCondition")); }   
}
EnvironmentAction::EnvironmentAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_EnvironmentAction = std::make_shared<EnvironmentAction_U>(node.first_child()); }  
}
void EnvironmentAction::save(pugi::xml_node node)
{
    if (m_EnvironmentAction) { m_EnvironmentAction->save(node); }  
}
EnvironmentCatalogLocation::EnvironmentCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void EnvironmentCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
Event::Event(pugi::xml_node node) 
{
    if (node.attribute("maximumExecutionCount")) { maximumExecutionCount = UnsignedInt(node.attribute("maximumExecutionCount")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("priority")) { priority = Priority(node.attribute("priority")); }  // >> union - handle properly
    for (pugi::xml_node e_Action = node.child("Action"); e_Action; e_Action= e_Action.next_sibling("Action"))
    {
        m_Actions.push_back(std::make_shared<Action>(e_Action));
    }
    if (node.child("StartTrigger")) { m_StartTrigger = std::make_shared<Trigger>(node.child("StartTrigger")); }  
}
void Event::save(pugi::xml_node node)
{
    maximumExecutionCount.save(node.append_attribute("maximumExecutionCount")); 
    name.save(node.append_attribute("name")); 
    priority.save(node.append_attribute("priority")); 
    for (std::shared_ptr<Action> m_Action : m_Actions ){ m_Action->save(node.append_child("Action")); } 
    if (m_StartTrigger ) { m_StartTrigger->save(node.append_child("StartTrigger")); }   
}
ExternalObjectReference::ExternalObjectReference(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
}
void ExternalObjectReference::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
}
File::File(pugi::xml_node node) 
{
    if (node.attribute("filepath")) { filepath = String(node.attribute("filepath")); }  // >> union - handle properly
}
void File::save(pugi::xml_node node)
{
    filepath.save(node.append_attribute("filepath")); 
}
FileHeader::FileHeader(pugi::xml_node node) 
{
    if (node.attribute("author")) { author = String(node.attribute("author")); }  // >> union - handle properly
    if (node.attribute("date")) { date = DateTime(node.attribute("date")); }  // >> union - handle properly
    if (node.attribute("description")) { description = String(node.attribute("description")); }  // >> union - handle properly
    if (node.attribute("revMajor")) { revMajor = UnsignedShort(node.attribute("revMajor")); }  // >> union - handle properly
    if (node.attribute("revMinor")) { revMinor = UnsignedShort(node.attribute("revMinor")); }  // >> union - handle properly
    if (node.child("License")) { m_License = std::make_shared<License>(node.child("License")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void FileHeader::save(pugi::xml_node node)
{
    author.save(node.append_attribute("author")); 
    date.save(node.append_attribute("date")); 
    description.save(node.append_attribute("description")); 
    revMajor.save(node.append_attribute("revMajor")); 
    revMinor.save(node.append_attribute("revMinor")); 
    if (m_License ) { m_License->save(node.append_child("License")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
FinalSpeed::FinalSpeed(pugi::xml_node node) 
{
    if (node.first_child()) { m_FinalSpeed = std::make_shared<FinalSpeed_U>(node.first_child()); }  
}
void FinalSpeed::save(pugi::xml_node node)
{
    if (m_FinalSpeed) { m_FinalSpeed->save(node); }  
}
Fog::Fog(pugi::xml_node node) 
{
    if (node.attribute("visualRange")) { visualRange = Double(node.attribute("visualRange")); }  // >> union - handle properly
    if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }  
}
void Fog::save(pugi::xml_node node)
{
    visualRange.save(node.append_attribute("visualRange")); 
    if (m_BoundingBox ) { m_BoundingBox->save(node.append_child("BoundingBox")); }   
}
FollowTrajectoryAction::FollowTrajectoryAction(pugi::xml_node node) 
{
    if (node.attribute("initialDistanceOffset")) { initialDistanceOffset = Double(node.attribute("initialDistanceOffset")); }  // >> union - handle properly
    if (node.child("Trajectory")) { m_Trajectory = std::make_shared<Trajectory>(node.child("Trajectory")); }  
    if (node.child("CatalogReference")) { m_CatalogReference = std::make_shared<CatalogReference>(node.child("CatalogReference")); }  
    if (node.child("TimeReference")) { m_TimeReference = std::make_shared<TimeReference>(node.child("TimeReference")); }  
    if (node.child("TrajectoryFollowingMode")) { m_TrajectoryFollowingMode = std::make_shared<TrajectoryFollowingMode>(node.child("TrajectoryFollowingMode")); }  
    if (node.child("TrajectoryRef")) { m_TrajectoryRef = std::make_shared<TrajectoryRef>(node.child("TrajectoryRef")); }  
}
void FollowTrajectoryAction::save(pugi::xml_node node)
{
    initialDistanceOffset.save(node.append_attribute("initialDistanceOffset")); 
    if (m_Trajectory ) { m_Trajectory->save(node.append_child("Trajectory")); }   
    if (m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }   
    if (m_TimeReference ) { m_TimeReference->save(node.append_child("TimeReference")); }   
    if (m_TrajectoryFollowingMode ) { m_TrajectoryFollowingMode->save(node.append_child("TrajectoryFollowingMode")); }   
    if (m_TrajectoryRef ) { m_TrajectoryRef->save(node.append_child("TrajectoryRef")); }   
}
GeoPosition::GeoPosition(pugi::xml_node node) 
{
    if (node.attribute("latitude")) { latitude = Double(node.attribute("latitude")); }  // >> union - handle properly
    if (node.attribute("longitude")) { longitude = Double(node.attribute("longitude")); }  // >> union - handle properly
    if (node.attribute("height")) { height = Double(node.attribute("height")); }  // >> union - handle properly
    if (node.attribute("latitudeDeg")) { latitudeDeg = Double(node.attribute("latitudeDeg")); }  // >> union - handle properly
    if (node.attribute("longitudeDeg")) { longitudeDeg = Double(node.attribute("longitudeDeg")); }  // >> union - handle properly
    if (node.attribute("altitude")) { altitude = Double(node.attribute("altitude")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void GeoPosition::save(pugi::xml_node node)
{
    latitude.save(node.append_attribute("latitude")); 
    longitude.save(node.append_attribute("longitude")); 
    height.save(node.append_attribute("height")); 
    latitudeDeg.save(node.append_attribute("latitudeDeg")); 
    longitudeDeg.save(node.append_attribute("longitudeDeg")); 
    altitude.save(node.append_attribute("altitude")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
GlobalAction::GlobalAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_GlobalAction = std::make_shared<GlobalAction_U>(node.first_child()); }  
}
void GlobalAction::save(pugi::xml_node node)
{
    if (m_GlobalAction) { m_GlobalAction->save(node); }  
}
Histogram::Histogram(pugi::xml_node node) 
{
    for (pugi::xml_node e_Bin = node.child("Bin"); e_Bin; e_Bin= e_Bin.next_sibling("Bin"))
    {
        m_Bins.push_back(std::make_shared<HistogramBin>(e_Bin));
    }
}
void Histogram::save(pugi::xml_node node)
{
    for (std::shared_ptr<HistogramBin> m_Bin : m_Bins ){ m_Bin->save(node.append_child("Bin")); } 
}
HistogramBin::HistogramBin(pugi::xml_node node) 
{
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
    if (node.child("Range")) { m_Range = std::make_shared<Range>(node.child("Range")); }  
}
void HistogramBin::save(pugi::xml_node node)
{
    weight.save(node.append_attribute("weight")); 
    if (m_Range ) { m_Range->save(node.append_child("Range")); }   
}
InfrastructureAction::InfrastructureAction(pugi::xml_node node) 
{
    if (node.child("TrafficSignalAction")) { m_TrafficSignalAction = std::make_shared<TrafficSignalAction>(node.child("TrafficSignalAction")); }  
}
void InfrastructureAction::save(pugi::xml_node node)
{
    if (m_TrafficSignalAction ) { m_TrafficSignalAction->save(node.append_child("TrafficSignalAction")); }   
}
Init::Init(pugi::xml_node node) 
{
    if (node.child("Actions")) { m_Actions = std::make_shared<InitActions>(node.child("Actions")); }  
}
void Init::save(pugi::xml_node node)
{
    if (m_Actions ) { m_Actions->save(node.append_child("Actions")); }   
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
void InitActions::save(pugi::xml_node node)
{
    for (std::shared_ptr<GlobalAction> m_GlobalAction : m_GlobalActions ){ m_GlobalAction->save(node.append_child("GlobalAction")); } 
    for (std::shared_ptr<UserDefinedAction> m_UserDefinedAction : m_UserDefinedActions ){ m_UserDefinedAction->save(node.append_child("UserDefinedAction")); } 
    for (std::shared_ptr<Private> m_Private : m_Privates ){ m_Private->save(node.append_child("Private")); } 
}
InRoutePosition::InRoutePosition(pugi::xml_node node) 
{
    if (node.first_child()) { m_InRoutePosition = std::make_shared<InRoutePosition_U>(node.first_child()); }  
}
void InRoutePosition::save(pugi::xml_node node)
{
    if (m_InRoutePosition) { m_InRoutePosition->save(node); }  
}
Knot::Knot(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void Knot::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
LaneChangeAction::LaneChangeAction(pugi::xml_node node) 
{
    if (node.attribute("targetLaneOffset")) { targetLaneOffset = Double(node.attribute("targetLaneOffset")); }  // >> union - handle properly
    if (node.child("LaneChangeActionDynamics")) { m_LaneChangeActionDynamics = std::make_shared<TransitionDynamics>(node.child("LaneChangeActionDynamics")); }  
    if (node.child("LaneChangeTarget")) { m_LaneChangeTarget = std::make_shared<LaneChangeTarget>(node.child("LaneChangeTarget")); }  
}
void LaneChangeAction::save(pugi::xml_node node)
{
    targetLaneOffset.save(node.append_attribute("targetLaneOffset")); 
    if (m_LaneChangeActionDynamics ) { m_LaneChangeActionDynamics->save(node.append_child("LaneChangeActionDynamics")); }   
    if (m_LaneChangeTarget ) { m_LaneChangeTarget->save(node.append_child("LaneChangeTarget")); }   
}
LaneChangeTarget::LaneChangeTarget(pugi::xml_node node) 
{
    if (node.first_child()) { m_LaneChangeTarget = std::make_shared<LaneChangeTarget_U>(node.first_child()); }  
}
void LaneChangeTarget::save(pugi::xml_node node)
{
    if (m_LaneChangeTarget) { m_LaneChangeTarget->save(node); }  
}
LaneOffsetAction::LaneOffsetAction(pugi::xml_node node) 
{
    if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // >> union - handle properly
    if (node.child("LaneOffsetActionDynamics")) { m_LaneOffsetActionDynamics = std::make_shared<LaneOffsetActionDynamics>(node.child("LaneOffsetActionDynamics")); }  
    if (node.child("LaneOffsetTarget")) { m_LaneOffsetTarget = std::make_shared<LaneOffsetTarget>(node.child("LaneOffsetTarget")); }  
}
void LaneOffsetAction::save(pugi::xml_node node)
{
    continuous.save(node.append_attribute("continuous")); 
    if (m_LaneOffsetActionDynamics ) { m_LaneOffsetActionDynamics->save(node.append_child("LaneOffsetActionDynamics")); }   
    if (m_LaneOffsetTarget ) { m_LaneOffsetTarget->save(node.append_child("LaneOffsetTarget")); }   
}
LaneOffsetActionDynamics::LaneOffsetActionDynamics(pugi::xml_node node) 
{
    if (node.attribute("dynamicsShape")) { dynamicsShape = DynamicsShape(node.attribute("dynamicsShape")); }  // >> union - handle properly
    if (node.attribute("maxLateralAcc")) { maxLateralAcc = Double(node.attribute("maxLateralAcc")); }  // >> union - handle properly
}
void LaneOffsetActionDynamics::save(pugi::xml_node node)
{
    dynamicsShape.save(node.append_attribute("dynamicsShape")); 
    maxLateralAcc.save(node.append_attribute("maxLateralAcc")); 
}
LaneOffsetTarget::LaneOffsetTarget(pugi::xml_node node) 
{
    if (node.first_child()) { m_LaneOffsetTarget = std::make_shared<LaneOffsetTarget_U>(node.first_child()); }  
}
void LaneOffsetTarget::save(pugi::xml_node node)
{
    if (m_LaneOffsetTarget) { m_LaneOffsetTarget->save(node); }  
}
LanePosition::LanePosition(pugi::xml_node node) 
{
    if (node.attribute("laneId")) { laneId = String(node.attribute("laneId")); }  // >> union - handle properly
    if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // >> union - handle properly
    if (node.attribute("roadId")) { roadId = String(node.attribute("roadId")); }  // >> union - handle properly
    if (node.attribute("s")) { s = Double(node.attribute("s")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void LanePosition::save(pugi::xml_node node)
{
    laneId.save(node.append_attribute("laneId")); 
    offset.save(node.append_attribute("offset")); 
    roadId.save(node.append_attribute("roadId")); 
    s.save(node.append_attribute("s")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
LateralAction::LateralAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_LateralAction = std::make_shared<LateralAction_U>(node.first_child()); }  
}
void LateralAction::save(pugi::xml_node node)
{
    if (m_LateralAction) { m_LateralAction->save(node); }  
}
LateralDistanceAction::LateralDistanceAction(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // >> union - handle properly
    if (node.attribute("distance")) { distance = Double(node.attribute("distance")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("displacement")) { displacement = LateralDisplacement(node.attribute("displacement")); }  // >> union - handle properly
    if (node.attribute("coordinateSystem")) { coordinateSystem = CoordinateSystem(node.attribute("coordinateSystem")); }  // >> union - handle properly
    if (node.child("DynamicConstraints")) { m_DynamicConstraints = std::make_shared<DynamicConstraints>(node.child("DynamicConstraints")); }  
}
void LateralDistanceAction::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    continuous.save(node.append_attribute("continuous")); 
    distance.save(node.append_attribute("distance")); 
    freespace.save(node.append_attribute("freespace")); 
    displacement.save(node.append_attribute("displacement")); 
    coordinateSystem.save(node.append_attribute("coordinateSystem")); 
    if (m_DynamicConstraints ) { m_DynamicConstraints->save(node.append_child("DynamicConstraints")); }   
}
License::License(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("resource")) { resource = String(node.attribute("resource")); }  // >> union - handle properly
    if (node.attribute("spdxId")) { spdxId = String(node.attribute("spdxId")); }  // >> union - handle properly
}
void License::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    resource.save(node.append_attribute("resource")); 
    spdxId.save(node.append_attribute("spdxId")); 
}
LightState::LightState(pugi::xml_node node) 
{
    if (node.attribute("mode")) { mode = LightMode(node.attribute("mode")); }  // >> union - handle properly
    if (node.attribute("luminousIntensity")) { luminousIntensity = Double(node.attribute("luminousIntensity")); }  // >> union - handle properly
    if (node.attribute("flashingOnDuration")) { flashingOnDuration = Double(node.attribute("flashingOnDuration")); }  // >> union - handle properly
    if (node.attribute("flashingOffDuration")) { flashingOffDuration = Double(node.attribute("flashingOffDuration")); }  // >> union - handle properly
    if (node.child("Color")) { m_Color = std::make_shared<Color>(node.child("Color")); }  
}
void LightState::save(pugi::xml_node node)
{
    mode.save(node.append_attribute("mode")); 
    luminousIntensity.save(node.append_attribute("luminousIntensity")); 
    flashingOnDuration.save(node.append_attribute("flashingOnDuration")); 
    flashingOffDuration.save(node.append_attribute("flashingOffDuration")); 
    if (m_Color ) { m_Color->save(node.append_child("Color")); }   
}
LightStateAction::LightStateAction(pugi::xml_node node) 
{
    if (node.attribute("transitionTime")) { transitionTime = Double(node.attribute("transitionTime")); }  // >> union - handle properly
    if (node.child("LightType")) { m_LightType = std::make_shared<LightType>(node.child("LightType")); }  
    if (node.child("LightState")) { m_LightState = std::make_shared<LightState>(node.child("LightState")); }  
}
void LightStateAction::save(pugi::xml_node node)
{
    transitionTime.save(node.append_attribute("transitionTime")); 
    if (m_LightType ) { m_LightType->save(node.append_child("LightType")); }   
    if (m_LightState ) { m_LightState->save(node.append_child("LightState")); }   
}
LightType::LightType(pugi::xml_node node) 
{
    if (node.child("VehicleLight")) { m_VehicleLight = std::make_shared<VehicleLight>(node.child("VehicleLight")); }  
    if (node.child("UserDefinedLight")) { m_UserDefinedLight = std::make_shared<UserDefinedLight>(node.child("UserDefinedLight")); }  
}
void LightType::save(pugi::xml_node node)
{
    if (m_VehicleLight ) { m_VehicleLight->save(node.append_child("VehicleLight")); }   
    if (m_UserDefinedLight ) { m_UserDefinedLight->save(node.append_child("UserDefinedLight")); }   
}
LongitudinalAction::LongitudinalAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_LongitudinalAction = std::make_shared<LongitudinalAction_U>(node.first_child()); }  
}
void LongitudinalAction::save(pugi::xml_node node)
{
    if (m_LongitudinalAction) { m_LongitudinalAction->save(node); }  
}
LongitudinalDistanceAction::LongitudinalDistanceAction(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // >> union - handle properly
    if (node.attribute("distance")) { distance = Double(node.attribute("distance")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("timeGap")) { timeGap = Double(node.attribute("timeGap")); }  // >> union - handle properly
    if (node.attribute("displacement")) { displacement = LongitudinalDisplacement(node.attribute("displacement")); }  // >> union - handle properly
    if (node.attribute("coordinateSystem")) { coordinateSystem = CoordinateSystem(node.attribute("coordinateSystem")); }  // >> union - handle properly
    if (node.child("DynamicConstraints")) { m_DynamicConstraints = std::make_shared<DynamicConstraints>(node.child("DynamicConstraints")); }  
}
void LongitudinalDistanceAction::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    continuous.save(node.append_attribute("continuous")); 
    distance.save(node.append_attribute("distance")); 
    freespace.save(node.append_attribute("freespace")); 
    timeGap.save(node.append_attribute("timeGap")); 
    displacement.save(node.append_attribute("displacement")); 
    coordinateSystem.save(node.append_attribute("coordinateSystem")); 
    if (m_DynamicConstraints ) { m_DynamicConstraints->save(node.append_child("DynamicConstraints")); }   
}
Maneuver::Maneuver(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    for (pugi::xml_node e_Event = node.child("Event"); e_Event; e_Event= e_Event.next_sibling("Event"))
    {
        m_Events.push_back(std::make_shared<Event>(e_Event));
    }
}
void Maneuver::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    for (std::shared_ptr<Event> m_Event : m_Events ){ m_Event->save(node.append_child("Event")); } 
}
ManeuverCatalogLocation::ManeuverCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void ManeuverCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
ManeuverGroup::ManeuverGroup(pugi::xml_node node) 
{
    if (node.attribute("maximumExecutionCount")) { maximumExecutionCount = UnsignedInt(node.attribute("maximumExecutionCount")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
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
void ManeuverGroup::save(pugi::xml_node node)
{
    maximumExecutionCount.save(node.append_attribute("maximumExecutionCount")); 
    name.save(node.append_attribute("name")); 
    if (m_Actors ) { m_Actors->save(node.append_child("Actors")); }   
    for (std::shared_ptr<CatalogReference> m_CatalogReference : m_CatalogReferences ){ m_CatalogReference->save(node.append_child("CatalogReference")); } 
    for (std::shared_ptr<Maneuver> m_Maneuver : m_Maneuvers ){ m_Maneuver->save(node.append_child("Maneuver")); } 
}
ManualGear::ManualGear(pugi::xml_node node) 
{
    if (node.attribute("number")) { number = Int(node.attribute("number")); }  // >> union - handle properly
}
void ManualGear::save(pugi::xml_node node)
{
    number.save(node.append_attribute("number")); 
}
MiscObject::MiscObject(pugi::xml_node node) 
{
    if (node.attribute("mass")) { mass = Double(node.attribute("mass")); }  // >> union - handle properly
    if (node.attribute("miscObjectCategory")) { miscObjectCategory = MiscObjectCategory(node.attribute("miscObjectCategory")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("model3d")) { model3d = String(node.attribute("model3d")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void MiscObject::save(pugi::xml_node node)
{
    mass.save(node.append_attribute("mass")); 
    miscObjectCategory.save(node.append_attribute("miscObjectCategory")); 
    name.save(node.append_attribute("name")); 
    model3d.save(node.append_attribute("model3d")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_BoundingBox ) { m_BoundingBox->save(node.append_child("BoundingBox")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
MiscObjectCatalogLocation::MiscObjectCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void MiscObjectCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
ModifyRule::ModifyRule(pugi::xml_node node) 
{
    if (node.first_child()) { m_ModifyRule = std::make_shared<ModifyRule_U>(node.first_child()); }  
}
void ModifyRule::save(pugi::xml_node node)
{
    if (m_ModifyRule) { m_ModifyRule->save(node); }  
}
None::None(pugi::xml_node node) 
{
}
void None::save(pugi::xml_node node)
{
}
NormalDistribution::NormalDistribution(pugi::xml_node node) 
{
    if (node.attribute("expectedValue")) { expectedValue = Double(node.attribute("expectedValue")); }  // >> union - handle properly
    if (node.attribute("variance")) { variance = Double(node.attribute("variance")); }  // >> union - handle properly
    if (node.child("Range")) { m_Range = std::make_shared<Range>(node.child("Range")); }  
}
void NormalDistribution::save(pugi::xml_node node)
{
    expectedValue.save(node.append_attribute("expectedValue")); 
    variance.save(node.append_attribute("variance")); 
    if (m_Range ) { m_Range->save(node.append_child("Range")); }   
}
Nurbs::Nurbs(pugi::xml_node node) 
{
    if (node.attribute("order")) { order = UnsignedInt(node.attribute("order")); }  // >> union - handle properly
    for (pugi::xml_node e_ControlPoint = node.child("ControlPoint"); e_ControlPoint; e_ControlPoint= e_ControlPoint.next_sibling("ControlPoint"))
    {
        m_ControlPoints.push_back(std::make_shared<ControlPoint>(e_ControlPoint));
    }
    for (pugi::xml_node e_Knot = node.child("Knot"); e_Knot; e_Knot= e_Knot.next_sibling("Knot"))
    {
        m_Knots.push_back(std::make_shared<Knot>(e_Knot));
    }
}
void Nurbs::save(pugi::xml_node node)
{
    order.save(node.append_attribute("order")); 
    for (std::shared_ptr<ControlPoint> m_ControlPoint : m_ControlPoints ){ m_ControlPoint->save(node.append_child("ControlPoint")); } 
    for (std::shared_ptr<Knot> m_Knot : m_Knots ){ m_Knot->save(node.append_child("Knot")); } 
}
ObjectController::ObjectController(pugi::xml_node node) 
{
    if (node.first_child()) { m_ObjectController = std::make_shared<ObjectController_U>(node.first_child()); }  
}
void ObjectController::save(pugi::xml_node node)
{
    if (m_ObjectController) { m_ObjectController->save(node); }  
}
OffroadCondition::OffroadCondition(pugi::xml_node node) 
{
    if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // >> union - handle properly
}
void OffroadCondition::save(pugi::xml_node node)
{
    duration.save(node.append_attribute("duration")); 
}
OpenScenario::OpenScenario(pugi::xml_node node) 
{
    if (node.child("FileHeader")) { m_FileHeader = std::make_shared<FileHeader>(node.child("FileHeader")); }  
    { m_OpenScenarioCategory = std::make_shared<OpenScenarioCategory>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void OpenScenario::save(pugi::xml_node node)
{
    if (m_FileHeader ) { m_FileHeader->save(node.append_child("FileHeader")); }   
    { if (m_OpenScenarioCategory ) { m_OpenScenarioCategory->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
Orientation::Orientation(pugi::xml_node node) 
{
    if (node.attribute("h")) { h = Double(node.attribute("h")); }  // >> union - handle properly
    if (node.attribute("p")) { p = Double(node.attribute("p")); }  // >> union - handle properly
    if (node.attribute("r")) { r = Double(node.attribute("r")); }  // >> union - handle properly
    if (node.attribute("type")) { type = ReferenceContext(node.attribute("type")); }  // >> union - handle properly
}
void Orientation::save(pugi::xml_node node)
{
    h.save(node.append_attribute("h")); 
    p.save(node.append_attribute("p")); 
    r.save(node.append_attribute("r")); 
    type.save(node.append_attribute("type")); 
}
OverrideBrakeAction::OverrideBrakeAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    { m_BrakeInput = std::make_shared<BrakeInput>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void OverrideBrakeAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
    { if (m_BrakeInput ) { m_BrakeInput->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
OverrideClutchAction::OverrideClutchAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("maxRate")) { maxRate = Double(node.attribute("maxRate")); }  // >> union - handle properly
}
void OverrideClutchAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
    maxRate.save(node.append_attribute("maxRate")); 
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
void OverrideControllerValueAction::save(pugi::xml_node node)
{
    if (m_Throttle ) { m_Throttle->save(node.append_child("Throttle")); }   
    if (m_Brake ) { m_Brake->save(node.append_child("Brake")); }   
    if (m_Clutch ) { m_Clutch->save(node.append_child("Clutch")); }   
    if (m_ParkingBrake ) { m_ParkingBrake->save(node.append_child("ParkingBrake")); }   
    if (m_SteeringWheel ) { m_SteeringWheel->save(node.append_child("SteeringWheel")); }   
    if (m_Gear ) { m_Gear->save(node.append_child("Gear")); }   
}
OverrideGearAction::OverrideGearAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("number")) { number = Double(node.attribute("number")); }  // >> union - handle properly
    { m_Gear = std::make_shared<Gear>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void OverrideGearAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    number.save(node.append_attribute("number")); 
    { if (m_Gear ) { m_Gear->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
OverrideParkingBrakeAction::OverrideParkingBrakeAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    { m_BrakeInput = std::make_shared<BrakeInput>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void OverrideParkingBrakeAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
    { if (m_BrakeInput ) { m_BrakeInput->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
OverrideSteeringWheelAction::OverrideSteeringWheelAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("maxRate")) { maxRate = Double(node.attribute("maxRate")); }  // >> union - handle properly
    if (node.attribute("maxTorque")) { maxTorque = Double(node.attribute("maxTorque")); }  // >> union - handle properly
}
void OverrideSteeringWheelAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
    maxRate.save(node.append_attribute("maxRate")); 
    maxTorque.save(node.append_attribute("maxTorque")); 
}
OverrideThrottleAction::OverrideThrottleAction(pugi::xml_node node) 
{
    if (node.attribute("active")) { active = Boolean(node.attribute("active")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("maxRate")) { maxRate = Double(node.attribute("maxRate")); }  // >> union - handle properly
}
void OverrideThrottleAction::save(pugi::xml_node node)
{
    active.save(node.append_attribute("active")); 
    value.save(node.append_attribute("value")); 
    maxRate.save(node.append_attribute("maxRate")); 
}
ParameterAction::ParameterAction(pugi::xml_node node) 
{
    if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // >> union - handle properly
    if (node.first_child()) { m_ParameterAction = std::make_shared<ParameterAction_U>(node.first_child()); }  
}
void ParameterAction::save(pugi::xml_node node)
{
    parameterRef.save(node.append_attribute("parameterRef")); 
    if (m_ParameterAction) { m_ParameterAction->save(node); }  
}
ParameterAddValueRule::ParameterAddValueRule(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void ParameterAddValueRule::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
ParameterAssignment::ParameterAssignment(pugi::xml_node node) 
{
    if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void ParameterAssignment::save(pugi::xml_node node)
{
    parameterRef.save(node.append_attribute("parameterRef")); 
    value.save(node.append_attribute("value")); 
}
ParameterAssignments::ParameterAssignments(pugi::xml_node node) 
{
    for (pugi::xml_node e_ParameterAssignment = node.child("ParameterAssignment"); e_ParameterAssignment; e_ParameterAssignment= e_ParameterAssignment.next_sibling("ParameterAssignment"))
    {
        m_ParameterAssignments.push_back(std::make_shared<ParameterAssignment>(e_ParameterAssignment));
    }
}
void ParameterAssignments::save(pugi::xml_node node)
{
    for (std::shared_ptr<ParameterAssignment> m_ParameterAssignment : m_ParameterAssignments ){ m_ParameterAssignment->save(node.append_child("ParameterAssignment")); } 
}
ParameterCondition::ParameterCondition(pugi::xml_node node) 
{
    if (node.attribute("parameterRef")) { parameterRef = String(node.attribute("parameterRef")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void ParameterCondition::save(pugi::xml_node node)
{
    parameterRef.save(node.append_attribute("parameterRef")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
ParameterDeclaration::ParameterDeclaration(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("parameterType")) { parameterType = ParameterType(node.attribute("parameterType")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
    for (pugi::xml_node e_ConstraintGroup = node.child("ConstraintGroup"); e_ConstraintGroup; e_ConstraintGroup= e_ConstraintGroup.next_sibling("ConstraintGroup"))
    {
        m_ConstraintGroups.push_back(std::make_shared<ValueConstraintGroup>(e_ConstraintGroup));
    }
}
void ParameterDeclaration::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    parameterType.save(node.append_attribute("parameterType")); 
    value.save(node.append_attribute("value")); 
    for (std::shared_ptr<ValueConstraintGroup> m_ConstraintGroup : m_ConstraintGroups ){ m_ConstraintGroup->save(node.append_child("ConstraintGroup")); } 
}
ParameterDeclarations::ParameterDeclarations(pugi::xml_node node) 
{
    for (pugi::xml_node e_ParameterDeclaration = node.child("ParameterDeclaration"); e_ParameterDeclaration; e_ParameterDeclaration= e_ParameterDeclaration.next_sibling("ParameterDeclaration"))
    {
        m_ParameterDeclarations.push_back(std::make_shared<ParameterDeclaration>(e_ParameterDeclaration));
    }
}
void ParameterDeclarations::save(pugi::xml_node node)
{
    for (std::shared_ptr<ParameterDeclaration> m_ParameterDeclaration : m_ParameterDeclarations ){ m_ParameterDeclaration->save(node.append_child("ParameterDeclaration")); } 
}
ParameterModifyAction::ParameterModifyAction(pugi::xml_node node) 
{
    if (node.child("Rule")) { m_Rule = std::make_shared<ModifyRule>(node.child("Rule")); }  
}
void ParameterModifyAction::save(pugi::xml_node node)
{
    if (m_Rule ) { m_Rule->save(node.append_child("Rule")); }   
}
ParameterMultiplyByValueRule::ParameterMultiplyByValueRule(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void ParameterMultiplyByValueRule::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
ParameterSetAction::ParameterSetAction(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void ParameterSetAction::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
ParameterValueDistribution::ParameterValueDistribution(pugi::xml_node node) 
{
    if (node.child("ScenarioFile")) { m_ScenarioFile = std::make_shared<File>(node.child("ScenarioFile")); }  
    { m_DistributionDefinition = std::make_shared<DistributionDefinition>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void ParameterValueDistribution::save(pugi::xml_node node)
{
    if (m_ScenarioFile ) { m_ScenarioFile->save(node.append_child("ScenarioFile")); }   
    { if (m_DistributionDefinition ) { m_DistributionDefinition->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
ParameterValueSet::ParameterValueSet(pugi::xml_node node) 
{
    for (pugi::xml_node e_ParameterAssignment = node.child("ParameterAssignment"); e_ParameterAssignment; e_ParameterAssignment= e_ParameterAssignment.next_sibling("ParameterAssignment"))
    {
        m_ParameterAssignments.push_back(std::make_shared<ParameterAssignment>(e_ParameterAssignment));
    }
}
void ParameterValueSet::save(pugi::xml_node node)
{
    for (std::shared_ptr<ParameterAssignment> m_ParameterAssignment : m_ParameterAssignments ){ m_ParameterAssignment->save(node.append_child("ParameterAssignment")); } 
}
Pedestrian::Pedestrian(pugi::xml_node node) 
{
    if (node.attribute("mass")) { mass = Double(node.attribute("mass")); }  // >> union - handle properly
    if (node.attribute("model")) { model = String(node.attribute("model")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("pedestrianCategory")) { pedestrianCategory = PedestrianCategory(node.attribute("pedestrianCategory")); }  // >> union - handle properly
    if (node.attribute("model3d")) { model3d = String(node.attribute("model3d")); }  // >> union - handle properly
    if (node.attribute("role")) { role = Role(node.attribute("role")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void Pedestrian::save(pugi::xml_node node)
{
    mass.save(node.append_attribute("mass")); 
    model.save(node.append_attribute("model")); 
    name.save(node.append_attribute("name")); 
    pedestrianCategory.save(node.append_attribute("pedestrianCategory")); 
    model3d.save(node.append_attribute("model3d")); 
    role.save(node.append_attribute("role")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_BoundingBox ) { m_BoundingBox->save(node.append_child("BoundingBox")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
PedestrianAnimation::PedestrianAnimation(pugi::xml_node node) 
{
    if (node.attribute("motion")) { motion = PedestrianMotionType(node.attribute("motion")); }  // >> union - handle properly
    if (node.attribute("userDefinedPedestrianAnimation")) { userDefinedPedestrianAnimation = String(node.attribute("userDefinedPedestrianAnimation")); }  // >> union - handle properly
    for (pugi::xml_node e_PedestrianGesture = node.child("PedestrianGesture"); e_PedestrianGesture; e_PedestrianGesture= e_PedestrianGesture.next_sibling("PedestrianGesture"))
    {
        m_PedestrianGestures.push_back(std::make_shared<PedestrianGesture>(e_PedestrianGesture));
    }
}
void PedestrianAnimation::save(pugi::xml_node node)
{
    motion.save(node.append_attribute("motion")); 
    userDefinedPedestrianAnimation.save(node.append_attribute("userDefinedPedestrianAnimation")); 
    for (std::shared_ptr<PedestrianGesture> m_PedestrianGesture : m_PedestrianGestures ){ m_PedestrianGesture->save(node.append_child("PedestrianGesture")); } 
}
PedestrianCatalogLocation::PedestrianCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void PedestrianCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
PedestrianGesture::PedestrianGesture(pugi::xml_node node) 
{
    if (node.attribute("gesture")) { gesture = PedestrianGestureType(node.attribute("gesture")); }  // >> union - handle properly
}
void PedestrianGesture::save(pugi::xml_node node)
{
    gesture.save(node.append_attribute("gesture")); 
}
Performance::Performance(pugi::xml_node node) 
{
    if (node.attribute("maxAcceleration")) { maxAcceleration = Double(node.attribute("maxAcceleration")); }  // >> union - handle properly
    if (node.attribute("maxAccelerationRate")) { maxAccelerationRate = Double(node.attribute("maxAccelerationRate")); }  // >> union - handle properly
    if (node.attribute("maxDeceleration")) { maxDeceleration = Double(node.attribute("maxDeceleration")); }  // >> union - handle properly
    if (node.attribute("maxDecelerationRate")) { maxDecelerationRate = Double(node.attribute("maxDecelerationRate")); }  // >> union - handle properly
    if (node.attribute("maxSpeed")) { maxSpeed = Double(node.attribute("maxSpeed")); }  // >> union - handle properly
}
void Performance::save(pugi::xml_node node)
{
    maxAcceleration.save(node.append_attribute("maxAcceleration")); 
    maxAccelerationRate.save(node.append_attribute("maxAccelerationRate")); 
    maxDeceleration.save(node.append_attribute("maxDeceleration")); 
    maxDecelerationRate.save(node.append_attribute("maxDecelerationRate")); 
    maxSpeed.save(node.append_attribute("maxSpeed")); 
}
Phase::Phase(pugi::xml_node node) 
{
    if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    for (pugi::xml_node e_TrafficSignalState = node.child("TrafficSignalState"); e_TrafficSignalState; e_TrafficSignalState= e_TrafficSignalState.next_sibling("TrafficSignalState"))
    {
        m_TrafficSignalStates.push_back(std::make_shared<TrafficSignalState>(e_TrafficSignalState));
    }
    if (node.child("TrafficeSignalGroupState")) { m_TrafficeSignalGroupState = std::make_shared<TrafficSignalGroupState>(node.child("TrafficeSignalGroupState")); }  
}
void Phase::save(pugi::xml_node node)
{
    duration.save(node.append_attribute("duration")); 
    name.save(node.append_attribute("name")); 
    for (std::shared_ptr<TrafficSignalState> m_TrafficSignalState : m_TrafficSignalStates ){ m_TrafficSignalState->save(node.append_child("TrafficSignalState")); } 
    if (m_TrafficeSignalGroupState ) { m_TrafficeSignalGroupState->save(node.append_child("TrafficeSignalGroupState")); }   
}
PoissonDistribution::PoissonDistribution(pugi::xml_node node) 
{
    if (node.attribute("expectedValue")) { expectedValue = Double(node.attribute("expectedValue")); }  // >> union - handle properly
    if (node.child("Range")) { m_Range = std::make_shared<Range>(node.child("Range")); }  
}
void PoissonDistribution::save(pugi::xml_node node)
{
    expectedValue.save(node.append_attribute("expectedValue")); 
    if (m_Range ) { m_Range->save(node.append_child("Range")); }   
}
Polyline::Polyline(pugi::xml_node node) 
{
    for (pugi::xml_node e_Vertex = node.child("Vertex"); e_Vertex; e_Vertex= e_Vertex.next_sibling("Vertex"))
    {
        m_Vertexs.push_back(std::make_shared<Vertex>(e_Vertex));
    }
}
void Polyline::save(pugi::xml_node node)
{
    for (std::shared_ptr<Vertex> m_Vertex : m_Vertexs ){ m_Vertex->save(node.append_child("Vertex")); } 
}
Position::Position(pugi::xml_node node) 
{
    if (node.first_child()) { m_Position = std::make_shared<Position_U>(node.first_child()); }  
}
void Position::save(pugi::xml_node node)
{
    if (m_Position) { m_Position->save(node); }  
}
PositionInLaneCoordinates::PositionInLaneCoordinates(pugi::xml_node node) 
{
    if (node.attribute("laneId")) { laneId = String(node.attribute("laneId")); }  // >> union - handle properly
    if (node.attribute("laneOffset")) { laneOffset = Double(node.attribute("laneOffset")); }  // >> union - handle properly
    if (node.attribute("pathS")) { pathS = Double(node.attribute("pathS")); }  // >> union - handle properly
}
void PositionInLaneCoordinates::save(pugi::xml_node node)
{
    laneId.save(node.append_attribute("laneId")); 
    laneOffset.save(node.append_attribute("laneOffset")); 
    pathS.save(node.append_attribute("pathS")); 
}
PositionInRoadCoordinates::PositionInRoadCoordinates(pugi::xml_node node) 
{
    if (node.attribute("pathS")) { pathS = Double(node.attribute("pathS")); }  // >> union - handle properly
    if (node.attribute("t")) { t = Double(node.attribute("t")); }  // >> union - handle properly
}
void PositionInRoadCoordinates::save(pugi::xml_node node)
{
    pathS.save(node.append_attribute("pathS")); 
    t.save(node.append_attribute("t")); 
}
PositionOfCurrentEntity::PositionOfCurrentEntity(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
}
void PositionOfCurrentEntity::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
}
Precipitation::Precipitation(pugi::xml_node node) 
{
    if (node.attribute("intensity")) { intensity = Double(node.attribute("intensity")); }  // >> union - handle properly
    if (node.attribute("precipitationType")) { precipitationType = PrecipitationType(node.attribute("precipitationType")); }  // >> union - handle properly
    if (node.attribute("precipitationIntensity")) { precipitationIntensity = Double(node.attribute("precipitationIntensity")); }  // >> union - handle properly
}
void Precipitation::save(pugi::xml_node node)
{
    intensity.save(node.append_attribute("intensity")); 
    precipitationType.save(node.append_attribute("precipitationType")); 
    precipitationIntensity.save(node.append_attribute("precipitationIntensity")); 
}
Private::Private(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    for (pugi::xml_node e_PrivateAction = node.child("PrivateAction"); e_PrivateAction; e_PrivateAction= e_PrivateAction.next_sibling("PrivateAction"))
    {
        m_PrivateActions.push_back(std::make_shared<PrivateAction>(e_PrivateAction));
    }
}
void Private::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    for (std::shared_ptr<PrivateAction> m_PrivateAction : m_PrivateActions ){ m_PrivateAction->save(node.append_child("PrivateAction")); } 
}
PrivateAction::PrivateAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_PrivateAction = std::make_shared<PrivateAction_U>(node.first_child()); }  
}
void PrivateAction::save(pugi::xml_node node)
{
    if (m_PrivateAction) { m_PrivateAction->save(node); }  
}
ProbabilityDistributionSet::ProbabilityDistributionSet(pugi::xml_node node) 
{
    for (pugi::xml_node e_Element = node.child("Element"); e_Element; e_Element= e_Element.next_sibling("Element"))
    {
        m_Elements.push_back(std::make_shared<ProbabilityDistributionSetElement>(e_Element));
    }
}
void ProbabilityDistributionSet::save(pugi::xml_node node)
{
    for (std::shared_ptr<ProbabilityDistributionSetElement> m_Element : m_Elements ){ m_Element->save(node.append_child("Element")); } 
}
ProbabilityDistributionSetElement::ProbabilityDistributionSetElement(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
}
void ProbabilityDistributionSetElement::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
    weight.save(node.append_attribute("weight")); 
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
    for (pugi::xml_node e_CustomContent = node.child("CustomContent"); e_CustomContent; e_CustomContent= e_CustomContent.next_sibling("CustomContent"))
    {
        m_CustomContents.push_back(std::make_shared<CustomContent>(e_CustomContent));
    }
}
void Properties::save(pugi::xml_node node)
{
    for (std::shared_ptr<Property> m_Property : m_Propertys ){ m_Property->save(node.append_child("Property")); } 
    for (std::shared_ptr<File> m_File : m_Files ){ m_File->save(node.append_child("File")); } 
    for (std::shared_ptr<CustomContent> m_CustomContent : m_CustomContents ){ m_CustomContent->save(node.append_child("CustomContent")); } 
}
Property::Property(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void Property::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    value.save(node.append_attribute("value")); 
}
Range::Range(pugi::xml_node node) 
{
    if (node.attribute("lowerLimit")) { lowerLimit = Double(node.attribute("lowerLimit")); }  // >> union - handle properly
    if (node.attribute("upperLimit")) { upperLimit = Double(node.attribute("upperLimit")); }  // >> union - handle properly
}
void Range::save(pugi::xml_node node)
{
    lowerLimit.save(node.append_attribute("lowerLimit")); 
    upperLimit.save(node.append_attribute("upperLimit")); 
}
ReachPositionCondition::ReachPositionCondition(pugi::xml_node node) 
{
    if (node.attribute("tolerance")) { tolerance = Double(node.attribute("tolerance")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void ReachPositionCondition::save(pugi::xml_node node)
{
    tolerance.save(node.append_attribute("tolerance")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
RelativeClearanceCondition::RelativeClearanceCondition(pugi::xml_node node) 
{
    if (node.attribute("oppositeLanes")) { oppositeLanes = Boolean(node.attribute("oppositeLanes")); }  // >> union - handle properly
    if (node.attribute("distanceForward")) { distanceForward = Double(node.attribute("distanceForward")); }  // >> union - handle properly
    if (node.attribute("distanceBackward")) { distanceBackward = Double(node.attribute("distanceBackward")); }  // >> union - handle properly
    if (node.attribute("freeSpace")) { freeSpace = Boolean(node.attribute("freeSpace")); }  // >> union - handle properly
    for (pugi::xml_node e_RelativeLaneRange = node.child("RelativeLaneRange"); e_RelativeLaneRange; e_RelativeLaneRange= e_RelativeLaneRange.next_sibling("RelativeLaneRange"))
    {
        m_RelativeLaneRanges.push_back(std::make_shared<RelativeLaneRange>(e_RelativeLaneRange));
    }
    for (pugi::xml_node e_EntityRef = node.child("EntityRef"); e_EntityRef; e_EntityRef= e_EntityRef.next_sibling("EntityRef"))
    {
        m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef));
    }
}
void RelativeClearanceCondition::save(pugi::xml_node node)
{
    oppositeLanes.save(node.append_attribute("oppositeLanes")); 
    distanceForward.save(node.append_attribute("distanceForward")); 
    distanceBackward.save(node.append_attribute("distanceBackward")); 
    freeSpace.save(node.append_attribute("freeSpace")); 
    for (std::shared_ptr<RelativeLaneRange> m_RelativeLaneRange : m_RelativeLaneRanges ){ m_RelativeLaneRange->save(node.append_child("RelativeLaneRange")); } 
    for (std::shared_ptr<EntityRef> m_EntityRef : m_EntityRefs ){ m_EntityRef->save(node.append_child("EntityRef")); } 
}
RelativeDistanceCondition::RelativeDistanceCondition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("relativeDistanceType")) { relativeDistanceType = RelativeDistanceType(node.attribute("relativeDistanceType")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("coordinateSystem")) { coordinateSystem = CoordinateSystem(node.attribute("coordinateSystem")); }  // >> union - handle properly
    if (node.attribute("routingAlgorithm")) { routingAlgorithm = RoutingAlgorithm(node.attribute("routingAlgorithm")); }  // >> union - handle properly
}
void RelativeDistanceCondition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    freespace.save(node.append_attribute("freespace")); 
    relativeDistanceType.save(node.append_attribute("relativeDistanceType")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    coordinateSystem.save(node.append_attribute("coordinateSystem")); 
    routingAlgorithm.save(node.append_attribute("routingAlgorithm")); 
}
RelativeLanePosition::RelativeLanePosition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("dLane")) { dLane = Int(node.attribute("dLane")); }  // >> union - handle properly
    if (node.attribute("ds")) { ds = Double(node.attribute("ds")); }  // >> union - handle properly
    if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // >> union - handle properly
    if (node.attribute("dsLane")) { dsLane = Double(node.attribute("dsLane")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RelativeLanePosition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    dLane.save(node.append_attribute("dLane")); 
    ds.save(node.append_attribute("ds")); 
    offset.save(node.append_attribute("offset")); 
    dsLane.save(node.append_attribute("dsLane")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
RelativeLaneRange::RelativeLaneRange(pugi::xml_node node) 
{
    if (node.attribute("from")) { from = Int(node.attribute("from")); }  // >> union - handle properly
    if (node.attribute("to")) { to = Int(node.attribute("to")); }  // >> union - handle properly
}
void RelativeLaneRange::save(pugi::xml_node node)
{
    from.save(node.append_attribute("from")); 
    to.save(node.append_attribute("to")); 
}
RelativeObjectPosition::RelativeObjectPosition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("dx")) { dx = Double(node.attribute("dx")); }  // >> union - handle properly
    if (node.attribute("dy")) { dy = Double(node.attribute("dy")); }  // >> union - handle properly
    if (node.attribute("dz")) { dz = Double(node.attribute("dz")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RelativeObjectPosition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    dx.save(node.append_attribute("dx")); 
    dy.save(node.append_attribute("dy")); 
    dz.save(node.append_attribute("dz")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
RelativeRoadPosition::RelativeRoadPosition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("ds")) { ds = Double(node.attribute("ds")); }  // >> union - handle properly
    if (node.attribute("dt")) { dt = Double(node.attribute("dt")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RelativeRoadPosition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    ds.save(node.append_attribute("ds")); 
    dt.save(node.append_attribute("dt")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
RelativeSpeedCondition::RelativeSpeedCondition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("direction")) { direction = DirectionalDimension(node.attribute("direction")); }  // >> union - handle properly
}
void RelativeSpeedCondition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    direction.save(node.append_attribute("direction")); 
}
RelativeSpeedToMaster::RelativeSpeedToMaster(pugi::xml_node node) 
{
    if (node.attribute("speedTargetValueType")) { speedTargetValueType = SpeedTargetValueType(node.attribute("speedTargetValueType")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    { m_SteadyState = std::make_shared<SteadyState>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void RelativeSpeedToMaster::save(pugi::xml_node node)
{
    speedTargetValueType.save(node.append_attribute("speedTargetValueType")); 
    value.save(node.append_attribute("value")); 
    { if (m_SteadyState ) { m_SteadyState->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
RelativeTargetLane::RelativeTargetLane(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Int(node.attribute("value")); }  // >> union - handle properly
}
void RelativeTargetLane::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    value.save(node.append_attribute("value")); 
}
RelativeTargetLaneOffset::RelativeTargetLaneOffset(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void RelativeTargetLaneOffset::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    value.save(node.append_attribute("value")); 
}
RelativeTargetSpeed::RelativeTargetSpeed(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("continuous")) { continuous = Boolean(node.attribute("continuous")); }  // >> union - handle properly
    if (node.attribute("speedTargetValueType")) { speedTargetValueType = SpeedTargetValueType(node.attribute("speedTargetValueType")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void RelativeTargetSpeed::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    continuous.save(node.append_attribute("continuous")); 
    speedTargetValueType.save(node.append_attribute("speedTargetValueType")); 
    value.save(node.append_attribute("value")); 
}
RelativeWorldPosition::RelativeWorldPosition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("dx")) { dx = Double(node.attribute("dx")); }  // >> union - handle properly
    if (node.attribute("dy")) { dy = Double(node.attribute("dy")); }  // >> union - handle properly
    if (node.attribute("dz")) { dz = Double(node.attribute("dz")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RelativeWorldPosition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    dx.save(node.append_attribute("dx")); 
    dy.save(node.append_attribute("dy")); 
    dz.save(node.append_attribute("dz")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
RoadCondition::RoadCondition(pugi::xml_node node) 
{
    if (node.attribute("frictionScaleFactor")) { frictionScaleFactor = Double(node.attribute("frictionScaleFactor")); }  // >> union - handle properly
    if (node.attribute("wetness")) { wetness = Wetness(node.attribute("wetness")); }  // >> union - handle properly
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void RoadCondition::save(pugi::xml_node node)
{
    frictionScaleFactor.save(node.append_attribute("frictionScaleFactor")); 
    wetness.save(node.append_attribute("wetness")); 
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
RoadNetwork::RoadNetwork(pugi::xml_node node) 
{
    if (node.child("LogicFile")) { m_LogicFile = std::make_shared<File>(node.child("LogicFile")); }  
    if (node.child("SceneGraphFile")) { m_SceneGraphFile = std::make_shared<File>(node.child("SceneGraphFile")); }  
    if (node.child("TrafficSignals")) { m_TrafficSignals = std::make_shared<TrafficSignals>(node.child("TrafficSignals")); }  
    if (node.child("UsedArea")) { m_UsedArea = std::make_shared<UsedArea>(node.child("UsedArea")); }  
}
void RoadNetwork::save(pugi::xml_node node)
{
    if (m_LogicFile ) { m_LogicFile->save(node.append_child("LogicFile")); }   
    if (m_SceneGraphFile ) { m_SceneGraphFile->save(node.append_child("SceneGraphFile")); }   
    if (m_TrafficSignals ) { m_TrafficSignals->save(node.append_child("TrafficSignals")); }   
    if (m_UsedArea ) { m_UsedArea->save(node.append_child("UsedArea")); }   
}
RoadPosition::RoadPosition(pugi::xml_node node) 
{
    if (node.attribute("roadId")) { roadId = String(node.attribute("roadId")); }  // >> union - handle properly
    if (node.attribute("s")) { s = Double(node.attribute("s")); }  // >> union - handle properly
    if (node.attribute("t")) { t = Double(node.attribute("t")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
}
void RoadPosition::save(pugi::xml_node node)
{
    roadId.save(node.append_attribute("roadId")); 
    s.save(node.append_attribute("s")); 
    t.save(node.append_attribute("t")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
}
Route::Route(pugi::xml_node node) 
{
    if (node.attribute("closed")) { closed = Boolean(node.attribute("closed")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    for (pugi::xml_node e_Waypoint = node.child("Waypoint"); e_Waypoint; e_Waypoint= e_Waypoint.next_sibling("Waypoint"))
    {
        m_Waypoints.push_back(std::make_shared<Waypoint>(e_Waypoint));
    }
}
void Route::save(pugi::xml_node node)
{
    closed.save(node.append_attribute("closed")); 
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    for (std::shared_ptr<Waypoint> m_Waypoint : m_Waypoints ){ m_Waypoint->save(node.append_child("Waypoint")); } 
}
RouteCatalogLocation::RouteCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void RouteCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
RoutePosition::RoutePosition(pugi::xml_node node) 
{
    if (node.child("RouteRef")) { m_RouteRef = std::make_shared<RouteRef>(node.child("RouteRef")); }  
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
    if (node.child("InRoutePosition")) { m_InRoutePosition = std::make_shared<InRoutePosition>(node.child("InRoutePosition")); }  
}
void RoutePosition::save(pugi::xml_node node)
{
    if (m_RouteRef ) { m_RouteRef->save(node.append_child("RouteRef")); }   
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
    if (m_InRoutePosition ) { m_InRoutePosition->save(node.append_child("InRoutePosition")); }   
}
RouteRef::RouteRef(pugi::xml_node node) 
{
    if (node.first_child()) { m_RouteRef = std::make_shared<RouteRef_U>(node.first_child()); }  
}
void RouteRef::save(pugi::xml_node node)
{
    if (m_RouteRef) { m_RouteRef->save(node); }  
}
RoutingAction::RoutingAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_RoutingAction = std::make_shared<RoutingAction_U>(node.first_child()); }  
}
void RoutingAction::save(pugi::xml_node node)
{
    if (m_RoutingAction) { m_RoutingAction->save(node); }  
}
ScenarioObject::ScenarioObject(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    for (pugi::xml_node e_ObjectController = node.child("ObjectController"); e_ObjectController; e_ObjectController= e_ObjectController.next_sibling("ObjectController"))
    {
        m_ObjectControllers.push_back(std::make_shared<ObjectController>(e_ObjectController));
    }
    { m_EntityObject = std::make_shared<EntityObject>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void ScenarioObject::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    for (std::shared_ptr<ObjectController> m_ObjectController : m_ObjectControllers ){ m_ObjectController->save(node.append_child("ObjectController")); } 
    { if (m_EntityObject ) { m_EntityObject->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
SelectedEntities::SelectedEntities(pugi::xml_node node) 
{
    if (node.first_child()) { m_SelectedEntities = std::make_shared<SelectedEntities_U>(node.first_child()); }  
}
void SelectedEntities::save(pugi::xml_node node)
{
    if (m_SelectedEntities) { m_SelectedEntities->save(node); }  
}
SensorReference::SensorReference(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
}
void SensorReference::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
}
SensorReferenceSet::SensorReferenceSet(pugi::xml_node node) 
{
    for (pugi::xml_node e_SensorReference = node.child("SensorReference"); e_SensorReference; e_SensorReference= e_SensorReference.next_sibling("SensorReference"))
    {
        m_SensorReferences.push_back(std::make_shared<SensorReference>(e_SensorReference));
    }
}
void SensorReferenceSet::save(pugi::xml_node node)
{
    for (std::shared_ptr<SensorReference> m_SensorReference : m_SensorReferences ){ m_SensorReference->save(node.append_child("SensorReference")); } 
}
Shape::Shape(pugi::xml_node node) 
{
    if (node.first_child()) { m_Shape = std::make_shared<Shape_U>(node.first_child()); }  
}
void Shape::save(pugi::xml_node node)
{
    if (m_Shape) { m_Shape->save(node); }  
}
SimulationTimeCondition::SimulationTimeCondition(pugi::xml_node node) 
{
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void SimulationTimeCondition::save(pugi::xml_node node)
{
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
SpeedAction::SpeedAction(pugi::xml_node node) 
{
    if (node.child("SpeedActionDynamics")) { m_SpeedActionDynamics = std::make_shared<TransitionDynamics>(node.child("SpeedActionDynamics")); }  
    if (node.child("SpeedActionTarget")) { m_SpeedActionTarget = std::make_shared<SpeedActionTarget>(node.child("SpeedActionTarget")); }  
}
void SpeedAction::save(pugi::xml_node node)
{
    if (m_SpeedActionDynamics ) { m_SpeedActionDynamics->save(node.append_child("SpeedActionDynamics")); }   
    if (m_SpeedActionTarget ) { m_SpeedActionTarget->save(node.append_child("SpeedActionTarget")); }   
}
SpeedActionTarget::SpeedActionTarget(pugi::xml_node node) 
{
    if (node.first_child()) { m_SpeedActionTarget = std::make_shared<SpeedActionTarget_U>(node.first_child()); }  
}
void SpeedActionTarget::save(pugi::xml_node node)
{
    if (m_SpeedActionTarget) { m_SpeedActionTarget->save(node); }  
}
SpeedCondition::SpeedCondition(pugi::xml_node node) 
{
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("direction")) { direction = DirectionalDimension(node.attribute("direction")); }  // >> union - handle properly
}
void SpeedCondition::save(pugi::xml_node node)
{
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    direction.save(node.append_attribute("direction")); 
}
SpeedProfileAction::SpeedProfileAction(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("followingMode")) { followingMode = FollowingMode(node.attribute("followingMode")); }  // >> union - handle properly
    if (node.child("DynamicConstraints")) { m_DynamicConstraints = std::make_shared<DynamicConstraints>(node.child("DynamicConstraints")); }  
    for (pugi::xml_node e_SpeedProfileEntry = node.child("SpeedProfileEntry"); e_SpeedProfileEntry; e_SpeedProfileEntry= e_SpeedProfileEntry.next_sibling("SpeedProfileEntry"))
    {
        m_SpeedProfileEntrys.push_back(std::make_shared<SpeedProfileEntry>(e_SpeedProfileEntry));
    }
}
void SpeedProfileAction::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    followingMode.save(node.append_attribute("followingMode")); 
    if (m_DynamicConstraints ) { m_DynamicConstraints->save(node.append_child("DynamicConstraints")); }   
    for (std::shared_ptr<SpeedProfileEntry> m_SpeedProfileEntry : m_SpeedProfileEntrys ){ m_SpeedProfileEntry->save(node.append_child("SpeedProfileEntry")); } 
}
SpeedProfileEntry::SpeedProfileEntry(pugi::xml_node node) 
{
    if (node.attribute("speed")) { speed = Double(node.attribute("speed")); }  // >> union - handle properly
    if (node.attribute("time")) { time = Double(node.attribute("time")); }  // >> union - handle properly
}
void SpeedProfileEntry::save(pugi::xml_node node)
{
    speed.save(node.append_attribute("speed")); 
    time.save(node.append_attribute("time")); 
}
StandStillCondition::StandStillCondition(pugi::xml_node node) 
{
    if (node.attribute("duration")) { duration = Double(node.attribute("duration")); }  // >> union - handle properly
}
void StandStillCondition::save(pugi::xml_node node)
{
    duration.save(node.append_attribute("duration")); 
}
Stochastic::Stochastic(pugi::xml_node node) 
{
    if (node.attribute("numberOfTestRuns")) { numberOfTestRuns = UnsignedInt(node.attribute("numberOfTestRuns")); }  // >> union - handle properly
    if (node.attribute("randomSeed")) { randomSeed = Double(node.attribute("randomSeed")); }  // >> union - handle properly
    for (pugi::xml_node e_StochasticDistribution = node.child("StochasticDistribution"); e_StochasticDistribution; e_StochasticDistribution= e_StochasticDistribution.next_sibling("StochasticDistribution"))
    {
        m_StochasticDistributions.push_back(std::make_shared<StochasticDistribution>(e_StochasticDistribution));
    }
}
void Stochastic::save(pugi::xml_node node)
{
    numberOfTestRuns.save(node.append_attribute("numberOfTestRuns")); 
    randomSeed.save(node.append_attribute("randomSeed")); 
    for (std::shared_ptr<StochasticDistribution> m_StochasticDistribution : m_StochasticDistributions ){ m_StochasticDistribution->save(node.append_child("StochasticDistribution")); } 
}
StochasticDistribution::StochasticDistribution(pugi::xml_node node) 
{
    if (node.attribute("parameterName")) { parameterName = String(node.attribute("parameterName")); }  // >> union - handle properly
    { m_StochasticDistributionType = std::make_shared<StochasticDistributionType>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void StochasticDistribution::save(pugi::xml_node node)
{
    parameterName.save(node.append_attribute("parameterName")); 
    { if (m_StochasticDistributionType ) { m_StochasticDistributionType->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
Story::Story(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    for (pugi::xml_node e_Act = node.child("Act"); e_Act; e_Act= e_Act.next_sibling("Act"))
    {
        m_Acts.push_back(std::make_shared<Act>(e_Act));
    }
}
void Story::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    for (std::shared_ptr<Act> m_Act : m_Acts ){ m_Act->save(node.append_child("Act")); } 
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
void Storyboard::save(pugi::xml_node node)
{
    if (m_Init ) { m_Init->save(node.append_child("Init")); }   
    for (std::shared_ptr<Story> m_Story : m_Storys ){ m_Story->save(node.append_child("Story")); } 
    if (m_StopTrigger ) { m_StopTrigger->save(node.append_child("StopTrigger")); }   
}
StoryboardElementStateCondition::StoryboardElementStateCondition(pugi::xml_node node) 
{
    if (node.attribute("storyboardElementRef")) { storyboardElementRef = String(node.attribute("storyboardElementRef")); }  // >> union - handle properly
    if (node.attribute("state")) { state = StoryboardElementState(node.attribute("state")); }  // >> union - handle properly
    if (node.attribute("storyboardElementType")) { storyboardElementType = StoryboardElementType(node.attribute("storyboardElementType")); }  // >> union - handle properly
}
void StoryboardElementStateCondition::save(pugi::xml_node node)
{
    storyboardElementRef.save(node.append_attribute("storyboardElementRef")); 
    state.save(node.append_attribute("state")); 
    storyboardElementType.save(node.append_attribute("storyboardElementType")); 
}
Sun::Sun(pugi::xml_node node) 
{
    if (node.attribute("azimuth")) { azimuth = Double(node.attribute("azimuth")); }  // >> union - handle properly
    if (node.attribute("elevation")) { elevation = Double(node.attribute("elevation")); }  // >> union - handle properly
    if (node.attribute("intensity")) { intensity = Double(node.attribute("intensity")); }  // >> union - handle properly
    if (node.attribute("illuminance")) { illuminance = Double(node.attribute("illuminance")); }  // >> union - handle properly
}
void Sun::save(pugi::xml_node node)
{
    azimuth.save(node.append_attribute("azimuth")); 
    elevation.save(node.append_attribute("elevation")); 
    intensity.save(node.append_attribute("intensity")); 
    illuminance.save(node.append_attribute("illuminance")); 
}
SynchronizeAction::SynchronizeAction(pugi::xml_node node) 
{
    if (node.attribute("masterEntityRef")) { masterEntityRef = String(node.attribute("masterEntityRef")); }  // >> union - handle properly
    if (node.attribute("targetToleranceMaster")) { targetToleranceMaster = Double(node.attribute("targetToleranceMaster")); }  // >> union - handle properly
    if (node.attribute("targetTolerance")) { targetTolerance = Double(node.attribute("targetTolerance")); }  // >> union - handle properly
    if (node.child("TargetPositionMaster")) { m_TargetPositionMaster = std::make_shared<Position>(node.child("TargetPositionMaster")); }  
    if (node.child("TargetPosition")) { m_TargetPosition = std::make_shared<Position>(node.child("TargetPosition")); }  
    if (node.child("FinalSpeed")) { m_FinalSpeed = std::make_shared<FinalSpeed>(node.child("FinalSpeed")); }  
}
void SynchronizeAction::save(pugi::xml_node node)
{
    masterEntityRef.save(node.append_attribute("masterEntityRef")); 
    targetToleranceMaster.save(node.append_attribute("targetToleranceMaster")); 
    targetTolerance.save(node.append_attribute("targetTolerance")); 
    if (m_TargetPositionMaster ) { m_TargetPositionMaster->save(node.append_child("TargetPositionMaster")); }   
    if (m_TargetPosition ) { m_TargetPosition->save(node.append_child("TargetPosition")); }   
    if (m_FinalSpeed ) { m_FinalSpeed->save(node.append_child("FinalSpeed")); }   
}
TargetDistanceSteadyState::TargetDistanceSteadyState(pugi::xml_node node) 
{
    if (node.attribute("distance")) { distance = Double(node.attribute("distance")); }  // >> union - handle properly
}
void TargetDistanceSteadyState::save(pugi::xml_node node)
{
    distance.save(node.append_attribute("distance")); 
}
TargetTimeSteadyState::TargetTimeSteadyState(pugi::xml_node node) 
{
    if (node.attribute("time")) { time = Double(node.attribute("time")); }  // >> union - handle properly
}
void TargetTimeSteadyState::save(pugi::xml_node node)
{
    time.save(node.append_attribute("time")); 
}
TeleportAction::TeleportAction(pugi::xml_node node) 
{
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void TeleportAction::save(pugi::xml_node node)
{
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
TimeHeadwayCondition::TimeHeadwayCondition(pugi::xml_node node) 
{
    if (node.attribute("entityRef")) { entityRef = String(node.attribute("entityRef")); }  // >> union - handle properly
    if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("coordinateSystem")) { coordinateSystem = CoordinateSystem(node.attribute("coordinateSystem")); }  // >> union - handle properly
    if (node.attribute("relativeDistanceType")) { relativeDistanceType = RelativeDistanceType(node.attribute("relativeDistanceType")); }  // >> union - handle properly
    if (node.attribute("routingAlgorithm")) { routingAlgorithm = RoutingAlgorithm(node.attribute("routingAlgorithm")); }  // >> union - handle properly
}
void TimeHeadwayCondition::save(pugi::xml_node node)
{
    entityRef.save(node.append_attribute("entityRef")); 
    alongRoute.save(node.append_attribute("alongRoute")); 
    freespace.save(node.append_attribute("freespace")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    coordinateSystem.save(node.append_attribute("coordinateSystem")); 
    relativeDistanceType.save(node.append_attribute("relativeDistanceType")); 
    routingAlgorithm.save(node.append_attribute("routingAlgorithm")); 
}
TimeOfDay::TimeOfDay(pugi::xml_node node) 
{
    if (node.attribute("animation")) { animation = Boolean(node.attribute("animation")); }  // >> union - handle properly
    if (node.attribute("dateTime")) { dateTime = DateTime(node.attribute("dateTime")); }  // >> union - handle properly
}
void TimeOfDay::save(pugi::xml_node node)
{
    animation.save(node.append_attribute("animation")); 
    dateTime.save(node.append_attribute("dateTime")); 
}
TimeOfDayCondition::TimeOfDayCondition(pugi::xml_node node) 
{
    if (node.attribute("dateTime")) { dateTime = DateTime(node.attribute("dateTime")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
}
void TimeOfDayCondition::save(pugi::xml_node node)
{
    dateTime.save(node.append_attribute("dateTime")); 
    rule.save(node.append_attribute("rule")); 
}
TimeReference::TimeReference(pugi::xml_node node) 
{
    if (node.first_child()) { m_TimeReference = std::make_shared<TimeReference_U>(node.first_child()); }  
}
void TimeReference::save(pugi::xml_node node)
{
    if (m_TimeReference) { m_TimeReference->save(node); }  
}
TimeToCollisionCondition::TimeToCollisionCondition(pugi::xml_node node) 
{
    if (node.attribute("alongRoute")) { alongRoute = Boolean(node.attribute("alongRoute")); }  // >> union - handle properly
    if (node.attribute("freespace")) { freespace = Boolean(node.attribute("freespace")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
    if (node.attribute("relativeDistanceType")) { relativeDistanceType = RelativeDistanceType(node.attribute("relativeDistanceType")); }  // >> union - handle properly
    if (node.attribute("coordinateSystem")) { coordinateSystem = CoordinateSystem(node.attribute("coordinateSystem")); }  // >> union - handle properly
    if (node.attribute("routingAlgorithm")) { routingAlgorithm = RoutingAlgorithm(node.attribute("routingAlgorithm")); }  // >> union - handle properly
    if (node.child("TimeToCollisionConditionTarget")) { m_TimeToCollisionConditionTarget = std::make_shared<TimeToCollisionConditionTarget>(node.child("TimeToCollisionConditionTarget")); }  
}
void TimeToCollisionCondition::save(pugi::xml_node node)
{
    alongRoute.save(node.append_attribute("alongRoute")); 
    freespace.save(node.append_attribute("freespace")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
    relativeDistanceType.save(node.append_attribute("relativeDistanceType")); 
    coordinateSystem.save(node.append_attribute("coordinateSystem")); 
    routingAlgorithm.save(node.append_attribute("routingAlgorithm")); 
    if (m_TimeToCollisionConditionTarget ) { m_TimeToCollisionConditionTarget->save(node.append_child("TimeToCollisionConditionTarget")); }   
}
TimeToCollisionConditionTarget::TimeToCollisionConditionTarget(pugi::xml_node node) 
{
    if (node.first_child()) { m_TimeToCollisionConditionTarget = std::make_shared<TimeToCollisionConditionTarget_U>(node.first_child()); }  
}
void TimeToCollisionConditionTarget::save(pugi::xml_node node)
{
    if (m_TimeToCollisionConditionTarget) { m_TimeToCollisionConditionTarget->save(node); }  
}
Timing::Timing(pugi::xml_node node) 
{
    if (node.attribute("domainAbsoluteRelative")) { domainAbsoluteRelative = ReferenceContext(node.attribute("domainAbsoluteRelative")); }  // >> union - handle properly
    if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // >> union - handle properly
    if (node.attribute("scale")) { scale = Double(node.attribute("scale")); }  // >> union - handle properly
}
void Timing::save(pugi::xml_node node)
{
    domainAbsoluteRelative.save(node.append_attribute("domainAbsoluteRelative")); 
    offset.save(node.append_attribute("offset")); 
    scale.save(node.append_attribute("scale")); 
}
TrafficAction::TrafficAction(pugi::xml_node node) 
{
    if (node.attribute("trafficName")) { trafficName = String(node.attribute("trafficName")); }  // >> union - handle properly
    if (node.first_child()) { m_TrafficAction = std::make_shared<TrafficAction_U>(node.first_child()); }  
}
void TrafficAction::save(pugi::xml_node node)
{
    trafficName.save(node.append_attribute("trafficName")); 
    if (m_TrafficAction) { m_TrafficAction->save(node); }  
}
TrafficDefinition::TrafficDefinition(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("VehicleCategoryDistribution")) { m_VehicleCategoryDistribution = std::make_shared<VehicleCategoryDistribution>(node.child("VehicleCategoryDistribution")); }  
    if (node.child("VehicleRoleDistribution")) { m_VehicleRoleDistribution = std::make_shared<VehicleRoleDistribution>(node.child("VehicleRoleDistribution")); }  
    if (node.child("ControllerDistribution")) { m_ControllerDistribution = std::make_shared<ControllerDistribution>(node.child("ControllerDistribution")); }  
}
void TrafficDefinition::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    if (m_VehicleCategoryDistribution ) { m_VehicleCategoryDistribution->save(node.append_child("VehicleCategoryDistribution")); }   
    if (m_VehicleRoleDistribution ) { m_VehicleRoleDistribution->save(node.append_child("VehicleRoleDistribution")); }   
    if (m_ControllerDistribution ) { m_ControllerDistribution->save(node.append_child("ControllerDistribution")); }   
}
TrafficSignalAction::TrafficSignalAction(pugi::xml_node node) 
{
    if (node.first_child()) { m_TrafficSignalAction = std::make_shared<TrafficSignalAction_U>(node.first_child()); }  
}
void TrafficSignalAction::save(pugi::xml_node node)
{
    if (m_TrafficSignalAction) { m_TrafficSignalAction->save(node); }  
}
TrafficSignalCondition::TrafficSignalCondition(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("state")) { state = String(node.attribute("state")); }  // >> union - handle properly
}
void TrafficSignalCondition::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    state.save(node.append_attribute("state")); 
}
TrafficSignalController::TrafficSignalController(pugi::xml_node node) 
{
    if (node.attribute("delay")) { delay = Double(node.attribute("delay")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("reference")) { reference = String(node.attribute("reference")); }  // >> union - handle properly
    for (pugi::xml_node e_Phase = node.child("Phase"); e_Phase; e_Phase= e_Phase.next_sibling("Phase"))
    {
        m_Phases.push_back(std::make_shared<Phase>(e_Phase));
    }
}
void TrafficSignalController::save(pugi::xml_node node)
{
    delay.save(node.append_attribute("delay")); 
    name.save(node.append_attribute("name")); 
    reference.save(node.append_attribute("reference")); 
    for (std::shared_ptr<Phase> m_Phase : m_Phases ){ m_Phase->save(node.append_child("Phase")); } 
}
TrafficSignals::TrafficSignals(pugi::xml_node node) 
{
    for (pugi::xml_node e_TrafficSignalController = node.child("TrafficSignalController"); e_TrafficSignalController; e_TrafficSignalController= e_TrafficSignalController.next_sibling("TrafficSignalController"))
    {
        m_TrafficSignalControllers.push_back(std::make_shared<TrafficSignalController>(e_TrafficSignalController));
    }
}
void TrafficSignals::save(pugi::xml_node node)
{
    for (std::shared_ptr<TrafficSignalController> m_TrafficSignalController : m_TrafficSignalControllers ){ m_TrafficSignalController->save(node.append_child("TrafficSignalController")); } 
}
TrafficSignalControllerAction::TrafficSignalControllerAction(pugi::xml_node node) 
{
    if (node.attribute("trafficSignalControllerRef")) { trafficSignalControllerRef = String(node.attribute("trafficSignalControllerRef")); }  // >> union - handle properly
    if (node.attribute("phase")) { phase = String(node.attribute("phase")); }  // >> union - handle properly
}
void TrafficSignalControllerAction::save(pugi::xml_node node)
{
    trafficSignalControllerRef.save(node.append_attribute("trafficSignalControllerRef")); 
    phase.save(node.append_attribute("phase")); 
}
TrafficSignalControllerCondition::TrafficSignalControllerCondition(pugi::xml_node node) 
{
    if (node.attribute("trafficSignalControllerRef")) { trafficSignalControllerRef = String(node.attribute("trafficSignalControllerRef")); }  // >> union - handle properly
    if (node.attribute("phase")) { phase = String(node.attribute("phase")); }  // >> union - handle properly
}
void TrafficSignalControllerCondition::save(pugi::xml_node node)
{
    trafficSignalControllerRef.save(node.append_attribute("trafficSignalControllerRef")); 
    phase.save(node.append_attribute("phase")); 
}
TrafficSignalGroupState::TrafficSignalGroupState(pugi::xml_node node) 
{
    if (node.attribute("state")) { state = String(node.attribute("state")); }  // >> union - handle properly
}
void TrafficSignalGroupState::save(pugi::xml_node node)
{
    state.save(node.append_attribute("state")); 
}
TrafficSignalState::TrafficSignalState(pugi::xml_node node) 
{
    if (node.attribute("state")) { state = String(node.attribute("state")); }  // >> union - handle properly
    if (node.attribute("trafficSignalId")) { trafficSignalId = String(node.attribute("trafficSignalId")); }  // >> union - handle properly
}
void TrafficSignalState::save(pugi::xml_node node)
{
    state.save(node.append_attribute("state")); 
    trafficSignalId.save(node.append_attribute("trafficSignalId")); 
}
TrafficSignalStateAction::TrafficSignalStateAction(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("state")) { state = String(node.attribute("state")); }  // >> union - handle properly
}
void TrafficSignalStateAction::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    state.save(node.append_attribute("state")); 
}
TrafficSinkAction::TrafficSinkAction(pugi::xml_node node) 
{
    if (node.attribute("radius")) { radius = Double(node.attribute("radius")); }  // >> union - handle properly
    if (node.attribute("rate")) { rate = Double(node.attribute("rate")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
    if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }  
}
void TrafficSinkAction::save(pugi::xml_node node)
{
    radius.save(node.append_attribute("radius")); 
    rate.save(node.append_attribute("rate")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
    if (m_TrafficDefinition ) { m_TrafficDefinition->save(node.append_child("TrafficDefinition")); }   
}
TrafficSourceAction::TrafficSourceAction(pugi::xml_node node) 
{
    if (node.attribute("radius")) { radius = Double(node.attribute("radius")); }  // >> union - handle properly
    if (node.attribute("rate")) { rate = Double(node.attribute("rate")); }  // >> union - handle properly
    if (node.attribute("velocity")) { velocity = Double(node.attribute("velocity")); }  // >> union - handle properly
    if (node.attribute("speed")) { speed = Double(node.attribute("speed")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
    if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }  
}
void TrafficSourceAction::save(pugi::xml_node node)
{
    radius.save(node.append_attribute("radius")); 
    rate.save(node.append_attribute("rate")); 
    velocity.save(node.append_attribute("velocity")); 
    speed.save(node.append_attribute("speed")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
    if (m_TrafficDefinition ) { m_TrafficDefinition->save(node.append_child("TrafficDefinition")); }   
}
TrafficStopAction::TrafficStopAction(pugi::xml_node node) 
{
}
void TrafficStopAction::save(pugi::xml_node node)
{
}
TrafficSwarmAction::TrafficSwarmAction(pugi::xml_node node) 
{
    if (node.attribute("innerRadius")) { innerRadius = Double(node.attribute("innerRadius")); }  // >> union - handle properly
    if (node.attribute("numberOfVehicles")) { numberOfVehicles = UnsignedInt(node.attribute("numberOfVehicles")); }  // >> union - handle properly
    if (node.attribute("offset")) { offset = Double(node.attribute("offset")); }  // >> union - handle properly
    if (node.attribute("semiMajorAxis")) { semiMajorAxis = Double(node.attribute("semiMajorAxis")); }  // >> union - handle properly
    if (node.attribute("semiMinorAxis")) { semiMinorAxis = Double(node.attribute("semiMinorAxis")); }  // >> union - handle properly
    if (node.attribute("velocity")) { velocity = Double(node.attribute("velocity")); }  // >> union - handle properly
    if (node.child("CentralObject")) { m_CentralObject = std::make_shared<CentralSwarmObject>(node.child("CentralObject")); }  
    if (node.child("TrafficDefinition")) { m_TrafficDefinition = std::make_shared<TrafficDefinition>(node.child("TrafficDefinition")); }  
    if (node.child("InitialSpeedRange")) { m_InitialSpeedRange = std::make_shared<Range>(node.child("InitialSpeedRange")); }  
    if (node.child("DirectionOfTravelDistribution")) { m_DirectionOfTravelDistribution = std::make_shared<DirectionOfTravelDistribution>(node.child("DirectionOfTravelDistribution")); }  
}
void TrafficSwarmAction::save(pugi::xml_node node)
{
    innerRadius.save(node.append_attribute("innerRadius")); 
    numberOfVehicles.save(node.append_attribute("numberOfVehicles")); 
    offset.save(node.append_attribute("offset")); 
    semiMajorAxis.save(node.append_attribute("semiMajorAxis")); 
    semiMinorAxis.save(node.append_attribute("semiMinorAxis")); 
    velocity.save(node.append_attribute("velocity")); 
    if (m_CentralObject ) { m_CentralObject->save(node.append_child("CentralObject")); }   
    if (m_TrafficDefinition ) { m_TrafficDefinition->save(node.append_child("TrafficDefinition")); }   
    if (m_InitialSpeedRange ) { m_InitialSpeedRange->save(node.append_child("InitialSpeedRange")); }   
    if (m_DirectionOfTravelDistribution ) { m_DirectionOfTravelDistribution->save(node.append_child("DirectionOfTravelDistribution")); }   
}
Trajectory::Trajectory(pugi::xml_node node) 
{
    if (node.attribute("closed")) { closed = Boolean(node.attribute("closed")); }  // >> union - handle properly
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("Shape")) { m_Shape = std::make_shared<Shape>(node.child("Shape")); }  
}
void Trajectory::save(pugi::xml_node node)
{
    closed.save(node.append_attribute("closed")); 
    name.save(node.append_attribute("name")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_Shape ) { m_Shape->save(node.append_child("Shape")); }   
}
TrajectoryCatalogLocation::TrajectoryCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void TrajectoryCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
TrajectoryFollowingMode::TrajectoryFollowingMode(pugi::xml_node node) 
{
    if (node.attribute("followingMode")) { followingMode = FollowingMode(node.attribute("followingMode")); }  // >> union - handle properly
}
void TrajectoryFollowingMode::save(pugi::xml_node node)
{
    followingMode.save(node.append_attribute("followingMode")); 
}
TrajectoryPosition::TrajectoryPosition(pugi::xml_node node) 
{
    if (node.attribute("s")) { s = Double(node.attribute("s")); }  // >> union - handle properly
    if (node.attribute("t")) { t = Double(node.attribute("t")); }  // >> union - handle properly
    if (node.child("Orientation")) { m_Orientation = std::make_shared<Orientation>(node.child("Orientation")); }  
    if (node.child("TrajectoryRef")) { m_TrajectoryRef = std::make_shared<TrajectoryRef>(node.child("TrajectoryRef")); }  
}
void TrajectoryPosition::save(pugi::xml_node node)
{
    s.save(node.append_attribute("s")); 
    t.save(node.append_attribute("t")); 
    if (m_Orientation ) { m_Orientation->save(node.append_child("Orientation")); }   
    if (m_TrajectoryRef ) { m_TrajectoryRef->save(node.append_child("TrajectoryRef")); }   
}
TrajectoryRef::TrajectoryRef(pugi::xml_node node) 
{
    if (node.first_child()) { m_TrajectoryRef = std::make_shared<TrajectoryRef_U>(node.first_child()); }  
}
void TrajectoryRef::save(pugi::xml_node node)
{
    if (m_TrajectoryRef) { m_TrajectoryRef->save(node); }  
}
TransitionDynamics::TransitionDynamics(pugi::xml_node node) 
{
    if (node.attribute("dynamicsDimension")) { dynamicsDimension = DynamicsDimension(node.attribute("dynamicsDimension")); }  // >> union - handle properly
    if (node.attribute("dynamicsShape")) { dynamicsShape = DynamicsShape(node.attribute("dynamicsShape")); }  // >> union - handle properly
    if (node.attribute("followingMode")) { followingMode = FollowingMode(node.attribute("followingMode")); }  // >> union - handle properly
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void TransitionDynamics::save(pugi::xml_node node)
{
    dynamicsDimension.save(node.append_attribute("dynamicsDimension")); 
    dynamicsShape.save(node.append_attribute("dynamicsShape")); 
    followingMode.save(node.append_attribute("followingMode")); 
    value.save(node.append_attribute("value")); 
}
TraveledDistanceCondition::TraveledDistanceCondition(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void TraveledDistanceCondition::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
Trigger::Trigger(pugi::xml_node node) 
{
    for (pugi::xml_node e_ConditionGroup = node.child("ConditionGroup"); e_ConditionGroup; e_ConditionGroup= e_ConditionGroup.next_sibling("ConditionGroup"))
    {
        m_ConditionGroups.push_back(std::make_shared<ConditionGroup>(e_ConditionGroup));
    }
}
void Trigger::save(pugi::xml_node node)
{
    for (std::shared_ptr<ConditionGroup> m_ConditionGroup : m_ConditionGroups ){ m_ConditionGroup->save(node.append_child("ConditionGroup")); } 
}
TriggeringEntities::TriggeringEntities(pugi::xml_node node) 
{
    if (node.attribute("triggeringEntitiesRule")) { triggeringEntitiesRule = TriggeringEntitiesRule(node.attribute("triggeringEntitiesRule")); }  // >> union - handle properly
    for (pugi::xml_node e_EntityRef = node.child("EntityRef"); e_EntityRef; e_EntityRef= e_EntityRef.next_sibling("EntityRef"))
    {
        m_EntityRefs.push_back(std::make_shared<EntityRef>(e_EntityRef));
    }
}
void TriggeringEntities::save(pugi::xml_node node)
{
    triggeringEntitiesRule.save(node.append_attribute("triggeringEntitiesRule")); 
    for (std::shared_ptr<EntityRef> m_EntityRef : m_EntityRefs ){ m_EntityRef->save(node.append_child("EntityRef")); } 
}
UniformDistribution::UniformDistribution(pugi::xml_node node) 
{
    if (node.child("Range")) { m_Range = std::make_shared<Range>(node.child("Range")); }  
}
void UniformDistribution::save(pugi::xml_node node)
{
    if (m_Range ) { m_Range->save(node.append_child("Range")); }   
}
UsedArea::UsedArea(pugi::xml_node node) 
{
    for (pugi::xml_node e_Position = node.child("Position"); e_Position; e_Position= e_Position.next_sibling("Position"))
    {
        m_Positions.push_back(std::make_shared<Position>(e_Position));
    }
}
void UsedArea::save(pugi::xml_node node)
{
    for (std::shared_ptr<Position> m_Position : m_Positions ){ m_Position->save(node.append_child("Position")); } 
}
UserDefinedAction::UserDefinedAction(pugi::xml_node node) 
{
    if (node.child("CustomCommandAction")) { m_CustomCommandAction = std::make_shared<CustomCommandAction>(node.child("CustomCommandAction")); }  
}
void UserDefinedAction::save(pugi::xml_node node)
{
    if (m_CustomCommandAction ) { m_CustomCommandAction->save(node.append_child("CustomCommandAction")); }   
}
UserDefinedAnimation::UserDefinedAnimation(pugi::xml_node node) 
{
    if (node.attribute("userDefinedAnimationType")) { userDefinedAnimationType = String(node.attribute("userDefinedAnimationType")); }  // >> union - handle properly
}
void UserDefinedAnimation::save(pugi::xml_node node)
{
    userDefinedAnimationType.save(node.append_attribute("userDefinedAnimationType")); 
}
UserDefinedComponent::UserDefinedComponent(pugi::xml_node node) 
{
    if (node.attribute("userDefinedComponentType")) { userDefinedComponentType = String(node.attribute("userDefinedComponentType")); }  // >> union - handle properly
}
void UserDefinedComponent::save(pugi::xml_node node)
{
    userDefinedComponentType.save(node.append_attribute("userDefinedComponentType")); 
}
UserDefinedDistribution::UserDefinedDistribution(pugi::xml_node node) 
{
    if (node.attribute("type")) { type = String(node.attribute("type")); }  // >> union - handle properly
}
void UserDefinedDistribution::save(pugi::xml_node node)
{
    type.save(node.append_attribute("type")); 
}
UserDefinedLight::UserDefinedLight(pugi::xml_node node) 
{
    if (node.attribute("userDefinedLightType")) { userDefinedLightType = String(node.attribute("userDefinedLightType")); }  // >> union - handle properly
}
void UserDefinedLight::save(pugi::xml_node node)
{
    userDefinedLightType.save(node.append_attribute("userDefinedLightType")); 
}
UserDefinedValueCondition::UserDefinedValueCondition(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void UserDefinedValueCondition::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
ValueConstraint::ValueConstraint(pugi::xml_node node) 
{
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void ValueConstraint::save(pugi::xml_node node)
{
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
ValueConstraintGroup::ValueConstraintGroup(pugi::xml_node node) 
{
    for (pugi::xml_node e_ValueConstraint = node.child("ValueConstraint"); e_ValueConstraint; e_ValueConstraint= e_ValueConstraint.next_sibling("ValueConstraint"))
    {
        m_ValueConstraints.push_back(std::make_shared<ValueConstraint>(e_ValueConstraint));
    }
}
void ValueConstraintGroup::save(pugi::xml_node node)
{
    for (std::shared_ptr<ValueConstraint> m_ValueConstraint : m_ValueConstraints ){ m_ValueConstraint->save(node.append_child("ValueConstraint")); } 
}
ValueSetDistribution::ValueSetDistribution(pugi::xml_node node) 
{
    for (pugi::xml_node e_ParameterValueSet = node.child("ParameterValueSet"); e_ParameterValueSet; e_ParameterValueSet= e_ParameterValueSet.next_sibling("ParameterValueSet"))
    {
        m_ParameterValueSets.push_back(std::make_shared<ParameterValueSet>(e_ParameterValueSet));
    }
}
void ValueSetDistribution::save(pugi::xml_node node)
{
    for (std::shared_ptr<ParameterValueSet> m_ParameterValueSet : m_ParameterValueSets ){ m_ParameterValueSet->save(node.append_child("ParameterValueSet")); } 
}
VariableAction::VariableAction(pugi::xml_node node) 
{
    if (node.attribute("variableRef")) { variableRef = String(node.attribute("variableRef")); }  // >> union - handle properly
    if (node.first_child()) { m_VariableAction = std::make_shared<VariableAction_U>(node.first_child()); }  
}
void VariableAction::save(pugi::xml_node node)
{
    variableRef.save(node.append_attribute("variableRef")); 
    if (m_VariableAction) { m_VariableAction->save(node); }  
}
VariableAddValueRule::VariableAddValueRule(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void VariableAddValueRule::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
VariableCondition::VariableCondition(pugi::xml_node node) 
{
    if (node.attribute("variableRef")) { variableRef = String(node.attribute("variableRef")); }  // >> union - handle properly
    if (node.attribute("rule")) { rule = Rule(node.attribute("rule")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void VariableCondition::save(pugi::xml_node node)
{
    variableRef.save(node.append_attribute("variableRef")); 
    rule.save(node.append_attribute("rule")); 
    value.save(node.append_attribute("value")); 
}
VariableDeclaration::VariableDeclaration(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("variableType")) { variableType = ParameterType(node.attribute("variableType")); }  // >> union - handle properly
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void VariableDeclaration::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    variableType.save(node.append_attribute("variableType")); 
    value.save(node.append_attribute("value")); 
}
VariableDeclarations::VariableDeclarations(pugi::xml_node node) 
{
    for (pugi::xml_node e_VariableDeclaration = node.child("VariableDeclaration"); e_VariableDeclaration; e_VariableDeclaration= e_VariableDeclaration.next_sibling("VariableDeclaration"))
    {
        m_VariableDeclarations.push_back(std::make_shared<VariableDeclaration>(e_VariableDeclaration));
    }
}
void VariableDeclarations::save(pugi::xml_node node)
{
    for (std::shared_ptr<VariableDeclaration> m_VariableDeclaration : m_VariableDeclarations ){ m_VariableDeclaration->save(node.append_child("VariableDeclaration")); } 
}
VariableModifyAction::VariableModifyAction(pugi::xml_node node) 
{
    if (node.child("Rule")) { m_Rule = std::make_shared<VariableModifyRule>(node.child("Rule")); }  
}
void VariableModifyAction::save(pugi::xml_node node)
{
    if (m_Rule ) { m_Rule->save(node.append_child("Rule")); }   
}
VariableModifyRule::VariableModifyRule(pugi::xml_node node) 
{
    if (node.first_child()) { m_VariableModifyRule = std::make_shared<VariableModifyRule_U>(node.first_child()); }  
}
void VariableModifyRule::save(pugi::xml_node node)
{
    if (m_VariableModifyRule) { m_VariableModifyRule->save(node); }  
}
VariableMultiplyByValueRule::VariableMultiplyByValueRule(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = Double(node.attribute("value")); }  // >> union - handle properly
}
void VariableMultiplyByValueRule::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
VariableSetAction::VariableSetAction(pugi::xml_node node) 
{
    if (node.attribute("value")) { value = String(node.attribute("value")); }  // >> union - handle properly
}
void VariableSetAction::save(pugi::xml_node node)
{
    value.save(node.append_attribute("value")); 
}
Vehicle::Vehicle(pugi::xml_node node) 
{
    if (node.attribute("name")) { name = String(node.attribute("name")); }  // >> union - handle properly
    if (node.attribute("vehicleCategory")) { vehicleCategory = VehicleCategory(node.attribute("vehicleCategory")); }  // >> union - handle properly
    if (node.attribute("role")) { role = Role(node.attribute("role")); }  // >> union - handle properly
    if (node.attribute("mass")) { mass = Double(node.attribute("mass")); }  // >> union - handle properly
    if (node.attribute("model3d")) { model3d = String(node.attribute("model3d")); }  // >> union - handle properly
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("BoundingBox")) { m_BoundingBox = std::make_shared<BoundingBox>(node.child("BoundingBox")); }  
    if (node.child("Performance")) { m_Performance = std::make_shared<Performance>(node.child("Performance")); }  
    if (node.child("Axles")) { m_Axles = std::make_shared<Axles>(node.child("Axles")); }  
    if (node.child("Properties")) { m_Properties = std::make_shared<Properties>(node.child("Properties")); }  
}
void Vehicle::save(pugi::xml_node node)
{
    name.save(node.append_attribute("name")); 
    vehicleCategory.save(node.append_attribute("vehicleCategory")); 
    role.save(node.append_attribute("role")); 
    mass.save(node.append_attribute("mass")); 
    model3d.save(node.append_attribute("model3d")); 
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_BoundingBox ) { m_BoundingBox->save(node.append_child("BoundingBox")); }   
    if (m_Performance ) { m_Performance->save(node.append_child("Performance")); }   
    if (m_Axles ) { m_Axles->save(node.append_child("Axles")); }   
    if (m_Properties ) { m_Properties->save(node.append_child("Properties")); }   
}
VehicleCatalogLocation::VehicleCatalogLocation(pugi::xml_node node) 
{
    if (node.child("Directory")) { m_Directory = std::make_shared<Directory>(node.child("Directory")); }  
}
void VehicleCatalogLocation::save(pugi::xml_node node)
{
    if (m_Directory ) { m_Directory->save(node.append_child("Directory")); }   
}
VehicleCategoryDistribution::VehicleCategoryDistribution(pugi::xml_node node) 
{
    for (pugi::xml_node e_VehicleCategoryDistributionEntry = node.child("VehicleCategoryDistributionEntry"); e_VehicleCategoryDistributionEntry; e_VehicleCategoryDistributionEntry= e_VehicleCategoryDistributionEntry.next_sibling("VehicleCategoryDistributionEntry"))
    {
        m_VehicleCategoryDistributionEntrys.push_back(std::make_shared<VehicleCategoryDistributionEntry>(e_VehicleCategoryDistributionEntry));
    }
}
void VehicleCategoryDistribution::save(pugi::xml_node node)
{
    for (std::shared_ptr<VehicleCategoryDistributionEntry> m_VehicleCategoryDistributionEntry : m_VehicleCategoryDistributionEntrys ){ m_VehicleCategoryDistributionEntry->save(node.append_child("VehicleCategoryDistributionEntry")); } 
}
VehicleCategoryDistributionEntry::VehicleCategoryDistributionEntry(pugi::xml_node node) 
{
    if (node.attribute("category")) { category = VehicleCategory(node.attribute("category")); }  // >> union - handle properly
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
}
void VehicleCategoryDistributionEntry::save(pugi::xml_node node)
{
    category.save(node.append_attribute("category")); 
    weight.save(node.append_attribute("weight")); 
}
VehicleComponent::VehicleComponent(pugi::xml_node node) 
{
    if (node.attribute("vehicleComponentType")) { vehicleComponentType = VehicleComponentType(node.attribute("vehicleComponentType")); }  // >> union - handle properly
}
void VehicleComponent::save(pugi::xml_node node)
{
    vehicleComponentType.save(node.append_attribute("vehicleComponentType")); 
}
VehicleLight::VehicleLight(pugi::xml_node node) 
{
    if (node.attribute("vehicleLightType")) { vehicleLightType = VehicleLightType(node.attribute("vehicleLightType")); }  // >> union - handle properly
}
void VehicleLight::save(pugi::xml_node node)
{
    vehicleLightType.save(node.append_attribute("vehicleLightType")); 
}
VehicleRoleDistribution::VehicleRoleDistribution(pugi::xml_node node) 
{
    for (pugi::xml_node e_VehicleRoleDistributionEntry = node.child("VehicleRoleDistributionEntry"); e_VehicleRoleDistributionEntry; e_VehicleRoleDistributionEntry= e_VehicleRoleDistributionEntry.next_sibling("VehicleRoleDistributionEntry"))
    {
        m_VehicleRoleDistributionEntrys.push_back(std::make_shared<VehicleRoleDistributionEntry>(e_VehicleRoleDistributionEntry));
    }
}
void VehicleRoleDistribution::save(pugi::xml_node node)
{
    for (std::shared_ptr<VehicleRoleDistributionEntry> m_VehicleRoleDistributionEntry : m_VehicleRoleDistributionEntrys ){ m_VehicleRoleDistributionEntry->save(node.append_child("VehicleRoleDistributionEntry")); } 
}
VehicleRoleDistributionEntry::VehicleRoleDistributionEntry(pugi::xml_node node) 
{
    if (node.attribute("role")) { role = Role(node.attribute("role")); }  // >> union - handle properly
    if (node.attribute("weight")) { weight = Double(node.attribute("weight")); }  // >> union - handle properly
}
void VehicleRoleDistributionEntry::save(pugi::xml_node node)
{
    role.save(node.append_attribute("role")); 
    weight.save(node.append_attribute("weight")); 
}
Vertex::Vertex(pugi::xml_node node) 
{
    if (node.attribute("time")) { time = Double(node.attribute("time")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void Vertex::save(pugi::xml_node node)
{
    time.save(node.append_attribute("time")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
VisibilityAction::VisibilityAction(pugi::xml_node node) 
{
    if (node.attribute("graphics")) { graphics = Boolean(node.attribute("graphics")); }  // >> union - handle properly
    if (node.attribute("sensors")) { sensors = Boolean(node.attribute("sensors")); }  // >> union - handle properly
    if (node.attribute("traffic")) { traffic = Boolean(node.attribute("traffic")); }  // >> union - handle properly
    if (node.child("SensorReferenceSet")) { m_SensorReferenceSet = std::make_shared<SensorReferenceSet>(node.child("SensorReferenceSet")); }  
}
void VisibilityAction::save(pugi::xml_node node)
{
    graphics.save(node.append_attribute("graphics")); 
    sensors.save(node.append_attribute("sensors")); 
    traffic.save(node.append_attribute("traffic")); 
    if (m_SensorReferenceSet ) { m_SensorReferenceSet->save(node.append_child("SensorReferenceSet")); }   
}
Waypoint::Waypoint(pugi::xml_node node) 
{
    if (node.attribute("routeStrategy")) { routeStrategy = RouteStrategy(node.attribute("routeStrategy")); }  // >> union - handle properly
    if (node.child("Position")) { m_Position = std::make_shared<Position>(node.child("Position")); }  
}
void Waypoint::save(pugi::xml_node node)
{
    routeStrategy.save(node.append_attribute("routeStrategy")); 
    if (m_Position ) { m_Position->save(node.append_child("Position")); }   
}
Weather::Weather(pugi::xml_node node) 
{
    if (node.attribute("cloudState")) { cloudState = CloudState(node.attribute("cloudState")); }  // >> union - handle properly
    if (node.attribute("atmosphericPressure")) { atmosphericPressure = Double(node.attribute("atmosphericPressure")); }  // >> union - handle properly
    if (node.attribute("temperature")) { temperature = Double(node.attribute("temperature")); }  // >> union - handle properly
    if (node.attribute("fractionalCloudCover")) { fractionalCloudCover = FractionalCloudCover(node.attribute("fractionalCloudCover")); }  // >> union - handle properly
    if (node.child("Sun")) { m_Sun = std::make_shared<Sun>(node.child("Sun")); }  
    if (node.child("Fog")) { m_Fog = std::make_shared<Fog>(node.child("Fog")); }  
    if (node.child("Precipitation")) { m_Precipitation = std::make_shared<Precipitation>(node.child("Precipitation")); }  
    if (node.child("Wind")) { m_Wind = std::make_shared<Wind>(node.child("Wind")); }  
    if (node.child("DomeImage")) { m_DomeImage = std::make_shared<DomeImage>(node.child("DomeImage")); }  
}
void Weather::save(pugi::xml_node node)
{
    cloudState.save(node.append_attribute("cloudState")); 
    atmosphericPressure.save(node.append_attribute("atmosphericPressure")); 
    temperature.save(node.append_attribute("temperature")); 
    fractionalCloudCover.save(node.append_attribute("fractionalCloudCover")); 
    if (m_Sun ) { m_Sun->save(node.append_child("Sun")); }   
    if (m_Fog ) { m_Fog->save(node.append_child("Fog")); }   
    if (m_Precipitation ) { m_Precipitation->save(node.append_child("Precipitation")); }   
    if (m_Wind ) { m_Wind->save(node.append_child("Wind")); }   
    if (m_DomeImage ) { m_DomeImage->save(node.append_child("DomeImage")); }   
}
Wind::Wind(pugi::xml_node node) 
{
    if (node.attribute("direction")) { direction = Double(node.attribute("direction")); }  // >> union - handle properly
    if (node.attribute("speed")) { speed = Double(node.attribute("speed")); }  // >> union - handle properly
}
void Wind::save(pugi::xml_node node)
{
    direction.save(node.append_attribute("direction")); 
    speed.save(node.append_attribute("speed")); 
}
WorldPosition::WorldPosition(pugi::xml_node node) 
{
    if (node.attribute("h")) { h = Double(node.attribute("h")); }  // >> union - handle properly
    if (node.attribute("p")) { p = Double(node.attribute("p")); }  // >> union - handle properly
    if (node.attribute("r")) { r = Double(node.attribute("r")); }  // >> union - handle properly
    if (node.attribute("x")) { x = Double(node.attribute("x")); }  // >> union - handle properly
    if (node.attribute("y")) { y = Double(node.attribute("y")); }  // >> union - handle properly
    if (node.attribute("z")) { z = Double(node.attribute("z")); }  // >> union - handle properly
}
void WorldPosition::save(pugi::xml_node node)
{
    h.save(node.append_attribute("h")); 
    p.save(node.append_attribute("p")); 
    r.save(node.append_attribute("r")); 
    x.save(node.append_attribute("x")); 
    y.save(node.append_attribute("y")); 
    z.save(node.append_attribute("z")); 
}
// xs:group -> aliased to group definition
BrakeInput::BrakeInput(pugi::xml_node node)
{
    if (node.child("BrakePercent")) { m_BrakePercent = std::make_shared<Brake>(node.child("BrakePercent")); }  
    if (node.child("BrakeForce")) { m_BrakeForce = std::make_shared<Brake>(node.child("BrakeForce")); }  
}
// xs:group -> aliased to group definition
CatalogDefinition::CatalogDefinition(pugi::xml_node node)
{
    if (node.child("Catalog")) { m_Catalog = std::make_shared<Catalog>(node.child("Catalog")); }  
}
// xs:group -> aliased to group definition
DeterministicMultiParameterDistributionType::DeterministicMultiParameterDistributionType(pugi::xml_node node)
{
    if (node.child("ValueSetDistribution")) { m_ValueSetDistribution = std::make_shared<ValueSetDistribution>(node.child("ValueSetDistribution")); }  
}
// xs:group -> aliased to group definition
DeterministicParameterDistribution::DeterministicParameterDistribution(pugi::xml_node node)
{
    if (node.child("DeterministicMultiParameterDistribution")) { m_DeterministicMultiParameterDistribution = std::make_shared<DeterministicMultiParameterDistribution>(node.child("DeterministicMultiParameterDistribution")); }  
    if (node.child("DeterministicSingleParameterDistribution")) { m_DeterministicSingleParameterDistribution = std::make_shared<DeterministicSingleParameterDistribution>(node.child("DeterministicSingleParameterDistribution")); }  
}
// xs:group -> aliased to group definition
DeterministicSingleParameterDistributionType::DeterministicSingleParameterDistributionType(pugi::xml_node node)
{
    if (node.child("DistributionSet")) { m_DistributionSet = std::make_shared<DistributionSet>(node.child("DistributionSet")); }  
    if (node.child("DistributionRange")) { m_DistributionRange = std::make_shared<DistributionRange>(node.child("DistributionRange")); }  
    if (node.child("UserDefinedDistribution")) { m_UserDefinedDistribution = std::make_shared<UserDefinedDistribution>(node.child("UserDefinedDistribution")); }  
}
// xs:group -> aliased to group definition
DistributionDefinition::DistributionDefinition(pugi::xml_node node)
{
    if (node.child("Deterministic")) { m_Deterministic = std::make_shared<Deterministic>(node.child("Deterministic")); }  
    if (node.child("Stochastic")) { m_Stochastic = std::make_shared<Stochastic>(node.child("Stochastic")); }  
}
// xs:group -> aliased to group definition
EntityObject::EntityObject(pugi::xml_node node)
{
    if (node.child("CatalogReference")) { m_CatalogReference = std::make_shared<CatalogReference>(node.child("CatalogReference")); }  
    if (node.child("Vehicle")) { m_Vehicle = std::make_shared<Vehicle>(node.child("Vehicle")); }  
    if (node.child("Pedestrian")) { m_Pedestrian = std::make_shared<Pedestrian>(node.child("Pedestrian")); }  
    if (node.child("MiscObject")) { m_MiscObject = std::make_shared<MiscObject>(node.child("MiscObject")); }  
    if (node.child("ExternalObjectReference")) { m_ExternalObjectReference = std::make_shared<ExternalObjectReference>(node.child("ExternalObjectReference")); }  
}
// xs:group -> aliased to group definition
Gear::Gear(pugi::xml_node node)
{
    if (node.child("ManualGear")) { m_ManualGear = std::make_shared<ManualGear>(node.child("ManualGear")); }  
    if (node.child("AutomaticGear")) { m_AutomaticGear = std::make_shared<AutomaticGear>(node.child("AutomaticGear")); }  
}
// xs:group -> aliased to group definition
OpenScenarioCategory::OpenScenarioCategory(pugi::xml_node node)
{
    { m_ScenarioDefinition = std::make_shared<ScenarioDefinition>(node); } // Node has no xml def, same node passes through until it finds an element.
    { m_CatalogDefinition = std::make_shared<CatalogDefinition>(node); } // Node has no xml def, same node passes through until it finds an element.
    { m_ParameterValueDistributionDefinition = std::make_shared<ParameterValueDistributionDefinition>(node); } // Node has no xml def, same node passes through until it finds an element.
}
// xs:group -> aliased to group definition
ParameterValueDistributionDefinition::ParameterValueDistributionDefinition(pugi::xml_node node)
{
    if (node.child("ParameterValueDistribution")) { m_ParameterValueDistribution = std::make_shared<ParameterValueDistribution>(node.child("ParameterValueDistribution")); }  
}
// xs:group -> aliased to group definition
ScenarioDefinition::ScenarioDefinition(pugi::xml_node node)
{
    if (node.child("ParameterDeclarations")) { m_ParameterDeclarations = std::make_shared<ParameterDeclarations>(node.child("ParameterDeclarations")); }  
    if (node.child("VariableDeclarations")) { m_VariableDeclarations = std::make_shared<VariableDeclarations>(node.child("VariableDeclarations")); }  
    if (node.child("CatalogLocations")) { m_CatalogLocations = std::make_shared<CatalogLocations>(node.child("CatalogLocations")); }  
    if (node.child("RoadNetwork")) { m_RoadNetwork = std::make_shared<RoadNetwork>(node.child("RoadNetwork")); }  
    if (node.child("Entities")) { m_Entities = std::make_shared<Entities>(node.child("Entities")); }  
    if (node.child("Storyboard")) { m_Storyboard = std::make_shared<Storyboard>(node.child("Storyboard")); }  
}
// xs:group -> aliased to group definition
SteadyState::SteadyState(pugi::xml_node node)
{
    if (node.child("TargetDistanceSteadyState")) { m_TargetDistanceSteadyState = std::make_shared<TargetDistanceSteadyState>(node.child("TargetDistanceSteadyState")); }  
    if (node.child("TargetTimeSteadyState")) { m_TargetTimeSteadyState = std::make_shared<TargetTimeSteadyState>(node.child("TargetTimeSteadyState")); }  
}
// xs:group -> aliased to group definition
StochasticDistributionType::StochasticDistributionType(pugi::xml_node node)
{
    if (node.child("ProbabilityDistributionSet")) { m_ProbabilityDistributionSet = std::make_shared<ProbabilityDistributionSet>(node.child("ProbabilityDistributionSet")); }  
    if (node.child("NormalDistribution")) { m_NormalDistribution = std::make_shared<NormalDistribution>(node.child("NormalDistribution")); }  
    if (node.child("UniformDistribution")) { m_UniformDistribution = std::make_shared<UniformDistribution>(node.child("UniformDistribution")); }  
    if (node.child("PoissonDistribution")) { m_PoissonDistribution = std::make_shared<PoissonDistribution>(node.child("PoissonDistribution")); }  
    if (node.child("Histogram")) { m_Histogram = std::make_shared<Histogram>(node.child("Histogram")); }  
    if (node.child("UserDefinedDistribution")) { m_UserDefinedDistribution = std::make_shared<UserDefinedDistribution>(node.child("UserDefinedDistribution")); }  
}
// xs:group -> aliased to group definition
void BrakeInput::save(pugi::xml_node node)
{
    if (m_BrakePercent ) { m_BrakePercent->save(node.append_child("BrakePercent")); }   
    if (m_BrakeForce ) { m_BrakeForce->save(node.append_child("BrakeForce")); }   
}
// xs:group -> aliased to group definition
void CatalogDefinition::save(pugi::xml_node node)
{
    if (m_Catalog ) { m_Catalog->save(node.append_child("Catalog")); }   
}
// xs:group -> aliased to group definition
void DeterministicMultiParameterDistributionType::save(pugi::xml_node node)
{
    if (m_ValueSetDistribution ) { m_ValueSetDistribution->save(node.append_child("ValueSetDistribution")); }   
}
// xs:group -> aliased to group definition
void DeterministicParameterDistribution::save(pugi::xml_node node)
{
    if (m_DeterministicMultiParameterDistribution ) { m_DeterministicMultiParameterDistribution->save(node.append_child("DeterministicMultiParameterDistribution")); }   
    if (m_DeterministicSingleParameterDistribution ) { m_DeterministicSingleParameterDistribution->save(node.append_child("DeterministicSingleParameterDistribution")); }   
}
// xs:group -> aliased to group definition
void DeterministicSingleParameterDistributionType::save(pugi::xml_node node)
{
    if (m_DistributionSet ) { m_DistributionSet->save(node.append_child("DistributionSet")); }   
    if (m_DistributionRange ) { m_DistributionRange->save(node.append_child("DistributionRange")); }   
    if (m_UserDefinedDistribution ) { m_UserDefinedDistribution->save(node.append_child("UserDefinedDistribution")); }   
}
// xs:group -> aliased to group definition
void DistributionDefinition::save(pugi::xml_node node)
{
    if (m_Deterministic ) { m_Deterministic->save(node.append_child("Deterministic")); }   
    if (m_Stochastic ) { m_Stochastic->save(node.append_child("Stochastic")); }   
}
// xs:group -> aliased to group definition
void EntityObject::save(pugi::xml_node node)
{
    if (m_CatalogReference ) { m_CatalogReference->save(node.append_child("CatalogReference")); }   
    if (m_Vehicle ) { m_Vehicle->save(node.append_child("Vehicle")); }   
    if (m_Pedestrian ) { m_Pedestrian->save(node.append_child("Pedestrian")); }   
    if (m_MiscObject ) { m_MiscObject->save(node.append_child("MiscObject")); }   
    if (m_ExternalObjectReference ) { m_ExternalObjectReference->save(node.append_child("ExternalObjectReference")); }   
}
// xs:group -> aliased to group definition
void Gear::save(pugi::xml_node node)
{
    if (m_ManualGear ) { m_ManualGear->save(node.append_child("ManualGear")); }   
    if (m_AutomaticGear ) { m_AutomaticGear->save(node.append_child("AutomaticGear")); }   
}
// xs:group -> aliased to group definition
void OpenScenarioCategory::save(pugi::xml_node node)
{
    { if (m_ScenarioDefinition ) { m_ScenarioDefinition->save(node); } } // Node has no xml def, same node passes through until it finds an element.
    { if (m_CatalogDefinition ) { m_CatalogDefinition->save(node); } } // Node has no xml def, same node passes through until it finds an element.
    { if (m_ParameterValueDistributionDefinition ) { m_ParameterValueDistributionDefinition->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
// xs:group -> aliased to group definition
void ParameterValueDistributionDefinition::save(pugi::xml_node node)
{
    if (m_ParameterValueDistribution ) { m_ParameterValueDistribution->save(node.append_child("ParameterValueDistribution")); }   
}
// xs:group -> aliased to group definition
void ScenarioDefinition::save(pugi::xml_node node)
{
    if (m_ParameterDeclarations ) { m_ParameterDeclarations->save(node.append_child("ParameterDeclarations")); }   
    if (m_VariableDeclarations ) { m_VariableDeclarations->save(node.append_child("VariableDeclarations")); }   
    if (m_CatalogLocations ) { m_CatalogLocations->save(node.append_child("CatalogLocations")); }   
    if (m_RoadNetwork ) { m_RoadNetwork->save(node.append_child("RoadNetwork")); }   
    if (m_Entities ) { m_Entities->save(node.append_child("Entities")); }   
    if (m_Storyboard ) { m_Storyboard->save(node.append_child("Storyboard")); }   
}
// xs:group -> aliased to group definition
void SteadyState::save(pugi::xml_node node)
{
    if (m_TargetDistanceSteadyState ) { m_TargetDistanceSteadyState->save(node.append_child("TargetDistanceSteadyState")); }   
    if (m_TargetTimeSteadyState ) { m_TargetTimeSteadyState->save(node.append_child("TargetTimeSteadyState")); }   
}
// xs:group -> aliased to group definition
void StochasticDistributionType::save(pugi::xml_node node)
{
    if (m_ProbabilityDistributionSet ) { m_ProbabilityDistributionSet->save(node.append_child("ProbabilityDistributionSet")); }   
    if (m_NormalDistribution ) { m_NormalDistribution->save(node.append_child("NormalDistribution")); }   
    if (m_UniformDistribution ) { m_UniformDistribution->save(node.append_child("UniformDistribution")); }   
    if (m_PoissonDistribution ) { m_PoissonDistribution->save(node.append_child("PoissonDistribution")); }   
    if (m_Histogram ) { m_Histogram->save(node.append_child("Histogram")); }   
    if (m_UserDefinedDistribution ) { m_UserDefinedDistribution->save(node.append_child("UserDefinedDistribution")); }   
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
void xosc::save(std::string filename)
{
    pugi::xml_document doc;
    m_OpenSCENARIO->save(doc.append_child("OpenSCENARIO"));
    doc.save_file(filename.c_str());
}
xosc::~xosc()
{
}

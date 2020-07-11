//
//  OpenSCENARIO.h
//
//  xsd2cxx- for OpenDrive CXX classes
//
//  Created by Javed Shaik on Sat Jul 11 12:40:05 2020
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 0473a170-1000-40b0-89cf-3489fc527163 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
#ifndef _OPENSCENARIO_H_
#define _OPENSCENARIO_H_
#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <memory>
#include <cstring>
#include <string>
#include <vector>
#include <typeinfo>
#include <ctime>
#include <regex>
//
#include "pugixml.hpp"
#include "xosc_export.h"
//
template <typename EnumT> std::vector<std::pair<std::string, EnumT>> enum_map();
//
template <typename EnumT>
inline EnumT str2enum(const std::string& v)
{
	for (const auto&p : enum_map<EnumT>())
		if (p.first == v)
			return p.second;
    char buf[256]; snprintf(buf,sizeof(buf), "Enum: Couldn't match enum with name : <%s> : %s \n", typeid(EnumT).name(), v.c_str());
	throw std::runtime_error(buf);
	return static_cast<EnumT>(-1);
}
//
template<typename EnumT>
inline std::string enum2str(const EnumT v)
{
	for (const auto&p : enum_map<EnumT>())
		if (p.second == v)
			return p.first;
	throw std::runtime_error("ENUM: Couldn't convert enum to string , is map() defined ?");
	return "INVALID";
}
//
template <typename EnumT>
inline bool isvalid(const std::string& v)
{
	for (const auto&p : enum_map<EnumT>())
		if (p.first == v)
			return true;
	return false;
}
//
struct t_datetime
{
    std::string format = "%FT%T.000%z'";
    std::time_t t;
    void operator=(std::string tval)
    {
        struct std::tm tm;
        std::istringstream ss(tval.c_str());
        ss >> std::get_time(&tm, format.c_str());
        t = mktime(&tm);
    }
};
template <const std::string& pattern>
struct t_patternstr
{
    std::string _val;
    bool operator=(std::string tval)
    {
        std::regex r(pattern);
        std::smatch m;
        std::regex_search(tval,m,r);
        if (m.size() > 0)
        {
            _val = m[0]; // Only selecting first match
            return true;
        }
        return false;
    }
};
template<typename T>
struct t_typevar
{
	T _val;
	bool operator=(T value)
	{
		_val = value; // TODO: If from string convert to actual datatype and return true.
		return true;
	}
};
//Example USAGE
// // typedef t_patternstr<std::string,std::string(".*")> t_parameter; //C++ doesnt allow literals as template parameters
//const std::string pattern = "[$][A-Za-z_][A-Za-z0-9_]";
//typedef t_patternstr<pattern> t_patterneter;
//Example USAGE
// Typedefs
const std::string parameter_pattern = "[$][A-Za-z_][A-Za-z0-9_]*";
typedef t_patternstr<parameter_pattern> parameter;
// Enumerations
enum class e_CloudState : std::uint8_t
{
	  CLOUDY,               //cloudy
	  FREE,               //free
	  OVERCAST,               //overcast
	  RAINY,               //rainy
	  SKYOFF               //skyOff
};
enum class e_ConditionEdge : std::uint8_t
{
	  FALLING,               //falling
	  NONE,               //none
	  RISING,               //rising
	  RISINGORFALLING               //risingOrFalling
};
enum class e_DynamicsDimension : std::uint8_t
{
	  DISTANCE,               //distance
	  RATE,               //rate
	  TIME               //time
};
enum class e_DynamicsShape : std::uint8_t
{
	  CUBIC,               //cubic
	  LINEAR,               //linear
	  SINUSOIDAL,               //sinusoidal
	  STEP               //step
};
enum class e_FollowingMode : std::uint8_t
{
	  FOLLOW,               //follow
	  POSITION               //position
};
enum class e_MiscObjectCategory : std::uint8_t
{
	  BARRIER,               //barrier
	  BUILDING,               //building
	  CROSSWALK,               //crosswalk
	  GANTRY,               //gantry
	  NONE,               //none
	  OBSTACLE,               //obstacle
	  PARKINGSPACE,               //parkingSpace
	  PATCH,               //patch
	  POLE,               //pole
	  RAILING,               //railing
	  ROADMARK,               //roadMark
	  SOUNDBARRIER,               //soundBarrier
	  STREETLAMP,               //streetLamp
	  TRAFFICISLAND,               //trafficIsland
	  TREE,               //tree
	  VEGETATION,               //vegetation
	  WIND               //wind
};
enum class e_ObjectType : std::uint8_t
{
	  MISCELLANEOUS,               //miscellaneous
	  PEDESTRIAN,               //pedestrian
	  VEHICLE               //vehicle
};
enum class e_ParameterType : std::uint8_t
{
	  BOOLEAN,               //boolean
	  DATETIME,               //dateTime
	  DOUBLE,               //double
	  INTEGER,               //integer
	  STRING,               //string
	  UNSIGNEDINT,               //unsignedInt
	  UNSIGNEDSHORT               //unsignedShort
};
enum class e_PedestrianCategory : std::uint8_t
{
	  ANIMAL,               //animal
	  PEDESTRIAN,               //pedestrian
	  WHEELCHAIR               //wheelchair
};
enum class e_PrecipitationType : std::uint8_t
{
	  DRY,               //dry
	  RAIN,               //rain
	  SNOW               //snow
};
enum class e_Priority : std::uint8_t
{
	  OVERWRITE,               //overwrite
	  PARALLEL,               //parallel
	  SKIP               //skip
};
enum class e_ReferenceContext : std::uint8_t
{
	  ABSOLUTE,               //absolute
	  RELATIVE               //relative
};
enum class e_RelativeDistanceType : std::uint8_t
{
	  CARTESIANDISTANCE,               //cartesianDistance
	  LATERAL,               //lateral
	  LONGITUDINAL               //longitudinal
};
enum class e_RouteStrategy : std::uint8_t
{
	  FASTEST,               //fastest
	  LEASTINTERSECTIONS,               //leastIntersections
	  RANDOM,               //random
	  SHORTEST               //shortest
};
enum class e_Rule : std::uint8_t
{
	  EQUALTO,               //equalTo
	  GREATERTHAN,               //greaterThan
	  LESSTHAN               //lessThan
};
enum class e_SpeedTargetValueType : std::uint8_t
{
	  DELTA,               //delta
	  FACTOR               //factor
};
enum class e_StoryboardElementState : std::uint8_t
{
	  COMPLETESTATE,               //completeState
	  ENDTRANSITION,               //endTransition
	  RUNNINGSTATE,               //runningState
	  SKIPTRANSITION,               //skipTransition
	  STANDBYSTATE,               //standbyState
	  STARTTRANSITION,               //startTransition
	  STOPTRANSITION               //stopTransition
};
enum class e_StoryboardElementType : std::uint8_t
{
	  ACT,               //act
	  ACTION,               //action
	  EVENT,               //event
	  MANEUVER,               //maneuver
	  MANEUVERGROUP,               //maneuverGroup
	  STORY               //story
};
enum class e_TriggeringEntitiesRule : std::uint8_t
{
	  ALL,               //all
	  ANY               //any
};
enum class e_VehicleCategory : std::uint8_t
{
	  BICYCLE,               //bicycle
	  BUS,               //bus
	  CAR,               //car
	  MOTORBIKE,               //motorbike
	  SEMITRAILER,               //semitrailer
	  TRAILER,               //trailer
	  TRAIN,               //train
	  TRAM,               //tram
	  TRUCK,               //truck
	  VAN               //van
};
// Union Defintions
struct XOSC_EXPORT Boolean	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  bool  m_boolean;
public:
	Boolean(){};
    Boolean(pugi::xml_attribute attr);
	~Boolean(){};
};
struct XOSC_EXPORT DateTime	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  t_datetime  m_dateTime;
public:
	DateTime(){};
    DateTime(pugi::xml_attribute attr);
	~DateTime(){};
};
struct XOSC_EXPORT Double	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  double  m_double;
public:
	Double(){};
    Double(pugi::xml_attribute attr);
	~Double(){};
};
struct XOSC_EXPORT Int	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  int  m_int;
public:
	Int(){};
    Int(pugi::xml_attribute attr);
	~Int(){};
};
struct XOSC_EXPORT String	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  std::string  m_string;
public:
	String(){};
    String(pugi::xml_attribute attr);
	~String(){};
};
struct XOSC_EXPORT UnsignedInt	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  uint64_t  m_unsignedInt;
public:
	UnsignedInt(){};
    UnsignedInt(pugi::xml_attribute attr);
	~UnsignedInt(){};
};
struct XOSC_EXPORT UnsignedShort	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  uint64_t  m_unsignedShort;
public:
	UnsignedShort(){};
    UnsignedShort(pugi::xml_attribute attr);
	~UnsignedShort(){};
};
struct XOSC_EXPORT CloudState	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_CloudState  cloudState;
public:
	CloudState(){};
    CloudState(pugi::xml_attribute attr);
	~CloudState(){};
};
struct XOSC_EXPORT ConditionEdge	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_ConditionEdge  conditionEdge;
public:
	ConditionEdge(){};
    ConditionEdge(pugi::xml_attribute attr);
	~ConditionEdge(){};
};
struct XOSC_EXPORT DynamicsDimension	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_DynamicsDimension  dynamicsDimension;
public:
	DynamicsDimension(){};
    DynamicsDimension(pugi::xml_attribute attr);
	~DynamicsDimension(){};
};
struct XOSC_EXPORT DynamicsShape	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_DynamicsShape  dynamicsShape;
public:
	DynamicsShape(){};
    DynamicsShape(pugi::xml_attribute attr);
	~DynamicsShape(){};
};
struct XOSC_EXPORT FollowingMode	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_FollowingMode  followingMode;
public:
	FollowingMode(){};
    FollowingMode(pugi::xml_attribute attr);
	~FollowingMode(){};
};
struct XOSC_EXPORT MiscObjectCategory	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_MiscObjectCategory  miscObjectCategory;
public:
	MiscObjectCategory(){};
    MiscObjectCategory(pugi::xml_attribute attr);
	~MiscObjectCategory(){};
};
struct XOSC_EXPORT ObjectType	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_ObjectType  objectType;
public:
	ObjectType(){};
    ObjectType(pugi::xml_attribute attr);
	~ObjectType(){};
};
struct XOSC_EXPORT ParameterType	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_ParameterType  parameterType;
public:
	ParameterType(){};
    ParameterType(pugi::xml_attribute attr);
	~ParameterType(){};
};
struct XOSC_EXPORT PedestrianCategory	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_PedestrianCategory  pedestrianCategory;
public:
	PedestrianCategory(){};
    PedestrianCategory(pugi::xml_attribute attr);
	~PedestrianCategory(){};
};
struct XOSC_EXPORT PrecipitationType	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_PrecipitationType  precipitationType;
public:
	PrecipitationType(){};
    PrecipitationType(pugi::xml_attribute attr);
	~PrecipitationType(){};
};
struct XOSC_EXPORT Priority	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_Priority  priority;
public:
	Priority(){};
    Priority(pugi::xml_attribute attr);
	~Priority(){};
};
struct XOSC_EXPORT ReferenceContext	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_ReferenceContext  referenceContext;
public:
	ReferenceContext(){};
    ReferenceContext(pugi::xml_attribute attr);
	~ReferenceContext(){};
};
struct XOSC_EXPORT RelativeDistanceType	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_RelativeDistanceType  relativeDistanceType;
public:
	RelativeDistanceType(){};
    RelativeDistanceType(pugi::xml_attribute attr);
	~RelativeDistanceType(){};
};
struct XOSC_EXPORT RouteStrategy	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_RouteStrategy  routeStrategy;
public:
	RouteStrategy(){};
    RouteStrategy(pugi::xml_attribute attr);
	~RouteStrategy(){};
};
struct XOSC_EXPORT Rule	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_Rule  rule;
public:
	Rule(){};
    Rule(pugi::xml_attribute attr);
	~Rule(){};
};
struct XOSC_EXPORT SpeedTargetValueType	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_SpeedTargetValueType  speedTargetValueType;
public:
	SpeedTargetValueType(){};
    SpeedTargetValueType(pugi::xml_attribute attr);
	~SpeedTargetValueType(){};
};
struct XOSC_EXPORT StoryboardElementState	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_StoryboardElementState  storyboardElementState;
public:
	StoryboardElementState(){};
    StoryboardElementState(pugi::xml_attribute attr);
	~StoryboardElementState(){};
};
struct XOSC_EXPORT StoryboardElementType	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_StoryboardElementType  storyboardElementType;
public:
	StoryboardElementType(){};
    StoryboardElementType(pugi::xml_attribute attr);
	~StoryboardElementType(){};
};
struct XOSC_EXPORT TriggeringEntitiesRule	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_TriggeringEntitiesRule  triggeringEntitiesRule;
public:
	TriggeringEntitiesRule(){};
    TriggeringEntitiesRule(pugi::xml_attribute attr);
	~TriggeringEntitiesRule(){};
};
struct XOSC_EXPORT VehicleCategory	// TODO: >> Should be union - will have to handle properly
{
public:
	  parameter  m_parameter;
	  e_VehicleCategory  vehicleCategory;
public:
	VehicleCategory(){};
    VehicleCategory(pugi::xml_attribute attr);
	~VehicleCategory(){};
};
// Enumerations to String Value Maps
template<>
inline std::vector<std::pair<std::string, e_CloudState>>enum_map()
{
    return {
        { "cloudy", e_CloudState::CLOUDY } ,
        { "free", e_CloudState::FREE } ,
        { "overcast", e_CloudState::OVERCAST } ,
        { "rainy", e_CloudState::RAINY } ,
        { "skyOff", e_CloudState::SKYOFF }
    };
}
template<>
inline std::vector<std::pair<std::string, e_ConditionEdge>>enum_map()
{
    return {
        { "falling", e_ConditionEdge::FALLING } ,
        { "none", e_ConditionEdge::NONE } ,
        { "rising", e_ConditionEdge::RISING } ,
        { "risingOrFalling", e_ConditionEdge::RISINGORFALLING }
    };
}
template<>
inline std::vector<std::pair<std::string, e_DynamicsDimension>>enum_map()
{
    return {
        { "distance", e_DynamicsDimension::DISTANCE } ,
        { "rate", e_DynamicsDimension::RATE } ,
        { "time", e_DynamicsDimension::TIME }
    };
}
template<>
inline std::vector<std::pair<std::string, e_DynamicsShape>>enum_map()
{
    return {
        { "cubic", e_DynamicsShape::CUBIC } ,
        { "linear", e_DynamicsShape::LINEAR } ,
        { "sinusoidal", e_DynamicsShape::SINUSOIDAL } ,
        { "step", e_DynamicsShape::STEP }
    };
}
template<>
inline std::vector<std::pair<std::string, e_FollowingMode>>enum_map()
{
    return {
        { "follow", e_FollowingMode::FOLLOW } ,
        { "position", e_FollowingMode::POSITION }
    };
}
template<>
inline std::vector<std::pair<std::string, e_MiscObjectCategory>>enum_map()
{
    return {
        { "barrier", e_MiscObjectCategory::BARRIER } ,
        { "building", e_MiscObjectCategory::BUILDING } ,
        { "crosswalk", e_MiscObjectCategory::CROSSWALK } ,
        { "gantry", e_MiscObjectCategory::GANTRY } ,
        { "none", e_MiscObjectCategory::NONE } ,
        { "obstacle", e_MiscObjectCategory::OBSTACLE } ,
        { "parkingSpace", e_MiscObjectCategory::PARKINGSPACE } ,
        { "patch", e_MiscObjectCategory::PATCH } ,
        { "pole", e_MiscObjectCategory::POLE } ,
        { "railing", e_MiscObjectCategory::RAILING } ,
        { "roadMark", e_MiscObjectCategory::ROADMARK } ,
        { "soundBarrier", e_MiscObjectCategory::SOUNDBARRIER } ,
        { "streetLamp", e_MiscObjectCategory::STREETLAMP } ,
        { "trafficIsland", e_MiscObjectCategory::TRAFFICISLAND } ,
        { "tree", e_MiscObjectCategory::TREE } ,
        { "vegetation", e_MiscObjectCategory::VEGETATION } ,
        { "wind", e_MiscObjectCategory::WIND }
    };
}
template<>
inline std::vector<std::pair<std::string, e_ObjectType>>enum_map()
{
    return {
        { "miscellaneous", e_ObjectType::MISCELLANEOUS } ,
        { "pedestrian", e_ObjectType::PEDESTRIAN } ,
        { "vehicle", e_ObjectType::VEHICLE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_ParameterType>>enum_map()
{
    return {
        { "boolean", e_ParameterType::BOOLEAN } ,
        { "dateTime", e_ParameterType::DATETIME } ,
        { "double", e_ParameterType::DOUBLE } ,
        { "integer", e_ParameterType::INTEGER } ,
        { "string", e_ParameterType::STRING } ,
        { "unsignedInt", e_ParameterType::UNSIGNEDINT } ,
        { "unsignedShort", e_ParameterType::UNSIGNEDSHORT }
    };
}
template<>
inline std::vector<std::pair<std::string, e_PedestrianCategory>>enum_map()
{
    return {
        { "animal", e_PedestrianCategory::ANIMAL } ,
        { "pedestrian", e_PedestrianCategory::PEDESTRIAN } ,
        { "wheelchair", e_PedestrianCategory::WHEELCHAIR }
    };
}
template<>
inline std::vector<std::pair<std::string, e_PrecipitationType>>enum_map()
{
    return {
        { "dry", e_PrecipitationType::DRY } ,
        { "rain", e_PrecipitationType::RAIN } ,
        { "snow", e_PrecipitationType::SNOW }
    };
}
template<>
inline std::vector<std::pair<std::string, e_Priority>>enum_map()
{
    return {
        { "overwrite", e_Priority::OVERWRITE } ,
        { "parallel", e_Priority::PARALLEL } ,
        { "skip", e_Priority::SKIP }
    };
}
template<>
inline std::vector<std::pair<std::string, e_ReferenceContext>>enum_map()
{
    return {
        { "absolute", e_ReferenceContext::ABSOLUTE } ,
        { "relative", e_ReferenceContext::RELATIVE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_RelativeDistanceType>>enum_map()
{
    return {
        { "cartesianDistance", e_RelativeDistanceType::CARTESIANDISTANCE } ,
        { "lateral", e_RelativeDistanceType::LATERAL } ,
        { "longitudinal", e_RelativeDistanceType::LONGITUDINAL }
    };
}
template<>
inline std::vector<std::pair<std::string, e_RouteStrategy>>enum_map()
{
    return {
        { "fastest", e_RouteStrategy::FASTEST } ,
        { "leastIntersections", e_RouteStrategy::LEASTINTERSECTIONS } ,
        { "random", e_RouteStrategy::RANDOM } ,
        { "shortest", e_RouteStrategy::SHORTEST }
    };
}
template<>
inline std::vector<std::pair<std::string, e_Rule>>enum_map()
{
    return {
        { "equalTo", e_Rule::EQUALTO } ,
        { "greaterThan", e_Rule::GREATERTHAN } ,
        { "lessThan", e_Rule::LESSTHAN }
    };
}
template<>
inline std::vector<std::pair<std::string, e_SpeedTargetValueType>>enum_map()
{
    return {
        { "delta", e_SpeedTargetValueType::DELTA } ,
        { "factor", e_SpeedTargetValueType::FACTOR }
    };
}
template<>
inline std::vector<std::pair<std::string, e_StoryboardElementState>>enum_map()
{
    return {
        { "completeState", e_StoryboardElementState::COMPLETESTATE } ,
        { "endTransition", e_StoryboardElementState::ENDTRANSITION } ,
        { "runningState", e_StoryboardElementState::RUNNINGSTATE } ,
        { "skipTransition", e_StoryboardElementState::SKIPTRANSITION } ,
        { "standbyState", e_StoryboardElementState::STANDBYSTATE } ,
        { "startTransition", e_StoryboardElementState::STARTTRANSITION } ,
        { "stopTransition", e_StoryboardElementState::STOPTRANSITION }
    };
}
template<>
inline std::vector<std::pair<std::string, e_StoryboardElementType>>enum_map()
{
    return {
        { "act", e_StoryboardElementType::ACT } ,
        { "action", e_StoryboardElementType::ACTION } ,
        { "event", e_StoryboardElementType::EVENT } ,
        { "maneuver", e_StoryboardElementType::MANEUVER } ,
        { "maneuverGroup", e_StoryboardElementType::MANEUVERGROUP } ,
        { "story", e_StoryboardElementType::STORY }
    };
}
template<>
inline std::vector<std::pair<std::string, e_TriggeringEntitiesRule>>enum_map()
{
    return {
        { "all", e_TriggeringEntitiesRule::ALL } ,
        { "any", e_TriggeringEntitiesRule::ANY }
    };
}
template<>
inline std::vector<std::pair<std::string, e_VehicleCategory>>enum_map()
{
    return {
        { "bicycle", e_VehicleCategory::BICYCLE } ,
        { "bus", e_VehicleCategory::BUS } ,
        { "car", e_VehicleCategory::CAR } ,
        { "motorbike", e_VehicleCategory::MOTORBIKE } ,
        { "semitrailer", e_VehicleCategory::SEMITRAILER } ,
        { "trailer", e_VehicleCategory::TRAILER } ,
        { "train", e_VehicleCategory::TRAIN } ,
        { "tram", e_VehicleCategory::TRAM } ,
        { "truck", e_VehicleCategory::TRUCK } ,
        { "van", e_VehicleCategory::VAN }
    };
}
//Begin Forward Declarations
struct AbsoluteSpeed;
struct AbsoluteTargetLane;
struct AbsoluteTargetLaneOffset;
struct AbsoluteTargetSpeed;
struct AccelerationCondition;
struct AcquirePositionAction;
struct Act;
struct Action;
struct ActivateControllerAction;
struct Actors;
struct AddEntityAction;
struct AssignControllerAction;
struct AssignRouteAction;
struct Axle;
struct Axles;
struct BoundingBox;
struct ByEntityCondition;
struct ByObjectType;
struct ByType;
struct ByValueCondition;
struct Catalog;
struct CatalogLocations;
struct CatalogReference;
struct Center;
struct CentralSwarmObject;
struct Clothoid;
struct CollisionCondition;
struct Condition;
struct ConditionGroup;
struct Controller;
struct ControllerAction;
struct ControllerCatalogLocation;
struct ControllerDistribution;
struct ControllerDistributionEntry;
struct ControlPoint;
struct CustomCommandAction;
struct DeleteEntityAction;
struct Dimensions;
struct Directory;
struct DistanceCondition;
struct DynamicConstraints;
struct EndOfRoadCondition;
struct Entities;
struct EntityAction;
struct EntityCondition;
struct EntityRef;
struct EntitySelection;
struct Environment;
struct EnvironmentAction;
struct EnvironmentCatalogLocation;
struct Event;
struct File;
struct FileHeader;
struct FinalSpeed;
struct Fog;
struct FollowTrajectoryAction;
struct GlobalAction;
struct InfrastructureAction;
struct Init;
struct InitActions;
struct InRoutePosition;
struct Knot;
struct LaneChangeAction;
struct LaneChangeTarget;
struct LaneOffsetAction;
struct LaneOffsetActionDynamics;
struct LaneOffsetTarget;
struct LanePosition;
struct LateralAction;
struct LateralDistanceAction;
struct LongitudinalAction;
struct LongitudinalDistanceAction;
struct Maneuver;
struct ManeuverCatalogLocation;
struct ManeuverGroup;
struct MiscObject;
struct MiscObjectCatalogLocation;
struct ModifyRule;
struct None;
struct Nurbs;
struct ObjectController;
struct OffroadCondition;
struct OpenScenario;
struct Orientation;
struct OverrideBrakeAction;
struct OverrideClutchAction;
struct OverrideControllerValueAction;
struct OverrideGearAction;
struct OverrideParkingBrakeAction;
struct OverrideSteeringWheelAction;
struct OverrideThrottleAction;
struct ParameterAction;
struct ParameterAddValueRule;
struct ParameterAssignment;
struct ParameterAssignments;
struct ParameterCondition;
struct ParameterDeclaration;
struct ParameterDeclarations;
struct ParameterModifyAction;
struct ParameterMultiplyByValueRule;
struct ParameterSetAction;
struct Pedestrian;
struct PedestrianCatalogLocation;
struct Performance;
struct Phase;
struct Polyline;
struct Position;
struct PositionInLaneCoordinates;
struct PositionInRoadCoordinates;
struct PositionOfCurrentEntity;
struct Precipitation;
struct Private;
struct PrivateAction;
struct Properties;
struct Property;
struct ReachPositionCondition;
struct RelativeDistanceCondition;
struct RelativeLanePosition;
struct RelativeObjectPosition;
struct RelativeRoadPosition;
struct RelativeSpeedCondition;
struct RelativeSpeedToMaster;
struct RelativeTargetLane;
struct RelativeTargetLaneOffset;
struct RelativeTargetSpeed;
struct RelativeWorldPosition;
struct RoadCondition;
struct RoadNetwork;
struct RoadPosition;
struct Route;
struct RouteCatalogLocation;
struct RoutePosition;
struct RouteRef;
struct RoutingAction;
struct ScenarioObject;
struct SelectedEntities;
struct Shape;
struct SimulationTimeCondition;
struct SpeedAction;
struct SpeedActionTarget;
struct SpeedCondition;
struct StandStillCondition;
struct Story;
struct Storyboard;
struct StoryboardElementStateCondition;
struct Sun;
struct SynchronizeAction;
struct TeleportAction;
struct TimeHeadwayCondition;
struct TimeOfDay;
struct TimeOfDayCondition;
struct TimeReference;
struct TimeToCollisionCondition;
struct TimeToCollisionConditionTarget;
struct Timing;
struct TrafficAction;
struct TrafficDefinition;
struct TrafficSignalAction;
struct TrafficSignalCondition;
struct TrafficSignalController;
struct TrafficSignals;
struct TrafficSignalControllerAction;
struct TrafficSignalControllerCondition;
struct TrafficSignalState;
struct TrafficSignalStateAction;
struct TrafficSinkAction;
struct TrafficSourceAction;
struct TrafficSwarmAction;
struct Trajectory;
struct TrajectoryCatalogLocation;
struct TrajectoryFollowingMode;
struct TransitionDynamics;
struct TraveledDistanceCondition;
struct Trigger;
struct TriggeringEntities;
struct UserDefinedAction;
struct UserDefinedValueCondition;
struct Vehicle;
struct VehicleCatalogLocation;
struct VehicleCategoryDistribution;
struct VehicleCategoryDistributionEntry;
struct Vertex;
struct VisibilityAction;
struct Waypoint;
struct Weather;
struct WorldPosition;
// xs:group -> aliased to group definition
struct CatalogDefinition;
struct EntityObject;
struct OpenScenarioCategory;
struct ScenarioDefinition;
//End Forward Declarations
struct XOSC_EXPORT Action_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<GlobalAction>                 m_GlobalAction; //xs:element
    std::shared_ptr<UserDefinedAction>                 m_UserDefinedAction; //xs:element
    std::shared_ptr<PrivateAction>                 m_PrivateAction; //xs:element
public:
    Action_U(){};
    Action_U(pugi::xml_node node);
    ~Action_U(){};
};
struct XOSC_EXPORT AssignControllerAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<Controller>                 m_Controller; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    AssignControllerAction_U(){};
    AssignControllerAction_U(pugi::xml_node node);
    ~AssignControllerAction_U(){};
};
struct XOSC_EXPORT AssignRouteAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<Route>                 m_Route; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    AssignRouteAction_U(){};
    AssignRouteAction_U(pugi::xml_node node);
    ~AssignRouteAction_U(){};
};
struct XOSC_EXPORT ByValueCondition_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<ParameterCondition>                 m_ParameterCondition; //xs:element
    std::shared_ptr<TimeOfDayCondition>                 m_TimeOfDayCondition; //xs:element
    std::shared_ptr<SimulationTimeCondition>                 m_SimulationTimeCondition; //xs:element
    std::shared_ptr<StoryboardElementStateCondition>                 m_StoryboardElementStateCondition; //xs:element
    std::shared_ptr<UserDefinedValueCondition>                 m_UserDefinedValueCondition; //xs:element
    std::shared_ptr<TrafficSignalCondition>                 m_TrafficSignalCondition; //xs:element
    std::shared_ptr<TrafficSignalControllerCondition>                 m_TrafficSignalControllerCondition; //xs:element
public:
    ByValueCondition_U(){};
    ByValueCondition_U(pugi::xml_node node);
    ~ByValueCondition_U(){};
};
struct XOSC_EXPORT CollisionCondition_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<EntityRef>                 m_EntityRef; //xs:element
    std::shared_ptr<ByObjectType>                 m_ByType; //xs:element
public:
    CollisionCondition_U(){};
    CollisionCondition_U(pugi::xml_node node);
    ~CollisionCondition_U(){};
};
struct XOSC_EXPORT Condition_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<ByEntityCondition>                 m_ByEntityCondition; //xs:element
    std::shared_ptr<ByValueCondition>                 m_ByValueCondition; //xs:element
public:
    Condition_U(){};
    Condition_U(pugi::xml_node node);
    ~Condition_U(){};
};
struct XOSC_EXPORT ControllerDistributionEntry_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<Controller>                 m_Controller; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    ControllerDistributionEntry_U(){};
    ControllerDistributionEntry_U(pugi::xml_node node);
    ~ControllerDistributionEntry_U(){};
};
struct XOSC_EXPORT EntityAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<AddEntityAction>                 m_AddEntityAction; //xs:element
    std::shared_ptr<DeleteEntityAction>                 m_DeleteEntityAction; //xs:element
public:
    EntityAction_U(){};
    EntityAction_U(pugi::xml_node node);
    ~EntityAction_U(){};
};
struct XOSC_EXPORT EntityCondition_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<EndOfRoadCondition>                 m_EndOfRoadCondition; //xs:element
    std::shared_ptr<CollisionCondition>                 m_CollisionCondition; //xs:element
    std::shared_ptr<OffroadCondition>                 m_OffroadCondition; //xs:element
    std::shared_ptr<TimeHeadwayCondition>                 m_TimeHeadwayCondition; //xs:element
    std::shared_ptr<TimeToCollisionCondition>                 m_TimeToCollisionCondition; //xs:element
    std::shared_ptr<AccelerationCondition>                 m_AccelerationCondition; //xs:element
    std::shared_ptr<StandStillCondition>                 m_StandStillCondition; //xs:element
    std::shared_ptr<SpeedCondition>                 m_SpeedCondition; //xs:element
    std::shared_ptr<RelativeSpeedCondition>                 m_RelativeSpeedCondition; //xs:element
    std::shared_ptr<TraveledDistanceCondition>                 m_TraveledDistanceCondition; //xs:element
    std::shared_ptr<ReachPositionCondition>                 m_ReachPositionCondition; //xs:element
    std::shared_ptr<DistanceCondition>                 m_DistanceCondition; //xs:element
    std::shared_ptr<RelativeDistanceCondition>                 m_RelativeDistanceCondition; //xs:element
public:
    EntityCondition_U(){};
    EntityCondition_U(pugi::xml_node node);
    ~EntityCondition_U(){};
};
struct XOSC_EXPORT EnvironmentAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<Environment>                 m_Environment; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    EnvironmentAction_U(){};
    EnvironmentAction_U(pugi::xml_node node);
    ~EnvironmentAction_U(){};
};
struct XOSC_EXPORT FinalSpeed_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<AbsoluteSpeed>                 m_AbsoluteSpeed; //xs:element
    std::shared_ptr<RelativeSpeedToMaster>                 m_RelativeSpeedToMaster; //xs:element
public:
    FinalSpeed_U(){};
    FinalSpeed_U(pugi::xml_node node);
    ~FinalSpeed_U(){};
};
struct XOSC_EXPORT GlobalAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<EnvironmentAction>                 m_EnvironmentAction; //xs:element
    std::shared_ptr<EntityAction>                 m_EntityAction; //xs:element
    std::shared_ptr<ParameterAction>                 m_ParameterAction; //xs:element
    std::shared_ptr<InfrastructureAction>                 m_InfrastructureAction; //xs:element
    std::shared_ptr<TrafficAction>                 m_TrafficAction; //xs:element
public:
    GlobalAction_U(){};
    GlobalAction_U(pugi::xml_node node);
    ~GlobalAction_U(){};
};
struct XOSC_EXPORT InRoutePosition_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<PositionOfCurrentEntity>                 m_FromCurrentEntity; //xs:element
    std::shared_ptr<PositionInRoadCoordinates>                 m_FromRoadCoordinates; //xs:element
    std::shared_ptr<PositionInLaneCoordinates>                 m_FromLaneCoordinates; //xs:element
public:
    InRoutePosition_U(){};
    InRoutePosition_U(pugi::xml_node node);
    ~InRoutePosition_U(){};
};
struct XOSC_EXPORT LaneChangeTarget_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<RelativeTargetLane>                 m_RelativeTargetLane; //xs:element
    std::shared_ptr<AbsoluteTargetLane>                 m_AbsoluteTargetLane; //xs:element
public:
    LaneChangeTarget_U(){};
    LaneChangeTarget_U(pugi::xml_node node);
    ~LaneChangeTarget_U(){};
};
struct XOSC_EXPORT LaneOffsetTarget_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<RelativeTargetLaneOffset>                 m_RelativeTargetLaneOffset; //xs:element
    std::shared_ptr<AbsoluteTargetLaneOffset>                 m_AbsoluteTargetLaneOffset; //xs:element
public:
    LaneOffsetTarget_U(){};
    LaneOffsetTarget_U(pugi::xml_node node);
    ~LaneOffsetTarget_U(){};
};
struct XOSC_EXPORT LateralAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<LaneChangeAction>                 m_LaneChangeAction; //xs:element
    std::shared_ptr<LaneOffsetAction>                 m_LaneOffsetAction; //xs:element
    std::shared_ptr<LateralDistanceAction>                 m_LateralDistanceAction; //xs:element
public:
    LateralAction_U(){};
    LateralAction_U(pugi::xml_node node);
    ~LateralAction_U(){};
};
struct XOSC_EXPORT LongitudinalAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<SpeedAction>                 m_SpeedAction; //xs:element
    std::shared_ptr<LongitudinalDistanceAction>                 m_LongitudinalDistanceAction; //xs:element
public:
    LongitudinalAction_U(){};
    LongitudinalAction_U(pugi::xml_node node);
    ~LongitudinalAction_U(){};
};
struct XOSC_EXPORT ModifyRule_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<ParameterAddValueRule>                 m_AddValue; //xs:element
    std::shared_ptr<ParameterMultiplyByValueRule>                 m_MultiplyByValue; //xs:element
public:
    ModifyRule_U(){};
    ModifyRule_U(pugi::xml_node node);
    ~ModifyRule_U(){};
};
struct XOSC_EXPORT ObjectController_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
    std::shared_ptr<Controller>                 m_Controller; //xs:element
public:
    ObjectController_U(){};
    ObjectController_U(pugi::xml_node node);
    ~ObjectController_U(){};
};
struct XOSC_EXPORT ParameterAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<ParameterSetAction>                 m_SetAction; //xs:element
    std::shared_ptr<ParameterModifyAction>                 m_ModifyAction; //xs:element
public:
    ParameterAction_U(){};
    ParameterAction_U(pugi::xml_node node);
    ~ParameterAction_U(){};
};
struct XOSC_EXPORT Position_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<WorldPosition>                 m_WorldPosition; //xs:element
    std::shared_ptr<RelativeWorldPosition>                 m_RelativeWorldPosition; //xs:element
    std::shared_ptr<RelativeObjectPosition>                 m_RelativeObjectPosition; //xs:element
    std::shared_ptr<RoadPosition>                 m_RoadPosition; //xs:element
    std::shared_ptr<RelativeRoadPosition>                 m_RelativeRoadPosition; //xs:element
    std::shared_ptr<LanePosition>                 m_LanePosition; //xs:element
    std::shared_ptr<RelativeLanePosition>                 m_RelativeLanePosition; //xs:element
    std::shared_ptr<RoutePosition>                 m_RoutePosition; //xs:element
public:
    Position_U(){};
    Position_U(pugi::xml_node node);
    ~Position_U(){};
};
struct XOSC_EXPORT PrivateAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<LongitudinalAction>                 m_LongitudinalAction; //xs:element
    std::shared_ptr<LateralAction>                 m_LateralAction; //xs:element
    std::shared_ptr<VisibilityAction>                 m_VisibilityAction; //xs:element
    std::shared_ptr<SynchronizeAction>                 m_SynchronizeAction; //xs:element
    std::shared_ptr<ActivateControllerAction>                 m_ActivateControllerAction; //xs:element
    std::shared_ptr<ControllerAction>                 m_ControllerAction; //xs:element
    std::shared_ptr<TeleportAction>                 m_TeleportAction; //xs:element
    std::shared_ptr<RoutingAction>                 m_RoutingAction; //xs:element
public:
    PrivateAction_U(){};
    PrivateAction_U(pugi::xml_node node);
    ~PrivateAction_U(){};
};
struct XOSC_EXPORT RouteRef_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<Route>                 m_Route; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    RouteRef_U(){};
    RouteRef_U(pugi::xml_node node);
    ~RouteRef_U(){};
};
struct XOSC_EXPORT RoutingAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<AssignRouteAction>                 m_AssignRouteAction; //xs:element
    std::shared_ptr<FollowTrajectoryAction>                 m_FollowTrajectoryAction; //xs:element
    std::shared_ptr<AcquirePositionAction>                 m_AcquirePositionAction; //xs:element
public:
    RoutingAction_U(){};
    RoutingAction_U(pugi::xml_node node);
    ~RoutingAction_U(){};
};
struct XOSC_EXPORT SelectedEntities_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::vector<std::shared_ptr<EntityRef>>                 m_EntityRefs; //xs:element
    std::vector<std::shared_ptr<ByType>>                 m_ByTypes; //xs:element
public:
    SelectedEntities_U(){};
    SelectedEntities_U(pugi::xml_node node);
    ~SelectedEntities_U(){};
};
struct XOSC_EXPORT Shape_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<Polyline>                 m_Polyline; //xs:element
    std::shared_ptr<Clothoid>                 m_Clothoid; //xs:element
    std::shared_ptr<Nurbs>                 m_Nurbs; //xs:element
public:
    Shape_U(){};
    Shape_U(pugi::xml_node node);
    ~Shape_U(){};
};
struct XOSC_EXPORT SpeedActionTarget_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<RelativeTargetSpeed>                 m_RelativeTargetSpeed; //xs:element
    std::shared_ptr<AbsoluteTargetSpeed>                 m_AbsoluteTargetSpeed; //xs:element
public:
    SpeedActionTarget_U(){};
    SpeedActionTarget_U(pugi::xml_node node);
    ~SpeedActionTarget_U(){};
};
struct XOSC_EXPORT TimeReference_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<None>                 m_None; //xs:element
    std::shared_ptr<Timing>                 m_Timing; //xs:element
public:
    TimeReference_U(){};
    TimeReference_U(pugi::xml_node node);
    ~TimeReference_U(){};
};
struct XOSC_EXPORT TimeToCollisionConditionTarget_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<Position>                 m_Position; //xs:element
    std::shared_ptr<EntityRef>                 m_EntityRef; //xs:element
public:
    TimeToCollisionConditionTarget_U(){};
    TimeToCollisionConditionTarget_U(pugi::xml_node node);
    ~TimeToCollisionConditionTarget_U(){};
};
struct XOSC_EXPORT TrafficAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<TrafficSourceAction>                 m_TrafficSourceAction; //xs:element
    std::shared_ptr<TrafficSinkAction>                 m_TrafficSinkAction; //xs:element
    std::shared_ptr<TrafficSwarmAction>                 m_TrafficSwarmAction; //xs:element
public:
    TrafficAction_U(){};
    TrafficAction_U(pugi::xml_node node);
    ~TrafficAction_U(){};
};
struct XOSC_EXPORT TrafficSignalAction_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<TrafficSignalControllerAction>                 m_TrafficSignalControllerAction; //xs:element
    std::shared_ptr<TrafficSignalStateAction>                 m_TrafficSignalStateAction; //xs:element
public:
    TrafficSignalAction_U(){};
    TrafficSignalAction_U(pugi::xml_node node);
    ~TrafficSignalAction_U(){};
};
struct XOSC_EXPORT AbsoluteSpeed
{
/**/
public:
	AbsoluteSpeed(){};
	AbsoluteSpeed(pugi::xml_node node);
	virtual ~AbsoluteSpeed(){};
public:
	//
	Double	    value; //  required
};
struct XOSC_EXPORT AbsoluteTargetLane
{
/**/
public:
	AbsoluteTargetLane(){};
	AbsoluteTargetLane(pugi::xml_node node);
	virtual ~AbsoluteTargetLane(){};
public:
	//
	String	    value; //  required
};
struct XOSC_EXPORT AbsoluteTargetLaneOffset
{
/**/
public:
	AbsoluteTargetLaneOffset(){};
	AbsoluteTargetLaneOffset(pugi::xml_node node);
	virtual ~AbsoluteTargetLaneOffset(){};
public:
	//
	Double	    value; //  required
};
struct XOSC_EXPORT AbsoluteTargetSpeed
{
/**/
public:
	AbsoluteTargetSpeed(){};
	AbsoluteTargetSpeed(pugi::xml_node node);
	virtual ~AbsoluteTargetSpeed(){};
public:
	//
	Double	    value; //  required
};
struct XOSC_EXPORT AccelerationCondition
{
/**/
public:
	AccelerationCondition(){};
	AccelerationCondition(pugi::xml_node node);
	virtual ~AccelerationCondition(){};
public:
	//
	Rule	    rule; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT AcquirePositionAction
{
/**/
public:
	AcquirePositionAction(){};
	AcquirePositionAction(pugi::xml_node node);
	virtual ~AcquirePositionAction(){};
public:
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT Act
{
/**/
public:
	Act(){};
	Act(pugi::xml_node node);
	virtual ~Act(){};
public:
	//
	String	    name; //  required
    std::vector<std::shared_ptr<ManeuverGroup>>                 m_ManeuverGroups; //xs:element
    std::shared_ptr<Trigger>                 m_StartTrigger; //xs:element
    std::shared_ptr<Trigger>                 m_StopTrigger; //xs:element
};
struct XOSC_EXPORT Action
{
/**/
public:
	Action(){};
	Action(pugi::xml_node node);
	virtual ~Action(){};
public:
	//
	String	    name; //  required
    std::shared_ptr<Action_U>                 m_Action; //xs:element
};
struct XOSC_EXPORT ActivateControllerAction
{
/**/
public:
	ActivateControllerAction(){};
	ActivateControllerAction(pugi::xml_node node);
	virtual ~ActivateControllerAction(){};
public:
	//
	Boolean	    lateral; //
	//
	Boolean	    longitudinal; //
};
struct XOSC_EXPORT Actors
{
/**/
public:
	Actors(){};
	Actors(pugi::xml_node node);
	virtual ~Actors(){};
public:
	//
	Boolean	    selectTriggeringEntities; //  required
    std::vector<std::shared_ptr<EntityRef>>                 m_EntityRefs; //xs:element
};
struct XOSC_EXPORT AddEntityAction
{
/**/
public:
	AddEntityAction(){};
	AddEntityAction(pugi::xml_node node);
	virtual ~AddEntityAction(){};
public:
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT AssignControllerAction
{
/**/
public:
	AssignControllerAction(){};
	AssignControllerAction(pugi::xml_node node);
	virtual ~AssignControllerAction(){};
public:
    std::shared_ptr<AssignControllerAction_U>                 m_AssignControllerAction; //xs:element
};
struct XOSC_EXPORT AssignRouteAction
{
/**/
public:
	AssignRouteAction(){};
	AssignRouteAction(pugi::xml_node node);
	virtual ~AssignRouteAction(){};
public:
    std::shared_ptr<AssignRouteAction_U>                 m_AssignRouteAction; //xs:element
};
struct XOSC_EXPORT Axle
{
/**/
public:
	Axle(){};
	Axle(pugi::xml_node node);
	virtual ~Axle(){};
public:
	//
	Double	    maxSteering; //  required
	//
	Double	    positionX; //  required
	//
	Double	    positionZ; //  required
	//
	Double	    trackWidth; //  required
	//
	Double	    wheelDiameter; //  required
};
struct XOSC_EXPORT Axles
{
/**/
public:
	Axles(){};
	Axles(pugi::xml_node node);
	virtual ~Axles(){};
public:
    std::shared_ptr<Axle>                 m_FrontAxle; //xs:element
    std::shared_ptr<Axle>                 m_RearAxle; //xs:element
    std::vector<std::shared_ptr<Axle>>                 m_AdditionalAxles; //xs:element
};
struct XOSC_EXPORT BoundingBox
{
/**/
public:
	BoundingBox(){};
	BoundingBox(pugi::xml_node node);
	virtual ~BoundingBox(){};
public:
    std::shared_ptr<Center>                 m_Center; //xs:element
    std::shared_ptr<Dimensions>                 m_Dimensions; //xs:element
};
struct XOSC_EXPORT ByEntityCondition
{
/**/
public:
	ByEntityCondition(){};
	ByEntityCondition(pugi::xml_node node);
	virtual ~ByEntityCondition(){};
public:
    std::shared_ptr<TriggeringEntities>                 m_TriggeringEntities; //xs:element
    std::shared_ptr<EntityCondition>                 m_EntityCondition; //xs:element
};
struct XOSC_EXPORT ByObjectType
{
/**/
public:
	ByObjectType(){};
	ByObjectType(pugi::xml_node node);
	virtual ~ByObjectType(){};
public:
	//
	ObjectType	    type; //  required
};
struct XOSC_EXPORT ByType
{
/**/
public:
	ByType(){};
	ByType(pugi::xml_node node);
	virtual ~ByType(){};
public:
	//
	ObjectType	    objectType; //  required
};
struct XOSC_EXPORT ByValueCondition
{
/**/
public:
	ByValueCondition(){};
	ByValueCondition(pugi::xml_node node);
	virtual ~ByValueCondition(){};
public:
    std::shared_ptr<ByValueCondition_U>                 m_ByValueCondition; //xs:element
};
struct XOSC_EXPORT Catalog
{
/**/
public:
	Catalog(){};
	Catalog(pugi::xml_node node);
	virtual ~Catalog(){};
public:
	//
	String	    name; //
    std::vector<std::shared_ptr<Vehicle>>                 m_Vehicles; //xs:element
    std::vector<std::shared_ptr<Controller>>                 m_Controllers; //xs:element
    std::vector<std::shared_ptr<Pedestrian>>                 m_Pedestrians; //xs:element
    std::vector<std::shared_ptr<MiscObject>>                 m_MiscObjects; //xs:element
    std::vector<std::shared_ptr<Environment>>                 m_Environments; //xs:element
    std::vector<std::shared_ptr<Maneuver>>                 m_Maneuvers; //xs:element
    std::vector<std::shared_ptr<Trajectory>>                 m_Trajectorys; //xs:element
    std::vector<std::shared_ptr<Route>>                 m_Routes; //xs:element
};
struct XOSC_EXPORT CatalogLocations
{
/**/
public:
	CatalogLocations(){};
	CatalogLocations(pugi::xml_node node);
	virtual ~CatalogLocations(){};
public:
    std::shared_ptr<VehicleCatalogLocation>                 m_VehicleCatalog; //xs:element
    std::shared_ptr<ControllerCatalogLocation>                 m_ControllerCatalog; //xs:element
    std::shared_ptr<PedestrianCatalogLocation>                 m_PedestrianCatalog; //xs:element
    std::shared_ptr<MiscObjectCatalogLocation>                 m_MiscObjectCatalog; //xs:element
    std::shared_ptr<EnvironmentCatalogLocation>                 m_EnvironmentCatalog; //xs:element
    std::shared_ptr<ManeuverCatalogLocation>                 m_ManeuverCatalog; //xs:element
    std::shared_ptr<TrajectoryCatalogLocation>                 m_TrajectoryCatalog; //xs:element
    std::shared_ptr<RouteCatalogLocation>                 m_RouteCatalog; //xs:element
};
struct XOSC_EXPORT CatalogReference
{
/**/
public:
	CatalogReference(){};
	CatalogReference(pugi::xml_node node);
	virtual ~CatalogReference(){};
public:
	//
	String	    catalogName; //  required
	//
	String	    entryName; //  required
    std::shared_ptr<ParameterAssignments>                 m_ParameterAssignments; //xs:element
};
struct XOSC_EXPORT Center
{
/**/
public:
	Center(){};
	Center(pugi::xml_node node);
	virtual ~Center(){};
public:
	//
	Double	    x; //  required
	//
	Double	    y; //  required
	//
	Double	    z; //  required
};
struct XOSC_EXPORT CentralSwarmObject
{
/**/
public:
	CentralSwarmObject(){};
	CentralSwarmObject(pugi::xml_node node);
	virtual ~CentralSwarmObject(){};
public:
	//
	String	    entityRef; //  required
};
struct XOSC_EXPORT Clothoid
{
/**/
public:
	Clothoid(){};
	Clothoid(pugi::xml_node node);
	virtual ~Clothoid(){};
public:
	//
	Double	    curvature; //  required
	//
	Double	    curvatureDot; //  required
	//
	Double	    length; //  required
	//
	Double	    startTime; //
	//
	Double	    stopTime; //
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT CollisionCondition
{
/**/
public:
	CollisionCondition(){};
	CollisionCondition(pugi::xml_node node);
	virtual ~CollisionCondition(){};
public:
    std::shared_ptr<CollisionCondition_U>                 m_CollisionCondition; //xs:element
};
struct XOSC_EXPORT Condition
{
/**/
public:
	Condition(){};
	Condition(pugi::xml_node node);
	virtual ~Condition(){};
public:
	//
	ConditionEdge	    conditionEdge; //  required
	//
	Double	    delay; //  required
	//
	String	    name; //  required
    std::shared_ptr<Condition_U>                 m_Condition; //xs:element
};
struct XOSC_EXPORT ConditionGroup
{
/**/
public:
	ConditionGroup(){};
	ConditionGroup(pugi::xml_node node);
	virtual ~ConditionGroup(){};
public:
    std::vector<std::shared_ptr<Condition>>                 m_Conditions; //xs:element
};
struct XOSC_EXPORT Controller
{
/**/
public:
	Controller(){};
	Controller(pugi::xml_node node);
	virtual ~Controller(){};
public:
	//
	String	    name; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct XOSC_EXPORT ControllerAction
{
/**/
public:
	ControllerAction(){};
	ControllerAction(pugi::xml_node node);
	virtual ~ControllerAction(){};
public:
    std::shared_ptr<AssignControllerAction>                 m_AssignControllerAction; //xs:element
    std::shared_ptr<OverrideControllerValueAction>                 m_OverrideControllerValueAction; //xs:element
};
struct XOSC_EXPORT ControllerCatalogLocation
{
/**/
public:
	ControllerCatalogLocation(){};
	ControllerCatalogLocation(pugi::xml_node node);
	virtual ~ControllerCatalogLocation(){};
public:
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct XOSC_EXPORT ControllerDistribution
{
/**/
public:
	ControllerDistribution(){};
	ControllerDistribution(pugi::xml_node node);
	virtual ~ControllerDistribution(){};
public:
    std::vector<std::shared_ptr<ControllerDistributionEntry>>                 m_ControllerDistributionEntrys; //xs:element
};
struct XOSC_EXPORT ControllerDistributionEntry
{
/**/
public:
	ControllerDistributionEntry(){};
	ControllerDistributionEntry(pugi::xml_node node);
	virtual ~ControllerDistributionEntry(){};
public:
	//
	Double	    weight; //  required
    std::shared_ptr<ControllerDistributionEntry_U>                 m_ControllerDistributionEntry; //xs:element
};
struct XOSC_EXPORT ControlPoint
{
/**/
public:
	ControlPoint(){};
	ControlPoint(pugi::xml_node node);
	virtual ~ControlPoint(){};
public:
	//
	Double	    time; //
	//
	Double	    weight; //
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT CustomCommandAction
{
/**/
public:
	CustomCommandAction(){};
	CustomCommandAction(pugi::xml_node node);
	virtual ~CustomCommandAction(){};
public:
	//
	String	    type; //  required
};
struct XOSC_EXPORT DeleteEntityAction
{
/**/
public:
	DeleteEntityAction(){};
	DeleteEntityAction(pugi::xml_node node);
	virtual ~DeleteEntityAction(){};
public:
};
struct XOSC_EXPORT Dimensions
{
/**/
public:
	Dimensions(){};
	Dimensions(pugi::xml_node node);
	virtual ~Dimensions(){};
public:
	//
	Double	    height; //  required
	//
	Double	    length; //  required
	//
	Double	    width; //  required
};
struct XOSC_EXPORT Directory
{
/**/
public:
	Directory(){};
	Directory(pugi::xml_node node);
	virtual ~Directory(){};
public:
	//
	String	    path; //  required
};
struct XOSC_EXPORT DistanceCondition
{
/**/
public:
	DistanceCondition(){};
	DistanceCondition(pugi::xml_node node);
	virtual ~DistanceCondition(){};
public:
	//
	Boolean	    alongRoute; //  required
	//
	Boolean	    freespace; //  required
	//
	Rule	    rule; //  required
	//
	Double	    value; //  required
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT DynamicConstraints
{
/**/
public:
	DynamicConstraints(){};
	DynamicConstraints(pugi::xml_node node);
	virtual ~DynamicConstraints(){};
public:
	//
	Double	    maxAcceleration; //
	//
	Double	    maxDeceleration; //
	//
	Double	    maxSpeed; //
};
struct XOSC_EXPORT EndOfRoadCondition
{
/**/
public:
	EndOfRoadCondition(){};
	EndOfRoadCondition(pugi::xml_node node);
	virtual ~EndOfRoadCondition(){};
public:
	//
	Double	    duration; //  required
};
struct XOSC_EXPORT Entities
{
/**/
public:
	Entities(){};
	Entities(pugi::xml_node node);
	virtual ~Entities(){};
public:
    std::vector<std::shared_ptr<ScenarioObject>>                 m_ScenarioObjects; //xs:element
    std::vector<std::shared_ptr<EntitySelection>>                 m_EntitySelections; //xs:element
};
struct XOSC_EXPORT EntityAction
{
/**/
public:
	EntityAction(){};
	EntityAction(pugi::xml_node node);
	virtual ~EntityAction(){};
public:
	//
	String	    entityRef; //  required
    std::shared_ptr<EntityAction_U>                 m_EntityAction; //xs:element
};
struct XOSC_EXPORT EntityCondition
{
/**/
public:
	EntityCondition(){};
	EntityCondition(pugi::xml_node node);
	virtual ~EntityCondition(){};
public:
    std::shared_ptr<EntityCondition_U>                 m_EntityCondition; //xs:element
};
struct XOSC_EXPORT EntityRef
{
/**/
public:
	EntityRef(){};
	EntityRef(pugi::xml_node node);
	virtual ~EntityRef(){};
public:
	//
	String	    entityRef; //  required
};
struct XOSC_EXPORT EntitySelection
{
/**/
public:
	EntitySelection(){};
	EntitySelection(pugi::xml_node node);
	virtual ~EntitySelection(){};
public:
	//
	String	    name; //  required
    std::shared_ptr<SelectedEntities>                 m_Members; //xs:element
};
struct XOSC_EXPORT Environment
{
/**/
public:
	Environment(){};
	Environment(pugi::xml_node node);
	virtual ~Environment(){};
public:
	//
	String	    name; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<TimeOfDay>                 m_TimeOfDay; //xs:element
    std::shared_ptr<Weather>                 m_Weather; //xs:element
    std::shared_ptr<RoadCondition>                 m_RoadCondition; //xs:element
};
struct XOSC_EXPORT EnvironmentAction
{
/**/
public:
	EnvironmentAction(){};
	EnvironmentAction(pugi::xml_node node);
	virtual ~EnvironmentAction(){};
public:
    std::shared_ptr<EnvironmentAction_U>                 m_EnvironmentAction; //xs:element
};
struct XOSC_EXPORT EnvironmentCatalogLocation
{
/**/
public:
	EnvironmentCatalogLocation(){};
	EnvironmentCatalogLocation(pugi::xml_node node);
	virtual ~EnvironmentCatalogLocation(){};
public:
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct XOSC_EXPORT Event
{
/**/
public:
	Event(){};
	Event(pugi::xml_node node);
	virtual ~Event(){};
public:
	//
	UnsignedInt	    maximumExecutionCount; //
	//
	String	    name; //  required
	//
	Priority	    priority; //  required
    std::vector<std::shared_ptr<Action>>                 m_Actions; //xs:element
    std::shared_ptr<Trigger>                 m_StartTrigger; //xs:element
};
struct XOSC_EXPORT File
{
/**/
public:
	File(){};
	File(pugi::xml_node node);
	virtual ~File(){};
public:
	//
	String	    filepath; //  required
};
struct XOSC_EXPORT FileHeader
{
/**/
public:
	FileHeader(){};
	FileHeader(pugi::xml_node node);
	virtual ~FileHeader(){};
public:
	//
	String	    author; //  required
	//
	DateTime	    date; //  required
	//
	String	    description; //  required
	//
	UnsignedShort	    revMajor; //  required
	//
	UnsignedShort	    revMinor; //  required
};
struct XOSC_EXPORT FinalSpeed
{
/**/
public:
	FinalSpeed(){};
	FinalSpeed(pugi::xml_node node);
	virtual ~FinalSpeed(){};
public:
    std::shared_ptr<FinalSpeed_U>                 m_FinalSpeed; //xs:element
};
struct XOSC_EXPORT Fog
{
/**/
public:
	Fog(){};
	Fog(pugi::xml_node node);
	virtual ~Fog(){};
public:
	//
	Double	    visualRange; //  required
    std::shared_ptr<BoundingBox>                 m_BoundingBox; //xs:element
};
struct XOSC_EXPORT FollowTrajectoryAction
{
/**/
public:
	FollowTrajectoryAction(){};
	FollowTrajectoryAction(pugi::xml_node node);
	virtual ~FollowTrajectoryAction(){};
public:
    std::shared_ptr<Trajectory>                 m_Trajectory; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
    std::shared_ptr<TimeReference>                 m_TimeReference; //xs:element
    std::shared_ptr<TrajectoryFollowingMode>                 m_TrajectoryFollowingMode; //xs:element
};
struct XOSC_EXPORT GlobalAction
{
/**/
public:
	GlobalAction(){};
	GlobalAction(pugi::xml_node node);
	virtual ~GlobalAction(){};
public:
    std::shared_ptr<GlobalAction_U>                 m_GlobalAction; //xs:element
};
struct XOSC_EXPORT InfrastructureAction
{
/**/
public:
	InfrastructureAction(){};
	InfrastructureAction(pugi::xml_node node);
	virtual ~InfrastructureAction(){};
public:
    std::shared_ptr<TrafficSignalAction>                 m_TrafficSignalAction; //xs:element
};
struct XOSC_EXPORT Init
{
/**/
public:
	Init(){};
	Init(pugi::xml_node node);
	virtual ~Init(){};
public:
    std::shared_ptr<InitActions>                 m_Actions; //xs:element
};
struct XOSC_EXPORT InitActions
{
/**/
public:
	InitActions(){};
	InitActions(pugi::xml_node node);
	virtual ~InitActions(){};
public:
    std::vector<std::shared_ptr<GlobalAction>>                 m_GlobalActions; //xs:element
    std::vector<std::shared_ptr<UserDefinedAction>>                 m_UserDefinedActions; //xs:element
    std::vector<std::shared_ptr<Private>>                 m_Privates; //xs:element
};
struct XOSC_EXPORT InRoutePosition
{
/**/
public:
	InRoutePosition(){};
	InRoutePosition(pugi::xml_node node);
	virtual ~InRoutePosition(){};
public:
    std::shared_ptr<InRoutePosition_U>                 m_InRoutePosition; //xs:element
};
struct XOSC_EXPORT Knot
{
/**/
public:
	Knot(){};
	Knot(pugi::xml_node node);
	virtual ~Knot(){};
public:
	//
	Double	    value; //  required
};
struct XOSC_EXPORT LaneChangeAction
{
/**/
public:
	LaneChangeAction(){};
	LaneChangeAction(pugi::xml_node node);
	virtual ~LaneChangeAction(){};
public:
	//
	Double	    targetLaneOffset; //
    std::shared_ptr<TransitionDynamics>                 m_LaneChangeActionDynamics; //xs:element
    std::shared_ptr<LaneChangeTarget>                 m_LaneChangeTarget; //xs:element
};
struct XOSC_EXPORT LaneChangeTarget
{
/**/
public:
	LaneChangeTarget(){};
	LaneChangeTarget(pugi::xml_node node);
	virtual ~LaneChangeTarget(){};
public:
    std::shared_ptr<LaneChangeTarget_U>                 m_LaneChangeTarget; //xs:element
};
struct XOSC_EXPORT LaneOffsetAction
{
/**/
public:
	LaneOffsetAction(){};
	LaneOffsetAction(pugi::xml_node node);
	virtual ~LaneOffsetAction(){};
public:
	//
	Boolean	    continuous; //  required
    std::shared_ptr<LaneOffsetActionDynamics>                 m_LaneOffsetActionDynamics; //xs:element
    std::shared_ptr<LaneOffsetTarget>                 m_LaneOffsetTarget; //xs:element
};
struct XOSC_EXPORT LaneOffsetActionDynamics
{
/**/
public:
	LaneOffsetActionDynamics(){};
	LaneOffsetActionDynamics(pugi::xml_node node);
	virtual ~LaneOffsetActionDynamics(){};
public:
	//
	DynamicsShape	    dynamicsShape; //  required
	//
	Double	    maxLateralAcc; //
};
struct XOSC_EXPORT LaneOffsetTarget
{
/**/
public:
	LaneOffsetTarget(){};
	LaneOffsetTarget(pugi::xml_node node);
	virtual ~LaneOffsetTarget(){};
public:
    std::shared_ptr<LaneOffsetTarget_U>                 m_LaneOffsetTarget; //xs:element
};
struct XOSC_EXPORT LanePosition
{
/**/
public:
	LanePosition(){};
	LanePosition(pugi::xml_node node);
	virtual ~LanePosition(){};
public:
	//
	String	    laneId; //  required
	//
	Double	    offset; //
	//
	String	    roadId; //  required
	//
	Double	    s; //  required
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
};
struct XOSC_EXPORT LateralAction
{
/**/
public:
	LateralAction(){};
	LateralAction(pugi::xml_node node);
	virtual ~LateralAction(){};
public:
    std::shared_ptr<LateralAction_U>                 m_LateralAction; //xs:element
};
struct XOSC_EXPORT LateralDistanceAction
{
/**/
public:
	LateralDistanceAction(){};
	LateralDistanceAction(pugi::xml_node node);
	virtual ~LateralDistanceAction(){};
public:
	//
	String	    entityRef; //  required
	//
	Boolean	    continuous; //  required
	//
	Double	    distance; //
	//
	Boolean	    freespace; //  required
    std::shared_ptr<DynamicConstraints>                 m_DynamicConstraints; //xs:element
};
struct XOSC_EXPORT LongitudinalAction
{
/**/
public:
	LongitudinalAction(){};
	LongitudinalAction(pugi::xml_node node);
	virtual ~LongitudinalAction(){};
public:
    std::shared_ptr<LongitudinalAction_U>                 m_LongitudinalAction; //xs:element
};
struct XOSC_EXPORT LongitudinalDistanceAction
{
/**/
public:
	LongitudinalDistanceAction(){};
	LongitudinalDistanceAction(pugi::xml_node node);
	virtual ~LongitudinalDistanceAction(){};
public:
	//
	String	    entityRef; //  required
	//
	Boolean	    continuous; //  required
	//
	Double	    distance; //
	//
	Boolean	    freespace; //  required
	//
	Double	    timeGap; //
    std::shared_ptr<DynamicConstraints>                 m_DynamicConstraints; //xs:element
};
struct XOSC_EXPORT Maneuver
{
/**/
public:
	Maneuver(){};
	Maneuver(pugi::xml_node node);
	virtual ~Maneuver(){};
public:
	//
	String	    name; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::vector<std::shared_ptr<Event>>                 m_Events; //xs:element
};
struct XOSC_EXPORT ManeuverCatalogLocation
{
/**/
public:
	ManeuverCatalogLocation(){};
	ManeuverCatalogLocation(pugi::xml_node node);
	virtual ~ManeuverCatalogLocation(){};
public:
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct XOSC_EXPORT ManeuverGroup
{
/**/
public:
	ManeuverGroup(){};
	ManeuverGroup(pugi::xml_node node);
	virtual ~ManeuverGroup(){};
public:
	//
	UnsignedInt	    maximumExecutionCount; //  required
	//
	String	    name; //  required
    std::shared_ptr<Actors>                 m_Actors; //xs:element
    std::vector<std::shared_ptr<CatalogReference>>                 m_CatalogReferences; //xs:element
    std::vector<std::shared_ptr<Maneuver>>                 m_Maneuvers; //xs:element
};
struct XOSC_EXPORT MiscObject
{
/**/
public:
	MiscObject(){};
	MiscObject(pugi::xml_node node);
	virtual ~MiscObject(){};
public:
	//
	Double	    mass; //  required
	//
	MiscObjectCategory	    miscObjectCategory; //  required
	//
	String	    name; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<BoundingBox>                 m_BoundingBox; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct XOSC_EXPORT MiscObjectCatalogLocation
{
/**/
public:
	MiscObjectCatalogLocation(){};
	MiscObjectCatalogLocation(pugi::xml_node node);
	virtual ~MiscObjectCatalogLocation(){};
public:
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct XOSC_EXPORT ModifyRule
{
/**/
public:
	ModifyRule(){};
	ModifyRule(pugi::xml_node node);
	virtual ~ModifyRule(){};
public:
    std::shared_ptr<ModifyRule_U>                 m_ModifyRule; //xs:element
};
struct XOSC_EXPORT None
{
/**/
public:
	None(){};
	None(pugi::xml_node node);
	virtual ~None(){};
public:
};
struct XOSC_EXPORT Nurbs
{
/**/
public:
	Nurbs(){};
	Nurbs(pugi::xml_node node);
	virtual ~Nurbs(){};
public:
	//
	UnsignedInt	    order; //  required
    std::vector<std::shared_ptr<ControlPoint>>                 m_ControlPoints; //xs:element
    std::vector<std::shared_ptr<Knot>>                 m_Knots; //xs:element
};
struct XOSC_EXPORT ObjectController
{
/**/
public:
	ObjectController(){};
	ObjectController(pugi::xml_node node);
	virtual ~ObjectController(){};
public:
    std::shared_ptr<ObjectController_U>                 m_ObjectController; //xs:element
};
struct XOSC_EXPORT OffroadCondition
{
/**/
public:
	OffroadCondition(){};
	OffroadCondition(pugi::xml_node node);
	virtual ~OffroadCondition(){};
public:
	//
	Double	    duration; //  required
};
struct XOSC_EXPORT OpenScenario
{
/**/
public:
	OpenScenario(){};
	OpenScenario(pugi::xml_node node);
	virtual ~OpenScenario(){};
public:
    std::shared_ptr<FileHeader>                 m_FileHeader; //xs:element
    std::shared_ptr<OpenScenarioCategory>                 m_OpenScenarioCategory; //xs:groupent
};
struct XOSC_EXPORT Orientation
{
/**/
public:
	Orientation(){};
	Orientation(pugi::xml_node node);
	virtual ~Orientation(){};
public:
	//
	Double	    h; //
	//
	Double	    p; //
	//
	Double	    r; //
	//
	ReferenceContext	    type; //
};
struct XOSC_EXPORT OverrideBrakeAction
{
/**/
public:
	OverrideBrakeAction(){};
	OverrideBrakeAction(pugi::xml_node node);
	virtual ~OverrideBrakeAction(){};
public:
	//
	Boolean	    active; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT OverrideClutchAction
{
/**/
public:
	OverrideClutchAction(){};
	OverrideClutchAction(pugi::xml_node node);
	virtual ~OverrideClutchAction(){};
public:
	//
	Boolean	    active; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT OverrideControllerValueAction
{
/**/
public:
	OverrideControllerValueAction(){};
	OverrideControllerValueAction(pugi::xml_node node);
	virtual ~OverrideControllerValueAction(){};
public:
    std::shared_ptr<OverrideThrottleAction>                 m_Throttle; //xs:element
    std::shared_ptr<OverrideBrakeAction>                 m_Brake; //xs:element
    std::shared_ptr<OverrideClutchAction>                 m_Clutch; //xs:element
    std::shared_ptr<OverrideParkingBrakeAction>                 m_ParkingBrake; //xs:element
    std::shared_ptr<OverrideSteeringWheelAction>                 m_SteeringWheel; //xs:element
    std::shared_ptr<OverrideGearAction>                 m_Gear; //xs:element
};
struct XOSC_EXPORT OverrideGearAction
{
/**/
public:
	OverrideGearAction(){};
	OverrideGearAction(pugi::xml_node node);
	virtual ~OverrideGearAction(){};
public:
	//
	Boolean	    active; //  required
	//
	Double	    number; //  required
};
struct XOSC_EXPORT OverrideParkingBrakeAction
{
/**/
public:
	OverrideParkingBrakeAction(){};
	OverrideParkingBrakeAction(pugi::xml_node node);
	virtual ~OverrideParkingBrakeAction(){};
public:
	//
	Boolean	    active; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT OverrideSteeringWheelAction
{
/**/
public:
	OverrideSteeringWheelAction(){};
	OverrideSteeringWheelAction(pugi::xml_node node);
	virtual ~OverrideSteeringWheelAction(){};
public:
	//
	Boolean	    active; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT OverrideThrottleAction
{
/**/
public:
	OverrideThrottleAction(){};
	OverrideThrottleAction(pugi::xml_node node);
	virtual ~OverrideThrottleAction(){};
public:
	//
	Boolean	    active; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT ParameterAction
{
/**/
public:
	ParameterAction(){};
	ParameterAction(pugi::xml_node node);
	virtual ~ParameterAction(){};
public:
	//
	String	    parameterRef; //  required
    std::shared_ptr<ParameterAction_U>                 m_ParameterAction; //xs:element
};
struct XOSC_EXPORT ParameterAddValueRule
{
/**/
public:
	ParameterAddValueRule(){};
	ParameterAddValueRule(pugi::xml_node node);
	virtual ~ParameterAddValueRule(){};
public:
	//
	Double	    value; //  required
};
struct XOSC_EXPORT ParameterAssignment
{
/**/
public:
	ParameterAssignment(){};
	ParameterAssignment(pugi::xml_node node);
	virtual ~ParameterAssignment(){};
public:
	//
	String	    parameterRef; //  required
	//
	String	    value; //  required
};
struct XOSC_EXPORT ParameterAssignments
{
/**/
public:
	ParameterAssignments(){};
	ParameterAssignments(pugi::xml_node node);
	virtual ~ParameterAssignments(){};
public:
    std::vector<std::shared_ptr<ParameterAssignment>>                 m_ParameterAssignments; //xs:element
};
struct XOSC_EXPORT ParameterCondition
{
/**/
public:
	ParameterCondition(){};
	ParameterCondition(pugi::xml_node node);
	virtual ~ParameterCondition(){};
public:
	//
	String	    parameterRef; //  required
	//
	Rule	    rule; //  required
	//
	String	    value; //  required
};
struct XOSC_EXPORT ParameterDeclaration
{
/**/
public:
	ParameterDeclaration(){};
	ParameterDeclaration(pugi::xml_node node);
	virtual ~ParameterDeclaration(){};
public:
	//
	String	    name; //  required
	//
	ParameterType	    parameterType; //  required
	//
	String	    value; //  required
};
struct XOSC_EXPORT ParameterDeclarations
{
/**/
public:
	ParameterDeclarations(){};
	ParameterDeclarations(pugi::xml_node node);
	virtual ~ParameterDeclarations(){};
public:
    std::vector<std::shared_ptr<ParameterDeclaration>>                 m_ParameterDeclarations; //xs:element
};
struct XOSC_EXPORT ParameterModifyAction
{
/**/
public:
	ParameterModifyAction(){};
	ParameterModifyAction(pugi::xml_node node);
	virtual ~ParameterModifyAction(){};
public:
    std::shared_ptr<ModifyRule>                 m_Rule; //xs:element
};
struct XOSC_EXPORT ParameterMultiplyByValueRule
{
/**/
public:
	ParameterMultiplyByValueRule(){};
	ParameterMultiplyByValueRule(pugi::xml_node node);
	virtual ~ParameterMultiplyByValueRule(){};
public:
	//
	Double	    value; //  required
};
struct XOSC_EXPORT ParameterSetAction
{
/**/
public:
	ParameterSetAction(){};
	ParameterSetAction(pugi::xml_node node);
	virtual ~ParameterSetAction(){};
public:
	//
	String	    value; //  required
};
struct XOSC_EXPORT Pedestrian
{
/**/
public:
	Pedestrian(){};
	Pedestrian(pugi::xml_node node);
	virtual ~Pedestrian(){};
public:
	//
	Double	    mass; //  required
	//
	String	    model; //  required
	//
	String	    name; //  required
	//
	PedestrianCategory	    pedestrianCategory; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<BoundingBox>                 m_BoundingBox; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct XOSC_EXPORT PedestrianCatalogLocation
{
/**/
public:
	PedestrianCatalogLocation(){};
	PedestrianCatalogLocation(pugi::xml_node node);
	virtual ~PedestrianCatalogLocation(){};
public:
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct XOSC_EXPORT Performance
{
/**/
public:
	Performance(){};
	Performance(pugi::xml_node node);
	virtual ~Performance(){};
public:
	//
	Double	    maxAcceleration; //  required
	//
	Double	    maxDeceleration; //  required
	//
	Double	    maxSpeed; //  required
};
struct XOSC_EXPORT Phase
{
/**/
public:
	Phase(){};
	Phase(pugi::xml_node node);
	virtual ~Phase(){};
public:
	//
	Double	    duration; //  required
	//
	String	    name; //  required
    std::vector<std::shared_ptr<TrafficSignalState>>                 m_TrafficSignalStates; //xs:element
};
struct XOSC_EXPORT Polyline
{
/**/
public:
	Polyline(){};
	Polyline(pugi::xml_node node);
	virtual ~Polyline(){};
public:
    std::vector<std::shared_ptr<Vertex>>                 m_Vertexs; //xs:element
};
struct XOSC_EXPORT Position
{
/**/
public:
	Position(){};
	Position(pugi::xml_node node);
	virtual ~Position(){};
public:
    std::shared_ptr<Position_U>                 m_Position; //xs:element
};
struct XOSC_EXPORT PositionInLaneCoordinates
{
/**/
public:
	PositionInLaneCoordinates(){};
	PositionInLaneCoordinates(pugi::xml_node node);
	virtual ~PositionInLaneCoordinates(){};
public:
	//
	String	    laneId; //  required
	//
	Double	    laneOffset; //
	//
	Double	    pathS; //  required
};
struct XOSC_EXPORT PositionInRoadCoordinates
{
/**/
public:
	PositionInRoadCoordinates(){};
	PositionInRoadCoordinates(pugi::xml_node node);
	virtual ~PositionInRoadCoordinates(){};
public:
	//
	Double	    pathS; //  required
	//
	Double	    t; //  required
};
struct XOSC_EXPORT PositionOfCurrentEntity
{
/**/
public:
	PositionOfCurrentEntity(){};
	PositionOfCurrentEntity(pugi::xml_node node);
	virtual ~PositionOfCurrentEntity(){};
public:
	//
	String	    entityRef; //  required
};
struct XOSC_EXPORT Precipitation
{
/**/
public:
	Precipitation(){};
	Precipitation(pugi::xml_node node);
	virtual ~Precipitation(){};
public:
	//
	Double	    intensity; //  required
	//
	PrecipitationType	    precipitationType; //  required
};
struct XOSC_EXPORT Private
{
/**/
public:
	Private(){};
	Private(pugi::xml_node node);
	virtual ~Private(){};
public:
	//
	String	    entityRef; //  required
    std::vector<std::shared_ptr<PrivateAction>>                 m_PrivateActions; //xs:element
};
struct XOSC_EXPORT PrivateAction
{
/**/
public:
	PrivateAction(){};
	PrivateAction(pugi::xml_node node);
	virtual ~PrivateAction(){};
public:
    std::shared_ptr<PrivateAction_U>                 m_PrivateAction; //xs:element
};
struct XOSC_EXPORT Properties
{
/**/
public:
	Properties(){};
	Properties(pugi::xml_node node);
	virtual ~Properties(){};
public:
    std::vector<std::shared_ptr<Property>>                 m_Propertys; //xs:element
    std::vector<std::shared_ptr<File>>                 m_Files; //xs:element
};
struct XOSC_EXPORT Property
{
/**/
public:
	Property(){};
	Property(pugi::xml_node node);
	virtual ~Property(){};
public:
	//
	String	    name; //  required
	//
	String	    value; //  required
};
struct XOSC_EXPORT ReachPositionCondition
{
/**/
public:
	ReachPositionCondition(){};
	ReachPositionCondition(pugi::xml_node node);
	virtual ~ReachPositionCondition(){};
public:
	//
	Double	    tolerance; //  required
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT RelativeDistanceCondition
{
/**/
public:
	RelativeDistanceCondition(){};
	RelativeDistanceCondition(pugi::xml_node node);
	virtual ~RelativeDistanceCondition(){};
public:
	//
	String	    entityRef; //  required
	//
	Boolean	    freespace; //  required
	//
	RelativeDistanceType	    relativeDistanceType; //  required
	//
	Rule	    rule; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT RelativeLanePosition
{
/**/
public:
	RelativeLanePosition(){};
	RelativeLanePosition(pugi::xml_node node);
	virtual ~RelativeLanePosition(){};
public:
	//
	String	    entityRef; //  required
	//
	Int	    dLane; //  required
	//
	Double	    ds; //  required
	//
	Double	    offset; //
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
};
struct XOSC_EXPORT RelativeObjectPosition
{
/**/
public:
	RelativeObjectPosition(){};
	RelativeObjectPosition(pugi::xml_node node);
	virtual ~RelativeObjectPosition(){};
public:
	//
	String	    entityRef; //  required
	//
	Double	    dx; //  required
	//
	Double	    dy; //  required
	//
	Double	    dz; //
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
};
struct XOSC_EXPORT RelativeRoadPosition
{
/**/
public:
	RelativeRoadPosition(){};
	RelativeRoadPosition(pugi::xml_node node);
	virtual ~RelativeRoadPosition(){};
public:
	//
	String	    entityRef; //  required
	//
	Double	    ds; //  required
	//
	Double	    dt; //  required
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
};
struct XOSC_EXPORT RelativeSpeedCondition
{
/**/
public:
	RelativeSpeedCondition(){};
	RelativeSpeedCondition(pugi::xml_node node);
	virtual ~RelativeSpeedCondition(){};
public:
	//
	String	    entityRef; //  required
	//
	Rule	    rule; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT RelativeSpeedToMaster
{
/**/
public:
	RelativeSpeedToMaster(){};
	RelativeSpeedToMaster(pugi::xml_node node);
	virtual ~RelativeSpeedToMaster(){};
public:
	//
	SpeedTargetValueType	    speedTargetValueType; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT RelativeTargetLane
{
/**/
public:
	RelativeTargetLane(){};
	RelativeTargetLane(pugi::xml_node node);
	virtual ~RelativeTargetLane(){};
public:
	//
	String	    entityRef; //  required
	//
	Int	    value; //  required
};
struct XOSC_EXPORT RelativeTargetLaneOffset
{
/**/
public:
	RelativeTargetLaneOffset(){};
	RelativeTargetLaneOffset(pugi::xml_node node);
	virtual ~RelativeTargetLaneOffset(){};
public:
	//
	String	    entityRef; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT RelativeTargetSpeed
{
/**/
public:
	RelativeTargetSpeed(){};
	RelativeTargetSpeed(pugi::xml_node node);
	virtual ~RelativeTargetSpeed(){};
public:
	//
	String	    entityRef; //  required
	//
	Boolean	    continuous; //  required
	//
	SpeedTargetValueType	    speedTargetValueType; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT RelativeWorldPosition
{
/**/
public:
	RelativeWorldPosition(){};
	RelativeWorldPosition(pugi::xml_node node);
	virtual ~RelativeWorldPosition(){};
public:
	//
	String	    entityRef; //  required
	//
	Double	    dx; //  required
	//
	Double	    dy; //  required
	//
	Double	    dz; //
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
};
struct XOSC_EXPORT RoadCondition
{
/**/
public:
	RoadCondition(){};
	RoadCondition(pugi::xml_node node);
	virtual ~RoadCondition(){};
public:
	//
	Double	    frictionScaleFactor; //  required
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct XOSC_EXPORT RoadNetwork
{
/**/
public:
	RoadNetwork(){};
	RoadNetwork(pugi::xml_node node);
	virtual ~RoadNetwork(){};
public:
    std::shared_ptr<File>                 m_LogicFile; //xs:element
    std::shared_ptr<File>                 m_SceneGraphFile; //xs:element
    std::shared_ptr<TrafficSignals>                 m_TrafficSignals; //xs:element
};
struct XOSC_EXPORT RoadPosition
{
/**/
public:
	RoadPosition(){};
	RoadPosition(pugi::xml_node node);
	virtual ~RoadPosition(){};
public:
	//
	String	    roadId; //  required
	//
	Double	    s; //  required
	//
	Double	    t; //  required
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
};
struct XOSC_EXPORT Route
{
/**/
public:
	Route(){};
	Route(pugi::xml_node node);
	virtual ~Route(){};
public:
	//
	Boolean	    closed; //  required
	//
	String	    name; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::vector<std::shared_ptr<Waypoint>>                 m_Waypoints; //xs:element
};
struct XOSC_EXPORT RouteCatalogLocation
{
/**/
public:
	RouteCatalogLocation(){};
	RouteCatalogLocation(pugi::xml_node node);
	virtual ~RouteCatalogLocation(){};
public:
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct XOSC_EXPORT RoutePosition
{
/**/
public:
	RoutePosition(){};
	RoutePosition(pugi::xml_node node);
	virtual ~RoutePosition(){};
public:
    std::shared_ptr<RouteRef>                 m_RouteRef; //xs:element
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
    std::shared_ptr<InRoutePosition>                 m_InRoutePosition; //xs:element
};
struct XOSC_EXPORT RouteRef
{
/**/
public:
	RouteRef(){};
	RouteRef(pugi::xml_node node);
	virtual ~RouteRef(){};
public:
    std::shared_ptr<RouteRef_U>                 m_RouteRef; //xs:element
};
struct XOSC_EXPORT RoutingAction
{
/**/
public:
	RoutingAction(){};
	RoutingAction(pugi::xml_node node);
	virtual ~RoutingAction(){};
public:
    std::shared_ptr<RoutingAction_U>                 m_RoutingAction; //xs:element
};
struct XOSC_EXPORT ScenarioObject
{
/**/
public:
	ScenarioObject(){};
	ScenarioObject(pugi::xml_node node);
	virtual ~ScenarioObject(){};
public:
	//
	String	    name; //  required
    std::shared_ptr<ObjectController>                 m_ObjectController; //xs:element
    std::shared_ptr<EntityObject>                 m_EntityObject; //xs:groupent
};
struct XOSC_EXPORT SelectedEntities
{
/**/
public:
	SelectedEntities(){};
	SelectedEntities(pugi::xml_node node);
	virtual ~SelectedEntities(){};
public:
    std::shared_ptr<SelectedEntities_U>                 m_SelectedEntities; //xs:element
};
struct XOSC_EXPORT Shape
{
/**/
public:
	Shape(){};
	Shape(pugi::xml_node node);
	virtual ~Shape(){};
public:
    std::shared_ptr<Shape_U>                 m_Shape; //xs:element
};
struct XOSC_EXPORT SimulationTimeCondition
{
/**/
public:
	SimulationTimeCondition(){};
	SimulationTimeCondition(pugi::xml_node node);
	virtual ~SimulationTimeCondition(){};
public:
	//
	Rule	    rule; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT SpeedAction
{
/**/
public:
	SpeedAction(){};
	SpeedAction(pugi::xml_node node);
	virtual ~SpeedAction(){};
public:
    std::shared_ptr<TransitionDynamics>                 m_SpeedActionDynamics; //xs:element
    std::shared_ptr<SpeedActionTarget>                 m_SpeedActionTarget; //xs:element
};
struct XOSC_EXPORT SpeedActionTarget
{
/**/
public:
	SpeedActionTarget(){};
	SpeedActionTarget(pugi::xml_node node);
	virtual ~SpeedActionTarget(){};
public:
    std::shared_ptr<SpeedActionTarget_U>                 m_SpeedActionTarget; //xs:element
};
struct XOSC_EXPORT SpeedCondition
{
/**/
public:
	SpeedCondition(){};
	SpeedCondition(pugi::xml_node node);
	virtual ~SpeedCondition(){};
public:
	//
	Rule	    rule; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT StandStillCondition
{
/**/
public:
	StandStillCondition(){};
	StandStillCondition(pugi::xml_node node);
	virtual ~StandStillCondition(){};
public:
	//
	Double	    duration; //  required
};
struct XOSC_EXPORT Story
{
/**/
public:
	Story(){};
	Story(pugi::xml_node node);
	virtual ~Story(){};
public:
	//
	String	    name; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::vector<std::shared_ptr<Act>>                 m_Acts; //xs:element
};
struct XOSC_EXPORT Storyboard
{
/**/
public:
	Storyboard(){};
	Storyboard(pugi::xml_node node);
	virtual ~Storyboard(){};
public:
    std::shared_ptr<Init>                 m_Init; //xs:element
    std::vector<std::shared_ptr<Story>>                 m_Storys; //xs:element
    std::shared_ptr<Trigger>                 m_StopTrigger; //xs:element
};
struct XOSC_EXPORT StoryboardElementStateCondition
{
/**/
public:
	StoryboardElementStateCondition(){};
	StoryboardElementStateCondition(pugi::xml_node node);
	virtual ~StoryboardElementStateCondition(){};
public:
	//
	String	    storyboardElementRef; //  required
	//
	StoryboardElementState	    state; //  required
	//
	StoryboardElementType	    storyboardElementType; //  required
};
struct XOSC_EXPORT Sun
{
/**/
public:
	Sun(){};
	Sun(pugi::xml_node node);
	virtual ~Sun(){};
public:
	//
	Double	    azimuth; //  required
	//
	Double	    elevation; //  required
	//
	Double	    intensity; //  required
};
struct XOSC_EXPORT SynchronizeAction
{
/**/
public:
	SynchronizeAction(){};
	SynchronizeAction(pugi::xml_node node);
	virtual ~SynchronizeAction(){};
public:
	//
	String	    masterEntityRef; //  required
    std::shared_ptr<Position>                 m_TargetPositionMaster; //xs:element
    std::shared_ptr<Position>                 m_TargetPosition; //xs:element
    std::shared_ptr<FinalSpeed>                 m_FinalSpeed; //xs:element
};
struct XOSC_EXPORT TeleportAction
{
/**/
public:
	TeleportAction(){};
	TeleportAction(pugi::xml_node node);
	virtual ~TeleportAction(){};
public:
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT TimeHeadwayCondition
{
/**/
public:
	TimeHeadwayCondition(){};
	TimeHeadwayCondition(pugi::xml_node node);
	virtual ~TimeHeadwayCondition(){};
public:
	//
	String	    entityRef; //  required
	//
	Boolean	    alongRoute; //  required
	//
	Boolean	    freespace; //  required
	//
	Rule	    rule; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT TimeOfDay
{
/**/
public:
	TimeOfDay(){};
	TimeOfDay(pugi::xml_node node);
	virtual ~TimeOfDay(){};
public:
	//
	Boolean	    animation; //  required
	//
	DateTime	    dateTime; //  required
};
struct XOSC_EXPORT TimeOfDayCondition
{
/**/
public:
	TimeOfDayCondition(){};
	TimeOfDayCondition(pugi::xml_node node);
	virtual ~TimeOfDayCondition(){};
public:
	//
	DateTime	    dateTime; //  required
	//
	Rule	    rule; //  required
};
struct XOSC_EXPORT TimeReference
{
/**/
public:
	TimeReference(){};
	TimeReference(pugi::xml_node node);
	virtual ~TimeReference(){};
public:
    std::shared_ptr<TimeReference_U>                 m_TimeReference; //xs:element
};
struct XOSC_EXPORT TimeToCollisionCondition
{
/**/
public:
	TimeToCollisionCondition(){};
	TimeToCollisionCondition(pugi::xml_node node);
	virtual ~TimeToCollisionCondition(){};
public:
	//
	Boolean	    alongRoute; //  required
	//
	Boolean	    freespace; //  required
	//
	Rule	    rule; //  required
	//
	Double	    value; //  required
    std::shared_ptr<TimeToCollisionConditionTarget>                 m_TimeToCollisionConditionTarget; //xs:element
};
struct XOSC_EXPORT TimeToCollisionConditionTarget
{
/**/
public:
	TimeToCollisionConditionTarget(){};
	TimeToCollisionConditionTarget(pugi::xml_node node);
	virtual ~TimeToCollisionConditionTarget(){};
public:
    std::shared_ptr<TimeToCollisionConditionTarget_U>                 m_TimeToCollisionConditionTarget; //xs:element
};
struct XOSC_EXPORT Timing
{
/**/
public:
	Timing(){};
	Timing(pugi::xml_node node);
	virtual ~Timing(){};
public:
	//
	ReferenceContext	    domainAbsoluteRelative; //  required
	//
	Double	    offset; //  required
	//
	Double	    scale; //  required
};
struct XOSC_EXPORT TrafficAction
{
/**/
public:
	TrafficAction(){};
	TrafficAction(pugi::xml_node node);
	virtual ~TrafficAction(){};
public:
    std::shared_ptr<TrafficAction_U>                 m_TrafficAction; //xs:element
};
struct XOSC_EXPORT TrafficDefinition
{
/**/
public:
	TrafficDefinition(){};
	TrafficDefinition(pugi::xml_node node);
	virtual ~TrafficDefinition(){};
public:
	//
	String	    name; //  required
    std::shared_ptr<VehicleCategoryDistribution>                 m_VehicleCategoryDistribution; //xs:element
    std::shared_ptr<ControllerDistribution>                 m_ControllerDistribution; //xs:element
};
struct XOSC_EXPORT TrafficSignalAction
{
/**/
public:
	TrafficSignalAction(){};
	TrafficSignalAction(pugi::xml_node node);
	virtual ~TrafficSignalAction(){};
public:
    std::shared_ptr<TrafficSignalAction_U>                 m_TrafficSignalAction; //xs:element
};
struct XOSC_EXPORT TrafficSignalCondition
{
/**/
public:
	TrafficSignalCondition(){};
	TrafficSignalCondition(pugi::xml_node node);
	virtual ~TrafficSignalCondition(){};
public:
	//
	String	    name; //  required
	//
	String	    state; //  required
};
struct XOSC_EXPORT TrafficSignalController
{
/**/
public:
	TrafficSignalController(){};
	TrafficSignalController(pugi::xml_node node);
	virtual ~TrafficSignalController(){};
public:
	//
	Double	    delay; //
	//
	String	    name; //  required
	//
	String	    reference; //
    std::vector<std::shared_ptr<Phase>>                 m_Phases; //xs:element
};
struct XOSC_EXPORT TrafficSignals
{
/**/
public:
	TrafficSignals(){};
	TrafficSignals(pugi::xml_node node);
	virtual ~TrafficSignals(){};
public:
    std::vector<std::shared_ptr<TrafficSignalController>>                 m_TrafficSignalControllers; //xs:element
};
struct XOSC_EXPORT TrafficSignalControllerAction
{
/**/
public:
	TrafficSignalControllerAction(){};
	TrafficSignalControllerAction(pugi::xml_node node);
	virtual ~TrafficSignalControllerAction(){};
public:
	//
	String	    trafficSignalControllerRef; //  required
	//
	String	    phase; //  required
};
struct XOSC_EXPORT TrafficSignalControllerCondition
{
/**/
public:
	TrafficSignalControllerCondition(){};
	TrafficSignalControllerCondition(pugi::xml_node node);
	virtual ~TrafficSignalControllerCondition(){};
public:
	//
	String	    trafficSignalControllerRef; //  required
	//
	String	    phase; //  required
};
struct XOSC_EXPORT TrafficSignalState
{
/**/
public:
	TrafficSignalState(){};
	TrafficSignalState(pugi::xml_node node);
	virtual ~TrafficSignalState(){};
public:
	//
	String	    state; //  required
	//
	String	    trafficSignalId; //  required
};
struct XOSC_EXPORT TrafficSignalStateAction
{
/**/
public:
	TrafficSignalStateAction(){};
	TrafficSignalStateAction(pugi::xml_node node);
	virtual ~TrafficSignalStateAction(){};
public:
	//
	String	    name; //  required
	//
	String	    state; //  required
};
struct XOSC_EXPORT TrafficSinkAction
{
/**/
public:
	TrafficSinkAction(){};
	TrafficSinkAction(pugi::xml_node node);
	virtual ~TrafficSinkAction(){};
public:
	//
	Double	    radius; //  required
	//
	Double	    rate; //
    std::shared_ptr<Position>                 m_Position; //xs:element
    std::shared_ptr<TrafficDefinition>                 m_TrafficDefinition; //xs:element
};
struct XOSC_EXPORT TrafficSourceAction
{
/**/
public:
	TrafficSourceAction(){};
	TrafficSourceAction(pugi::xml_node node);
	virtual ~TrafficSourceAction(){};
public:
	//
	Double	    radius; //  required
	//
	Double	    rate; //  required
	//
	Double	    velocity; //
    std::shared_ptr<Position>                 m_Position; //xs:element
    std::shared_ptr<TrafficDefinition>                 m_TrafficDefinition; //xs:element
};
struct XOSC_EXPORT TrafficSwarmAction
{
/**/
public:
	TrafficSwarmAction(){};
	TrafficSwarmAction(pugi::xml_node node);
	virtual ~TrafficSwarmAction(){};
public:
	//
	Double	    innerRadius; //  required
	//
	UnsignedInt	    numberOfVehicles; //  required
	//
	Double	    offset; //  required
	//
	Double	    semiMajorAxis; //  required
	//
	Double	    semiMinorAxis; //  required
	//
	Double	    velocity; //
    std::shared_ptr<CentralSwarmObject>                 m_CentralObject; //xs:element
    std::shared_ptr<TrafficDefinition>                 m_TrafficDefinition; //xs:element
};
struct XOSC_EXPORT Trajectory
{
/**/
public:
	Trajectory(){};
	Trajectory(pugi::xml_node node);
	virtual ~Trajectory(){};
public:
	//
	Boolean	    closed; //  required
	//
	String	    name; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<Shape>                 m_Shape; //xs:element
};
struct XOSC_EXPORT TrajectoryCatalogLocation
{
/**/
public:
	TrajectoryCatalogLocation(){};
	TrajectoryCatalogLocation(pugi::xml_node node);
	virtual ~TrajectoryCatalogLocation(){};
public:
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct XOSC_EXPORT TrajectoryFollowingMode
{
/**/
public:
	TrajectoryFollowingMode(){};
	TrajectoryFollowingMode(pugi::xml_node node);
	virtual ~TrajectoryFollowingMode(){};
public:
	//
	FollowingMode	    followingMode; //  required
};
struct XOSC_EXPORT TransitionDynamics
{
/**/
public:
	TransitionDynamics(){};
	TransitionDynamics(pugi::xml_node node);
	virtual ~TransitionDynamics(){};
public:
	//
	DynamicsDimension	    dynamicsDimension; //  required
	//
	DynamicsShape	    dynamicsShape; //  required
	//
	Double	    value; //  required
};
struct XOSC_EXPORT TraveledDistanceCondition
{
/**/
public:
	TraveledDistanceCondition(){};
	TraveledDistanceCondition(pugi::xml_node node);
	virtual ~TraveledDistanceCondition(){};
public:
	//
	Double	    value; //  required
};
struct XOSC_EXPORT Trigger
{
/**/
public:
	Trigger(){};
	Trigger(pugi::xml_node node);
	virtual ~Trigger(){};
public:
    std::vector<std::shared_ptr<ConditionGroup>>                 m_ConditionGroups; //xs:element
};
struct XOSC_EXPORT TriggeringEntities
{
/**/
public:
	TriggeringEntities(){};
	TriggeringEntities(pugi::xml_node node);
	virtual ~TriggeringEntities(){};
public:
	//
	TriggeringEntitiesRule	    triggeringEntitiesRule; //  required
    std::vector<std::shared_ptr<EntityRef>>                 m_EntityRefs; //xs:element
};
struct XOSC_EXPORT UserDefinedAction
{
/**/
public:
	UserDefinedAction(){};
	UserDefinedAction(pugi::xml_node node);
	virtual ~UserDefinedAction(){};
public:
    std::shared_ptr<CustomCommandAction>                 m_CustomCommandAction; //xs:element
};
struct XOSC_EXPORT UserDefinedValueCondition
{
/**/
public:
	UserDefinedValueCondition(){};
	UserDefinedValueCondition(pugi::xml_node node);
	virtual ~UserDefinedValueCondition(){};
public:
	//
	String	    name; //  required
	//
	Rule	    rule; //  required
	//
	String	    value; //  required
};
struct XOSC_EXPORT Vehicle
{
/**/
public:
	Vehicle(){};
	Vehicle(pugi::xml_node node);
	virtual ~Vehicle(){};
public:
	//
	String	    name; //  required
	//
	VehicleCategory	    vehicleCategory; //  required
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<BoundingBox>                 m_BoundingBox; //xs:element
    std::shared_ptr<Performance>                 m_Performance; //xs:element
    std::shared_ptr<Axles>                 m_Axles; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct XOSC_EXPORT VehicleCatalogLocation
{
/**/
public:
	VehicleCatalogLocation(){};
	VehicleCatalogLocation(pugi::xml_node node);
	virtual ~VehicleCatalogLocation(){};
public:
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct XOSC_EXPORT VehicleCategoryDistribution
{
/**/
public:
	VehicleCategoryDistribution(){};
	VehicleCategoryDistribution(pugi::xml_node node);
	virtual ~VehicleCategoryDistribution(){};
public:
    std::vector<std::shared_ptr<VehicleCategoryDistributionEntry>>                 m_VehicleCategoryDistributionEntrys; //xs:element
};
struct XOSC_EXPORT VehicleCategoryDistributionEntry
{
/**/
public:
	VehicleCategoryDistributionEntry(){};
	VehicleCategoryDistributionEntry(pugi::xml_node node);
	virtual ~VehicleCategoryDistributionEntry(){};
public:
	//
	VehicleCategory	    category; //  required
	//
	Double	    weight; //  required
};
struct XOSC_EXPORT Vertex
{
/**/
public:
	Vertex(){};
	Vertex(pugi::xml_node node);
	virtual ~Vertex(){};
public:
	//
	Double	    time; //  required
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT VisibilityAction
{
/**/
public:
	VisibilityAction(){};
	VisibilityAction(pugi::xml_node node);
	virtual ~VisibilityAction(){};
public:
	//
	Boolean	    graphics; //  required
	//
	Boolean	    sensors; //  required
	//
	Boolean	    traffic; //  required
};
struct XOSC_EXPORT Waypoint
{
/**/
public:
	Waypoint(){};
	Waypoint(pugi::xml_node node);
	virtual ~Waypoint(){};
public:
	//
	RouteStrategy	    routeStrategy; //  required
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct XOSC_EXPORT Weather
{
/**/
public:
	Weather(){};
	Weather(pugi::xml_node node);
	virtual ~Weather(){};
public:
	//
	CloudState	    cloudState; //  required
    std::shared_ptr<Sun>                 m_Sun; //xs:element
    std::shared_ptr<Fog>                 m_Fog; //xs:element
    std::shared_ptr<Precipitation>                 m_Precipitation; //xs:element
};
struct XOSC_EXPORT WorldPosition
{
/**/
public:
	WorldPosition(){};
	WorldPosition(pugi::xml_node node);
	virtual ~WorldPosition(){};
public:
	//
	Double	    h; //
	//
	Double	    p; //
	//
	Double	    r; //
	//
	Double	    x; //  required
	//
	Double	    y; //  required
	//
	Double	    z; //
};
// xs:group -> aliased to group definition
struct XOSC_EXPORT CatalogDefinition
{
public:
	CatalogDefinition(){};
	CatalogDefinition(pugi::xml_node node);
	virtual ~CatalogDefinition(){};
public:
    std::shared_ptr<Catalog>                 m_Catalog; //xs:element
};
// xs:group -> aliased to group definition
struct XOSC_EXPORT EntityObject
{
public:
	EntityObject(){};
	EntityObject(pugi::xml_node node);
	virtual ~EntityObject(){};
public:
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
    std::shared_ptr<Vehicle>                 m_Vehicle; //xs:element
    std::shared_ptr<Pedestrian>                 m_Pedestrian; //xs:element
    std::shared_ptr<MiscObject>                 m_MiscObject; //xs:element
};
// xs:group -> aliased to group definition
struct XOSC_EXPORT OpenScenarioCategory
{
public:
	OpenScenarioCategory(){};
	OpenScenarioCategory(pugi::xml_node node);
	virtual ~OpenScenarioCategory(){};
public:
    std::shared_ptr<ScenarioDefinition>                 m_ScenarioDefinition; //xs:groupent
    std::shared_ptr<CatalogDefinition>                 m_CatalogDefinition; //xs:groupent
};
// xs:group -> aliased to group definition
struct XOSC_EXPORT ScenarioDefinition
{
public:
	ScenarioDefinition(){};
	ScenarioDefinition(pugi::xml_node node);
	virtual ~ScenarioDefinition(){};
public:
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<CatalogLocations>                 m_CatalogLocations; //xs:element
    std::shared_ptr<RoadNetwork>                 m_RoadNetwork; //xs:element
    std::shared_ptr<Entities>                 m_Entities; //xs:element
    std::shared_ptr<Storyboard>                 m_Storyboard; //xs:element
};
// xs:element -> main  as clazz definition
using OpenSCENARIO = OpenScenario;
//
class XOSC_EXPORT xosc
{
private:
    pugi::xml_document m_doc;
    pugi::xml_node m_root;
public:
	std::shared_ptr<OpenSCENARIO>    m_OpenSCENARIO;
public:
    void load(std::string xoscfilename);
    void parse();
public:
    xosc();
    ~xosc();
};
#endif //_OPENSCENARIO_H_

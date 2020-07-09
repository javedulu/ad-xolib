//
//  opendrive_16_core.h
//
//  xsd2cxx- for OpenDrive CXX classes
//
//  Created by Javed Shaik on Thu Jul  9 10:49:01 2020
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 8137d7f6-75b5-4d42-a128-4a5578d45264 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
#ifndef _OPENDRIVE_16_CORE_H_
#define _OPENDRIVE_16_CORE_H_
#pragma once
#include <iostream>
#include <memory>
#include <cstring>
#include <string>
#include <vector>
#include <typeinfo>
//
#include "pugixml.hpp"
#include "xodr_export.h"
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
typedef double t_grEqZero;
typedef double t_grZero;
typedef double t_zeroOne;
typedef std::string e_countryCode_iso3166alpha2;
typedef std::string e_countryCode_iso3166alpha3_deprecated;
enum XODR_EXPORT class e_dataQuality_RawData_PostProcessing : std::uint8_t
{
	  RAW,               //raw
	  CLEANED,               //cleaned
	  PROCESSED,               //processed
	  FUSED               //fused
};
enum XODR_EXPORT class e_dataQuality_RawData_Source : std::uint8_t
{
	  SENSOR,               //sensor
	  CADASTER,               //cadaster
	  CUSTOM               //custom
};
enum XODR_EXPORT class e_unitDistance : std::uint8_t
{
	  M,               //m
	  KM,               //km
	  FT,               //ft
	  MILE               //mile
};
enum XODR_EXPORT class e_unitMass : std::uint8_t
{
	  KG,               //kg
	  T               //t
};
enum XODR_EXPORT class e_unitSlope : std::uint8_t
{
	  PERCENT               //%
};
enum XODR_EXPORT class e_unitSpeed : std::uint8_t
{
	  M_S,               //m/s
	  MPH,               //mph
	  KM_H               //km/h
};
enum XODR_EXPORT class t_yesNo : std::uint8_t
{
	  YES,               //yes
	  NO               //no
};
enum XODR_EXPORT class e_road_railroad_switch_position : std::uint8_t
{
	  DYNAMIC,               //dynamic
	  STRAIGHT,               //straight
	  TURN               //turn
};
enum XODR_EXPORT class e_station_platform_segment_side : std::uint8_t
{
	  LEFT,               //left
	  RIGHT               //right
};
enum XODR_EXPORT class e_station_type : std::uint8_t
{
	  SMALL,               //small
	  MEDIUM,               //medium
	  LARGE               //large
};
enum XODR_EXPORT class e_contactPoint : std::uint8_t
{
	  START,               //start
	  END               //end
};
enum XODR_EXPORT class e_elementDir : std::uint8_t
{
	  PLUS,               //+
	  MINUS               //-
};
enum XODR_EXPORT class e_junction_type : std::uint8_t
{
	  DEFAULT,               //default
	  VIRTUAL               //virtual
};
enum XODR_EXPORT class e_junctionGroup_type : std::uint8_t
{
	  ROUNDABOUT,               //roundabout
	  UNKNOWN               //unknown
};
enum XODR_EXPORT class e_road_surface_CRG_mode : std::uint8_t
{
	  ATTACHED,               //attached
	  ATTACHED0,               //attached0
	  GENUINE,               //genuine
	  GLOBAL               //global
};
enum XODR_EXPORT class e_road_surface_CRG_purpose : std::uint8_t
{
	  ELEVATION,               //elevation
	  FRICTION               //friction
};
enum XODR_EXPORT class e_road_signals_signal_reference_elementType : std::uint8_t
{
	  OBJECT,               //object
	  SIGNAL               //signal
};
enum XODR_EXPORT class e_countryCode_deprecated : std::uint8_t
{
	  OPENDRIVE,               //OpenDRIVE
	  AUSTRIA,               //Austria
	  BRAZIL,               //Brazil
	  CHINA,               //China
	  FRANCE,               //France
	  GERMANY,               //Germany
	  ITALY,               //Italy
	  SWITZERLAND,               //Switzerland
	  USA               //USA
};
enum XODR_EXPORT class e_direction : std::uint8_t
{
	  SAME,               //same
	  OPPOSITE               //opposite
};
enum XODR_EXPORT class e_maxSpeedString : std::uint8_t
{
	  NO_LIMIT,               //no limit
	  UNDEFINED               //undefined
};
enum XODR_EXPORT class e_paramPoly3_pRange : std::uint8_t
{
	  ARCLENGTH,               //arcLength
	  NORMALIZED               //normalized
};
enum XODR_EXPORT class e_road_link_elementType : std::uint8_t
{
	  ROAD,               //road
	  JUNCTION               //junction
};
enum XODR_EXPORT class e_roadType : std::uint8_t   // #DOC : The known keywords for the road type information are:
{
	  UNKNOWN,               //unknown
	  RURAL,               //rural
	  MOTORWAY,               //motorway
	  TOWN,               //town
	  LOWSPEED,               //lowSpeed  //#DOC : In Germany, lowSpeed is equivalent to a 30km/h zone
	  PEDESTRIAN,               //pedestrian
	  BICYCLE,               //bicycle
	  TOWNEXPRESSWAY,               //townExpressway
	  TOWNCOLLECTOR,               //townCollector
	  TOWNARTERIAL,               //townArterial
	  TOWNPRIVATE,               //townPrivate
	  TOWNLOCAL,               //townLocal
	  TOWNPLAYSTREET               //townPlayStreet
};
enum XODR_EXPORT class e_trafficRule : std::uint8_t
{
	  RHT,               //RHT
	  LHT               //LHT
};
enum XODR_EXPORT class e_borderType : std::uint8_t
{
	  CONCRETE,               //concrete
	  CURB               //curb
};
enum XODR_EXPORT class e_bridgeType : std::uint8_t
{
	  CONCRETE,               //concrete
	  STEEL,               //steel
	  BRICK,               //brick
	  WOOD               //wood
};
enum XODR_EXPORT class e_objectType : std::uint8_t
{
	  NONE,               //none  //#DOC : i.e. unknown
	  OBSTACLE,               //obstacle  //#DOC : for anything that is not further categorized
	  CAR,               //car  //#DOC : deprecated
	  POLE,               //pole
	  TREE,               //tree
	  VEGETATION,               //vegetation
	  BARRIER,               //barrier
	  BUILDING,               //building
	  PARKINGSPACE,               //parkingSpace
	  PATCH,               //patch
	  RAILING,               //railing
	  TRAFFICISLAND,               //trafficIsland
	  CROSSWALK,               //crosswalk
	  STREETLAMP,               //streetLamp
	  GANTRY,               //gantry
	  SOUNDBARRIER,               //soundBarrier
	  VAN,               //van  //#DOC : deprecated
	  BUS,               //bus  //#DOC : deprecated
	  TRAILER,               //trailer  //#DOC : deprecated
	  BIKE,               //bike  //#DOC : deprecated
	  MOTORBIKE,               //motorbike  //#DOC : deprecated
	  TRAM,               //tram  //#DOC : deprecated
	  TRAIN,               //train  //#DOC : deprecated
	  PEDESTRIAN,               //pedestrian  //#DOC : deprecated
	  WIND,               //wind  //#DOC : deprecated
	  ROADMARK               //roadMark
};
enum XODR_EXPORT class e_orientation : std::uint8_t
{
	  PLUS,               //+
	  MINUS,               //-
	  NONE               //none
};
enum XODR_EXPORT class e_outlineFillType : std::uint8_t
{
	  GRASS,               //grass
	  CONCRETE,               //concrete
	  COBBLE,               //cobble
	  ASPHALT,               //asphalt
	  PAVEMENT,               //pavement
	  GRAVEL,               //gravel
	  SOIL               //soil
};
enum XODR_EXPORT class e_road_objects_object_parkingSpace_access : std::uint8_t
{
	  ALL,               //all
	  CAR,               //car
	  WOMEN,               //women
	  HANDICAPPED,               //handicapped
	  BUS,               //bus
	  TRUCK,               //truck
	  ELECTRIC,               //electric
	  RESIDENTS               //residents
};
enum XODR_EXPORT class e_sideType : std::uint8_t
{
	  LEFT,               //left
	  RIGHT,               //right
	  FRONT,               //front
	  REAR               //rear
};
enum XODR_EXPORT class e_tunnelType : std::uint8_t
{
	  STANDARD,               //standard
	  UNDERPASS               //underpass  //#DOC : i.e. sides are open for daylight
};
enum XODR_EXPORT class e_accessRestrictionType : std::uint8_t
{
	  SIMULATOR,               //simulator
	  AUTONOMOUSTRAFFIC,               //autonomousTraffic
	  PEDESTRIAN,               //pedestrian
	  PASSENGERCAR,               //passengerCar
	  BUS,               //bus
	  DELIVERY,               //delivery
	  EMERGENCY,               //emergency
	  TAXI,               //taxi
	  THROUGHTRAFFIC,               //throughTraffic
	  TRUCK,               //truck
	  BICYCLE,               //bicycle
	  MOTORCYCLE,               //motorcycle
	  NONE,               //none
	  TRUCKS               //trucks
};
enum XODR_EXPORT class e_laneType : std::uint8_t   // #DOC : The lane type is defined per lane. A lane type defines the main purpose of a lane and its corresponding traffic rules.
{
	  SHOULDER,               //shoulder  //#DOC : Describes a soft shoulder  at the edge of the road
	  BORDER,               //border  //#DOC : Describes a hard border at the edge of the road. has the same height as the drivable lane.
	  DRIVING,               //driving  //#DOC : “normal” drivable road, which is not one of the other types
	  STOP,               //stop  //#DOC : Hard shoulder on motorways for emergency stops
	  NONE,               //none  //#DOC : "Invisible" lane. This lane is on the most ouside of the road. Its only purpose is for simulation, that there is still opendrive present in case the (human) driver leaves the road.
	  RESTRICTED,               //restricted  //#DOC : Lane on which cars should not drive, but have the same height as the drivable lanes. Typically they are separated with lines and often there are additional striped lines on them.
	  PARKING,               //parking  //#DOC : Lane with parking spaces
	  MEDIAN,               //median  //#DOC : Lane between driving lanes in oposite directions. Typically used in towns on large roads, to separate the traffic.
	  BIKING,               //biking  //#DOC : Lane reserved for Cyclists
	  SIDEWALK,               //sidewalk  //#DOC : Lane on which pedestrians can walk savely
	  CURB,               //curb  //#DOC : Lane "curb" is used for curbstones. These have a different height compared to the drivable lanes.
	  EXIT,               //exit  //#DOC : Lane Type „exit“ is used for the sections which is parallel to the main road (meaning deceleration lanes)
	  ENTRY,               //entry  //#DOC : Lane Type „entry“ is used for the sections which is parallel to the main road (meaning acceleration lanes
	  ONRAMP,               //onRamp  //#DOC : A ramp leading to a motorway from rural/urban roads is an „onRamp“.
	  OFFRAMP,               //offRamp  //#DOC : A ramp leading away from a motorway and onto rural/urban roads is an „offRamp”.
	  CONNECTINGRAMP,               //connectingRamp  //#DOC : A ramp connecting two motorways is a „connectingRamp“ (e.g. motorway junction)
	  BIDIRECTIONAL,               //bidirectional  //#DOC : this lane type has two use cases:a) only driving lane on a narrow road which may be used in both directions;b) continuous two-way left turn lane on multi-lane roads – US road networks
	  SPECIAL1,               //special1
	  SPECIAL2,               //special2
	  SPECIAL3,               //special3
	  ROADWORKS,               //roadWorks
	  TRAM,               //tram
	  RAIL,               //rail
	  BUS,               //bus
	  TAXI,               //taxi
	  HOV,               //HOV  //#DOC : high-occupancy vehicle / carpool vehicle
	  MWYENTRY,               //mwyEntry  //#DOC : entry (deprecated)
	  MWYEXIT               //mwyExit  //#DOC : exit (deprecated)
};
enum XODR_EXPORT class e_road_lanes_laneSection_lcr_lane_roadMark_laneChange : std::uint8_t
{
	  INCREASE,               //increase
	  DECREASE,               //decrease
	  BOTH,               //both
	  NONE               //none
};
enum XODR_EXPORT class e_road_lanes_laneSection_lr_lane_access_rule : std::uint8_t
{
	  ALLOW,               //allow
	  DENY               //deny
};
enum XODR_EXPORT class e_roadMarkColor : std::uint8_t   // #DOC : The known keywords for the road mark color information are:
{
	  STANDARD,               //standard  //#DOC : equivalent to "white"
	  BLUE,               //blue
	  GREEN,               //green
	  RED,               //red
	  WHITE,               //white
	  YELLOW,               //yellow
	  ORANGE               //orange
};
enum XODR_EXPORT class e_roadMarkRule : std::uint8_t
{
	  NO_PASSING,               //no passing
	  CAUTION,               //caution
	  NONE               //none
};
enum XODR_EXPORT class e_roadMarkType : std::uint8_t   // #DOC : The known keywords for the simplified road mark type information are:
{
	  NONE,               //none
	  SOLID,               //solid
	  BROKEN,               //broken
	  SOLID_SOLID,               //solid solid  //#DOC : for double solid line
	  SOLID_BROKEN,               //solid broken  //#DOC : from inside to outside, exception: center lane – from left to right
	  BROKEN_SOLID,               //broken solid  //#DOC : from inside to outside, exception: center lane – from left to right
	  BROKEN_BROKEN,               //broken broken  //#DOC : from inside to outside, exception: center lane – from left to right
	  BOTTS_DOTS,               //botts dots
	  GRASS,               //grass  //#DOC : meaning a grass edge
	  CURB,               //curb
	  CUSTOM,               //custom  //#DOC : if detailed description is given in child tags
	  EDGE               //edge  //#DOC : describing the limit of usable space on a road
};
enum XODR_EXPORT class e_roadMarkWeight : std::uint8_t
{
	  STANDARD,               //standard
	  BOLD               //bold
};
enum XODR_EXPORT class t_bool : std::uint8_t
{
	  TRUE,               //true
	  FALSE               //false
};
struct XODR_EXPORT e_unit	// TODO: >> Should be union - will have to handle properly
{
public:
	  e_unitDistance  unitDistance;
	  e_unitSpeed  unitSpeed;
	  e_unitMass  unitMass;
	  e_unitSlope  unitSlope;
public:
	e_unit(){};
    e_unit(pugi::xml_node node);
	~e_unit(){};
};
struct XODR_EXPORT e_countryCode	// TODO: >> Should be union - will have to handle properly
{
public:
	  e_countryCode_iso3166alpha2  countryCode_iso3166alpha2;
	  e_countryCode_iso3166alpha3_deprecated  countryCode_iso3166alpha3_deprecated;
	  e_countryCode_deprecated  countryCode_deprecated;
public:
	e_countryCode(){};
    e_countryCode(pugi::xml_node node);
	~e_countryCode(){};
};
struct XODR_EXPORT t_maxSpeed	// TODO: >> Should be union - will have to handle properly
{
public:
	  t_grEqZero  grEqZero;
	  e_maxSpeedString  maxSpeedString;
public:
	t_maxSpeed(){};
    t_maxSpeed(pugi::xml_node node);
	~t_maxSpeed(){};
};
template<>
inline std::vector<std::pair<std::string, e_dataQuality_RawData_PostProcessing>>enum_map()
{
    return {
        { "raw", e_dataQuality_RawData_PostProcessing::RAW } ,
        { "cleaned", e_dataQuality_RawData_PostProcessing::CLEANED } ,
        { "processed", e_dataQuality_RawData_PostProcessing::PROCESSED } ,
        { "fused", e_dataQuality_RawData_PostProcessing::FUSED }
    };
}
template<>
inline std::vector<std::pair<std::string, e_dataQuality_RawData_Source>>enum_map()
{
    return {
        { "sensor", e_dataQuality_RawData_Source::SENSOR } ,
        { "cadaster", e_dataQuality_RawData_Source::CADASTER } ,
        { "custom", e_dataQuality_RawData_Source::CUSTOM }
    };
}
template<>
inline std::vector<std::pair<std::string, e_unitDistance>>enum_map()
{
    return {
        { "m", e_unitDistance::M } ,
        { "km", e_unitDistance::KM } ,
        { "ft", e_unitDistance::FT } ,
        { "mile", e_unitDistance::MILE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_unitMass>>enum_map()
{
    return {
        { "kg", e_unitMass::KG } ,
        { "t", e_unitMass::T }
    };
}
template<>
inline std::vector<std::pair<std::string, e_unitSlope>>enum_map()
{
    return {
        { "%", e_unitSlope::PERCENT }
    };
}
template<>
inline std::vector<std::pair<std::string, e_unitSpeed>>enum_map()
{
    return {
        { "m/s", e_unitSpeed::M_S } ,
        { "mph", e_unitSpeed::MPH } ,
        { "km/h", e_unitSpeed::KM_H }
    };
}
template<>
inline std::vector<std::pair<std::string, t_yesNo>>enum_map()
{
    return {
        { "yes", t_yesNo::YES } ,
        { "no", t_yesNo::NO }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_railroad_switch_position>>enum_map()
{
    return {
        { "dynamic", e_road_railroad_switch_position::DYNAMIC } ,
        { "straight", e_road_railroad_switch_position::STRAIGHT } ,
        { "turn", e_road_railroad_switch_position::TURN }
    };
}
template<>
inline std::vector<std::pair<std::string, e_station_platform_segment_side>>enum_map()
{
    return {
        { "left", e_station_platform_segment_side::LEFT } ,
        { "right", e_station_platform_segment_side::RIGHT }
    };
}
template<>
inline std::vector<std::pair<std::string, e_station_type>>enum_map()
{
    return {
        { "small", e_station_type::SMALL } ,
        { "medium", e_station_type::MEDIUM } ,
        { "large", e_station_type::LARGE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_contactPoint>>enum_map()
{
    return {
        { "start", e_contactPoint::START } ,
        { "end", e_contactPoint::END }
    };
}
template<>
inline std::vector<std::pair<std::string, e_elementDir>>enum_map()
{
    return {
        { "+", e_elementDir::PLUS } ,
        { "-", e_elementDir::MINUS }
    };
}
template<>
inline std::vector<std::pair<std::string, e_junction_type>>enum_map()
{
    return {
        { "default", e_junction_type::DEFAULT } ,
        { "virtual", e_junction_type::VIRTUAL }
    };
}
template<>
inline std::vector<std::pair<std::string, e_junctionGroup_type>>enum_map()
{
    return {
        { "roundabout", e_junctionGroup_type::ROUNDABOUT } ,
        { "unknown", e_junctionGroup_type::UNKNOWN }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_surface_CRG_mode>>enum_map()
{
    return {
        { "attached", e_road_surface_CRG_mode::ATTACHED } ,
        { "attached0", e_road_surface_CRG_mode::ATTACHED0 } ,
        { "genuine", e_road_surface_CRG_mode::GENUINE } ,
        { "global", e_road_surface_CRG_mode::GLOBAL }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_surface_CRG_purpose>>enum_map()
{
    return {
        { "elevation", e_road_surface_CRG_purpose::ELEVATION } ,
        { "friction", e_road_surface_CRG_purpose::FRICTION }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_signals_signal_reference_elementType>>enum_map()
{
    return {
        { "object", e_road_signals_signal_reference_elementType::OBJECT } ,
        { "signal", e_road_signals_signal_reference_elementType::SIGNAL }
    };
}
template<>
inline std::vector<std::pair<std::string, e_countryCode_deprecated>>enum_map()
{
    return {
        { "OpenDRIVE", e_countryCode_deprecated::OPENDRIVE } ,
        { "Austria", e_countryCode_deprecated::AUSTRIA } ,
        { "Brazil", e_countryCode_deprecated::BRAZIL } ,
        { "China", e_countryCode_deprecated::CHINA } ,
        { "France", e_countryCode_deprecated::FRANCE } ,
        { "Germany", e_countryCode_deprecated::GERMANY } ,
        { "Italy", e_countryCode_deprecated::ITALY } ,
        { "Switzerland", e_countryCode_deprecated::SWITZERLAND } ,
        { "USA", e_countryCode_deprecated::USA }
    };
}
template<>
inline std::vector<std::pair<std::string, e_direction>>enum_map()
{
    return {
        { "same", e_direction::SAME } ,
        { "opposite", e_direction::OPPOSITE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_maxSpeedString>>enum_map()
{
    return {
        { "no limit", e_maxSpeedString::NO_LIMIT } ,
        { "undefined", e_maxSpeedString::UNDEFINED }
    };
}
template<>
inline std::vector<std::pair<std::string, e_paramPoly3_pRange>>enum_map()
{
    return {
        { "arcLength", e_paramPoly3_pRange::ARCLENGTH } ,
        { "normalized", e_paramPoly3_pRange::NORMALIZED }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_link_elementType>>enum_map()
{
    return {
        { "road", e_road_link_elementType::ROAD } ,
        { "junction", e_road_link_elementType::JUNCTION }
    };
}
template<>
inline std::vector<std::pair<std::string, e_roadType>>enum_map()
{
    return {
        { "unknown", e_roadType::UNKNOWN } ,
        { "rural", e_roadType::RURAL } ,
        { "motorway", e_roadType::MOTORWAY } ,
        { "town", e_roadType::TOWN } ,
        { "lowSpeed", e_roadType::LOWSPEED } ,
        { "pedestrian", e_roadType::PEDESTRIAN } ,
        { "bicycle", e_roadType::BICYCLE } ,
        { "townExpressway", e_roadType::TOWNEXPRESSWAY } ,
        { "townCollector", e_roadType::TOWNCOLLECTOR } ,
        { "townArterial", e_roadType::TOWNARTERIAL } ,
        { "townPrivate", e_roadType::TOWNPRIVATE } ,
        { "townLocal", e_roadType::TOWNLOCAL } ,
        { "townPlayStreet", e_roadType::TOWNPLAYSTREET }
    };
}
template<>
inline std::vector<std::pair<std::string, e_trafficRule>>enum_map()
{
    return {
        { "RHT", e_trafficRule::RHT } ,
        { "LHT", e_trafficRule::LHT }
    };
}
template<>
inline std::vector<std::pair<std::string, e_borderType>>enum_map()
{
    return {
        { "concrete", e_borderType::CONCRETE } ,
        { "curb", e_borderType::CURB }
    };
}
template<>
inline std::vector<std::pair<std::string, e_bridgeType>>enum_map()
{
    return {
        { "concrete", e_bridgeType::CONCRETE } ,
        { "steel", e_bridgeType::STEEL } ,
        { "brick", e_bridgeType::BRICK } ,
        { "wood", e_bridgeType::WOOD }
    };
}
template<>
inline std::vector<std::pair<std::string, e_objectType>>enum_map()
{
    return {
        { "none", e_objectType::NONE } ,
        { "obstacle", e_objectType::OBSTACLE } ,
        { "car", e_objectType::CAR } ,
        { "pole", e_objectType::POLE } ,
        { "tree", e_objectType::TREE } ,
        { "vegetation", e_objectType::VEGETATION } ,
        { "barrier", e_objectType::BARRIER } ,
        { "building", e_objectType::BUILDING } ,
        { "parkingSpace", e_objectType::PARKINGSPACE } ,
        { "patch", e_objectType::PATCH } ,
        { "railing", e_objectType::RAILING } ,
        { "trafficIsland", e_objectType::TRAFFICISLAND } ,
        { "crosswalk", e_objectType::CROSSWALK } ,
        { "streetLamp", e_objectType::STREETLAMP } ,
        { "gantry", e_objectType::GANTRY } ,
        { "soundBarrier", e_objectType::SOUNDBARRIER } ,
        { "van", e_objectType::VAN } ,
        { "bus", e_objectType::BUS } ,
        { "trailer", e_objectType::TRAILER } ,
        { "bike", e_objectType::BIKE } ,
        { "motorbike", e_objectType::MOTORBIKE } ,
        { "tram", e_objectType::TRAM } ,
        { "train", e_objectType::TRAIN } ,
        { "pedestrian", e_objectType::PEDESTRIAN } ,
        { "wind", e_objectType::WIND } ,
        { "roadMark", e_objectType::ROADMARK }
    };
}
template<>
inline std::vector<std::pair<std::string, e_orientation>>enum_map()
{
    return {
        { "+", e_orientation::PLUS } ,
        { "-", e_orientation::MINUS } ,
        { "none", e_orientation::NONE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_outlineFillType>>enum_map()
{
    return {
        { "grass", e_outlineFillType::GRASS } ,
        { "concrete", e_outlineFillType::CONCRETE } ,
        { "cobble", e_outlineFillType::COBBLE } ,
        { "asphalt", e_outlineFillType::ASPHALT } ,
        { "pavement", e_outlineFillType::PAVEMENT } ,
        { "gravel", e_outlineFillType::GRAVEL } ,
        { "soil", e_outlineFillType::SOIL }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_objects_object_parkingSpace_access>>enum_map()
{
    return {
        { "all", e_road_objects_object_parkingSpace_access::ALL } ,
        { "car", e_road_objects_object_parkingSpace_access::CAR } ,
        { "women", e_road_objects_object_parkingSpace_access::WOMEN } ,
        { "handicapped", e_road_objects_object_parkingSpace_access::HANDICAPPED } ,
        { "bus", e_road_objects_object_parkingSpace_access::BUS } ,
        { "truck", e_road_objects_object_parkingSpace_access::TRUCK } ,
        { "electric", e_road_objects_object_parkingSpace_access::ELECTRIC } ,
        { "residents", e_road_objects_object_parkingSpace_access::RESIDENTS }
    };
}
template<>
inline std::vector<std::pair<std::string, e_sideType>>enum_map()
{
    return {
        { "left", e_sideType::LEFT } ,
        { "right", e_sideType::RIGHT } ,
        { "front", e_sideType::FRONT } ,
        { "rear", e_sideType::REAR }
    };
}
template<>
inline std::vector<std::pair<std::string, e_tunnelType>>enum_map()
{
    return {
        { "standard", e_tunnelType::STANDARD } ,
        { "underpass", e_tunnelType::UNDERPASS }
    };
}
template<>
inline std::vector<std::pair<std::string, e_accessRestrictionType>>enum_map()
{
    return {
        { "simulator", e_accessRestrictionType::SIMULATOR } ,
        { "autonomousTraffic", e_accessRestrictionType::AUTONOMOUSTRAFFIC } ,
        { "pedestrian", e_accessRestrictionType::PEDESTRIAN } ,
        { "passengerCar", e_accessRestrictionType::PASSENGERCAR } ,
        { "bus", e_accessRestrictionType::BUS } ,
        { "delivery", e_accessRestrictionType::DELIVERY } ,
        { "emergency", e_accessRestrictionType::EMERGENCY } ,
        { "taxi", e_accessRestrictionType::TAXI } ,
        { "throughTraffic", e_accessRestrictionType::THROUGHTRAFFIC } ,
        { "truck", e_accessRestrictionType::TRUCK } ,
        { "bicycle", e_accessRestrictionType::BICYCLE } ,
        { "motorcycle", e_accessRestrictionType::MOTORCYCLE } ,
        { "none", e_accessRestrictionType::NONE } ,
        { "trucks", e_accessRestrictionType::TRUCKS }
    };
}
template<>
inline std::vector<std::pair<std::string, e_laneType>>enum_map()
{
    return {
        { "shoulder", e_laneType::SHOULDER } ,
        { "border", e_laneType::BORDER } ,
        { "driving", e_laneType::DRIVING } ,
        { "stop", e_laneType::STOP } ,
        { "none", e_laneType::NONE } ,
        { "restricted", e_laneType::RESTRICTED } ,
        { "parking", e_laneType::PARKING } ,
        { "median", e_laneType::MEDIAN } ,
        { "biking", e_laneType::BIKING } ,
        { "sidewalk", e_laneType::SIDEWALK } ,
        { "curb", e_laneType::CURB } ,
        { "exit", e_laneType::EXIT } ,
        { "entry", e_laneType::ENTRY } ,
        { "onRamp", e_laneType::ONRAMP } ,
        { "offRamp", e_laneType::OFFRAMP } ,
        { "connectingRamp", e_laneType::CONNECTINGRAMP } ,
        { "bidirectional", e_laneType::BIDIRECTIONAL } ,
        { "special1", e_laneType::SPECIAL1 } ,
        { "special2", e_laneType::SPECIAL2 } ,
        { "special3", e_laneType::SPECIAL3 } ,
        { "roadWorks", e_laneType::ROADWORKS } ,
        { "tram", e_laneType::TRAM } ,
        { "rail", e_laneType::RAIL } ,
        { "bus", e_laneType::BUS } ,
        { "taxi", e_laneType::TAXI } ,
        { "HOV", e_laneType::HOV } ,
        { "mwyEntry", e_laneType::MWYENTRY } ,
        { "mwyExit", e_laneType::MWYEXIT }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>>enum_map()
{
    return {
        { "increase", e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::INCREASE } ,
        { "decrease", e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::DECREASE } ,
        { "both", e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::BOTH } ,
        { "none", e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::NONE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_lanes_laneSection_lr_lane_access_rule>>enum_map()
{
    return {
        { "allow", e_road_lanes_laneSection_lr_lane_access_rule::ALLOW } ,
        { "deny", e_road_lanes_laneSection_lr_lane_access_rule::DENY }
    };
}
template<>
inline std::vector<std::pair<std::string, e_roadMarkColor>>enum_map()
{
    return {
        { "standard", e_roadMarkColor::STANDARD } ,
        { "blue", e_roadMarkColor::BLUE } ,
        { "green", e_roadMarkColor::GREEN } ,
        { "red", e_roadMarkColor::RED } ,
        { "white", e_roadMarkColor::WHITE } ,
        { "yellow", e_roadMarkColor::YELLOW } ,
        { "orange", e_roadMarkColor::ORANGE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_roadMarkRule>>enum_map()
{
    return {
        { "no passing", e_roadMarkRule::NO_PASSING } ,
        { "caution", e_roadMarkRule::CAUTION } ,
        { "none", e_roadMarkRule::NONE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_roadMarkType>>enum_map()
{
    return {
        { "none", e_roadMarkType::NONE } ,
        { "solid", e_roadMarkType::SOLID } ,
        { "broken", e_roadMarkType::BROKEN } ,
        { "solid solid", e_roadMarkType::SOLID_SOLID } ,
        { "solid broken", e_roadMarkType::SOLID_BROKEN } ,
        { "broken solid", e_roadMarkType::BROKEN_SOLID } ,
        { "broken broken", e_roadMarkType::BROKEN_BROKEN } ,
        { "botts dots", e_roadMarkType::BOTTS_DOTS } ,
        { "grass", e_roadMarkType::GRASS } ,
        { "curb", e_roadMarkType::CURB } ,
        { "custom", e_roadMarkType::CUSTOM } ,
        { "edge", e_roadMarkType::EDGE }
    };
}
template<>
inline std::vector<std::pair<std::string, e_roadMarkWeight>>enum_map()
{
    return {
        { "standard", e_roadMarkWeight::STANDARD } ,
        { "bold", e_roadMarkWeight::BOLD }
    };
}
template<>
inline std::vector<std::pair<std::string, t_bool>>enum_map()
{
    return {
        { "true", t_bool::TRUE } ,
        { "false", t_bool::FALSE }
    };
}
//Begin Forward Declarations
struct _OpenDriveElement;
struct t_dataQuality;
struct t_dataQuality_Error;
struct t_dataQuality_RawData;
struct t_header;
struct t_header_GeoReference;
struct t_header_Offset;
struct t_include;
struct t_userData;
struct t_road_railroad;
struct t_road_railroad_switch;
struct t_road_railroad_switch_mainTrack;
struct t_road_railroad_switch_partner;
struct t_road_railroad_switch_sideTrack;
struct t_station;
struct t_station_platform;
struct t_station_platform_segment;
struct t_junction;
struct t_junction_connection;
struct t_junction_connection_laneLink;
struct t_junction_controller;
struct t_junction_predecessorSuccessor;
struct t_junction_priority;
struct t_junction_surface;
struct t_junction_surface_CRG;
struct t_junctionGroup;
struct t_junctionGroup_junctionReference;
struct t_controller;
struct t_controller_control;
struct t_road_signals;
struct t_road_signals_signal;
struct t_road_signals_signal_dependency;
struct t_road_signals_signal_positionInertial;
struct t_road_signals_signal_positionRoad;
struct t_road_signals_signal_reference;
struct t_road_signals_signalReference;
struct t_road;
struct t_road_elevationProfile;
struct t_road_elevationProfile_elevation;
struct t_road_lateralProfile;
struct t_road_lateralProfile_shape;
struct t_road_lateralProfile_superelevation;
struct t_road_link;
struct t_road_link_predecessorSuccessor;
struct t_road_planView;
struct t_road_planView_geometry;
struct t_road_planView_geometry_arc;
struct t_road_planView_geometry_line;
struct t_road_planView_geometry_paramPoly3;
struct t_road_planView_geometry_poly3;
struct t_road_planView_geometry_spiral;
struct t_road_surface;
struct t_road_surface_CRG;
struct t_road_type;
struct t_road_type_speed;
struct t_road_objects;
struct t_road_objects_bridge;
struct t_road_objects_object;
struct t_road_objects_object_borders;
struct t_road_objects_object_borders_border;
struct t_road_objects_object_markings;
struct t_road_objects_object_markings_marking;
struct t_road_objects_object_markings_marking_cornerReference;
struct t_road_objects_object_material;
struct t_road_objects_object_outlines;
struct t_road_objects_object_outlines_outline;
struct t_road_objects_object_outlines_outline_cornerLocal;
struct t_road_objects_object_outlines_outline_cornerRoad;
struct t_road_objects_object_parkingSpace;
struct t_road_objects_object_repeat;
struct t_road_objects_objectReference;
struct t_road_objects_tunnel;
struct t_road_lanes;
struct t_road_lanes_laneOffset;
struct t_road_lanes_laneSection;
struct t_road_lanes_laneSection_center;
struct t_road_lanes_laneSection_lr_lane;
struct t_road_lanes_laneSection_center_lane;
struct t_road_lanes_laneSection_lcr_lane_link;
struct t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor;
struct t_road_lanes_laneSection_lcr_lane_roadMark;
struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit;
struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line;
struct t_road_lanes_laneSection_lcr_lane_roadMark_sway;
struct t_road_lanes_laneSection_lcr_lane_roadMark_type;
struct t_road_lanes_laneSection_lcr_lane_roadMark_type_line;
struct t_road_lanes_laneSection_left;
struct t_road_lanes_laneSection_left_lane;
struct t_road_lanes_laneSection_lr_lane_access;
struct t_road_lanes_laneSection_lr_lane_border;
struct t_road_lanes_laneSection_lr_lane_height;
struct t_road_lanes_laneSection_lr_lane_material;
struct t_road_lanes_laneSection_lr_lane_rule;
struct t_road_lanes_laneSection_lr_lane_speed;
struct t_road_lanes_laneSection_lr_lane_width;
struct t_road_lanes_laneSection_right;
struct t_road_lanes_laneSection_right_lane;
struct t_road_objects_object_laneValidity;
//End Forward Declarations
struct XODR_EXPORT t_road_signals_signal_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<t_road_signals_signal_positionRoad>                 m_positionRoad; //xs:element
    std::shared_ptr<t_road_signals_signal_positionInertial>                 m_positionInertial; //xs:element
public:
    t_road_signals_signal_U(){};
    t_road_signals_signal_U(pugi::xml_node node);
    ~t_road_signals_signal_U(){};
};
struct XODR_EXPORT t_road_planView_geometry_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::shared_ptr<t_road_planView_geometry_line>                 m_line; //xs:element
    std::shared_ptr<t_road_planView_geometry_spiral>                 m_spiral; //xs:element
    std::shared_ptr<t_road_planView_geometry_arc>                 m_arc; //xs:element
    std::shared_ptr<t_road_planView_geometry_poly3>                 m_poly3; //xs:element
    std::shared_ptr<t_road_planView_geometry_paramPoly3>                 m_paramPoly3; //xs:element
public:
    t_road_planView_geometry_U(){};
    t_road_planView_geometry_U(pugi::xml_node node);
    ~t_road_planView_geometry_U(){};
};
struct XODR_EXPORT t_road_objects_object_outlines_outline_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::vector<std::shared_ptr<t_road_objects_object_outlines_outline_cornerRoad>>                 m_cornerRoads; //xs:element
    std::vector<std::shared_ptr<t_road_objects_object_outlines_outline_cornerLocal>>                 m_cornerLocals; //xs:element
public:
    t_road_objects_object_outlines_outline_U(){};
    t_road_objects_object_outlines_outline_U(pugi::xml_node node);
    ~t_road_objects_object_outlines_outline_U(){};
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane_U	// TODO: >> Should be union - will have to handle properly
{
public:
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_border>>                 m_borders; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_width>>                 m_widths; //xs:element
public:
    t_road_lanes_laneSection_lr_lane_U(){};
    t_road_lanes_laneSection_lr_lane_U(pugi::xml_node node);
    ~t_road_lanes_laneSection_lr_lane_U(){};
};
struct XODR_EXPORT _OpenDriveElement
{
/**/
//Write your Abstract Methods here virtual f()=0;
public:
	_OpenDriveElement(){};
	virtual ~_OpenDriveElement(){};
};
struct XODR_EXPORT t_dataQuality
{
/*Raw data or data from external sources that is integrated in OpenDRIVE may be of varying quality. It is possible to describe quality and accuracy of external data in OpenDRIVE.The description of the data quality is represented by <dataQuality> elements. They may be stored at any position in OpenDRIVE.Measurement data derived from external sources like GPS that is integrated in OpenDRIVE may be inaccurate. The error range, given in [m], may be listed in the application.*/
public:
	t_dataQuality(){};
	t_dataQuality(pugi::xml_node node);
	virtual ~t_dataQuality(){};
public:
    std::shared_ptr<t_dataQuality_Error>                 m_error; //xs:element
    std::shared_ptr<t_dataQuality_RawData>                 m_rawData; //xs:element
};
struct XODR_EXPORT t_dataQuality_Error
{
/*The absolute or relative errors of road data are described by <error> elements within the <dataQuality> element.*/
public:
	t_dataQuality_Error(){};
	t_dataQuality_Error(pugi::xml_node node);
	virtual ~t_dataQuality_Error(){};
public:
	//Absolute error of the road data in x/y direction
	double	    xyAbsolute; //  required
	//Absolute error of the road data in z direction
	double	    zAbsolute; //  required
	//Relative error of the road data in x/y direction
	double	    xyRelative; //  required
	//Relative error of the road data in z direction
	double	    zRelative; //  required
};
struct XODR_EXPORT t_dataQuality_RawData
{
/*Some basic metadata containing information about raw data included in OpenDRIVE is described by the <rawData> element within the <dataQuality> element. */
public:
	t_dataQuality_RawData(){};
	t_dataQuality_RawData(pugi::xml_node node);
	virtual ~t_dataQuality_RawData(){};
public:
	//Date of the delivery of raw data, to be given in ISO 8601 notification (YYYY-MM-DDTHH:MM:SS) [9]. Time-of-day may be omitted
	std::string	    date; //  required
	//Source that has been used for retrieving the raw data; further sources to be added in upcoming versions. For values see UML Model
	e_dataQuality_RawData_Source	    source; //  required
	//Comments concerning the @source . Free text, depending on the application
	std::string	    sourceComment; //  optional
	//Information about the kind of data handling before exporting data into the ASAM OpenDRIVE file. For values see UML Model
	e_dataQuality_RawData_PostProcessing	    postProcessing; //  required
	//Comments concerning the postprocessing attribute. Free text, depending on the application
	std::string	    postProcessingComment; //  optional
};
struct XODR_EXPORT t_header   : public _OpenDriveElement
{
/**/
public:
	t_header(){};
	t_header(pugi::xml_node node);
	virtual ~t_header(){};
public:
	//Major revision number of OpenDRIVE format
	const int	    revMajor=1; //  required
	//Minor revision number of OpenDRIVE format; 6 for OpenDrive 1.6
	int	    revMinor; //  required
	//Database name
	std::string	    name; //  optional
	//Version of this road network
	std::string	    version; //  optional
	//Time/date of database creation according to ISO 8601 (preference: YYYY-MM-DDThh:mm:ss)
	std::string	    date; //  optional
	//Maximum inertial y value
	double	    north; //  optional
	//Minimum inertial y value
	double	    south; //  optional
	//Maximum inertial x value
	double	    east; //  optional
	//Minimum inertial x value
	double	    west; //  optional
	//Vendor name
	std::string	    vendor; //  optional
    std::shared_ptr<t_header_GeoReference>                 m_geoReference; //xs:element
    std::shared_ptr<t_header_Offset>                 m_offset; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_header_GeoReference
{
/*Spatial reference systems are standardized by the European Petroleum Survey Group Geodesy (EPSG) and are defined by parameters describing the geodetic datum. A geodetic datum is a coordinate reference system for a collection of positions that are relative to an ellipsoid model of the earth. A geodetic datum is described by a projection string according to PROJ, that is, a format for the exchange of data between two coordinate systems. This data shall be marked as CDATA, because it may contain characters that interfere with the XML syntax of an element’s attribute.In OpenDRIVE, the information about the geographic reference of an OpenDRIVE dataset is represented by the <geoReference> element within the <header> element.*/
public:
	t_header_GeoReference(){};
	t_header_GeoReference(pugi::xml_node node);
	virtual ~t_header_GeoReference(){};
public:
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_header_Offset   : public _OpenDriveElement
{
/**/
public:
	t_header_Offset(){};
	t_header_Offset(pugi::xml_node node);
	virtual ~t_header_Offset(){};
public:
	//Inertial x offset
	double	    x; //  required
	//Inertial y offset
	double	    y; //  required
	//Inertial z offset
	double	    z; //  required
	//Heading offset (rotation around resulting z-axis)
	float	    hdg; //  required
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_include
{
/*OpenDRIVE allows including external files into the OpenDRIVE file. The processing of the files depends on the application.Included data is represented by <include> elements. They may be stored at any position in OpenDRIVE.*/
public:
	t_include(){};
	t_include(pugi::xml_node node);
	virtual ~t_include(){};
public:
	//Location of the file that is to be included
	std::string	    file; //  required
};
struct XODR_EXPORT t_userData
{
/*Ancillary data should be described near the element it refers to. Ancillary data contains data that are not yet described in OpenDRIVE, or data that is needed by an application for a specific reason. Examples are different road textures.In OpenDRIVE, ancillary data is represented by <userData> elements. They may be stored at any element in OpenDRIVE.*/
public:
	t_userData(){};
	t_userData(pugi::xml_node node);
	virtual ~t_userData(){};
public:
	//Code for the user data. Free text, depending on application.
	std::string	    code; //  required
	//User data. Free text, depending on application.
	std::string	    value; //  optional
};
struct XODR_EXPORT t_road_railroad   : public _OpenDriveElement
{
/**/
public:
	t_road_railroad(){};
	t_road_railroad(pugi::xml_node node);
	virtual ~t_road_railroad(){};
public:
    std::vector<std::shared_ptr<t_road_railroad_switch>>                 m_switchs; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_railroad_switch   : public _OpenDriveElement
{
/**/
public:
	t_road_railroad_switch(){};
	t_road_railroad_switch(pugi::xml_node node);
	virtual ~t_road_railroad_switch(){};
public:
	//Unique name of the switch
	std::string	    name; //  required
	//Unique ID of the switch; preferably an integer number, see uint32_t
	std::string	    id; //  required
	//Either a switch can be operated (dynamic) or it is in a static position. For values see UML Model
	e_road_railroad_switch_position	    position; //  required
    std::shared_ptr<t_road_railroad_switch_mainTrack>                 m_mainTrack; //xs:element
    std::shared_ptr<t_road_railroad_switch_sideTrack>                 m_sideTrack; //xs:element
    std::shared_ptr<t_road_railroad_switch_partner>                 m_partner; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_railroad_switch_mainTrack   : public _OpenDriveElement
{
/**/
public:
	t_road_railroad_switch_mainTrack(){};
	t_road_railroad_switch_mainTrack(pugi::xml_node node);
	virtual ~t_road_railroad_switch_mainTrack(){};
public:
	//Unique ID of the main track, that is, the <road> element. Must be consistent with parent containing this <railroad> element.
	std::string	    id; //  required
	//s-coordinate of the switch, that is, the point where main track and side track meet
	t_grEqZero	    s; //  required
	//direction, relative to the s-direction, on the main track for entering the side track via the switch
	e_elementDir	    dir; //  required
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_railroad_switch_partner   : public _OpenDriveElement
{
/**/
public:
	t_road_railroad_switch_partner(){};
	t_road_railroad_switch_partner(pugi::xml_node node);
	virtual ~t_road_railroad_switch_partner(){};
public:
	//Unique name of the partner switch
	std::string	    name; //  optional
	//Unique ID of the partner switch
	std::string	    id; //  required
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_railroad_switch_sideTrack   : public _OpenDriveElement
{
/**/
public:
	t_road_railroad_switch_sideTrack(){};
	t_road_railroad_switch_sideTrack(pugi::xml_node node);
	virtual ~t_road_railroad_switch_sideTrack(){};
public:
	//Unique ID of the side track, that is, the <road> element
	std::string	    id; //  required
	//s-coordinate of the switch on the side track
	t_grEqZero	    s; //  required
	//direction, relative to the s-direction, on the side track for after entering it via the switch
	e_elementDir	    dir; //  required
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_station   : public _OpenDriveElement
{
/**/
public:
	t_station(){};
	t_station(pugi::xml_node node);
	virtual ~t_station(){};
public:
	//Unique name of the station
	std::string	    name; //  required
	//Unique ID within database
	std::string	    id; //  required
	//Type of station. Free text, depending on the application.e.g.: small, medium, large
	e_station_type	    type; //  optional
    std::vector<std::shared_ptr<t_station_platform>>                 m_platforms; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_station_platform   : public _OpenDriveElement
{
/**/
public:
	t_station_platform(){};
	t_station_platform(pugi::xml_node node);
	virtual ~t_station_platform(){};
public:
	//Name of the platform. May be chosen freely.
	std::string	    name; //  optional
	//Unique ID within database
	std::string	    id; //  required
    std::vector<std::shared_ptr<t_station_platform_segment>>                 m_segments; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_station_platform_segment   : public _OpenDriveElement
{
/**/
public:
	t_station_platform_segment(){};
	t_station_platform_segment(pugi::xml_node node);
	virtual ~t_station_platform_segment(){};
public:
	//Unique ID of the <road> element (track) that accompanies the platform
	std::string	    roadId; //  required
	//Minimum s-coordinate on <road> element that has an adjacent platform
	t_grEqZero	    sStart; //  required
	//Maximum s-coordiante on <road> element that has an adjacent platform
	t_grEqZero	    sEnd; //  required
	//Side of track on which the platform is situated when going from sStart to sEnd. For values see UML Model
	e_station_platform_segment_side	    side; //  required
};
struct XODR_EXPORT t_junction   : public _OpenDriveElement
{
/**/
public:
	t_junction(){};
	t_junction(pugi::xml_node node);
	virtual ~t_junction(){};
public:
	//Name of the junction. May be chosen freely.
	std::string	    name; //  optional
	//Unique ID within database
	std::string	    id; //  required
	//Type of the junction; regular junctions are of type "default". The attribute is mandatory for virtual junctions
	e_junction_type	    type; //  optional
    std::vector<std::shared_ptr<t_junction_connection>>                 m_connections; //xs:element
    std::vector<std::shared_ptr<t_junction_priority>>                 m_prioritys; //xs:element
    std::vector<std::shared_ptr<t_junction_controller>>                 m_controllers; //xs:element
    std::shared_ptr<t_junction_surface>                 m_surface; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_junction_connection   : public _OpenDriveElement
{
/**/
public:
	t_junction_connection(){};
	t_junction_connection(pugi::xml_node node);
	virtual ~t_junction_connection(){};
public:
	//Unique ID within the junction
	std::string	    id; //  required
	//Type of the connection, regular connections are type “default” mandatory attribute for virtual connections
	e_junction_type	    type; //  optional
	//ID of the incoming road
	std::string	    incomingRoad; //  optional
	//ID of the connecting road
	std::string	    connectingRoad; //  optional
	//Contact point on the connecting road. For values, see UML Model
	std::string	    contactPoint; //  optional
    std::shared_ptr<t_junction_predecessorSuccessor>                 m_predecessor; //xs:element
    std::shared_ptr<t_junction_predecessorSuccessor>                 m_successor; //xs:element
    std::vector<std::shared_ptr<t_junction_connection_laneLink>>                 m_laneLinks; //xs:element
};
struct XODR_EXPORT t_junction_connection_laneLink   : public _OpenDriveElement
{
/**/
public:
	t_junction_connection_laneLink(){};
	t_junction_connection_laneLink(pugi::xml_node node);
	virtual ~t_junction_connection_laneLink(){};
public:
	//ID of the incoming lane
	int	    from; //  required
	//ID of the connection lane
	int	    to; //  required
};
struct XODR_EXPORT t_junction_controller   : public _OpenDriveElement
{
/**/
public:
	t_junction_controller(){};
	t_junction_controller(pugi::xml_node node);
	virtual ~t_junction_controller(){};
public:
	//ID of the controller
	std::string	    id; //  required
	//Type of control for this junction. Free text, depending on the application.
	std::string	    type; //  optional
	//Sequence number (priority) of this controller with respect to other controllers in the same junction
	uint64_t	    sequence; //  optional
};
struct XODR_EXPORT t_junction_predecessorSuccessor   : public _OpenDriveElement
{
/**/
public:
	t_junction_predecessorSuccessor(){};
	t_junction_predecessorSuccessor(pugi::xml_node node);
	virtual ~t_junction_predecessorSuccessor(){};
public:
	//Type of the linked element Currently only "road" is allowed.
	const std::string	    elementType="road"; //  required
	//ID of the linked element
	std::string	    elementId; //  required
	//s-coordinate where the connection meets the preceding / succeding road.
	t_grZero	    elementS; //  required
	//Direction, relative to the s-direction, of the connection on the preceding / succeding road
	e_elementDir	    elementDir; //  required
};
struct XODR_EXPORT t_junction_priority   : public _OpenDriveElement
{
/**/
public:
	t_junction_priority(){};
	t_junction_priority(pugi::xml_node node);
	virtual ~t_junction_priority(){};
public:
	//ID of the prioritized connecting road
	std::string	    high; //  optional
	//ID of the connecting road with lower priority
	std::string	    low; //  optional
};
struct XODR_EXPORT t_junction_surface   : public _OpenDriveElement
{
/**/
public:
	t_junction_surface(){};
	t_junction_surface(pugi::xml_node node);
	virtual ~t_junction_surface(){};
public:
    std::vector<std::shared_ptr<t_junction_surface_CRG>>                 m_CRGs; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_junction_surface_CRG   : public _OpenDriveElement
{
/**/
public:
	t_junction_surface_CRG(){};
	t_junction_surface_CRG(pugi::xml_node node);
	virtual ~t_junction_surface_CRG(){};
public:
	//Name of the file containing the CRG data
	std::string	    file; //  required
	//Attachment mode for the surface data.
	const e_road_surface_CRG_mode	    mode=e_road_surface_CRG_mode::GLOBAL; //  required
	//Physical purpose of the data contained in the CRG file; if the attribute is missing, data will be interpreted as elevation data.
	e_road_surface_CRG_purpose	    purpose; //  optional
	//z offset between CRG center line and inertial xy-plane(default = 0.0)
	double	    zOffset; //  optional
	//z scale factor for the surface description (default = 1.0)
	double	    zScale; //  optional
};
struct XODR_EXPORT t_junctionGroup   : public _OpenDriveElement
{
/**/
public:
	t_junctionGroup(){};
	t_junctionGroup(pugi::xml_node node);
	virtual ~t_junctionGroup(){};
public:
	//Name of the junction group. May be chosen freely.
	std::string	    name; //  optional
	//Unique ID within database
	std::string	    id; //  required
	//Type of junction groupFor values see UML Model
	e_junctionGroup_type	    type; //  required
    std::vector<std::shared_ptr<t_junctionGroup_junctionReference>>                 m_junctionReferences; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_junctionGroup_junctionReference   : public _OpenDriveElement
{
/**/
public:
	t_junctionGroup_junctionReference(){};
	t_junctionGroup_junctionReference(pugi::xml_node node);
	virtual ~t_junctionGroup_junctionReference(){};
public:
	//ID of the junction
	std::string	    junction; //  required
};
struct XODR_EXPORT t_controller   : public _OpenDriveElement
{
/**/
public:
	t_controller(){};
	t_controller(pugi::xml_node node);
	virtual ~t_controller(){};
public:
	//Unique ID within database
	std::string	    id; //  required
	//Name of the controller. May be chosen freely.
	std::string	    name; //  optional
	//Sequence number (priority) of this controller with respect to other controllers of same logical level
	uint64_t	    sequence; //  optional
    std::vector<std::shared_ptr<t_controller_control>>                 m_controls; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_controller_control   : public _OpenDriveElement
{
/**/
public:
	t_controller_control(){};
	t_controller_control(pugi::xml_node node);
	virtual ~t_controller_control(){};
public:
	//ID of the controlled signal
	std::string	    signalId; //  required
	//Type of control. Free Text, depends on the application.
	std::string	    type; //  optional
};
struct XODR_EXPORT t_road_signals   : public _OpenDriveElement
{
/**/
public:
	t_road_signals(){};
	t_road_signals(pugi::xml_node node);
	virtual ~t_road_signals(){};
public:
    std::vector<std::shared_ptr<t_road_signals_signal>>                 m_signals; //xs:element
    std::vector<std::shared_ptr<t_road_signals_signalReference>>                 m_signalReferences; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_signals_signal   : public _OpenDriveElement
{
/**/
public:
	t_road_signals_signal(){};
	t_road_signals_signal(pugi::xml_node node);
	virtual ~t_road_signals_signal(){};
public:
	//s-coordinate
	t_grEqZero	    s; //  required
	//t-coordinate
	double	    t; //  required
	//Unique ID of the signal within the OpenDRIVE file
	std::string	    id; //  required
	//Name of the signal. May be chosen freely.
	std::string	    name; //  optional
	//Indicates whether the signal is dynamic or static. Example: traffic light is dynamic
	t_yesNo	    dynamic; //  required
	//"+" = valid in positive s- direction"-" = valid in negative s- direction"none" = valid in both directions
	e_orientation	    orientation; //  required
	//z offset from the road to bottom edge of the signal. This represents the vertical clearance of the object. Relative to the reference line.
	double	    zOffset; //  required
	//Country code of the road, see ISO 3166-1, alpha-2 codes.
	e_countryCode	    country; //  optional
	//
	std::string	    countryRevision; //  optional
	//Type identifier according to country code or "-1" / "none". See extra document.
	std::string	    type; //  required
	//Subtype identifier according to country code or "-1" / "none"
	std::string	    subtype; //  required
	//Value of the signal, if value is given, unit is mandatory
	double	    value; //  optional
	//Unit of @value
	e_unit	    unit; //  optional
	//Height of the signal, measured from bottom edge of the signal
	t_grEqZero	    height; //  optional
	//Width of the signal
	t_grEqZero	    width; //  optional
	//Additional text associated with the signal, for example, text on city limit "City\nBadAibling"
	std::string	    text; //  optional
	//Heading offset of the signal (relative to @orientation, if orientation is equal to “+” or “-“)Heading offset of the signal (relative to reference line, if orientation is equal to “none” )
	double	    hOffset; //  optional
	//Pitch angle of the signal, relative to the inertial system (xy-plane)
	double	    pitch; //  optional
	//Roll angle of the signal after applying pitch, relative to the inertial system (x’’y’’-plane)
	double	    roll; //  optional
    std::vector<std::shared_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
    std::vector<std::shared_ptr<t_road_signals_signal_dependency>>                 m_dependencys; //xs:element
    std::vector<std::shared_ptr<t_road_signals_signal_reference>>                 m_references; //xs:element
   //group tag : reference g_additionalData
    std::shared_ptr<t_road_signals_signal_U>                 m_t_road_signals_signal; //xs:element
};
struct XODR_EXPORT t_road_signals_signal_dependency   : public _OpenDriveElement
{
/**/
public:
	t_road_signals_signal_dependency(){};
	t_road_signals_signal_dependency(pugi::xml_node node);
	virtual ~t_road_signals_signal_dependency(){};
public:
	//ID of the controlled signal
	std::string	    id; //  required
	//Type of the dependency, Free text, depending on application
	std::string	    type; //  optional
};
struct XODR_EXPORT t_road_signals_signal_positionInertial   : public _OpenDriveElement
{
/**/
public:
	t_road_signals_signal_positionInertial(){};
	t_road_signals_signal_positionInertial(pugi::xml_node node);
	virtual ~t_road_signals_signal_positionInertial(){};
public:
	//x-coordinate
	double	    x; //  required
	//y-coordinate
	double	    y; //  required
	//z-coordinate
	double	    z; //  required
	//Heading of the signal, relative to the inertial system
	double	    hdg; //  required
	//Pitch angle of the signal after applying heading, relative to the inertial system (x’y’-plane)
	double	    pitch; //  optional
	//Roll angle of the signal after applying heading and pitch, relative to the inertial system (x’’y’’-plane)
	double	    roll; //  optional
};
struct XODR_EXPORT t_road_signals_signal_positionRoad   : public _OpenDriveElement
{
/**/
public:
	t_road_signals_signal_positionRoad(){};
	t_road_signals_signal_positionRoad(pugi::xml_node node);
	virtual ~t_road_signals_signal_positionRoad(){};
public:
	//Unique ID of the referenced road
	std::string	    roadId; //  required
	//s-coordinate
	t_grEqZero	    s; //  required
	//t-coordinate
	double	    t; //  required
	//z offset from road level to bottom edge of the signal
	double	    zOffset; //  required
	//Heading offset of the signal (relative to @orientation)
	double	    hOffset; //  required
	//Pitch angle of the signal after applying hOffset, relative to the inertial system (x’y’-plane)
	double	    pitch; //  optional
	//Roll angle of the signal after applying hOffset and pitch, relative to the inertial system (x’’y’’-plane)
	double	    roll; //  optional
};
struct XODR_EXPORT t_road_signals_signal_reference   : public _OpenDriveElement
{
/**/
public:
	t_road_signals_signal_reference(){};
	t_road_signals_signal_reference(pugi::xml_node node);
	virtual ~t_road_signals_signal_reference(){};
public:
	//Type of the linked element, For values see UML Model
	e_road_signals_signal_reference_elementType	    elementType; //  required
	//Unique ID of the linked element
	std::string	    elementId; //  required
	//Type of the linkage Free text, depending on application
	std::string	    type; //  optional
};
struct XODR_EXPORT t_road_signals_signalReference   : public _OpenDriveElement
{
/**/
public:
	t_road_signals_signalReference(){};
	t_road_signals_signalReference(pugi::xml_node node);
	virtual ~t_road_signals_signalReference(){};
public:
	//s-coordinate
	t_grEqZero	    s; //  required
	//t-coordinate
	double	    t; //  required
	//Unique ID of the referenced signal within the database
	std::string	    id; //  required
	//"+" = valid in positive s-direction"-" = valid in negative s-direction"none" = valid in both directions
	e_orientation	    orientation; //  required
    std::vector<std::shared_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road   : public _OpenDriveElement
{
/**/
public:
	t_road(){};
	t_road(pugi::xml_node node);
	virtual ~t_road(){};
public:
	//Name of the road. May be chosen freely.
	std::string	    name; //  optional
	//Total length of the reference line in the xy-plane. Change in length due to elevation is not considered
	std::string	    length; //  required
	//Unique ID within the database. If it represents an integer number, it should comply to uint32_t and stay within the given range.
	std::string	    id; //  required
	//ID of the junction to which the road belongs as a connecting road (= -1 for none)
	std::string	    junction; //  required
	//Basic rule for using the road; RHT=right-hand traffic, LHT=left-hand traffic. When this attribute is missing, RHT is assumed.
	e_trafficRule	    rule; //  optional
    std::shared_ptr<t_road_link>                 m_link; //xs:element
    std::vector<std::shared_ptr<t_road_type>>                 m_types; //xs:element
    std::shared_ptr<t_road_planView>                 m_planView; //xs:element
    std::shared_ptr<t_road_elevationProfile>                 m_elevationProfile; //xs:element
    std::shared_ptr<t_road_lateralProfile>                 m_lateralProfile; //xs:element
    std::shared_ptr<t_road_lanes>                 m_lanes; //xs:element
    std::shared_ptr<t_road_objects>                 m_objects; //xs:element
    std::shared_ptr<t_road_signals>                 m_signals; //xs:element
    std::shared_ptr<t_road_surface>                 m_surface; //xs:element
    std::shared_ptr<t_road_railroad>                 m_railroad; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_elevationProfile   : public _OpenDriveElement
{
/**/
public:
	t_road_elevationProfile(){};
	t_road_elevationProfile(pugi::xml_node node);
	virtual ~t_road_elevationProfile(){};
public:
    std::vector<std::shared_ptr<t_road_elevationProfile_elevation>>                 m_elevations; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_elevationProfile_elevation   : public _OpenDriveElement
{
/**/
public:
	t_road_elevationProfile_elevation(){};
	t_road_elevationProfile_elevation(pugi::xml_node node);
	virtual ~t_road_elevationProfile_elevation(){};
public:
	//s-coordinate of start position
	t_grEqZero	    s; //  required
	//Polynom parameter a, elevation at @s (ds=0)
	double	    a; //  required
	//Polynom parameter b
	double	    b; //  required
	//Polynom parameter c
	double	    c; //  required
	//Polynom parameter d
	double	    d; //  required
};
struct XODR_EXPORT t_road_lateralProfile   : public _OpenDriveElement
{
/**/
public:
	t_road_lateralProfile(){};
	t_road_lateralProfile(pugi::xml_node node);
	virtual ~t_road_lateralProfile(){};
public:
    std::vector<std::shared_ptr<t_road_lateralProfile_superelevation>>                 m_superelevations; //xs:element
    std::vector<std::shared_ptr<t_road_lateralProfile_shape>>                 m_shapes; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lateralProfile_shape   : public _OpenDriveElement
{
/**/
public:
	t_road_lateralProfile_shape(){};
	t_road_lateralProfile_shape(pugi::xml_node node);
	virtual ~t_road_lateralProfile_shape(){};
public:
	//s-coordinate of start position
	t_grEqZero	    s; //  required
	//t-coordinate of start position
	double	    t; //  required
	//Polynom parameter a, relative height at @t (dt=0)
	double	    a; //  required
	//Polynom parameter b
	double	    b; //  required
	//Polynom parameter c
	double	    c; //  required
	//Polynom parameter d
	double	    d; //  required
};
struct XODR_EXPORT t_road_lateralProfile_superelevation   : public _OpenDriveElement
{
/**/
public:
	t_road_lateralProfile_superelevation(){};
	t_road_lateralProfile_superelevation(pugi::xml_node node);
	virtual ~t_road_lateralProfile_superelevation(){};
public:
	//s-coordinate of start position
	t_grEqZero	    s; //  required
	//Polynom parameter a, superelevation at @s (ds=0)
	double	    a; //  required
	//Polynom parameter b
	double	    b; //  required
	//Polynom parameter c
	double	    c; //  required
	//Polynom parameter d
	double	    d; //  required
};
struct XODR_EXPORT t_road_link   : public _OpenDriveElement
{
/**/
public:
	t_road_link(){};
	t_road_link(pugi::xml_node node);
	virtual ~t_road_link(){};
public:
    std::shared_ptr<t_road_link_predecessorSuccessor>                 m_predecessor; //xs:element
    std::shared_ptr<t_road_link_predecessorSuccessor>                 m_successor; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_link_predecessorSuccessor   : public _OpenDriveElement
{
/**/
public:
	t_road_link_predecessorSuccessor(){};
	t_road_link_predecessorSuccessor(pugi::xml_node node);
	virtual ~t_road_link_predecessorSuccessor(){};
public:
	//ID of the linked element
	std::string	    elementId; //  required
	//Type of the linked element
	std::string	    elementType; //  optional
	//Contact point of link on the linked element
	std::string	    contactPoint; //  optional
	//Alternative to contactPoint for virtual junctions. Indicates a connection within the predecessor, meaning not at the start or end of the predecessor. Shall only be used for elementType "road"
	t_grEqZero	    elementS; //  optional
	//To be provided when elementS is used for the connection definition. Indicates the direction on the predecessor from which the road is entered.
	std::string	    elementDir; //  optional
};
struct XODR_EXPORT t_road_planView   : public _OpenDriveElement
{
/**/
public:
	t_road_planView(){};
	t_road_planView(pugi::xml_node node);
	virtual ~t_road_planView(){};
public:
    std::vector<std::shared_ptr<t_road_planView_geometry>>                 m_geometrys; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_planView_geometry   : public _OpenDriveElement
{
/**/
public:
	t_road_planView_geometry(){};
	t_road_planView_geometry(pugi::xml_node node);
	virtual ~t_road_planView_geometry(){};
public:
	//s-coordinate of start position
	t_grEqZero	    s; //  required
	//Start position (x inertial)
	double	    x; //  required
	//Start position (y inertial)
	double	    y; //  required
	//Start orientation (inertial heading)
	double	    hdg; //  required
	//Length of the element's reference line
	std::string	    length; //  required
    std::shared_ptr<t_road_planView_geometry_U>                 m_t_road_planView_geometry; //xs:element
};
struct XODR_EXPORT t_road_planView_geometry_arc   : public _OpenDriveElement
{
/**/
public:
	t_road_planView_geometry_arc(){};
	t_road_planView_geometry_arc(pugi::xml_node node);
	virtual ~t_road_planView_geometry_arc(){};
public:
	//Constant curvature throughout the element
	double	    curvature; //  required
};
struct XODR_EXPORT t_road_planView_geometry_line   : public _OpenDriveElement
{
/**/
public:
	t_road_planView_geometry_line(){};
	t_road_planView_geometry_line(pugi::xml_node node);
	virtual ~t_road_planView_geometry_line(){};
public:
};
struct XODR_EXPORT t_road_planView_geometry_paramPoly3   : public _OpenDriveElement
{
/**/
public:
	t_road_planView_geometry_paramPoly3(){};
	t_road_planView_geometry_paramPoly3(pugi::xml_node node);
	virtual ~t_road_planView_geometry_paramPoly3(){};
public:
	//Polynom parameter a for u
	double	    aU; //  required
	//Polynom parameter b for u
	double	    bU; //  required
	//Polynom parameter c for u
	double	    cU; //  required
	//Polynom parameter d for u
	double	    dU; //  required
	//Polynom parameter a for v
	double	    aV; //  required
	//Polynom parameter b for v
	double	    bV; //  required
	//Polynom parameter c for v
	double	    cV; //  required
	//Polynom parameter d for v
	double	    dV; //  required
	//Range of parameter p. - Case arcLength: p in [0, @length of <geometry>]- Case normalized: p in [0, 1]
	e_paramPoly3_pRange	    pRange; //  required
};
struct XODR_EXPORT t_road_planView_geometry_poly3   : public _OpenDriveElement
{
/**/
public:
	t_road_planView_geometry_poly3(){};
	t_road_planView_geometry_poly3(pugi::xml_node node);
	virtual ~t_road_planView_geometry_poly3(){};
public:
	//Polynom parameter a
	double	    a; //  required
	//Polynom parameter b
	double	    b; //  required
	//Polynom parameter c
	double	    c; //  required
	//Polynom parameter d
	double	    d; //  required
};
struct XODR_EXPORT t_road_planView_geometry_spiral   : public _OpenDriveElement
{
/**/
public:
	t_road_planView_geometry_spiral(){};
	t_road_planView_geometry_spiral(pugi::xml_node node);
	virtual ~t_road_planView_geometry_spiral(){};
public:
	//Curvature at the start of the element
	double	    curvStart; //  required
	//Curvature at the end of the element
	double	    curvEnd; //  required
};
struct XODR_EXPORT t_road_surface   : public _OpenDriveElement
{
/**/
public:
	t_road_surface(){};
	t_road_surface(pugi::xml_node node);
	virtual ~t_road_surface(){};
public:
    std::vector<std::shared_ptr<t_road_surface_CRG>>                 m_CRGs; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_surface_CRG   : public _OpenDriveElement
{
/**/
public:
	t_road_surface_CRG(){};
	t_road_surface_CRG(pugi::xml_node node);
	virtual ~t_road_surface_CRG(){};
public:
	//Name of the file containing the CRG data
	std::string	    file; //  required
	//Start of the application of CRG data(s-coordinate)
	t_grEqZero	    sStart; //  required
	//End of the application of CRG(s-coordinate)
	t_grEqZero	    sEnd; //  required
	//Orientation of the CRG data set relative to the parent <road> element
	e_direction	    orientation; //  required
	//Attachment mode for the surface data, see specification.
	e_road_surface_CRG_mode	    mode; //  required
	//Physical purpose of the data contained in the CRG file; if the attribute is missing, data will be interpreted as elevation data.
	e_road_surface_CRG_purpose	    purpose; //  optional
	//s-offset between CRG center line and reference line of the road (default = 0.0)
	double	    sOffset; //  optional
	//t-offset between CRG center line and reference line of the road (default = 0.0)
	double	    tOffset; //  optional
	//z-offset between CRG center line and reference line of the road (default = 0.0)
	double	    zOffset; //  optional
	//z-scale factor for the surface description (default = 1.0)
	double	    zScale; //  optional
	//Heading offset between CRG center line and reference line of the road (required for mode genuine only, default = 0.0)
	double	    hOffset; //  optional
};
struct XODR_EXPORT t_road_type   : public _OpenDriveElement
{
/**/
public:
	t_road_type(){};
	t_road_type(pugi::xml_node node);
	virtual ~t_road_type(){};
public:
	//s-coordinate of start position
	t_grEqZero	    s; //  required
	//For supported types, for values see UML model.
	e_roadType	    type; //  required
	//Country code of the road, see ISO 3166-1, alpha-2 codes.
	e_countryCode	    country; //  optional
    std::shared_ptr<t_road_type_speed>                 m_speed; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_type_speed   : public _OpenDriveElement
{
/**/
public:
	t_road_type_speed(){};
	t_road_type_speed(pugi::xml_node node);
	virtual ~t_road_type_speed(){};
public:
	//Maximum allowed speed. Given as string (only "no limit" / "undefined") or numerical value in the respective unit (see attribute unit). If the attribute unit is not specified, m/s is used as default.
	t_maxSpeed	    max; //  required
	//Unit of the attribute max. For values, see chapter “units”.
	e_unitSpeed	    unit; //  optional
};
struct XODR_EXPORT t_road_objects   : public _OpenDriveElement
{
/**/
public:
	t_road_objects(){};
	t_road_objects(pugi::xml_node node);
	virtual ~t_road_objects(){};
public:
    std::vector<std::shared_ptr<t_road_objects_object>>                 m_objects; //xs:element
    std::vector<std::shared_ptr<t_road_objects_objectReference>>                 m_objectReferences; //xs:element
    std::vector<std::shared_ptr<t_road_objects_tunnel>>                 m_tunnels; //xs:element
    std::vector<std::shared_ptr<t_road_objects_bridge>>                 m_bridges; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_bridge   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_bridge(){};
	t_road_objects_bridge(pugi::xml_node node);
	virtual ~t_road_objects_bridge(){};
public:
	//s-coordinate
	t_grEqZero	    s; //  required
	//Length of the bridge (in s-direction)
	t_grEqZero	    length; //  required
	//Name of the bridge. May be chosen freely.
	std::string	    name; //  optional
	//Unique ID within database
	std::string	    id; //  required
	//Type of bridge. For values see UML Model.
	e_bridgeType	    type; //  required
    std::vector<std::shared_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_object   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object(){};
	t_road_objects_object(pugi::xml_node node);
	virtual ~t_road_objects_object(){};
public:
	//t-coordinate of object's origin
	double	    t; //  required
	//z-offset of object's origin relative to the elevation of the reference line
	double	    zOffset; //  required
	//Type of object. For values, see UML.For a parking space, the <parkingSpace> element may be used additionally.
	e_objectType	    type; //  optional
	//Validity of object along s-axis (0.0 for point object)
	t_grEqZero	    validLength; //  optional
	//"+" = valid in positive s-direction"-" = valid in negative s-direction"none" = valid in both directions(does not affect the heading)
	e_orientation	    orientation; //  optional
	//Variant of a type
	std::string	    subtype; //  optional
	//Indicates whether the object is dynamic or static, default value is “no” (static). Dynamic object cannot change its position.
	t_yesNo	    dynamic; //  optional
	//Heading angle of the object relative to road direction
	double	    hdg; //  optional
	//Name of the object. May be chosen freely.
	std::string	    name; //  optional
	//Pitch angle relative to the x/y-plane
	double	    pitch; //  optional
	//Unique ID within database
	std::string	    id; //  required
	//Roll angle relative to the x/y-plane
	double	    roll; //  optional
	//Height of the object's bounding box. @height is defined in the local coordinate system u/v along the z-axis
	double	    height; //  optional
	//s-coordinate of object's origin
	t_grEqZero	    s; //  required
	//Length of the object's bounding box, alternative to @radius.@length is defined in the local coordinate system u/v along the v-axis
	double	    length; //  optional
	//Width of the object's bounding box, alternative to @radius.@width is defined in the local coordinate system u/v along the u-axis
	double	    width; //  optional
	//radius of the circular object's bounding box, alternative to @length and @width. @radius is defined in the local coordinate system u/v
	double	    radius; //  optional
    std::vector<std::shared_ptr<t_road_objects_object_repeat>>                 m_repeats; //xs:element
    std::shared_ptr<t_road_objects_object_outlines_outline>                 m_outline; //xs:element
    std::shared_ptr<t_road_objects_object_outlines>                 m_outlines; //xs:element
    std::vector<std::shared_ptr<t_road_objects_object_material>>                 m_materials; //xs:element
    std::vector<std::shared_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
    std::shared_ptr<t_road_objects_object_parkingSpace>                 m_parkingSpace; //xs:element
    std::shared_ptr<t_road_objects_object_markings>                 m_markings; //xs:element
    std::shared_ptr<t_road_objects_object_borders>                 m_borders; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_object_borders   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_borders(){};
	t_road_objects_object_borders(pugi::xml_node node);
	virtual ~t_road_objects_object_borders(){};
public:
    std::vector<std::shared_ptr<t_road_objects_object_borders_border>>                 m_borders; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_object_borders_border   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_borders_border(){};
	t_road_objects_object_borders_border(pugi::xml_node node);
	virtual ~t_road_objects_object_borders_border(){};
public:
	//Border width
	t_grEqZero	    width; //  required
	//Appearance of border. For values see UML Model.
	e_borderType	    type; //  required
	//ID of the outline to use
	uint64_t	    outlineId; //  required
	//Use all outline points for border. “true” is used as default.
	t_bool	    useCompleteOutline; //  optional
    std::vector<std::shared_ptr<t_road_objects_object_markings_marking_cornerReference>>                 m_cornerReferences; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_object_markings   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_markings(){};
	t_road_objects_object_markings(pugi::xml_node node);
	virtual ~t_road_objects_object_markings(){};
public:
    std::vector<std::shared_ptr<t_road_objects_object_markings_marking>>                 m_markings; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_object_markings_marking   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_markings_marking(){};
	t_road_objects_object_markings_marking(pugi::xml_node node);
	virtual ~t_road_objects_object_markings_marking(){};
public:
	//Side of the bounding box described in <object> element in the local coordinate system u/v. For values see UML model.
	e_sideType	    side; //  required
	//Optical "weight" of the marking. For values see UML model.
	e_roadMarkWeight	    weight; //  optional
	//Width of the marking.
	std::string	    width; //  optional
	//Color of the marking. For values see UML model.
	e_roadMarkColor	    color; //  required
	//Height of road mark above the road, i.e. thickness of the road mark
	t_grEqZero	    zOffset; //  optional
	//Length of the gap between the visible parts
	t_grEqZero	    spaceLength; //  required
	//Length of the visible part
	std::string	    lineLength; //  required
	//Lateral offset in u-direction from start of bounding box side where the first marking starts
	double	    startOffset; //  required
	//Lateral offset in u-direction from end of bounding box side where the marking ends
	double	    stopOffset; //  required
    std::vector<std::shared_ptr<t_road_objects_object_markings_marking_cornerReference>>                 m_cornerReferences; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_object_markings_marking_cornerReference   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_markings_marking_cornerReference(){};
	t_road_objects_object_markings_marking_cornerReference(pugi::xml_node node);
	virtual ~t_road_objects_object_markings_marking_cornerReference(){};
public:
	//Index of outline point
	uint64_t	    id; //  required
};
struct XODR_EXPORT t_road_objects_object_material   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_material(){};
	t_road_objects_object_material(pugi::xml_node node);
	virtual ~t_road_objects_object_material(){};
public:
	//Surface material code, depending on application
	std::string	    surface; //  optional
	//Friction value, depending on application
	t_grEqZero	    friction; //  optional
	//Roughness, for example, for sound and motion systems, depending on application
	t_grEqZero	    roughness; //  optional
};
struct XODR_EXPORT t_road_objects_object_outlines   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_outlines(){};
	t_road_objects_object_outlines(pugi::xml_node node);
	virtual ~t_road_objects_object_outlines(){};
public:
    std::vector<std::shared_ptr<t_road_objects_object_outlines_outline>>                 m_outlines; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_object_outlines_outline   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_outlines_outline(){};
	t_road_objects_object_outlines_outline(pugi::xml_node node);
	virtual ~t_road_objects_object_outlines_outline(){};
public:
	//ID of the outline. Must be unique within one object.
	uint64_t	    id; //  optional
	//Type used to fill the area inside the outline. For values see UML Model.
	e_outlineFillType	    fillType; //  optional
	//Defines if outline is an outer outline of the object.
	t_bool	    outer; //  optional
	//If true, the outline describes an area, not a linear feature.
	t_bool	    closed; //  optional
	//Describes the lane type of the outline. For values see UML Model.
	e_laneType	    laneType; //  optional
   //group tag : reference g_additionalData
    std::shared_ptr<t_road_objects_object_outlines_outline_U>                 m_t_road_objects_object_outlines_outline; //xs:element
};
struct XODR_EXPORT t_road_objects_object_outlines_outline_cornerLocal   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_outlines_outline_cornerLocal(){};
	t_road_objects_object_outlines_outline_cornerLocal(pugi::xml_node node);
	virtual ~t_road_objects_object_outlines_outline_cornerLocal(){};
public:
	//Local u-coordinate of the corner
	double	    u; //  required
	//Local v-coordinate of the corner
	double	    v; //  required
	//Local z-coordinate of the corner
	double	    z; //  required
	//Height of the object at this corner, along the z-axis
	double	    height; //  required
	//ID of the outline point. Shall be unique within one outline.
	uint64_t	    id; //  optional
};
struct XODR_EXPORT t_road_objects_object_outlines_outline_cornerRoad   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_outlines_outline_cornerRoad(){};
	t_road_objects_object_outlines_outline_cornerRoad(pugi::xml_node node);
	virtual ~t_road_objects_object_outlines_outline_cornerRoad(){};
public:
	//s-coordinate of the corner
	t_grEqZero	    s; //  required
	//t-coordinate of the corner
	double	    t; //  required
	//dz of the corner relative to road reference line
	double	    dz; //  required
	//Height of the object at this corner, along the z-axis
	double	    height; //  required
	//ID of the outline point. Must be unique within one outline
	uint64_t	    id; //  optional
};
struct XODR_EXPORT t_road_objects_object_parkingSpace   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_parkingSpace(){};
	t_road_objects_object_parkingSpace(pugi::xml_node node);
	virtual ~t_road_objects_object_parkingSpace(){};
public:
	//Access definitions for the parking space. Parking spaces tagged with "women" and "handicapped" are vehicles of type car. For values see UML Model
	e_road_objects_object_parkingSpace_access	    access; //  required
	//Free text, depending on application
	std::string	    restrictions; //  optional
};
struct XODR_EXPORT t_road_objects_object_repeat   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_repeat(){};
	t_road_objects_object_repeat(pugi::xml_node node);
	virtual ~t_road_objects_object_repeat(){};
public:
	//s-coordinate of start position, overrides the corresponding argument in the original <object> record
	t_grEqZero	    s; //  required
	//Length of the repeat area, along the reference line in s-direction.
	t_grEqZero	    length; //  required
	//Distance between two instances of the object;If this value is zero, then the object is treated like a continuous feature, for example, a guard rail, a wall, etc.
	t_grEqZero	    distance; //  required
	//Lateral offset of objects reference point at @s
	double	    tStart; //  required
	//Lateral offset of object's reference point at @s + @length
	double	    tEnd; //  required
	//Height of the object at @s
	double	    heightStart; //  required
	//Height of the object at @s + @length
	double	    heightEnd; //  required
	//z-offset of the object at @s, relative to the elevation of the reference line
	double	    zOffsetStart; //  required
	//z-offset of the object at @s + @length, relative to the elevation of the reference line
	double	    zOffsetEnd; //  required
	//Width of the object at @s
	t_grEqZero	    widthStart; //  optional
	//Width of the object at @s + @length
	t_grEqZero	    widthEnd; //  optional
	//Length of the object at @sh
	t_grEqZero	    lengthStart; //  optional
	//Length of the object at @s + @length
	t_grEqZero	    lengthEnd; //  optional
	//Radius of the object at @s
	t_grEqZero	    radiusStart; //  optional
	//Radius of the object at @s + @length
	t_grEqZero	    radiusEnd; //  optional
};
struct XODR_EXPORT t_road_objects_objectReference   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_objectReference(){};
	t_road_objects_objectReference(pugi::xml_node node);
	virtual ~t_road_objects_objectReference(){};
public:
	//s-coordinate
	t_grEqZero	    s; //  required
	//t-coordinate
	double	    t; //  required
	//Unique ID of the referred object within the database
	std::string	    id; //  required
	//z offset relative to the elevation of the reference line
	double	    zOffset; //  optional
	//Validity of the object along s-axis(0.0 for point object)
	t_grEqZero	    validLength; //  optional
	//"+" = valid in positive s-direction"-" = valid in negative s-direction"none" = valid in both directions
	e_orientation	    orientation; //  required
    std::vector<std::shared_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_objects_tunnel   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_tunnel(){};
	t_road_objects_tunnel(pugi::xml_node node);
	virtual ~t_road_objects_tunnel(){};
public:
	//s-coordinate
	t_grEqZero	    s; //  required
	//Length of the tunnel (in s-direction)
	t_grEqZero	    length; //  required
	//Name of the tunnel. May be chosen freely.
	std::string	    name; //  optional
	//Unique ID within database
	std::string	    id; //  required
	//Type of tunnel. For values see UML Model.
	e_tunnelType	    type; //  required
	//Degree of artificial tunnel lighting. Depends on the application.
	t_zeroOne	    lighting; //  optional
	//Degree of daylight intruding the tunnel. Depends on the application.
	t_zeroOne	    daylight; //  optional
    std::vector<std::shared_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes(){};
	t_road_lanes(pugi::xml_node node);
	virtual ~t_road_lanes(){};
public:
    std::vector<std::shared_ptr<t_road_lanes_laneOffset>>                 m_laneOffsets; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection>>                 m_laneSections; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneOffset   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneOffset(){};
	t_road_lanes_laneOffset(pugi::xml_node node);
	virtual ~t_road_lanes_laneOffset(){};
public:
	//s-coordinate of start position
	t_grEqZero	    s; //  required
	//Polynom parameter a, offset at @s (ds=0)
	double	    a; //  required
	//Polynom parameter b
	double	    b; //  required
	//Polynom parameter c
	double	    c; //  required
	//Polynom parameter d
	double	    d; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection(){};
	t_road_lanes_laneSection(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection(){};
public:
	//s-coordinate of start position
	t_grEqZero	    s; //  required
	//Lane section element is valid for one side only (left, center, or right), depending on the child elements.
	t_bool	    singleSide; //  optional
    std::shared_ptr<t_road_lanes_laneSection_left>                 m_left; //xs:element
    std::shared_ptr<t_road_lanes_laneSection_center>                 m_center; //xs:element
    std::shared_ptr<t_road_lanes_laneSection_right>                 m_right; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneSection_center   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_center(){};
	t_road_lanes_laneSection_center(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_center(){};
public:
    std::vector<std::shared_ptr<t_road_lanes_laneSection_center_lane>>                 m_lanes; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lr_lane(){};
	t_road_lanes_laneSection_lr_lane(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane(){};
public:
	//Type of the lane. For values see UML model.
	e_laneType	    type; //  required
	//"true" = keep lane on level, that is, do not apply superelevation;"false" = apply superelevation to this lane (default, also used if attribute level is missing)
	t_bool	    level; //  optional
    std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link>                 m_link; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>>                 m_roadMarks; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_material>>                 m_materials; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_speed>>                 m_speeds; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_access>>                 m_accesss; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_height>>                 m_heights; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_rule>>                 m_rules; //xs:element
   //group tag : reference g_additionalData
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_U>>                 m_t_road_lanes_laneSection_lr_lanes; //xs:element
};
struct XODR_EXPORT t_road_lanes_laneSection_center_lane   : public t_road_lanes_laneSection_lr_lane
{
/**/
public:
	t_road_lanes_laneSection_center_lane(){};
	t_road_lanes_laneSection_center_lane(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_center_lane(){};
public:
	//ID of the lane
	const int	    id=0; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_lcr_lane_link   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lcr_lane_link(){};
	t_road_lanes_laneSection_lcr_lane_link(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_link(){};
public:
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>>                 m_predecessors; //xs:element
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>>                 m_successors; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(){};
	t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(){};
public:
	//ID of the preceding / succeeding linked lane
	int	    id; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_lcr_lane_roadMark   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lcr_lane_roadMark(){};
	t_road_lanes_laneSection_lcr_lane_roadMark(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark(){};
public:
	//s-coordinate of start position of the <roadMark> element, relative to the position of the preceding <laneSection> element
	t_grEqZero	    sOffset; //  required
	//Type of the road mark. For values see UML model.
	e_roadMarkType	    type; //  required
	//Weight of the road mark. This attribute is optional if detailed definition is given below. For values see UML model.
	e_roadMarkWeight	    weight; //  optional
	//Color of the road mark. For values see UML model.
	e_roadMarkColor	    color; //  required
	//Material of the road mark. Identifiers to be defined by the user, use "standard" as default value.
	std::string	    material; //  optional
	//Width of the road mark. This attribute is optional if detailed definition is given by <line> element.
	t_grEqZero	    width; //  optional
	//Allows a lane change in the indicated direction, taking into account that lanes are numbered in ascending order from right to left. If the attribute is missing, “both” is used as default. For values see UML model.
	e_road_lanes_laneSection_lcr_lane_roadMark_laneChange	    laneChange; //  optional
	//Height of road mark above the road, i.e. thickness of the road mark.
	double	    height; //  optional
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_sway>>                 m_sways; //xs:element
    std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type>                 m_type; //xs:element
    std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>                 m_explicit; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneSection_lcr_lane_roadMark_explicit   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_explicit(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_explicit(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_explicit(){};
public:
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>>                 m_lines; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(){};
public:
	//Length of the visible line
	std::string	    length; //  required
	//Lateral offset from the lane border.If <sway> element is present, the lateral offset follows the sway.
	double	    tOffset; //  required
	//Offset of start position of the <line> element, relative to the @sOffset  given in the <roadMark> element
	t_grEqZero	    sOffset; //  required
	//Rule that must be observed when passing the line from inside, that is, from the lane with the lower absolute ID to the lane with the higher absolute ID. For values see UML Model.
	e_roadMarkRule	    rule; //  optional
	//Line width. This attribute supersedes the definition in the <roadMark> element.
	std::string	    width; //  optional
};
struct XODR_EXPORT t_road_lanes_laneSection_lcr_lane_roadMark_sway   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_sway(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_sway(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_sway(){};
public:
	//s-coordinate of start position of the <sway> element, relative to the @sOffset given in the <roadMark> element
	t_grEqZero	    ds; //  required
	//Polynom parameter a, sway value at @s (ds=0)
	double	    a; //  required
	//Polynom parameter b
	double	    b; //  required
	//Polynom parameter c
	double	    c; //  required
	//Polynom parameter d
	double	    d; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_lcr_lane_roadMark_type   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_type(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_type(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_type(){};
public:
	//Name of the road mark type. May be chosen freely.
	std::string	    name; //  required
	//Accumulated width of the road mark. In case of several <line> elements this @width is the sum of all @width of <line> elements and spaces in between, necessary to form the road mark. This attribute supersedes the definition in the <roadMark> element.
	t_grEqZero	    width; //  required
    std::vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>>                 m_lines; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneSection_lcr_lane_roadMark_type_line   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_type_line(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_type_line(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_type_line(){};
public:
	//Length of the visible part
	std::string	    length; //  required
	//Length of the gap between the visible parts
	t_grEqZero	    space; //  required
	//Lateral offset from the lane border.If <sway> element is present, the lateral offset follows the sway.
	double	    tOffset; //  required
	//Initial longitudinal offset of the line definition from the start of the road mark definition
	t_grEqZero	    sOffset; //  required
	//Rule that must be observed when passing the line from inside, for example, from the lane with the lower absolute ID to the lane with the higher absolute ID. For values see UML Model.
	e_roadMarkRule	    rule; //  optional
	//Line width
	std::string	    width; //  optional
	//Line color. If given, this attribute supersedes the definition in the <roadMark> element. For values see UML Model.
	e_roadMarkColor	    color; //  optional
};
struct XODR_EXPORT t_road_lanes_laneSection_left   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_left(){};
	t_road_lanes_laneSection_left(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_left(){};
public:
    std::vector<std::shared_ptr<t_road_lanes_laneSection_left_lane>>                 m_lanes; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneSection_left_lane   : public t_road_lanes_laneSection_lr_lane
{
/**/
public:
	t_road_lanes_laneSection_left_lane(){};
	t_road_lanes_laneSection_left_lane(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_left_lane(){};
public:
	//ID of the lane
	uint64_t	    id; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane_access   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lr_lane_access(){};
	t_road_lanes_laneSection_lr_lane_access(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_access(){};
public:
	//s-coordinate of start position, relative to the position of the preceding <laneSection> element
	t_grEqZero	    sOffset; //  required
	//Specifies whether the participant given in the attribute @restriction is allowed or denied access to the given lane
	e_road_lanes_laneSection_lr_lane_access_rule	    rule; //  optional
	//Identifier of the participant to whom the restriction applies. For values, see UML Model
	e_accessRestrictionType	    restriction; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane_border   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lr_lane_border(){};
	t_road_lanes_laneSection_lr_lane_border(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_border(){};
public:
	//s-coordinate of start position of the <border> element , relative to the position of the preceding <laneSection> element
	t_grEqZero	    sOffset; //  required
	//Polynom parameter a, border position at @s (ds=0)
	double	    a; //  required
	//Polynom parameter b
	double	    b; //  required
	//Polynom parameter c
	double	    c; //  required
	//Polynom parameter d
	double	    d; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane_height   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lr_lane_height(){};
	t_road_lanes_laneSection_lr_lane_height(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_height(){};
public:
	//s-coordinate of start position, relative to the position of the preceding <laneSection> element
	t_grEqZero	    sOffset; //  required
	//Inner offset from road level
	double	    inner; //  required
	//Outer offset from road level
	double	    outer; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane_material   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lr_lane_material(){};
	t_road_lanes_laneSection_lr_lane_material(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_material(){};
public:
	//s-coordinate of start position, relative to the position of the preceding <laneSection> element
	t_grEqZero	    sOffset; //  required
	//Surface material code, depending on application
	std::string	    surface; //  optional
	//Friction coefficient
	t_grEqZero	    friction; //  required
	//Roughness, for example, for sound and motion systems
	t_grEqZero	    roughness; //  optional
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane_rule   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lr_lane_rule(){};
	t_road_lanes_laneSection_lr_lane_rule(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_rule(){};
public:
	//s-coordinate of start position, relative to the position of the preceding <laneSection> element
	t_grEqZero	    sOffset; //  required
	//Free text; currently recommended values are"no stopping at any time""disabled parking""car pool"
	std::string	    value; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane_speed   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lr_lane_speed(){};
	t_road_lanes_laneSection_lr_lane_speed(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_speed(){};
public:
	//s-coordinate of start position, relative to the position of the preceding <laneSection> element
	t_grEqZero	    sOffset; //  required
	//Maximum allowed speed. If the attribute unit is not specified, m/s is used as default.
	t_grEqZero	    max; //  required
	//Unit of the attribute max. For values, see UML Model
	e_unitSpeed	    unit; //  optional
};
struct XODR_EXPORT t_road_lanes_laneSection_lr_lane_width   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_lr_lane_width(){};
	t_road_lanes_laneSection_lr_lane_width(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_width(){};
public:
	//s-coordinate of start position of the <width> element, relative to the position of the preceding <laneSection> element
	t_grEqZero	    sOffset; //  required
	//Polynom parameter a, width at @s (ds=0)
	double	    a; //  required
	//Polynom parameter b
	double	    b; //  required
	//Polynom parameter c
	double	    c; //  required
	//Polynom parameter d
	double	    d; //  required
};
struct XODR_EXPORT t_road_lanes_laneSection_right   : public _OpenDriveElement
{
/**/
public:
	t_road_lanes_laneSection_right(){};
	t_road_lanes_laneSection_right(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_right(){};
public:
    std::vector<std::shared_ptr<t_road_lanes_laneSection_right_lane>>                 m_lanes; //xs:element
   //group tag : reference g_additionalData
};
struct XODR_EXPORT t_road_lanes_laneSection_right_lane   : public t_road_lanes_laneSection_lr_lane
{
/**/
public:
	t_road_lanes_laneSection_right_lane(){};
	t_road_lanes_laneSection_right_lane(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_right_lane(){};
public:
	//ID of the lane
	int	    id; //  required
};
struct XODR_EXPORT t_road_objects_object_laneValidity   : public _OpenDriveElement
{
/**/
public:
	t_road_objects_object_laneValidity(){};
	t_road_objects_object_laneValidity(pugi::xml_node node);
	virtual ~t_road_objects_object_laneValidity(){};
public:
	//Minimum ID of the lanes for which the object is valid
	int	    fromLane; //  required
	//Maximum ID of the lanes for which the object is valid
	int	    toLane; //  required
};
// xs:group -> aliased to group definition
struct XODR_EXPORT g_additionalData
{
public:
	g_additionalData(){};
	g_additionalData(pugi::xml_node node);
	virtual ~g_additionalData(){};
public:
    std::vector<std::shared_ptr<t_include>>                 m_includes; //xs:element
    std::vector<std::shared_ptr<t_userData>>                 m_userDatas; //xs:element
    std::shared_ptr<t_dataQuality>                 m_dataQuality; //xs:element
};
// xs:element -> main  as clazz definition
class XODR_EXPORT OpenDRIVE
{
public:
    std::shared_ptr<t_header>                 m_header; //xs:element
    std::vector<std::shared_ptr<t_road>>                 m_roads; //xs:element
    std::vector<std::shared_ptr<t_controller>>                 m_controllers; //xs:element
    std::vector<std::shared_ptr<t_junction>>                 m_junctions; //xs:element
    std::vector<std::shared_ptr<t_junctionGroup>>                 m_junctionGroups; //xs:element
    std::vector<std::shared_ptr<t_station>>                 m_stations; //xs:element
    //group tag : reference g_additionalData
public:
	OpenDRIVE(){};
	OpenDRIVE(pugi::xml_node node);
	virtual ~OpenDRIVE(){};
};
class XODR_EXPORT xodr
{
private:
    pugi::xml_document m_doc;
    pugi::xml_node m_root;
public:
	std::shared_ptr<OpenDRIVE>    m_OpenDRIVE;
public:
    void load(std::string xodrfilename);
    void parse();
public:
    xodr();
    ~xodr();
};
#endif //_OPENDRIVE_16_CORE_H_

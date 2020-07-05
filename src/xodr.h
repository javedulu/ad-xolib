//
//  OpenDRIVE_1.5M.xsd.h
//
//  xsd2cxx- for OpenDrive CXX classes
//
//  Created by Javed Shaik on Sun Jul  5 10:17:07 2020
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 30a352ed-2bba-4102-9ea6-f671c021b017 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
#ifndef _OPENDRIVE_1_5M_XSD_H_
#define _OPENDRIVE_1_5M_XSD_H_
#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <typeinfo>
#include "pugixml.hpp"
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
typedef double t_grEqZero;
typedef double t_grZero;
typedef double t_zeroOne;
typedef float t_header_Version;
typedef std::string t_junction_id;
typedef std::string e_countryCode_iso3166alpha3;
enum class t_bool : std::uint8_t
{
	  TRUE,               //true
	  FALSE               //false
};
enum class t_yesNo : std::uint8_t
{
	  YES,               //yes
	  NO               //no
};
enum class e_maxSpeedString : std::uint8_t
{
	  NO_LIMIT,               //no limit
	  UNDEFINED               //undefined
};
enum class e_trafficRule : std::uint8_t
{
	  RHT,               //RHT
	  LHT               //LHT
};
enum class e_road_link_elementType : std::uint8_t
{
	  ROAD,               //road
	  JUNCTION               //junction
};
enum class e_road_link_neighbor_side : std::uint8_t
{
	  LEFT,               //left
	  RIGHT               //right
};
enum class e_paramPoly3_pRange : std::uint8_t
{
	  ARCLENGTH,               //arcLength
	  NORMALIZED               //normalized
};
enum class e_road_lateralProfile_crossfall_side : std::uint8_t
{
	  LEFT,               //left
	  RIGHT,               //right
	  BOTH               //both
};
enum class e_road_lanes_laneSection_lcr_lane_roadMark_laneChange : std::uint8_t
{
	  INCREASE,               //increase
	  DECREASE,               //decrease
	  BOTH,               //both
	  NONE               //none
};
enum class e_road_lanes_laneSection_lr_lane_access_rule : std::uint8_t
{
	  ALLOW,               //allow
	  DENY               //deny
};
enum class e_road_objects_object_parkingSpace_access : std::uint8_t
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
enum class e_road_signals_signal_reference_elementType : std::uint8_t
{
	  OBJECT,               //object
	  SIGNAL               //signal
};
enum class e_road_surface_CRG_purpose : std::uint8_t
{
	  ELEVATION,               //elevation
	  FRICTION               //friction
};
enum class e_road_surface_CRG_mode : std::uint8_t
{
	  ATTACHED,               //attached
	  ATTACHED0,               //attached0
	  GENUINE,               //genuine
	  GLOBAL               //global
};
enum class e_road_railroad_switch_position : std::uint8_t
{
	  DYNAMIC,               //dynamic
	  STRAIGHT,               //straight
	  TURN               //turn
};
enum class e_junction_type : std::uint8_t
{
	  DEFAULT,               //default
	  VIRTUAL               //virtual
};
enum class e_junctionGroup_type : std::uint8_t
{
	  ROUNDABOUT,               //roundabout
	  UNKNOWN               //unknown
};
enum class e_station_type : std::uint8_t
{
	  SMALL,               //small
	  MEDIUM,               //medium
	  LARGE               //large
};
enum class e_station_platform_segment_side : std::uint8_t
{
	  LEFT,               //left
	  RIGHT               //right
};
enum class e_dataQuality_RawData_Source : std::uint8_t
{
	  SENSOR,               //sensor
	  CADASTER,               //cadaster
	  CUSTOM               //custom
};
enum class e_dataQuality_RawData_PostProcessing : std::uint8_t
{
	  RAW,               //raw
	  CLEANED,               //cleaned
	  PROCESSED,               //processed
	  FUSED               //fused
};
enum class e_unitDistance : std::uint8_t
{
	  M,               //m
	  KM,               //km
	  FT,               //ft
	  MILE               //mile
};
enum class e_unitSpeed : std::uint8_t
{
	  M_S,               //m/s
	  MPH,               //mph
	  KM_H               //km/h
};
enum class e_unitMass : std::uint8_t
{
	  KG,               //kg
	  T               //t
};
enum class e_unitSlope : std::uint8_t
{
	  PERCENT               //%
};
enum class e_roadType : std::uint8_t
{
	  UNKNOWN,               //unknown
	  RURAL,               //rural
	  MOTORWAY,               //motorway
	  TOWN,               //town
	  LOWSPEED,               //lowSpeed
	  PEDESTRIAN,               //pedestrian
	  BICYCLE,               //bicycle
	  TOWNEXPRESSWAY,               //townExpressway
	  TOWNCOLLECTOR,               //townCollector
	  TOWNARTERIAL,               //townArterial
	  TOWNPRIVATE,               //townPrivate
	  TOWNLOCAL,               //townLocal
	  TOWNPLAYSTREET               //townPlayStreet
};
enum class e_roadMarkType : std::uint8_t
{
	  NONE,               //none
	  SOLID,               //solid
	  BROKEN,               //broken
	  SOLID_SOLID,               //solid solid
	  SOLID_BROKEN,               //solid broken
	  BROKEN_SOLID,               //broken solid
	  BROKEN_BROKEN,               //broken broken
	  BOTTS_DOTS,               //botts dots
	  GRASS,               //grass
	  CURB,               //curb
	  CUSTOM,               //custom
	  EDGE               //edge
};
enum class e_roadMarkWeight : std::uint8_t
{
	  STANDARD,               //standard
	  BOLD               //bold
};
enum class e_roadMarkColor : std::uint8_t
{
	  STANDARD,               //standard
	  BLUE,               //blue
	  GREEN,               //green
	  RED,               //red
	  WHITE,               //white
	  YELLOW,               //yellow
	  ORANGE               //orange
};
enum class e_laneType : std::uint8_t
{
	  NONE,               //none
	  DRIVING,               //driving
	  STOP,               //stop
	  SHOULDER,               //shoulder
	  BIKING,               //biking
	  SIDEWALK,               //sidewalk
	  BORDER,               //border
	  RESTRICTED,               //restricted
	  PARKING,               //parking
	  BIDIRECTIONAL,               //bidirectional
	  MEDIAN,               //median
	  SPECIAL1,               //special1
	  SPECIAL2,               //special2
	  SPECIAL3,               //special3
	  ROADWORKS,               //roadWorks
	  TRAM,               //tram
	  RAIL,               //rail
	  ENTRY,               //entry
	  EXIT,               //exit
	  OFFRAMP,               //offRamp
	  ONRAMP,               //onRamp
	  CONNECTINGRAMP,               //connectingRamp
	  BUS,               //bus
	  TAXI,               //taxi
	  HOV,               //HOV
	  MWYENTRY,               //mwyEntry
	  MWYEXIT               //mwyExit
};
enum class e_objectType : std::uint8_t
{
	  NONE,               //none
	  OBSTACLE,               //obstacle
	  CAR,               //car
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
	  TRUCK,               //truck
	  VAN,               //van
	  BUS,               //bus
	  TRAILER,               //trailer
	  BIKE,               //bike
	  MOTORBIKE,               //motorbike
	  TRAM,               //tram
	  TRAIN,               //train
	  PEDESTRIAN,               //pedestrian
	  WIND               //wind
};
enum class e_tunnelType : std::uint8_t
{
	  STANDARD,               //standard
	  UNDERPASS               //underpass
};
enum class e_bridgeType : std::uint8_t
{
	  CONCRETE,               //concrete
	  STEEL,               //steel
	  BRICK,               //brick
	  WOOD               //wood
};
enum class e_accessRestrictionType : std::uint8_t
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
enum class e_countryCode_deprecated : std::uint8_t
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
enum class e_sideType : std::uint8_t
{
	  LEFT,               //left
	  RIGHT,               //right
	  FRONT,               //front
	  REAR               //rear
};
enum class e_outlineFillType : std::uint8_t
{
	  GRASS,               //grass
	  CONCRETE,               //concrete
	  COBBLE,               //cobble
	  ASPHALT,               //asphalt
	  PAVEMENT,               //pavement
	  GRAVEL,               //gravel
	  SOIL               //soil
};
enum class e_borderType : std::uint8_t
{
	  CONCRETE,               //concrete
	  CURB               //curb
};
enum class e_contactPoint : std::uint8_t
{
	  START,               //start
	  END               //end
};
enum class e_elementDir : std::uint8_t
{
	  PLUS,               //+
	  MINUS               //-
};
enum class e_direction : std::uint8_t
{
	  SAME,               //same
	  OPPOSITE               //opposite
};
enum class e_roadMarkRule : std::uint8_t
{
	  NO_PASSING,               //no passing
	  CAUTION,               //caution
	  NONE               //none
};
enum class e_orientation : std::uint8_t
{
	  PLUS,               //+
	  MINUS,               //-
	  NONE               //none
};
struct t_maxSpeed
{
public:
	  e_maxSpeedString  maxSpeedString;
	  t_grEqZero  grEqZero;
public:
	t_maxSpeed(){};
    t_maxSpeed(pugi::xml_node node);
	~t_maxSpeed(){};
};
struct e_unit
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
struct e_countryCode
{
public:
	  e_countryCode_deprecated  countryCode_deprecated;
	  e_countryCode_iso3166alpha3  countryCode_iso3166alpha3;
public:
	e_countryCode(){};
    e_countryCode(pugi::xml_node node);
	~e_countryCode(){};
};
template<>
inline std::vector<std::pair<std::string, t_bool>>enum_map()
{
    return {
        { "true", t_bool::TRUE } ,
        { "false", t_bool::FALSE }
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
inline std::vector<std::pair<std::string, e_maxSpeedString>>enum_map()
{
    return {
        { "no limit", e_maxSpeedString::NO_LIMIT } ,
        { "undefined", e_maxSpeedString::UNDEFINED }
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
inline std::vector<std::pair<std::string, e_road_link_elementType>>enum_map()
{
    return {
        { "road", e_road_link_elementType::ROAD } ,
        { "junction", e_road_link_elementType::JUNCTION }
    };
}
template<>
inline std::vector<std::pair<std::string, e_road_link_neighbor_side>>enum_map()
{
    return {
        { "left", e_road_link_neighbor_side::LEFT } ,
        { "right", e_road_link_neighbor_side::RIGHT }
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
inline std::vector<std::pair<std::string, e_road_lateralProfile_crossfall_side>>enum_map()
{
    return {
        { "left", e_road_lateralProfile_crossfall_side::LEFT } ,
        { "right", e_road_lateralProfile_crossfall_side::RIGHT } ,
        { "both", e_road_lateralProfile_crossfall_side::BOTH }
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
inline std::vector<std::pair<std::string, e_road_signals_signal_reference_elementType>>enum_map()
{
    return {
        { "object", e_road_signals_signal_reference_elementType::OBJECT } ,
        { "signal", e_road_signals_signal_reference_elementType::SIGNAL }
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
inline std::vector<std::pair<std::string, e_road_railroad_switch_position>>enum_map()
{
    return {
        { "dynamic", e_road_railroad_switch_position::DYNAMIC } ,
        { "straight", e_road_railroad_switch_position::STRAIGHT } ,
        { "turn", e_road_railroad_switch_position::TURN }
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
inline std::vector<std::pair<std::string, e_station_type>>enum_map()
{
    return {
        { "small", e_station_type::SMALL } ,
        { "medium", e_station_type::MEDIUM } ,
        { "large", e_station_type::LARGE }
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
inline std::vector<std::pair<std::string, e_dataQuality_RawData_Source>>enum_map()
{
    return {
        { "sensor", e_dataQuality_RawData_Source::SENSOR } ,
        { "cadaster", e_dataQuality_RawData_Source::CADASTER } ,
        { "custom", e_dataQuality_RawData_Source::CUSTOM }
    };
}
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
inline std::vector<std::pair<std::string, e_unitSpeed>>enum_map()
{
    return {
        { "m/s", e_unitSpeed::M_S } ,
        { "mph", e_unitSpeed::MPH } ,
        { "km/h", e_unitSpeed::KM_H }
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
inline std::vector<std::pair<std::string, e_laneType>>enum_map()
{
    return {
        { "none", e_laneType::NONE } ,
        { "driving", e_laneType::DRIVING } ,
        { "stop", e_laneType::STOP } ,
        { "shoulder", e_laneType::SHOULDER } ,
        { "biking", e_laneType::BIKING } ,
        { "sidewalk", e_laneType::SIDEWALK } ,
        { "border", e_laneType::BORDER } ,
        { "restricted", e_laneType::RESTRICTED } ,
        { "parking", e_laneType::PARKING } ,
        { "bidirectional", e_laneType::BIDIRECTIONAL } ,
        { "median", e_laneType::MEDIAN } ,
        { "special1", e_laneType::SPECIAL1 } ,
        { "special2", e_laneType::SPECIAL2 } ,
        { "special3", e_laneType::SPECIAL3 } ,
        { "roadWorks", e_laneType::ROADWORKS } ,
        { "tram", e_laneType::TRAM } ,
        { "rail", e_laneType::RAIL } ,
        { "entry", e_laneType::ENTRY } ,
        { "exit", e_laneType::EXIT } ,
        { "offRamp", e_laneType::OFFRAMP } ,
        { "onRamp", e_laneType::ONRAMP } ,
        { "connectingRamp", e_laneType::CONNECTINGRAMP } ,
        { "bus", e_laneType::BUS } ,
        { "taxi", e_laneType::TAXI } ,
        { "HOV", e_laneType::HOV } ,
        { "mwyEntry", e_laneType::MWYENTRY } ,
        { "mwyExit", e_laneType::MWYEXIT }
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
        { "truck", e_objectType::TRUCK } ,
        { "van", e_objectType::VAN } ,
        { "bus", e_objectType::BUS } ,
        { "trailer", e_objectType::TRAILER } ,
        { "bike", e_objectType::BIKE } ,
        { "motorbike", e_objectType::MOTORBIKE } ,
        { "tram", e_objectType::TRAM } ,
        { "train", e_objectType::TRAIN } ,
        { "pedestrian", e_objectType::PEDESTRIAN } ,
        { "wind", e_objectType::WIND }
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
inline std::vector<std::pair<std::string, e_borderType>>enum_map()
{
    return {
        { "concrete", e_borderType::CONCRETE } ,
        { "curb", e_borderType::CURB }
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
inline std::vector<std::pair<std::string, e_direction>>enum_map()
{
    return {
        { "same", e_direction::SAME } ,
        { "opposite", e_direction::OPPOSITE }
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
inline std::vector<std::pair<std::string, e_orientation>>enum_map()
{
    return {
        { "+", e_orientation::PLUS } ,
        { "-", e_orientation::MINUS } ,
        { "none", e_orientation::NONE }
    };
}
//Begin Forward Declarations
struct t_header;
struct t_header_GeoReference;
struct t_header_Offset;
struct t_road;
struct t_road_link;
struct t_road_link_predecessorSuccessor;
struct t_road_link_neighbor;
struct t_road_type;
struct t_road_type_speed;
struct t_road_planView;
struct t_road_planView_geometry;
struct t_road_planView_geometry_line;
struct t_road_planView_geometry_spiral;
struct t_road_planView_geometry_arc;
struct t_road_planView_geometry_poly3;
struct t_road_planView_geometry_paramPoly3;
struct t_road_elevationProfile;
struct t_road_elevationProfile_elevation;
struct t_road_lateralProfile;
struct t_road_lateralProfile_superelevation;
struct t_road_lateralProfile_crossfall;
struct t_road_lateralProfile_shape;
struct t_road_lanes;
struct t_road_lanes_laneOffset;
struct t_road_lanes_laneSection;
struct t_road_lanes_laneSection_left;
struct t_road_lanes_laneSection_center;
struct t_road_lanes_laneSection_right;
struct t_road_lanes_laneSection_center_lane;
struct t_road_lanes_laneSection_lr_lane;
struct t_road_lanes_laneSection_left_lane;
struct t_road_lanes_laneSection_right_lane;
struct t_road_lanes_laneSection_lcr_lane_link;
struct t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor;
struct t_road_lanes_laneSection_lr_lane_width;
struct t_road_lanes_laneSection_lr_lane_border;
struct t_road_lanes_laneSection_lcr_lane_roadMark;
struct t_road_lanes_laneSection_lcr_lane_roadMark_sway;
struct t_road_lanes_laneSection_lcr_lane_roadMark_type;
struct t_road_lanes_laneSection_lcr_lane_roadMark_type_line;
struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit;
struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line;
struct t_road_lanes_laneSection_lr_lane_material;
struct t_road_lanes_laneSection_lr_lane_visibility;
struct t_road_lanes_laneSection_lr_lane_speed;
struct t_road_lanes_laneSection_lr_lane_access;
struct t_road_lanes_laneSection_lr_lane_height;
struct t_road_lanes_laneSection_lr_lane_rule;
struct t_road_objects;
struct t_road_objects_object;
struct t_road_objects_object_repeat;
struct t_road_objects_object_outlines;
struct t_road_objects_object_outlines_outline;
struct t_road_objects_object_outlines_outline_cornerRoad;
struct t_road_objects_object_outlines_outline_cornerLocal;
struct t_road_objects_object_material;
struct t_road_objects_object_laneValidity;
struct t_road_objects_object_parkingSpace;
struct t_road_objects_object_markings;
struct t_road_objects_object_markings_marking;
struct t_road_objects_object_markings_marking_cornerReference;
struct t_road_objects_object_borders;
struct t_road_objects_object_borders_border;
struct t_road_objects_objectReference;
struct t_road_objects_tunnel;
struct t_road_objects_bridge;
struct t_road_signals;
struct t_road_signals_signal;
struct t_road_signals_signal_dependency;
struct t_road_signals_signal_reference;
struct t_road_signals_signal_positionRoad;
struct t_road_signals_signal_positionInertial;
struct t_road_signals_signalReference;
struct t_road_surface;
struct t_road_surface_CRG;
struct t_road_railroad;
struct t_road_railroad_switch;
struct t_road_railroad_switch_mainTrack;
struct t_road_railroad_switch_sideTrack;
struct t_road_railroad_switch_partner;
struct t_controller;
struct t_controller_control;
struct t_junction;
struct t_junction_connection;
struct t_junction_predecessorSuccessor;
struct t_junction_connection_laneLink;
struct t_junction_priority;
struct t_junction_controller;
struct t_junction_surface;
struct t_junction_surface_CRG;
struct t_junctionGroup;
struct t_junctionGroup_junctionReference;
struct t_station;
struct t_station_platform;
struct t_station_platform_segment;
struct t_userData;
struct t_include;
struct t_dataQuality;
struct t_dataQuality_Error;
struct t_dataQuality_RawData;
//End Forward Declarations
struct t_road_planView_geometry_U
{
public:
    std::unique_ptr<t_road_planView_geometry_line>                 m_line; //xs:element
    std::unique_ptr<t_road_planView_geometry_spiral>                 m_spiral; //xs:element
    std::unique_ptr<t_road_planView_geometry_arc>                 m_arc; //xs:element
    std::unique_ptr<t_road_planView_geometry_poly3>                 m_poly3; //xs:element
    std::unique_ptr<t_road_planView_geometry_paramPoly3>                 m_paramPoly3; //xs:element
public:
    t_road_planView_geometry_U(){};
    t_road_planView_geometry_U(pugi::xml_node node);
    ~t_road_planView_geometry_U(){};
};
struct t_road_lanes_laneSection_lr_lane_U
{
public:
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_width>>                 m_widths; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_border>>                 m_borders; //xs:element
public:
    t_road_lanes_laneSection_lr_lane_U(){};
    t_road_lanes_laneSection_lr_lane_U(pugi::xml_node node);
    ~t_road_lanes_laneSection_lr_lane_U(){};
};
struct t_road_signals_signal_U
{
public:
    std::unique_ptr<t_road_signals_signal_positionRoad>                 m_positionRoad; //xs:element
    std::unique_ptr<t_road_signals_signal_positionInertial>                 m_positionInertial; //xs:element
public:
    t_road_signals_signal_U(){};
    t_road_signals_signal_U(pugi::xml_node node);
    ~t_road_signals_signal_U(){};
};
struct t_header
{
public:
	t_header(){};
	t_header(pugi::xml_node node);
	virtual ~t_header(){};
public:
	const int	    revMajor=1; // attribute : required
	const int	    revMinor=5; // attribute : required
	std::string	    name; // attribute : optional
	t_header_Version	    version; // attribute : optional
	std::string	    date; // attribute : optional
	double	    north; // attribute : optional
	double	    south; // attribute : optional
	double	    east; // attribute : optional
	double	    west; // attribute : optional
	std::string	    vendor; // attribute : optional
    std::unique_ptr<t_header_GeoReference>                 m_geoReference; //xs:element
    std::unique_ptr<t_header_Offset>                 m_offset; //xs:element
   //group tag : reference g_additionalData
};
struct t_header_GeoReference
{
public:
	t_header_GeoReference(){};
	t_header_GeoReference(pugi::xml_node node);
	virtual ~t_header_GeoReference(){};
public:
   //s_group tag : reference g_additionalData
};
struct t_header_Offset
{
public:
	t_header_Offset(){};
	t_header_Offset(pugi::xml_node node);
	virtual ~t_header_Offset(){};
public:
	double	    x; // attribute : required
	double	    y; // attribute : required
	double	    z; // attribute : required
	float	    hdg; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road
{
public:
	t_road(){};
	t_road(pugi::xml_node node);
	virtual ~t_road(){};
public:
	std::string	    name; // attribute : optional
	t_grEqZero	    length; // attribute : required
	std::string	    id; // attribute : required
	std::string	    junction; // attribute : required
	e_trafficRule	    rule; // attribute : optional
    std::unique_ptr<t_road_link>                 m_link; //xs:element
    std::vector<std::unique_ptr<t_road_type>>                 m_types; //xs:element
    std::unique_ptr<t_road_planView>                 m_planView; //xs:element
    std::unique_ptr<t_road_elevationProfile>                 m_elevationProfile; //xs:element
    std::unique_ptr<t_road_lateralProfile>                 m_lateralProfile; //xs:element
    std::unique_ptr<t_road_lanes>                 m_lanes; //xs:element
    std::unique_ptr<t_road_objects>                 m_objects; //xs:element
    std::unique_ptr<t_road_signals>                 m_signals; //xs:element
    std::unique_ptr<t_road_surface>                 m_surface; //xs:element
    std::unique_ptr<t_road_railroad>                 m_railroad; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_link
{
public:
	t_road_link(){};
	t_road_link(pugi::xml_node node);
	virtual ~t_road_link(){};
public:
    std::unique_ptr<t_road_link_predecessorSuccessor>                 m_predecessor; //xs:element
    std::unique_ptr<t_road_link_predecessorSuccessor>                 m_successor; //xs:element
    std::unique_ptr<t_road_link_neighbor>                 m_neighbor; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_link_predecessorSuccessor
{
public:
	t_road_link_predecessorSuccessor(){};
	t_road_link_predecessorSuccessor(pugi::xml_node node);
	virtual ~t_road_link_predecessorSuccessor(){};
public:
	e_road_link_elementType	    elementType; // attribute : required
	std::string	    elementId; // attribute : required
	e_contactPoint	    contactPoint; // attribute : optional
	t_grEqZero	    elementS; // attribute : optional
	e_elementDir	    elementDir; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_link_neighbor
{
public:
	t_road_link_neighbor(){};
	t_road_link_neighbor(pugi::xml_node node);
	virtual ~t_road_link_neighbor(){};
public:
	e_road_link_neighbor_side	    side; // attribute : required
	std::string	    elementId; // attribute : required
	e_direction	    direction; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_type
{
public:
	t_road_type(){};
	t_road_type(pugi::xml_node node);
	virtual ~t_road_type(){};
public:
	t_grEqZero	    s; // attribute : required
	e_roadType	    type; // attribute : required
	e_countryCode	    country; // attribute : optional
    std::unique_ptr<t_road_type_speed>                 m_speed; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_type_speed
{
public:
	t_road_type_speed(){};
	t_road_type_speed(pugi::xml_node node);
	virtual ~t_road_type_speed(){};
public:
	t_maxSpeed	    max; // attribute : required
	e_unitSpeed	    unit; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_planView
{
public:
	t_road_planView(){};
	t_road_planView(pugi::xml_node node);
	virtual ~t_road_planView(){};
public:
    std::vector<std::unique_ptr<t_road_planView_geometry>>                 m_geometrys; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_planView_geometry
{
public:
	t_road_planView_geometry(){};
	t_road_planView_geometry(pugi::xml_node node);
	virtual ~t_road_planView_geometry(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    x; // attribute : required
	double	    y; // attribute : required
	double	    hdg; // attribute : required
	t_grEqZero	    length; // attribute : required
    std::unique_ptr<t_road_planView_geometry_U>                 m_t_road_planView_geometry; //xs:element
};
struct t_road_planView_geometry_line
{
public:
	t_road_planView_geometry_line(){};
	t_road_planView_geometry_line(pugi::xml_node node);
	virtual ~t_road_planView_geometry_line(){};
public:
   //s_group tag : reference g_additionalData
};
struct t_road_planView_geometry_spiral
{
public:
	t_road_planView_geometry_spiral(){};
	t_road_planView_geometry_spiral(pugi::xml_node node);
	virtual ~t_road_planView_geometry_spiral(){};
public:
	double	    curvStart; // attribute : required
	double	    curvEnd; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_planView_geometry_arc
{
public:
	t_road_planView_geometry_arc(){};
	t_road_planView_geometry_arc(pugi::xml_node node);
	virtual ~t_road_planView_geometry_arc(){};
public:
	double	    curvature; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_planView_geometry_poly3
{
public:
	t_road_planView_geometry_poly3(){};
	t_road_planView_geometry_poly3(pugi::xml_node node);
	virtual ~t_road_planView_geometry_poly3(){};
public:
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_planView_geometry_paramPoly3
{
public:
	t_road_planView_geometry_paramPoly3(){};
	t_road_planView_geometry_paramPoly3(pugi::xml_node node);
	virtual ~t_road_planView_geometry_paramPoly3(){};
public:
	double	    aU; // attribute : required
	double	    bU; // attribute : required
	double	    cU; // attribute : required
	double	    dU; // attribute : required
	double	    aV; // attribute : required
	double	    bV; // attribute : required
	double	    cV; // attribute : required
	double	    dV; // attribute : required
	e_paramPoly3_pRange	    pRange; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_elevationProfile
{
public:
	t_road_elevationProfile(){};
	t_road_elevationProfile(pugi::xml_node node);
	virtual ~t_road_elevationProfile(){};
public:
    std::vector<std::unique_ptr<t_road_elevationProfile_elevation>>                 m_elevations; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_elevationProfile_elevation
{
public:
	t_road_elevationProfile_elevation(){};
	t_road_elevationProfile_elevation(pugi::xml_node node);
	virtual ~t_road_elevationProfile_elevation(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lateralProfile
{
public:
	t_road_lateralProfile(){};
	t_road_lateralProfile(pugi::xml_node node);
	virtual ~t_road_lateralProfile(){};
public:
    std::vector<std::unique_ptr<t_road_lateralProfile_superelevation>>                 m_superelevations; //xs:element
    std::vector<std::unique_ptr<t_road_lateralProfile_crossfall>>                 m_crossfalls; //xs:element
    std::vector<std::unique_ptr<t_road_lateralProfile_shape>>                 m_shapes; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lateralProfile_superelevation
{
public:
	t_road_lateralProfile_superelevation(){};
	t_road_lateralProfile_superelevation(pugi::xml_node node);
	virtual ~t_road_lateralProfile_superelevation(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lateralProfile_crossfall
{
public:
	t_road_lateralProfile_crossfall(){};
	t_road_lateralProfile_crossfall(pugi::xml_node node);
	virtual ~t_road_lateralProfile_crossfall(){};
public:
	e_road_lateralProfile_crossfall_side	    side; // attribute : required
	t_grEqZero	    s; // attribute : required
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lateralProfile_shape
{
public:
	t_road_lateralProfile_shape(){};
	t_road_lateralProfile_shape(pugi::xml_node node);
	virtual ~t_road_lateralProfile_shape(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    t; // attribute : required
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes
{
public:
	t_road_lanes(){};
	t_road_lanes(pugi::xml_node node);
	virtual ~t_road_lanes(){};
public:
    std::vector<std::unique_ptr<t_road_lanes_laneOffset>>                 m_laneOffsets; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection>>                 m_laneSections; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneOffset
{
public:
	t_road_lanes_laneOffset(){};
	t_road_lanes_laneOffset(pugi::xml_node node);
	virtual ~t_road_lanes_laneOffset(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection
{
public:
	t_road_lanes_laneSection(){};
	t_road_lanes_laneSection(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection(){};
public:
	t_grEqZero	    s; // attribute : required
	t_bool	    singleSide; // attribute : optional
    std::unique_ptr<t_road_lanes_laneSection_left>                 m_left; //xs:element
    std::unique_ptr<t_road_lanes_laneSection_center>                 m_center; //xs:element
    std::unique_ptr<t_road_lanes_laneSection_right>                 m_right; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_left
{
public:
	t_road_lanes_laneSection_left(){};
	t_road_lanes_laneSection_left(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_left(){};
public:
    std::vector<std::unique_ptr<t_road_lanes_laneSection_left_lane>>                 m_lanes; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_center
{
public:
	t_road_lanes_laneSection_center(){};
	t_road_lanes_laneSection_center(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_center(){};
public:
    std::vector<std::unique_ptr<t_road_lanes_laneSection_center_lane>>                 m_lanes; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_right
{
public:
	t_road_lanes_laneSection_right(){};
	t_road_lanes_laneSection_right(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_right(){};
public:
    std::vector<std::unique_ptr<t_road_lanes_laneSection_right_lane>>                 m_lanes; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_center_lane
{
public:
	t_road_lanes_laneSection_center_lane(){};
	t_road_lanes_laneSection_center_lane(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_center_lane(){};
public:
	const int	    id=0; // attribute : required
	e_laneType	    type; // attribute : required
	t_bool	    level; // attribute : optional
    std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link>                 m_link; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>>                 m_roadMarks; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane
{
public:
	t_road_lanes_laneSection_lr_lane(){};
	t_road_lanes_laneSection_lr_lane(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane(){};
public:
	e_laneType	    type; // attribute : required
	t_bool	    level; // attribute : optional
    std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link>                 m_link; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>>                 m_roadMarks; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_material>>                 m_materials; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_visibility>>                 m_visibilitys; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_speed>>                 m_speeds; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_access>>                 m_accesss; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_height>>                 m_heights; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_rule>>                 m_rules; //xs:element
   //group tag : reference g_additionalData
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lr_lane_U>>                 m_t_road_lanes_laneSection_lr_lanes; //xs:element
};
struct t_road_lanes_laneSection_left_lane
{
public:
	t_road_lanes_laneSection_left_lane(){};
	t_road_lanes_laneSection_left_lane(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_left_lane(){};
public:
};
struct t_road_lanes_laneSection_right_lane
{
public:
	t_road_lanes_laneSection_right_lane(){};
	t_road_lanes_laneSection_right_lane(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_right_lane(){};
public:
};
struct t_road_lanes_laneSection_lcr_lane_link
{
public:
	t_road_lanes_laneSection_lcr_lane_link(){};
	t_road_lanes_laneSection_lcr_lane_link(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_link(){};
public:
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>>                 m_predecessors; //xs:element
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>>                 m_successors; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor
{
public:
	t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(){};
	t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(){};
public:
	int	    id; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane_width
{
public:
	t_road_lanes_laneSection_lr_lane_width(){};
	t_road_lanes_laneSection_lr_lane_width(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_width(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane_border
{
public:
	t_road_lanes_laneSection_lr_lane_border(){};
	t_road_lanes_laneSection_lr_lane_border(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_border(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lcr_lane_roadMark
{
public:
	t_road_lanes_laneSection_lcr_lane_roadMark(){};
	t_road_lanes_laneSection_lcr_lane_roadMark(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	e_roadMarkType	    type; // attribute : required
	e_roadMarkWeight	    weight; // attribute : optional
	e_roadMarkColor	    color; // attribute : required
	std::string	    material; // attribute : optional
	t_grEqZero	    width; // attribute : optional
	e_road_lanes_laneSection_lcr_lane_roadMark_laneChange	    laneChange; // attribute : optional
	double	    height; // attribute : optional
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_sway>>                 m_sways; //xs:element
    std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type>                 m_type; //xs:element
    std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>                 m_explicit; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lcr_lane_roadMark_sway
{
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_sway(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_sway(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_sway(){};
public:
	t_grEqZero	    ds; // attribute : required
	double	    a; // attribute : required
	double	    b; // attribute : required
	double	    c; // attribute : required
	double	    d; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lcr_lane_roadMark_type
{
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_type(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_type(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_type(){};
public:
	std::string	    name; // attribute : required
	t_grEqZero	    width; // attribute : required
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>>                 m_lines; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lcr_lane_roadMark_type_line
{
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_type_line(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_type_line(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_type_line(){};
public:
	t_grEqZero	    length; // attribute : required
	t_grEqZero	    space; // attribute : required
	double	    tOffset; // attribute : required
	t_grEqZero	    sOffset; // attribute : required
	e_roadMarkRule	    rule; // attribute : optional
	t_grEqZero	    width; // attribute : required
	e_roadMarkColor	    color; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit
{
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_explicit(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_explicit(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_explicit(){};
public:
    std::vector<std::unique_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>>                 m_lines; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line
{
public:
	t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(){};
	t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(){};
public:
	t_grEqZero	    length; // attribute : required
	double	    tOffset; // attribute : required
	t_grEqZero	    sOffset; // attribute : required
	e_roadMarkRule	    rule; // attribute : optional
	t_grEqZero	    width; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane_material
{
public:
	t_road_lanes_laneSection_lr_lane_material(){};
	t_road_lanes_laneSection_lr_lane_material(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_material(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	std::string	    surface; // attribute : optional
	t_grEqZero	    friction; // attribute : required
	t_grEqZero	    roughness; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane_visibility
{
public:
	t_road_lanes_laneSection_lr_lane_visibility(){};
	t_road_lanes_laneSection_lr_lane_visibility(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_visibility(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	t_grEqZero	    forward; // attribute : required
	t_grEqZero	    back; // attribute : required
	t_grEqZero	    left; // attribute : required
	t_grEqZero	    right; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane_speed
{
public:
	t_road_lanes_laneSection_lr_lane_speed(){};
	t_road_lanes_laneSection_lr_lane_speed(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_speed(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	t_grEqZero	    max; // attribute : required
	e_unitSpeed	    unit; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane_access
{
public:
	t_road_lanes_laneSection_lr_lane_access(){};
	t_road_lanes_laneSection_lr_lane_access(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_access(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	e_road_lanes_laneSection_lr_lane_access_rule	    rule; // attribute : required
	e_accessRestrictionType	    restriction; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane_height
{
public:
	t_road_lanes_laneSection_lr_lane_height(){};
	t_road_lanes_laneSection_lr_lane_height(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_height(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	double	    inner; // attribute : required
	double	    outer; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_lanes_laneSection_lr_lane_rule
{
public:
	t_road_lanes_laneSection_lr_lane_rule(){};
	t_road_lanes_laneSection_lr_lane_rule(pugi::xml_node node);
	virtual ~t_road_lanes_laneSection_lr_lane_rule(){};
public:
	t_grEqZero	    sOffset; // attribute : required
	std::string	    value; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_objects
{
public:
	t_road_objects(){};
	t_road_objects(pugi::xml_node node);
	virtual ~t_road_objects(){};
public:
    std::vector<std::unique_ptr<t_road_objects_object>>                 m_objects; //xs:element
    std::vector<std::unique_ptr<t_road_objects_objectReference>>                 m_objectReferences; //xs:element
    std::vector<std::unique_ptr<t_road_objects_tunnel>>                 m_tunnels; //xs:element
    std::vector<std::unique_ptr<t_road_objects_bridge>>                 m_bridges; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_object
{
public:
	t_road_objects_object(){};
	t_road_objects_object(pugi::xml_node node);
	virtual ~t_road_objects_object(){};
public:
	e_objectType	    type; // attribute : optional
	std::string	    subtype; // attribute : optional
	t_yesNo	    dynamic; // attribute : required
	std::string	    name; // attribute : optional
	std::string	    id; // attribute : required
	t_grEqZero	    s; // attribute : required
	double	    t; // attribute : required
	double	    zOffset; // attribute : required
	t_grEqZero	    validLength; // attribute : required
	e_orientation	    orientation; // attribute : required
	double	    hdg; // attribute : required
	double	    pitch; // attribute : required
	double	    roll; // attribute : required
	double	    height; // attribute : required
	double	    length; // attribute : optional
	double	    width; // attribute : optional
	double	    radius; // attribute : optional
    std::unique_ptr<t_road_objects_object_repeat>                 m_repeat; //xs:element
    std::unique_ptr<t_road_objects_object_outlines_outline>                 m_outline; //xs:element
    std::unique_ptr<t_road_objects_object_outlines>                 m_outlines; //xs:element
    std::vector<std::unique_ptr<t_road_objects_object_material>>                 m_materials; //xs:element
    std::vector<std::unique_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
    std::unique_ptr<t_road_objects_object_parkingSpace>                 m_parkingSpace; //xs:element
    std::unique_ptr<t_road_objects_object_markings>                 m_markings; //xs:element
    std::unique_ptr<t_road_objects_object_borders>                 m_borders; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_object_repeat
{
public:
	t_road_objects_object_repeat(){};
	t_road_objects_object_repeat(pugi::xml_node node);
	virtual ~t_road_objects_object_repeat(){};
public:
	t_grEqZero	    s; // attribute : required
	t_grEqZero	    length; // attribute : required
	t_grEqZero	    distance; // attribute : required
	double	    tStart; // attribute : required
	double	    tEnd; // attribute : required
	double	    heightStart; // attribute : required
	double	    heightEnd; // attribute : required
	double	    zOffsetStart; // attribute : required
	double	    zOffsetEnd; // attribute : required
	t_grEqZero	    widthStart; // attribute : required
	t_grEqZero	    widthEnd; // attribute : required
	t_grEqZero	    lengthStart; // attribute : optional
	t_grEqZero	    lengthEnd; // attribute : optional
	t_grEqZero	    radiusStart; // attribute : optional
	t_grEqZero	    radiusEnd; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_objects_object_outlines
{
public:
	t_road_objects_object_outlines(){};
	t_road_objects_object_outlines(pugi::xml_node node);
	virtual ~t_road_objects_object_outlines(){};
public:
    std::vector<std::unique_ptr<t_road_objects_object_outlines_outline>>                 m_outlines; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_object_outlines_outline
{
public:
	t_road_objects_object_outlines_outline(){};
	t_road_objects_object_outlines_outline(pugi::xml_node node);
	virtual ~t_road_objects_object_outlines_outline(){};
public:
	uint64_t	    id; // attribute : required
	e_outlineFillType	    fillType; // attribute : required
	t_bool	    outer; // attribute : required
	t_bool	    closed; // attribute : required
	e_laneType	    laneType; // attribute : required
    std::vector<std::unique_ptr<t_road_objects_object_outlines_outline_cornerRoad>>                 m_cornerRoads; //xs:element
    std::vector<std::unique_ptr<t_road_objects_object_outlines_outline_cornerLocal>>                 m_cornerLocals; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_object_outlines_outline_cornerRoad
{
public:
	t_road_objects_object_outlines_outline_cornerRoad(){};
	t_road_objects_object_outlines_outline_cornerRoad(pugi::xml_node node);
	virtual ~t_road_objects_object_outlines_outline_cornerRoad(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    t; // attribute : required
	double	    dz; // attribute : required
	double	    height; // attribute : required
	uint64_t	    id; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_objects_object_outlines_outline_cornerLocal
{
public:
	t_road_objects_object_outlines_outline_cornerLocal(){};
	t_road_objects_object_outlines_outline_cornerLocal(pugi::xml_node node);
	virtual ~t_road_objects_object_outlines_outline_cornerLocal(){};
public:
	double	    u; // attribute : required
	double	    v; // attribute : required
	double	    z; // attribute : required
	double	    height; // attribute : required
	uint64_t	    id; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_objects_object_material
{
public:
	t_road_objects_object_material(){};
	t_road_objects_object_material(pugi::xml_node node);
	virtual ~t_road_objects_object_material(){};
public:
	std::string	    surface; // attribute : optional
	t_grEqZero	    friction; // attribute : optional
	t_grEqZero	    roughness; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_objects_object_laneValidity
{
public:
	t_road_objects_object_laneValidity(){};
	t_road_objects_object_laneValidity(pugi::xml_node node);
	virtual ~t_road_objects_object_laneValidity(){};
public:
	int	    fromLane; // attribute : required
	int	    toLane; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_objects_object_parkingSpace
{
public:
	t_road_objects_object_parkingSpace(){};
	t_road_objects_object_parkingSpace(pugi::xml_node node);
	virtual ~t_road_objects_object_parkingSpace(){};
public:
	e_road_objects_object_parkingSpace_access	    access; // attribute : required
	std::string	    restrictions; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_objects_object_markings
{
public:
	t_road_objects_object_markings(){};
	t_road_objects_object_markings(pugi::xml_node node);
	virtual ~t_road_objects_object_markings(){};
public:
    std::vector<std::unique_ptr<t_road_objects_object_markings_marking>>                 m_markings; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_object_markings_marking
{
public:
	t_road_objects_object_markings_marking(){};
	t_road_objects_object_markings_marking(pugi::xml_node node);
	virtual ~t_road_objects_object_markings_marking(){};
public:
	e_sideType	    side; // attribute : required
	e_roadMarkWeight	    weight; // attribute : required
	t_grEqZero	    width; // attribute : optional
	e_roadMarkColor	    color; // attribute : required
	t_grEqZero	    zOffset; // attribute : optional
	t_grEqZero	    spaceLength; // attribute : required
	t_grEqZero	    lineLength; // attribute : required
	double	    startOffset; // attribute : required
	double	    stopOffset; // attribute : required
    std::vector<std::unique_ptr<t_road_objects_object_markings_marking_cornerReference>>                 m_cornerReferences; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_object_markings_marking_cornerReference
{
public:
	t_road_objects_object_markings_marking_cornerReference(){};
	t_road_objects_object_markings_marking_cornerReference(pugi::xml_node node);
	virtual ~t_road_objects_object_markings_marking_cornerReference(){};
public:
	uint64_t	    id; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_objects_object_borders
{
public:
	t_road_objects_object_borders(){};
	t_road_objects_object_borders(pugi::xml_node node);
	virtual ~t_road_objects_object_borders(){};
public:
    std::vector<std::unique_ptr<t_road_objects_object_borders_border>>                 m_borders; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_object_borders_border
{
public:
	t_road_objects_object_borders_border(){};
	t_road_objects_object_borders_border(pugi::xml_node node);
	virtual ~t_road_objects_object_borders_border(){};
public:
	t_grEqZero	    width; // attribute : required
	e_borderType	    type; // attribute : required
	uint64_t	    outlineId; // attribute : required
	t_bool	    useCompleteOutline; // attribute : optional
    std::vector<std::unique_ptr<t_road_objects_object_markings_marking_cornerReference>>                 m_cornerReferences; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_objectReference
{
public:
	t_road_objects_objectReference(){};
	t_road_objects_objectReference(pugi::xml_node node);
	virtual ~t_road_objects_objectReference(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    t; // attribute : required
	std::string	    id; // attribute : required
	double	    zOffset; // attribute : required
	t_grEqZero	    validLength; // attribute : required
	e_orientation	    orientation; // attribute : required
    std::vector<std::unique_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_tunnel
{
public:
	t_road_objects_tunnel(){};
	t_road_objects_tunnel(pugi::xml_node node);
	virtual ~t_road_objects_tunnel(){};
public:
	t_grEqZero	    s; // attribute : required
	t_grEqZero	    length; // attribute : required
	std::string	    name; // attribute : optional
	std::string	    id; // attribute : required
	e_tunnelType	    type; // attribute : required
	t_zeroOne	    lighting; // attribute : optional
	t_zeroOne	    daylight; // attribute : optional
    std::vector<std::unique_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_objects_bridge
{
public:
	t_road_objects_bridge(){};
	t_road_objects_bridge(pugi::xml_node node);
	virtual ~t_road_objects_bridge(){};
public:
	t_grEqZero	    s; // attribute : required
	t_grEqZero	    length; // attribute : required
	std::string	    name; // attribute : optional
	std::string	    id; // attribute : required
	e_bridgeType	    type; // attribute : required
    std::vector<std::unique_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_signals
{
public:
	t_road_signals(){};
	t_road_signals(pugi::xml_node node);
	virtual ~t_road_signals(){};
public:
    std::vector<std::unique_ptr<t_road_signals_signal>>                 m_signals; //xs:element
    std::vector<std::unique_ptr<t_road_signals_signalReference>>                 m_signalReferences; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_signals_signal
{
public:
	t_road_signals_signal(){};
	t_road_signals_signal(pugi::xml_node node);
	virtual ~t_road_signals_signal(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    t; // attribute : required
	std::string	    id; // attribute : required
	std::string	    name; // attribute : optional
	t_yesNo	    dynamic; // attribute : required
	e_orientation	    orientation; // attribute : required
	double	    zOffset; // attribute : required
	e_countryCode	    country; // attribute : optional
	std::string	    countryRevision; // attribute : optional
	std::string	    type; // attribute : required
	std::string	    subtype; // attribute : required
	double	    value; // attribute : optional
	e_unit	    unit; // attribute : optional
	t_grEqZero	    height; // attribute : required
	t_grEqZero	    width; // attribute : required
	std::string	    text; // attribute : optional
	double	    hOffset; // attribute : optional
	double	    pitch; // attribute : optional
	double	    roll; // attribute : optional
    std::vector<std::unique_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
    std::vector<std::unique_ptr<t_road_signals_signal_dependency>>                 m_dependencys; //xs:element
    std::vector<std::unique_ptr<t_road_signals_signal_reference>>                 m_references; //xs:element
   //group tag : reference g_additionalData
    std::unique_ptr<t_road_signals_signal_U>                 m_t_road_signals_signal; //xs:element
};
struct t_road_signals_signal_dependency
{
public:
	t_road_signals_signal_dependency(){};
	t_road_signals_signal_dependency(pugi::xml_node node);
	virtual ~t_road_signals_signal_dependency(){};
public:
	std::string	    id; // attribute : required
	std::string	    type; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_signals_signal_reference
{
public:
	t_road_signals_signal_reference(){};
	t_road_signals_signal_reference(pugi::xml_node node);
	virtual ~t_road_signals_signal_reference(){};
public:
	e_road_signals_signal_reference_elementType	    elementType; // attribute : required
	std::string	    elementId; // attribute : required
	std::string	    type; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_signals_signal_positionRoad
{
public:
	t_road_signals_signal_positionRoad(){};
	t_road_signals_signal_positionRoad(pugi::xml_node node);
	virtual ~t_road_signals_signal_positionRoad(){};
public:
	std::string	    roadId; // attribute : required
	t_grEqZero	    s; // attribute : required
	double	    t; // attribute : required
	double	    zOffset; // attribute : required
	double	    hOffset; // attribute : required
	double	    pitch; // attribute : optional
	double	    roll; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_signals_signal_positionInertial
{
public:
	t_road_signals_signal_positionInertial(){};
	t_road_signals_signal_positionInertial(pugi::xml_node node);
	virtual ~t_road_signals_signal_positionInertial(){};
public:
	double	    x; // attribute : required
	double	    y; // attribute : required
	double	    z; // attribute : required
	double	    hdg; // attribute : required
	double	    pitch; // attribute : optional
	double	    roll; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_signals_signalReference
{
public:
	t_road_signals_signalReference(){};
	t_road_signals_signalReference(pugi::xml_node node);
	virtual ~t_road_signals_signalReference(){};
public:
	t_grEqZero	    s; // attribute : required
	double	    t; // attribute : required
	std::string	    id; // attribute : required
	e_orientation	    orientation; // attribute : required
    std::vector<std::unique_ptr<t_road_objects_object_laneValidity>>                 m_validitys; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_surface
{
public:
	t_road_surface(){};
	t_road_surface(pugi::xml_node node);
	virtual ~t_road_surface(){};
public:
    std::vector<std::unique_ptr<t_road_surface_CRG>>                 m_CRGs; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_surface_CRG
{
public:
	t_road_surface_CRG(){};
	t_road_surface_CRG(pugi::xml_node node);
	virtual ~t_road_surface_CRG(){};
public:
	std::string	    file; // attribute : required
	t_grEqZero	    sStart; // attribute : required
	t_grEqZero	    sEnd; // attribute : required
	e_direction	    orientation; // attribute : required
	e_road_surface_CRG_mode	    mode; // attribute : required
	e_road_surface_CRG_purpose	    purpose; // attribute : optional
	double	    sOffset; // attribute : optional
	double	    tOffset; // attribute : optional
	double	    zOffset; // attribute : optional
	double	    zScale; // attribute : optional
	double	    hOffset; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_road_railroad
{
public:
	t_road_railroad(){};
	t_road_railroad(pugi::xml_node node);
	virtual ~t_road_railroad(){};
public:
    std::vector<std::unique_ptr<t_road_railroad_switch>>                 m_switchs; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_railroad_switch
{
public:
	t_road_railroad_switch(){};
	t_road_railroad_switch(pugi::xml_node node);
	virtual ~t_road_railroad_switch(){};
public:
	std::string	    name; // attribute : required
	std::string	    id; // attribute : required
	e_road_railroad_switch_position	    position; // attribute : required
    std::unique_ptr<t_road_railroad_switch_mainTrack>                 m_mainTrack; //xs:element
    std::unique_ptr<t_road_railroad_switch_sideTrack>                 m_sideTrack; //xs:element
    std::unique_ptr<t_road_railroad_switch_partner>                 m_partner; //xs:element
   //group tag : reference g_additionalData
};
struct t_road_railroad_switch_mainTrack
{
public:
	t_road_railroad_switch_mainTrack(){};
	t_road_railroad_switch_mainTrack(pugi::xml_node node);
	virtual ~t_road_railroad_switch_mainTrack(){};
public:
	std::string	    id; // attribute : required
	t_grEqZero	    s; // attribute : required
	e_elementDir	    dir; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_railroad_switch_sideTrack
{
public:
	t_road_railroad_switch_sideTrack(){};
	t_road_railroad_switch_sideTrack(pugi::xml_node node);
	virtual ~t_road_railroad_switch_sideTrack(){};
public:
	std::string	    id; // attribute : required
	t_grEqZero	    s; // attribute : required
	e_elementDir	    dir; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_road_railroad_switch_partner
{
public:
	t_road_railroad_switch_partner(){};
	t_road_railroad_switch_partner(pugi::xml_node node);
	virtual ~t_road_railroad_switch_partner(){};
public:
	std::string	    name; // attribute : optional
	std::string	    id; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_controller
{
public:
	t_controller(){};
	t_controller(pugi::xml_node node);
	virtual ~t_controller(){};
public:
	std::string	    id; // attribute : required
	std::string	    name; // attribute : optional
	uint64_t	    sequence; // attribute : optional
    std::vector<std::unique_ptr<t_controller_control>>                 m_controls; //xs:element
   //group tag : reference g_additionalData
};
struct t_controller_control
{
public:
	t_controller_control(){};
	t_controller_control(pugi::xml_node node);
	virtual ~t_controller_control(){};
public:
	std::string	    signalId; // attribute : required
	std::string	    type; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_junction
{
public:
	t_junction(){};
	t_junction(pugi::xml_node node);
	virtual ~t_junction(){};
public:
	std::string	    name; // attribute : optional
	t_junction_id	    id; // attribute : required
	e_junction_type	    type; // attribute : optional
    std::vector<std::unique_ptr<t_junction_connection>>                 m_connections; //xs:element
    std::vector<std::unique_ptr<t_junction_priority>>                 m_prioritys; //xs:element
    std::vector<std::unique_ptr<t_junction_controller>>                 m_controllers; //xs:element
    std::unique_ptr<t_junction_surface>                 m_surface; //xs:element
   //group tag : reference g_additionalData
};
struct t_junction_connection
{
public:
	t_junction_connection(){};
	t_junction_connection(pugi::xml_node node);
	virtual ~t_junction_connection(){};
public:
	std::string	    id; // attribute : required
	std::string	    incomingRoad; // attribute : required
	std::string	    connectingRoad; // attribute : required
	e_contactPoint	    contactPoint; // attribute : required
	std::string	    connectionMaster; // attribute : optional
	e_junction_type	    type; // attribute : optional
    std::unique_ptr<t_junction_predecessorSuccessor>                 m_predecessor; //xs:element
    std::unique_ptr<t_junction_predecessorSuccessor>                 m_successor; //xs:element
    std::vector<std::unique_ptr<t_junction_connection_laneLink>>                 m_laneLinks; //xs:element
   //group tag : reference g_additionalData
};
struct t_junction_predecessorSuccessor
{
public:
	t_junction_predecessorSuccessor(){};
	t_junction_predecessorSuccessor(pugi::xml_node node);
	virtual ~t_junction_predecessorSuccessor(){};
public:
	const std::string	    elementType="road"; // attribute : required
	std::string	    elementId; // attribute : required
	t_grZero	    elementS; // attribute : required
	e_elementDir	    elementDir; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_junction_connection_laneLink
{
public:
	t_junction_connection_laneLink(){};
	t_junction_connection_laneLink(pugi::xml_node node);
	virtual ~t_junction_connection_laneLink(){};
public:
	int	    from; // attribute : required
	int	    to; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_junction_priority
{
public:
	t_junction_priority(){};
	t_junction_priority(pugi::xml_node node);
	virtual ~t_junction_priority(){};
public:
	std::string	    high; // attribute : optional
	std::string	    low; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_junction_controller
{
public:
	t_junction_controller(){};
	t_junction_controller(pugi::xml_node node);
	virtual ~t_junction_controller(){};
public:
	std::string	    id; // attribute : required
	std::string	    type; // attribute : optional
	uint64_t	    sequence; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_junction_surface
{
public:
	t_junction_surface(){};
	t_junction_surface(pugi::xml_node node);
	virtual ~t_junction_surface(){};
public:
    std::vector<std::unique_ptr<t_junction_surface_CRG>>                 m_CRGs; //xs:element
   //group tag : reference g_additionalData
};
struct t_junction_surface_CRG
{
public:
	t_junction_surface_CRG(){};
	t_junction_surface_CRG(pugi::xml_node node);
	virtual ~t_junction_surface_CRG(){};
public:
	std::string	    file; // attribute : required
	const e_road_surface_CRG_mode	    mode=e_road_surface_CRG_mode::GLOBAL; // attribute : required
	e_road_surface_CRG_purpose	    purpose; // attribute : optional
	double	    zOffset; // attribute : optional
	double	    zScale; // attribute : optional
   //s_group tag : reference g_additionalData
};
struct t_junctionGroup
{
public:
	t_junctionGroup(){};
	t_junctionGroup(pugi::xml_node node);
	virtual ~t_junctionGroup(){};
public:
	std::string	    name; // attribute : optional
	std::string	    id; // attribute : required
	e_junctionGroup_type	    type; // attribute : required
    std::vector<std::unique_ptr<t_junctionGroup_junctionReference>>                 m_junctionReferences; //xs:element
   //group tag : reference g_additionalData
};
struct t_junctionGroup_junctionReference
{
public:
	t_junctionGroup_junctionReference(){};
	t_junctionGroup_junctionReference(pugi::xml_node node);
	virtual ~t_junctionGroup_junctionReference(){};
public:
	std::string	    junction; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_station
{
public:
	t_station(){};
	t_station(pugi::xml_node node);
	virtual ~t_station(){};
public:
	std::string	    name; // attribute : required
	std::string	    id; // attribute : required
	e_station_type	    type; // attribute : optional
    std::vector<std::unique_ptr<t_station_platform>>                 m_platforms; //xs:element
   //group tag : reference g_additionalData
};
struct t_station_platform
{
public:
	t_station_platform(){};
	t_station_platform(pugi::xml_node node);
	virtual ~t_station_platform(){};
public:
	std::string	    name; // attribute : optional
	std::string	    id; // attribute : required
    std::vector<std::unique_ptr<t_station_platform_segment>>                 m_segments; //xs:element
   //group tag : reference g_additionalData
};
struct t_station_platform_segment
{
public:
	t_station_platform_segment(){};
	t_station_platform_segment(pugi::xml_node node);
	virtual ~t_station_platform_segment(){};
public:
	std::string	    roadId; // attribute : required
	t_grEqZero	    sStart; // attribute : required
	t_grEqZero	    sEnd; // attribute : required
	e_station_platform_segment_side	    side; // attribute : required
   //s_group tag : reference g_additionalData
};
struct t_userData
{
public:
	t_userData(){};
	t_userData(pugi::xml_node node);
	virtual ~t_userData(){};
public:
	std::string	    code; // attribute : required
	std::string	    value; // attribute : required
};
struct t_include
{
public:
	t_include(){};
	t_include(pugi::xml_node node);
	virtual ~t_include(){};
public:
	std::string	    file; // attribute : required
};
struct t_dataQuality
{
public:
	t_dataQuality(){};
	t_dataQuality(pugi::xml_node node);
	virtual ~t_dataQuality(){};
public:
    std::unique_ptr<t_dataQuality_Error>                 m_error; //xs:element
    std::unique_ptr<t_dataQuality_RawData>                 m_rawData; //xs:element
};
struct t_dataQuality_Error
{
public:
	t_dataQuality_Error(){};
	t_dataQuality_Error(pugi::xml_node node);
	virtual ~t_dataQuality_Error(){};
public:
	double	    xyAbsolute; // attribute : required
	double	    zAbsolute; // attribute : required
	double	    xyRelative; // attribute : required
	double	    zRelative; // attribute : required
};
struct t_dataQuality_RawData
{
public:
	t_dataQuality_RawData(){};
	t_dataQuality_RawData(pugi::xml_node node);
	virtual ~t_dataQuality_RawData(){};
public:
	std::string	    date; // attribute : required
	e_dataQuality_RawData_Source	    source; // attribute : required
	std::string	    sourceComment; // attribute : optional
	e_dataQuality_RawData_PostProcessing	    postProcessing; // attribute : required
	std::string	    postProcessingComment; // attribute : optional
};
// xs:group -> aliased to group definition
struct g_additionalData
{
public:
	g_additionalData(){};
	g_additionalData(pugi::xml_node node);
	virtual ~g_additionalData(){};
public:
    std::vector<std::unique_ptr<t_userData>>                 m_userDatas; //xs:element
    std::vector<std::unique_ptr<t_include>>                 m_includes; //xs:element
    std::unique_ptr<t_dataQuality>                 m_dataQuality; //xs:element
};
// xs:element -> main  as clazz definition
class OpenDRIVE
{
public:
    std::unique_ptr<t_header>                 m_header; //xs:element
    std::vector<std::unique_ptr<t_road>>                 m_roads; //xs:element
    std::vector<std::unique_ptr<t_controller>>                 m_controllers; //xs:element
    std::vector<std::unique_ptr<t_junction>>                 m_junctions; //xs:element
    std::vector<std::unique_ptr<t_junctionGroup>>                 m_junctionGroups; //xs:element
    std::vector<std::unique_ptr<t_station>>                 m_stations; //xs:element
    //group tag : reference g_additionalData
public:
	OpenDRIVE(){};
	OpenDRIVE(pugi::xml_node node);
	virtual ~OpenDRIVE(){};
};
class xodr
{
private:
    pugi::xml_document m_doc;
    pugi::xml_node m_root;
	std::unique_ptr<OpenDRIVE>    m_OpenDRIVE;
public:
    void load(std::string xodrfilename);
    void parse();
public:
    xodr();
    ~xodr();
};
#endif //_OPENDRIVE_1_5M_XSD_H_

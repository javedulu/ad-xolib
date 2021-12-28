//
//  opendrive_17_core_js.cxx
//  Created by Javed Shaik on Mon Dec 20 22:11:30 2021
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 65f0bc62-d4b3-41b8-bc36-e45f03aca61a --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
//
// emscripten (embind)
//
#include <emscripten/bind.h>
//
#include "xodr.h"
using namespace emscripten;
EMSCRIPTEN_BINDINGS(jsxodr)
{
    class_<t_road_objects_object_outlines_outline_U>("t_road_objects_object_outlines_outline_U")
        .smart_ptr_constructor("t_road_objects_object_outlines_outline_U",&std::make_shared<t_road_objects_object_outlines_outline_U>)
        .property("cornerRoad", &t_road_objects_object_outlines_outline_U::m_cornerRoads ) //t_road_objects_object_outlines_outline_cornerRoad
        .property("cornerLocal", &t_road_objects_object_outlines_outline_U::m_cornerLocals ) //t_road_objects_object_outlines_outline_cornerLocal
;
        register_vector<std::shared_ptr<t_road_objects_object_outlines_outline_cornerRoad>>("vector<t_road_objects_object_outlines_outline_cornerRoad>"); //t_road_objects_object_outlines_outline_cornerRoad
        register_vector<std::shared_ptr<t_road_objects_object_outlines_outline_cornerLocal>>("vector<t_road_objects_object_outlines_outline_cornerLocal>"); //t_road_objects_object_outlines_outline_cornerLocal
    class_<t_road_signals_signal_U>("t_road_signals_signal_U")
        .smart_ptr_constructor("t_road_signals_signal_U",&std::make_shared<t_road_signals_signal_U>)
        .property("positionInertial", &t_road_signals_signal_U::m_positionInertial ) //t_road_signals_signal_positionInertial
        .property("positionRoad", &t_road_signals_signal_U::m_positionRoad ) //t_road_signals_signal_positionRoad
;
    class_<t_road_planView_geometry_U>("t_road_planView_geometry_U")
        .smart_ptr_constructor("t_road_planView_geometry_U",&std::make_shared<t_road_planView_geometry_U>)
        .property("line", &t_road_planView_geometry_U::m_line ) //t_road_planView_geometry_line
        .property("spiral", &t_road_planView_geometry_U::m_spiral ) //t_road_planView_geometry_spiral
        .property("arc", &t_road_planView_geometry_U::m_arc ) //t_road_planView_geometry_arc
        .property("poly3", &t_road_planView_geometry_U::m_poly3 ) //t_road_planView_geometry_poly3
        .property("paramPoly3", &t_road_planView_geometry_U::m_paramPoly3 ) //t_road_planView_geometry_paramPoly3
;
    class_<t_road_lanes_laneSection_lr_lane_U>("t_road_lanes_laneSection_lr_lane_U")
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane_U",&std::make_shared<t_road_lanes_laneSection_lr_lane_U>)
        .property("border", &t_road_lanes_laneSection_lr_lane_U::m_borders ) //t_road_lanes_laneSection_lr_lane_border
        .property("width", &t_road_lanes_laneSection_lr_lane_U::m_widths ) //t_road_lanes_laneSection_lr_lane_width
;
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_border>>("vector<t_road_lanes_laneSection_lr_lane_border>"); //t_road_lanes_laneSection_lr_lane_border
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_width>>("vector<t_road_lanes_laneSection_lr_lane_width>"); //t_road_lanes_laneSection_lr_lane_width
//
    class_<_OpenDriveElement>("_OpenDriveElement") 
        .smart_ptr_constructor("_OpenDriveElement",&std::make_shared<_OpenDriveElement>) ;
; 
//
    class_<t_dataQuality>("t_dataQuality") 
        .smart_ptr_constructor("t_dataQuality",&std::make_shared<t_dataQuality>) 
        .property("error", &t_dataQuality::m_error ) //t_dataQuality_Error
        .property("rawData", &t_dataQuality::m_rawData ) //t_dataQuality_RawData
; 
//
    class_<t_dataQuality_Error>("t_dataQuality_Error") 
        .smart_ptr_constructor("t_dataQuality_Error",&std::make_shared<t_dataQuality_Error>) 
        .property("xyAbsolute", &t_dataQuality_Error::xyAbsolute) //required
        .property("xyRelative", &t_dataQuality_Error::xyRelative) //required
        .property("zAbsolute", &t_dataQuality_Error::zAbsolute) //required
        .property("zRelative", &t_dataQuality_Error::zRelative) //required
; 
//
    class_<t_dataQuality_RawData>("t_dataQuality_RawData") 
        .smart_ptr_constructor("t_dataQuality_RawData",&std::make_shared<t_dataQuality_RawData>) 
        .property("date", &t_dataQuality_RawData::date) //required
        .property("postProcessing", &t_dataQuality_RawData::postProcessing) //required
        .property("postProcessingComment", &t_dataQuality_RawData::postProcessingComment) //optional
        .property("source", &t_dataQuality_RawData::source) //required
        .property("sourceComment", &t_dataQuality_RawData::sourceComment) //optional
; 
//
    class_<t_header>("t_header") 
        .smart_ptr_constructor("t_header",&std::make_shared<t_header>) 
        .property("date", &t_header::date) //optional
        .property("east", &t_header::east) //optional
        .property("name", &t_header::name) //optional
        .property("north", &t_header::north) //optional
        .property("revMajor",&t_header::revMajor)
        .property("revMinor", &t_header::revMinor) //required
        .property("south", &t_header::south) //optional
        .property("vendor", &t_header::vendor) //optional
        .property("version", &t_header::version) //optional
        .property("west", &t_header::west) //optional
        .property("geoReference", &t_header::m_geoReference ) //t_header_GeoReference
        .property("offset", &t_header::m_offset ) //t_header_Offset
    .property("g_additionalData", &t_header::m_g_additionalData ) // group read 
; 
//
    class_<t_header_GeoReference>("t_header_GeoReference") 
        .smart_ptr_constructor("t_header_GeoReference",&std::make_shared<t_header_GeoReference>) 
    .property("g_additionalData", &t_header_GeoReference::m_g_additionalData ) // group read 
; 
//
    class_<t_header_Offset>("t_header_Offset") 
        .smart_ptr_constructor("t_header_Offset",&std::make_shared<t_header_Offset>) 
        .property("hdg", &t_header_Offset::hdg) //required
        .property("x", &t_header_Offset::x) //required
        .property("y", &t_header_Offset::y) //required
        .property("z", &t_header_Offset::z) //required
    .property("g_additionalData", &t_header_Offset::m_g_additionalData ) // group read 
; 
//
    class_<t_include>("t_include") 
        .smart_ptr_constructor("t_include",&std::make_shared<t_include>) 
        .property("file", &t_include::file) //required
; 
//
    class_<t_userData>("t_userData") 
        .smart_ptr_constructor("t_userData",&std::make_shared<t_userData>) 
        .property("code", &t_userData::code) //required
        .property("value", &t_userData::value) //optional
; 
//
    class_<t_road_objects>("t_road_objects") 
        .smart_ptr_constructor("t_road_objects",&std::make_shared<t_road_objects>) 
        .property("object", &t_road_objects::m_objects ) //t_road_objects_object 
        .property("objectReference", &t_road_objects::m_objectReferences ) //t_road_objects_objectReference 
        .property("tunnel", &t_road_objects::m_tunnels ) //t_road_objects_tunnel 
        .property("bridge", &t_road_objects::m_bridges ) //t_road_objects_bridge 
    .property("g_additionalData", &t_road_objects::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object>>("vector<t_road_objects_object>"); //t_road_objects_object
        register_vector<std::shared_ptr<t_road_objects_objectReference>>("vector<t_road_objects_objectReference>"); //t_road_objects_objectReference
        register_vector<std::shared_ptr<t_road_objects_tunnel>>("vector<t_road_objects_tunnel>"); //t_road_objects_tunnel
        register_vector<std::shared_ptr<t_road_objects_bridge>>("vector<t_road_objects_bridge>"); //t_road_objects_bridge
//
    class_<t_road_objects_bridge>("t_road_objects_bridge") 
        .smart_ptr_constructor("t_road_objects_bridge",&std::make_shared<t_road_objects_bridge>) 
        .property("id", &t_road_objects_bridge::id) //required
        .property("length", &t_road_objects_bridge::length) //required
        .property("name", &t_road_objects_bridge::name) //optional
        .property("s", &t_road_objects_bridge::s) //required
        .property("type", &t_road_objects_bridge::type) //required
        .property("validity", &t_road_objects_bridge::m_validitys ) //t_road_objects_object_laneValidity 
    .property("g_additionalData", &t_road_objects_bridge::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_laneValidity>>("vector<t_road_objects_object_laneValidity>"); //t_road_objects_object_laneValidity
//
    class_<t_road_objects_object>("t_road_objects_object") 
        .smart_ptr_constructor("t_road_objects_object",&std::make_shared<t_road_objects_object>) 
        .property("dynamic", &t_road_objects_object::dynamic) //optional
        .property("hdg", &t_road_objects_object::hdg) //optional
        .property("height", &t_road_objects_object::height) //optional
        .property("id", &t_road_objects_object::id) //required
        .property("length", &t_road_objects_object::length) //optional
        .property("name", &t_road_objects_object::name) //optional
        .property("orientation", &t_road_objects_object::orientation) //optional
        .property("perpToRoad", &t_road_objects_object::perpToRoad) //optional
        .property("pitch", &t_road_objects_object::pitch) //optional
        .property("radius", &t_road_objects_object::radius) //optional
        .property("roll", &t_road_objects_object::roll) //optional
        .property("s", &t_road_objects_object::s) //required
        .property("subtype", &t_road_objects_object::subtype) //optional
        .property("t", &t_road_objects_object::t) //required
        .property("type", &t_road_objects_object::type) //optional
        .property("validLength", &t_road_objects_object::validLength) //optional
        .property("width", &t_road_objects_object::width) //optional
        .property("zOffset", &t_road_objects_object::zOffset) //required
        .property("repeat", &t_road_objects_object::m_repeats ) //t_road_objects_object_repeat 
        .property("outline", &t_road_objects_object::m_outline ) //t_road_objects_object_outlines_outline
        .property("outlines", &t_road_objects_object::m_outlines ) //t_road_objects_object_outlines
        .property("material", &t_road_objects_object::m_materials ) //t_road_objects_object_material 
        .property("validity", &t_road_objects_object::m_validitys ) //t_road_objects_object_laneValidity 
        .property("parkingSpace", &t_road_objects_object::m_parkingSpace ) //t_road_objects_object_parkingSpace
        .property("markings", &t_road_objects_object::m_markings ) //t_road_objects_object_markings
        .property("borders", &t_road_objects_object::m_borders ) //t_road_objects_object_borders
        .property("surface", &t_road_objects_object::m_surface ) //t_road_objects_object_surface
    .property("g_additionalData", &t_road_objects_object::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_repeat>>("vector<t_road_objects_object_repeat>"); //t_road_objects_object_repeat
        register_vector<std::shared_ptr<t_road_objects_object_material>>("vector<t_road_objects_object_material>"); //t_road_objects_object_material
        register_vector<std::shared_ptr<t_road_objects_object_laneValidity>>("vector<t_road_objects_object_laneValidity>"); //t_road_objects_object_laneValidity
//
    class_<t_road_objects_object_borders>("t_road_objects_object_borders") 
        .smart_ptr_constructor("t_road_objects_object_borders",&std::make_shared<t_road_objects_object_borders>) 
        .property("border", &t_road_objects_object_borders::m_borders ) //t_road_objects_object_borders_border 
    .property("g_additionalData", &t_road_objects_object_borders::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_borders_border>>("vector<t_road_objects_object_borders_border>"); //t_road_objects_object_borders_border
//
    class_<t_road_objects_object_borders_border>("t_road_objects_object_borders_border") 
        .smart_ptr_constructor("t_road_objects_object_borders_border",&std::make_shared<t_road_objects_object_borders_border>) 
        .property("outlineId", &t_road_objects_object_borders_border::outlineId) //required
        .property("type", &t_road_objects_object_borders_border::type) //required
        .property("useCompleteOutline", &t_road_objects_object_borders_border::useCompleteOutline) //optional
        .property("width", &t_road_objects_object_borders_border::width) //required
        .property("cornerReference", &t_road_objects_object_borders_border::m_cornerReferences ) //t_road_objects_object_markings_marking_cornerReference 
    .property("g_additionalData", &t_road_objects_object_borders_border::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_markings_marking_cornerReference>>("vector<t_road_objects_object_markings_marking_cornerReference>"); //t_road_objects_object_markings_marking_cornerReference
//
    class_<t_road_objects_object_markings>("t_road_objects_object_markings") 
        .smart_ptr_constructor("t_road_objects_object_markings",&std::make_shared<t_road_objects_object_markings>) 
        .property("marking", &t_road_objects_object_markings::m_markings ) //t_road_objects_object_markings_marking 
    .property("g_additionalData", &t_road_objects_object_markings::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_markings_marking>>("vector<t_road_objects_object_markings_marking>"); //t_road_objects_object_markings_marking
//
    class_<t_road_objects_object_markings_marking>("t_road_objects_object_markings_marking") 
        .smart_ptr_constructor("t_road_objects_object_markings_marking",&std::make_shared<t_road_objects_object_markings_marking>) 
        .property("color", &t_road_objects_object_markings_marking::color) //required
        .property("lineLength", &t_road_objects_object_markings_marking::lineLength) //required
        .property("side", &t_road_objects_object_markings_marking::side) //optional
        .property("spaceLength", &t_road_objects_object_markings_marking::spaceLength) //required
        .property("startOffset", &t_road_objects_object_markings_marking::startOffset) //required
        .property("stopOffset", &t_road_objects_object_markings_marking::stopOffset) //required
        .property("weight", &t_road_objects_object_markings_marking::weight) //optional
        .property("width", &t_road_objects_object_markings_marking::width) //optional
        .property("zOffset", &t_road_objects_object_markings_marking::zOffset) //optional
        .property("cornerReference", &t_road_objects_object_markings_marking::m_cornerReferences ) //t_road_objects_object_markings_marking_cornerReference 
    .property("g_additionalData", &t_road_objects_object_markings_marking::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_markings_marking_cornerReference>>("vector<t_road_objects_object_markings_marking_cornerReference>"); //t_road_objects_object_markings_marking_cornerReference
//
    class_<t_road_objects_object_markings_marking_cornerReference>("t_road_objects_object_markings_marking_cornerReference") 
        .smart_ptr_constructor("t_road_objects_object_markings_marking_cornerReference",&std::make_shared<t_road_objects_object_markings_marking_cornerReference>) 
        .property("id", &t_road_objects_object_markings_marking_cornerReference::id) //required
; 
//
    class_<t_road_objects_object_material>("t_road_objects_object_material") 
        .smart_ptr_constructor("t_road_objects_object_material",&std::make_shared<t_road_objects_object_material>) 
        .property("friction", &t_road_objects_object_material::friction) //optional
        .property("roughness", &t_road_objects_object_material::roughness) //optional
        .property("surface", &t_road_objects_object_material::surface) //optional
; 
//
    class_<t_road_objects_object_outlines>("t_road_objects_object_outlines") 
        .smart_ptr_constructor("t_road_objects_object_outlines",&std::make_shared<t_road_objects_object_outlines>) 
        .property("outline", &t_road_objects_object_outlines::m_outlines ) //t_road_objects_object_outlines_outline 
    .property("g_additionalData", &t_road_objects_object_outlines::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_outlines_outline>>("vector<t_road_objects_object_outlines_outline>"); //t_road_objects_object_outlines_outline
//
    class_<t_road_objects_object_outlines_outline>("t_road_objects_object_outlines_outline") 
        .smart_ptr_constructor("t_road_objects_object_outlines_outline",&std::make_shared<t_road_objects_object_outlines_outline>) 
        .property("closed", &t_road_objects_object_outlines_outline::closed) //optional
        .property("fillType", &t_road_objects_object_outlines_outline::fillType) //optional
        .property("id", &t_road_objects_object_outlines_outline::id) //optional
        .property("laneType", &t_road_objects_object_outlines_outline::laneType) //optional
        .property("outer", &t_road_objects_object_outlines_outline::outer) //optional
    .property("g_additionalData", &t_road_objects_object_outlines_outline::m_g_additionalData ) // group read 
        .property("t_road_objects_object_outlines_outline_U", &t_road_objects_object_outlines_outline::m_t_road_objects_object_outlines_outline ) //
; 
//
    class_<t_road_objects_object_outlines_outline_cornerLocal>("t_road_objects_object_outlines_outline_cornerLocal") 
        .smart_ptr_constructor("t_road_objects_object_outlines_outline_cornerLocal",&std::make_shared<t_road_objects_object_outlines_outline_cornerLocal>) 
        .property("height", &t_road_objects_object_outlines_outline_cornerLocal::height) //required
        .property("id", &t_road_objects_object_outlines_outline_cornerLocal::id) //optional
        .property("u", &t_road_objects_object_outlines_outline_cornerLocal::u) //required
        .property("v", &t_road_objects_object_outlines_outline_cornerLocal::v) //required
        .property("z", &t_road_objects_object_outlines_outline_cornerLocal::z) //required
; 
//
    class_<t_road_objects_object_outlines_outline_cornerRoad>("t_road_objects_object_outlines_outline_cornerRoad") 
        .smart_ptr_constructor("t_road_objects_object_outlines_outline_cornerRoad",&std::make_shared<t_road_objects_object_outlines_outline_cornerRoad>) 
        .property("dz", &t_road_objects_object_outlines_outline_cornerRoad::dz) //required
        .property("height", &t_road_objects_object_outlines_outline_cornerRoad::height) //required
        .property("id", &t_road_objects_object_outlines_outline_cornerRoad::id) //optional
        .property("s", &t_road_objects_object_outlines_outline_cornerRoad::s) //required
        .property("t", &t_road_objects_object_outlines_outline_cornerRoad::t) //required
; 
//
    class_<t_road_objects_object_parkingSpace>("t_road_objects_object_parkingSpace") 
        .smart_ptr_constructor("t_road_objects_object_parkingSpace",&std::make_shared<t_road_objects_object_parkingSpace>) 
        .property("access", &t_road_objects_object_parkingSpace::access) //required
        .property("restrictions", &t_road_objects_object_parkingSpace::restrictions) //optional
; 
//
    class_<t_road_objects_object_repeat>("t_road_objects_object_repeat") 
        .smart_ptr_constructor("t_road_objects_object_repeat",&std::make_shared<t_road_objects_object_repeat>) 
        .property("distance", &t_road_objects_object_repeat::distance) //required
        .property("heightEnd", &t_road_objects_object_repeat::heightEnd) //required
        .property("heightStart", &t_road_objects_object_repeat::heightStart) //required
        .property("length", &t_road_objects_object_repeat::length) //required
        .property("lengthEnd", &t_road_objects_object_repeat::lengthEnd) //optional
        .property("lengthStart", &t_road_objects_object_repeat::lengthStart) //optional
        .property("radiusEnd", &t_road_objects_object_repeat::radiusEnd) //optional
        .property("radiusStart", &t_road_objects_object_repeat::radiusStart) //optional
        .property("s", &t_road_objects_object_repeat::s) //required
        .property("tEnd", &t_road_objects_object_repeat::tEnd) //required
        .property("tStart", &t_road_objects_object_repeat::tStart) //required
        .property("widthEnd", &t_road_objects_object_repeat::widthEnd) //optional
        .property("widthStart", &t_road_objects_object_repeat::widthStart) //optional
        .property("zOffsetEnd", &t_road_objects_object_repeat::zOffsetEnd) //required
        .property("zOffsetStart", &t_road_objects_object_repeat::zOffsetStart) //required
; 
//
    class_<t_road_objects_object_surface>("t_road_objects_object_surface") 
        .smart_ptr_constructor("t_road_objects_object_surface",&std::make_shared<t_road_objects_object_surface>) 
        .property("CRG", &t_road_objects_object_surface::m_CRG ) //t_road_objects_object_surface_CRG
    .property("g_additionalData", &t_road_objects_object_surface::m_g_additionalData ) // group read 
; 
//
    class_<t_road_objects_object_surface_CRG>("t_road_objects_object_surface_CRG") 
        .smart_ptr_constructor("t_road_objects_object_surface_CRG",&std::make_shared<t_road_objects_object_surface_CRG>) 
        .property("file", &t_road_objects_object_surface_CRG::file) //optional
        .property("hideRoadSurfaceCRG", &t_road_objects_object_surface_CRG::hideRoadSurfaceCRG) //optional
        .property("zScale", &t_road_objects_object_surface_CRG::zScale) //optional
; 
//
    class_<t_road_objects_objectReference>("t_road_objects_objectReference") 
        .smart_ptr_constructor("t_road_objects_objectReference",&std::make_shared<t_road_objects_objectReference>) 
        .property("id", &t_road_objects_objectReference::id) //required
        .property("orientation", &t_road_objects_objectReference::orientation) //required
        .property("s", &t_road_objects_objectReference::s) //required
        .property("t", &t_road_objects_objectReference::t) //required
        .property("validLength", &t_road_objects_objectReference::validLength) //optional
        .property("zOffset", &t_road_objects_objectReference::zOffset) //optional
        .property("validity", &t_road_objects_objectReference::m_validitys ) //t_road_objects_object_laneValidity 
    .property("g_additionalData", &t_road_objects_objectReference::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_laneValidity>>("vector<t_road_objects_object_laneValidity>"); //t_road_objects_object_laneValidity
//
    class_<t_road_objects_tunnel>("t_road_objects_tunnel") 
        .smart_ptr_constructor("t_road_objects_tunnel",&std::make_shared<t_road_objects_tunnel>) 
        .property("daylight", &t_road_objects_tunnel::daylight) //optional
        .property("id", &t_road_objects_tunnel::id) //required
        .property("length", &t_road_objects_tunnel::length) //required
        .property("lighting", &t_road_objects_tunnel::lighting) //optional
        .property("name", &t_road_objects_tunnel::name) //optional
        .property("s", &t_road_objects_tunnel::s) //required
        .property("type", &t_road_objects_tunnel::type) //required
        .property("validity", &t_road_objects_tunnel::m_validitys ) //t_road_objects_object_laneValidity 
    .property("g_additionalData", &t_road_objects_tunnel::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_laneValidity>>("vector<t_road_objects_object_laneValidity>"); //t_road_objects_object_laneValidity
//
    class_<t_road_railroad>("t_road_railroad") 
        .smart_ptr_constructor("t_road_railroad",&std::make_shared<t_road_railroad>) 
        .property("switch", &t_road_railroad::m_switchs ) //t_road_railroad_switch 
    .property("g_additionalData", &t_road_railroad::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_railroad_switch>>("vector<t_road_railroad_switch>"); //t_road_railroad_switch
//
    class_<t_road_railroad_switch>("t_road_railroad_switch") 
        .smart_ptr_constructor("t_road_railroad_switch",&std::make_shared<t_road_railroad_switch>) 
        .property("id", &t_road_railroad_switch::id) //required
        .property("name", &t_road_railroad_switch::name) //required
        .property("position", &t_road_railroad_switch::position) //required
        .property("mainTrack", &t_road_railroad_switch::m_mainTrack ) //t_road_railroad_switch_mainTrack
        .property("sideTrack", &t_road_railroad_switch::m_sideTrack ) //t_road_railroad_switch_sideTrack
        .property("partner", &t_road_railroad_switch::m_partner ) //t_road_railroad_switch_partner
    .property("g_additionalData", &t_road_railroad_switch::m_g_additionalData ) // group read 
; 
//
    class_<t_road_railroad_switch_mainTrack>("t_road_railroad_switch_mainTrack") 
        .smart_ptr_constructor("t_road_railroad_switch_mainTrack",&std::make_shared<t_road_railroad_switch_mainTrack>) 
        .property("dir", &t_road_railroad_switch_mainTrack::dir) //required
        .property("id", &t_road_railroad_switch_mainTrack::id) //required
        .property("s", &t_road_railroad_switch_mainTrack::s) //required
; 
//
    class_<t_road_railroad_switch_partner>("t_road_railroad_switch_partner") 
        .smart_ptr_constructor("t_road_railroad_switch_partner",&std::make_shared<t_road_railroad_switch_partner>) 
        .property("id", &t_road_railroad_switch_partner::id) //required
        .property("name", &t_road_railroad_switch_partner::name) //optional
; 
//
    class_<t_road_railroad_switch_sideTrack>("t_road_railroad_switch_sideTrack") 
        .smart_ptr_constructor("t_road_railroad_switch_sideTrack",&std::make_shared<t_road_railroad_switch_sideTrack>) 
        .property("dir", &t_road_railroad_switch_sideTrack::dir) //required
        .property("id", &t_road_railroad_switch_sideTrack::id) //required
        .property("s", &t_road_railroad_switch_sideTrack::s) //required
; 
//
    class_<t_station>("t_station") 
        .smart_ptr_constructor("t_station",&std::make_shared<t_station>) 
        .property("id", &t_station::id) //required
        .property("name", &t_station::name) //required
        .property("type", &t_station::type) //optional
        .property("platform", &t_station::m_platforms ) //t_station_platform 
    .property("g_additionalData", &t_station::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_station_platform>>("vector<t_station_platform>"); //t_station_platform
//
    class_<t_station_platform>("t_station_platform") 
        .smart_ptr_constructor("t_station_platform",&std::make_shared<t_station_platform>) 
        .property("id", &t_station_platform::id) //required
        .property("name", &t_station_platform::name) //optional
        .property("segment", &t_station_platform::m_segments ) //t_station_platform_segment 
    .property("g_additionalData", &t_station_platform::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_station_platform_segment>>("vector<t_station_platform_segment>"); //t_station_platform_segment
//
    class_<t_station_platform_segment>("t_station_platform_segment") 
        .smart_ptr_constructor("t_station_platform_segment",&std::make_shared<t_station_platform_segment>) 
        .property("roadId", &t_station_platform_segment::roadId) //required
        .property("sEnd", &t_station_platform_segment::sEnd) //required
        .property("side", &t_station_platform_segment::side) //required
        .property("sStart", &t_station_platform_segment::sStart) //required
; 
//
    class_<t_junction>("t_junction") 
        .smart_ptr_constructor("t_junction",&std::make_shared<t_junction>) 
        .property("id", &t_junction::id) //required
        .property("mainRoad", &t_junction::mainRoad) //optional
        .property("name", &t_junction::name) //optional
        .property("orientation", &t_junction::orientation) //optional
        .property("sEnd", &t_junction::sEnd) //optional
        .property("sStart", &t_junction::sStart) //optional
        .property("type", &t_junction::type) //optional
        .property("connection", &t_junction::m_connections ) //t_junction_connection 
        .property("priority", &t_junction::m_prioritys ) //t_junction_priority 
        .property("controller", &t_junction::m_controllers ) //t_junction_controller 
        .property("surface", &t_junction::m_surface ) //t_junction_surface
    .property("g_additionalData", &t_junction::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_junction_connection>>("vector<t_junction_connection>"); //t_junction_connection
        register_vector<std::shared_ptr<t_junction_priority>>("vector<t_junction_priority>"); //t_junction_priority
        register_vector<std::shared_ptr<t_junction_controller>>("vector<t_junction_controller>"); //t_junction_controller
//
    class_<t_junction_connection>("t_junction_connection") 
        .smart_ptr_constructor("t_junction_connection",&std::make_shared<t_junction_connection>) 
        .property("connectingRoad", &t_junction_connection::connectingRoad) //optional
        .property("contactPoint", &t_junction_connection::contactPoint) //optional
        .property("id", &t_junction_connection::id) //required
        .property("incomingRoad", &t_junction_connection::incomingRoad) //optional
        .property("linkedRoad", &t_junction_connection::linkedRoad) //optional
        .property("type", &t_junction_connection::type) //optional
        .property("predecessor", &t_junction_connection::m_predecessor ) //t_junction_predecessorSuccessor
        .property("successor", &t_junction_connection::m_successor ) //t_junction_predecessorSuccessor
        .property("laneLink", &t_junction_connection::m_laneLinks ) //t_junction_connection_laneLink 
; 
        register_vector<std::shared_ptr<t_junction_connection_laneLink>>("vector<t_junction_connection_laneLink>"); //t_junction_connection_laneLink
//
    class_<t_junction_connection_laneLink>("t_junction_connection_laneLink") 
        .smart_ptr_constructor("t_junction_connection_laneLink",&std::make_shared<t_junction_connection_laneLink>) 
        .property("from", &t_junction_connection_laneLink::from) //required
        .property("to", &t_junction_connection_laneLink::to) //required
; 
//
    class_<t_junction_controller>("t_junction_controller") 
        .smart_ptr_constructor("t_junction_controller",&std::make_shared<t_junction_controller>) 
        .property("id", &t_junction_controller::id) //required
        .property("sequence", &t_junction_controller::sequence) //optional
        .property("type", &t_junction_controller::type) //optional
; 
//
    class_<t_junction_predecessorSuccessor>("t_junction_predecessorSuccessor") 
        .smart_ptr_constructor("t_junction_predecessorSuccessor",&std::make_shared<t_junction_predecessorSuccessor>) 
        .property("elementDir", &t_junction_predecessorSuccessor::elementDir) //required
        .property("elementId", &t_junction_predecessorSuccessor::elementId) //required
        .property("elementS", &t_junction_predecessorSuccessor::elementS) //required
        .property("elementType",&t_junction_predecessorSuccessor::elementType)
; 
//
    class_<t_junction_priority>("t_junction_priority") 
        .smart_ptr_constructor("t_junction_priority",&std::make_shared<t_junction_priority>) 
        .property("high", &t_junction_priority::high) //optional
        .property("low", &t_junction_priority::low) //optional
; 
//
    class_<t_junction_surface>("t_junction_surface") 
        .smart_ptr_constructor("t_junction_surface",&std::make_shared<t_junction_surface>) 
        .property("CRG", &t_junction_surface::m_CRGs ) //t_junction_surface_CRG 
    .property("g_additionalData", &t_junction_surface::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_junction_surface_CRG>>("vector<t_junction_surface_CRG>"); //t_junction_surface_CRG
//
    class_<t_junction_surface_CRG>("t_junction_surface_CRG") 
        .smart_ptr_constructor("t_junction_surface_CRG",&std::make_shared<t_junction_surface_CRG>) 
        .property("file", &t_junction_surface_CRG::file) //required
            .property("mode",&t_junction_surface_CRG::mode)
        .property("purpose", &t_junction_surface_CRG::purpose) //optional
        .property("zOffset", &t_junction_surface_CRG::zOffset) //optional
        .property("zScale", &t_junction_surface_CRG::zScale) //optional
; 
//
    class_<t_junctionGroup>("t_junctionGroup") 
        .smart_ptr_constructor("t_junctionGroup",&std::make_shared<t_junctionGroup>) 
        .property("id", &t_junctionGroup::id) //required
        .property("name", &t_junctionGroup::name) //optional
        .property("type", &t_junctionGroup::type) //required
        .property("junctionReference", &t_junctionGroup::m_junctionReferences ) //t_junctionGroup_junctionReference 
    .property("g_additionalData", &t_junctionGroup::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_junctionGroup_junctionReference>>("vector<t_junctionGroup_junctionReference>"); //t_junctionGroup_junctionReference
//
    class_<t_junctionGroup_junctionReference>("t_junctionGroup_junctionReference") 
        .smart_ptr_constructor("t_junctionGroup_junctionReference",&std::make_shared<t_junctionGroup_junctionReference>) 
        .property("junction", &t_junctionGroup_junctionReference::junction) //required
; 
//
    class_<t_controller>("t_controller") 
        .smart_ptr_constructor("t_controller",&std::make_shared<t_controller>) 
        .property("id", &t_controller::id) //required
        .property("name", &t_controller::name) //optional
        .property("sequence", &t_controller::sequence) //optional
        .property("control", &t_controller::m_controls ) //t_controller_control 
    .property("g_additionalData", &t_controller::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_controller_control>>("vector<t_controller_control>"); //t_controller_control
//
    class_<t_controller_control>("t_controller_control") 
        .smart_ptr_constructor("t_controller_control",&std::make_shared<t_controller_control>) 
        .property("signalId", &t_controller_control::signalId) //required
        .property("type", &t_controller_control::type) //optional
; 
//
    class_<t_road_signals>("t_road_signals") 
        .smart_ptr_constructor("t_road_signals",&std::make_shared<t_road_signals>) 
        .property("signal", &t_road_signals::m_signals ) //t_road_signals_signal 
        .property("signalReference", &t_road_signals::m_signalReferences ) //t_road_signals_signalReference 
    .property("g_additionalData", &t_road_signals::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_signals_signal>>("vector<t_road_signals_signal>"); //t_road_signals_signal
        register_vector<std::shared_ptr<t_road_signals_signalReference>>("vector<t_road_signals_signalReference>"); //t_road_signals_signalReference
//
    class_<t_road_signals_signal>("t_road_signals_signal") 
        .smart_ptr_constructor("t_road_signals_signal",&std::make_shared<t_road_signals_signal>) 
        .property("country", &t_road_signals_signal::country) 
        .property("countryRevision", &t_road_signals_signal::countryRevision) //optional
        .property("dynamic", &t_road_signals_signal::dynamic) //required
        .property("height", &t_road_signals_signal::height) //optional
        .property("hOffset", &t_road_signals_signal::hOffset) //optional
        .property("id", &t_road_signals_signal::id) //required
        .property("name", &t_road_signals_signal::name) //optional
        .property("orientation", &t_road_signals_signal::orientation) //required
        .property("pitch", &t_road_signals_signal::pitch) //optional
        .property("roll", &t_road_signals_signal::roll) //optional
        .property("s", &t_road_signals_signal::s) //required
        .property("subtype", &t_road_signals_signal::subtype) //required
        .property("t", &t_road_signals_signal::t) //required
        .property("text", &t_road_signals_signal::text) //optional
        .property("type", &t_road_signals_signal::type) //required
        .property("unit", &t_road_signals_signal::unit) 
        .property("value", &t_road_signals_signal::value) //optional
        .property("width", &t_road_signals_signal::width) //optional
        .property("zOffset", &t_road_signals_signal::zOffset) //required
        .property("validity", &t_road_signals_signal::m_validitys ) //t_road_objects_object_laneValidity 
        .property("dependency", &t_road_signals_signal::m_dependencys ) //t_road_signals_signal_dependency 
        .property("reference", &t_road_signals_signal::m_references ) //t_road_signals_signal_reference 
    .property("g_additionalData", &t_road_signals_signal::m_g_additionalData ) // group read 
        .property("t_road_signals_signal_U", &t_road_signals_signal::m_t_road_signals_signal ) //
; 
        register_vector<std::shared_ptr<t_road_objects_object_laneValidity>>("vector<t_road_objects_object_laneValidity>"); //t_road_objects_object_laneValidity
        register_vector<std::shared_ptr<t_road_signals_signal_dependency>>("vector<t_road_signals_signal_dependency>"); //t_road_signals_signal_dependency
        register_vector<std::shared_ptr<t_road_signals_signal_reference>>("vector<t_road_signals_signal_reference>"); //t_road_signals_signal_reference
//
    class_<t_road_signals_signal_dependency>("t_road_signals_signal_dependency") 
        .smart_ptr_constructor("t_road_signals_signal_dependency",&std::make_shared<t_road_signals_signal_dependency>) 
        .property("id", &t_road_signals_signal_dependency::id) //required
        .property("type", &t_road_signals_signal_dependency::type) //optional
; 
//
    class_<t_road_signals_signal_positionInertial>("t_road_signals_signal_positionInertial") 
        .smart_ptr_constructor("t_road_signals_signal_positionInertial",&std::make_shared<t_road_signals_signal_positionInertial>) 
        .property("hdg", &t_road_signals_signal_positionInertial::hdg) //required
        .property("pitch", &t_road_signals_signal_positionInertial::pitch) //optional
        .property("roll", &t_road_signals_signal_positionInertial::roll) //optional
        .property("x", &t_road_signals_signal_positionInertial::x) //required
        .property("y", &t_road_signals_signal_positionInertial::y) //required
        .property("z", &t_road_signals_signal_positionInertial::z) //required
; 
//
    class_<t_road_signals_signal_positionRoad>("t_road_signals_signal_positionRoad") 
        .smart_ptr_constructor("t_road_signals_signal_positionRoad",&std::make_shared<t_road_signals_signal_positionRoad>) 
        .property("hOffset", &t_road_signals_signal_positionRoad::hOffset) //required
        .property("pitch", &t_road_signals_signal_positionRoad::pitch) //optional
        .property("roadId", &t_road_signals_signal_positionRoad::roadId) //required
        .property("roll", &t_road_signals_signal_positionRoad::roll) //optional
        .property("s", &t_road_signals_signal_positionRoad::s) //required
        .property("t", &t_road_signals_signal_positionRoad::t) //required
        .property("zOffset", &t_road_signals_signal_positionRoad::zOffset) //required
; 
//
    class_<t_road_signals_signal_reference>("t_road_signals_signal_reference") 
        .smart_ptr_constructor("t_road_signals_signal_reference",&std::make_shared<t_road_signals_signal_reference>) 
        .property("elementId", &t_road_signals_signal_reference::elementId) //required
        .property("elementType", &t_road_signals_signal_reference::elementType) //required
        .property("type", &t_road_signals_signal_reference::type) //optional
; 
//
    class_<t_road_signals_signalReference>("t_road_signals_signalReference") 
        .smart_ptr_constructor("t_road_signals_signalReference",&std::make_shared<t_road_signals_signalReference>) 
        .property("id", &t_road_signals_signalReference::id) //required
        .property("orientation", &t_road_signals_signalReference::orientation) //required
        .property("s", &t_road_signals_signalReference::s) //required
        .property("t", &t_road_signals_signalReference::t) //required
        .property("validity", &t_road_signals_signalReference::m_validitys ) //t_road_objects_object_laneValidity 
    .property("g_additionalData", &t_road_signals_signalReference::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_objects_object_laneValidity>>("vector<t_road_objects_object_laneValidity>"); //t_road_objects_object_laneValidity
//
    class_<t_road>("t_road") 
        .smart_ptr_constructor("t_road",&std::make_shared<t_road>) 
        .property("id", &t_road::id) //required
        .property("junction", &t_road::junction) //required
        .property("length", &t_road::length) //required
        .property("name", &t_road::name) //optional
        .property("rule", &t_road::rule) //optional
        .property("link", &t_road::m_link ) //t_road_link
        .property("type", &t_road::m_types ) //t_road_type 
        .property("planView", &t_road::m_planView ) //t_road_planView
        .property("elevationProfile", &t_road::m_elevationProfile ) //t_road_elevationProfile
        .property("lateralProfile", &t_road::m_lateralProfile ) //t_road_lateralProfile
        .property("lanes", &t_road::m_lanes ) //t_road_lanes
        .property("objects", &t_road::m_objects ) //t_road_objects
        .property("signals", &t_road::m_signals ) //t_road_signals
        .property("surface", &t_road::m_surface ) //t_road_surface
        .property("railroad", &t_road::m_railroad ) //t_road_railroad
    .property("g_additionalData", &t_road::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_type>>("vector<t_road_type>"); //t_road_type
//
    class_<t_road_elevationProfile>("t_road_elevationProfile") 
        .smart_ptr_constructor("t_road_elevationProfile",&std::make_shared<t_road_elevationProfile>) 
        .property("elevation", &t_road_elevationProfile::m_elevations ) //t_road_elevationProfile_elevation 
    .property("g_additionalData", &t_road_elevationProfile::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_elevationProfile_elevation>>("vector<t_road_elevationProfile_elevation>"); //t_road_elevationProfile_elevation
//
    class_<t_road_elevationProfile_elevation>("t_road_elevationProfile_elevation") 
        .smart_ptr_constructor("t_road_elevationProfile_elevation",&std::make_shared<t_road_elevationProfile_elevation>) 
        .property("a", &t_road_elevationProfile_elevation::a) //required
        .property("b", &t_road_elevationProfile_elevation::b) //required
        .property("c", &t_road_elevationProfile_elevation::c) //required
        .property("d", &t_road_elevationProfile_elevation::d) //required
        .property("s", &t_road_elevationProfile_elevation::s) //required
; 
//
    class_<t_road_lateralProfile>("t_road_lateralProfile") 
        .smart_ptr_constructor("t_road_lateralProfile",&std::make_shared<t_road_lateralProfile>) 
        .property("superelevation", &t_road_lateralProfile::m_superelevations ) //t_road_lateralProfile_superelevation 
        .property("shape", &t_road_lateralProfile::m_shapes ) //t_road_lateralProfile_shape 
    .property("g_additionalData", &t_road_lateralProfile::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lateralProfile_superelevation>>("vector<t_road_lateralProfile_superelevation>"); //t_road_lateralProfile_superelevation
        register_vector<std::shared_ptr<t_road_lateralProfile_shape>>("vector<t_road_lateralProfile_shape>"); //t_road_lateralProfile_shape
//
    class_<t_road_lateralProfile_shape>("t_road_lateralProfile_shape") 
        .smart_ptr_constructor("t_road_lateralProfile_shape",&std::make_shared<t_road_lateralProfile_shape>) 
        .property("a", &t_road_lateralProfile_shape::a) //required
        .property("b", &t_road_lateralProfile_shape::b) //required
        .property("c", &t_road_lateralProfile_shape::c) //required
        .property("d", &t_road_lateralProfile_shape::d) //required
        .property("s", &t_road_lateralProfile_shape::s) //required
        .property("t", &t_road_lateralProfile_shape::t) //required
; 
//
    class_<t_road_lateralProfile_superelevation>("t_road_lateralProfile_superelevation") 
        .smart_ptr_constructor("t_road_lateralProfile_superelevation",&std::make_shared<t_road_lateralProfile_superelevation>) 
        .property("a", &t_road_lateralProfile_superelevation::a) //required
        .property("b", &t_road_lateralProfile_superelevation::b) //required
        .property("c", &t_road_lateralProfile_superelevation::c) //required
        .property("d", &t_road_lateralProfile_superelevation::d) //required
        .property("s", &t_road_lateralProfile_superelevation::s) //required
; 
//
    class_<t_road_link>("t_road_link") 
        .smart_ptr_constructor("t_road_link",&std::make_shared<t_road_link>) 
        .property("predecessor", &t_road_link::m_predecessor ) //t_road_link_predecessorSuccessor
        .property("successor", &t_road_link::m_successor ) //t_road_link_predecessorSuccessor
    .property("g_additionalData", &t_road_link::m_g_additionalData ) // group read 
; 
//
    class_<t_road_link_predecessorSuccessor>("t_road_link_predecessorSuccessor") 
        .smart_ptr_constructor("t_road_link_predecessorSuccessor",&std::make_shared<t_road_link_predecessorSuccessor>) 
        .property("contactPoint", &t_road_link_predecessorSuccessor::contactPoint) //optional
        .property("elementDir", &t_road_link_predecessorSuccessor::elementDir) //optional
        .property("elementId", &t_road_link_predecessorSuccessor::elementId) //required
        .property("elementS", &t_road_link_predecessorSuccessor::elementS) //optional
        .property("elementType", &t_road_link_predecessorSuccessor::elementType) //optional
; 
//
    class_<t_road_planView>("t_road_planView") 
        .smart_ptr_constructor("t_road_planView",&std::make_shared<t_road_planView>) 
        .property("geometry", &t_road_planView::m_geometrys ) //t_road_planView_geometry 
    .property("g_additionalData", &t_road_planView::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_planView_geometry>>("vector<t_road_planView_geometry>"); //t_road_planView_geometry
//
    class_<t_road_planView_geometry>("t_road_planView_geometry") 
        .smart_ptr_constructor("t_road_planView_geometry",&std::make_shared<t_road_planView_geometry>) 
        .property("hdg", &t_road_planView_geometry::hdg) //required
        .property("length", &t_road_planView_geometry::length) //required
        .property("s", &t_road_planView_geometry::s) //required
        .property("x", &t_road_planView_geometry::x) //required
        .property("y", &t_road_planView_geometry::y) //required
        .property("t_road_planView_geometry_U", &t_road_planView_geometry::m_t_road_planView_geometry ) //
; 
//
    class_<t_road_planView_geometry_arc>("t_road_planView_geometry_arc") 
        .smart_ptr_constructor("t_road_planView_geometry_arc",&std::make_shared<t_road_planView_geometry_arc>) 
        .property("curvature", &t_road_planView_geometry_arc::curvature) //required
; 
//
    class_<t_road_planView_geometry_line>("t_road_planView_geometry_line") 
        .smart_ptr_constructor("t_road_planView_geometry_line",&std::make_shared<t_road_planView_geometry_line>) 
; 
//
    class_<t_road_planView_geometry_paramPoly3>("t_road_planView_geometry_paramPoly3") 
        .smart_ptr_constructor("t_road_planView_geometry_paramPoly3",&std::make_shared<t_road_planView_geometry_paramPoly3>) 
        .property("aU", &t_road_planView_geometry_paramPoly3::aU) //required
        .property("aV", &t_road_planView_geometry_paramPoly3::aV) //required
        .property("bU", &t_road_planView_geometry_paramPoly3::bU) //required
        .property("bV", &t_road_planView_geometry_paramPoly3::bV) //required
        .property("cU", &t_road_planView_geometry_paramPoly3::cU) //required
        .property("cV", &t_road_planView_geometry_paramPoly3::cV) //required
        .property("dU", &t_road_planView_geometry_paramPoly3::dU) //required
        .property("dV", &t_road_planView_geometry_paramPoly3::dV) //required
        .property("pRange", &t_road_planView_geometry_paramPoly3::pRange) //required
; 
//
    class_<t_road_planView_geometry_poly3>("t_road_planView_geometry_poly3") 
        .smart_ptr_constructor("t_road_planView_geometry_poly3",&std::make_shared<t_road_planView_geometry_poly3>) 
        .property("a", &t_road_planView_geometry_poly3::a) //required
        .property("b", &t_road_planView_geometry_poly3::b) //required
        .property("c", &t_road_planView_geometry_poly3::c) //required
        .property("d", &t_road_planView_geometry_poly3::d) //required
; 
//
    class_<t_road_planView_geometry_spiral>("t_road_planView_geometry_spiral") 
        .smart_ptr_constructor("t_road_planView_geometry_spiral",&std::make_shared<t_road_planView_geometry_spiral>) 
        .property("curvEnd", &t_road_planView_geometry_spiral::curvEnd) //required
        .property("curvStart", &t_road_planView_geometry_spiral::curvStart) //required
; 
//
    class_<t_road_surface>("t_road_surface") 
        .smart_ptr_constructor("t_road_surface",&std::make_shared<t_road_surface>) 
        .property("CRG", &t_road_surface::m_CRGs ) //t_road_surface_CRG 
    .property("g_additionalData", &t_road_surface::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_surface_CRG>>("vector<t_road_surface_CRG>"); //t_road_surface_CRG
//
    class_<t_road_surface_CRG>("t_road_surface_CRG") 
        .smart_ptr_constructor("t_road_surface_CRG",&std::make_shared<t_road_surface_CRG>) 
        .property("file", &t_road_surface_CRG::file) //required
        .property("hOffset", &t_road_surface_CRG::hOffset) //optional
        .property("mode", &t_road_surface_CRG::mode) //required
        .property("orientation", &t_road_surface_CRG::orientation) //required
        .property("purpose", &t_road_surface_CRG::purpose) //optional
        .property("sEnd", &t_road_surface_CRG::sEnd) //required
        .property("sOffset", &t_road_surface_CRG::sOffset) //optional
        .property("sStart", &t_road_surface_CRG::sStart) //required
        .property("tOffset", &t_road_surface_CRG::tOffset) //optional
        .property("zOffset", &t_road_surface_CRG::zOffset) //optional
        .property("zScale", &t_road_surface_CRG::zScale) //optional
; 
//
    class_<t_road_type>("t_road_type") 
        .smart_ptr_constructor("t_road_type",&std::make_shared<t_road_type>) 
        .property("country", &t_road_type::country) 
        .property("s", &t_road_type::s) //required
        .property("type", &t_road_type::type) //required
        .property("speed", &t_road_type::m_speed ) //t_road_type_speed
    .property("g_additionalData", &t_road_type::m_g_additionalData ) // group read 
; 
//
    class_<t_road_type_speed>("t_road_type_speed") 
        .smart_ptr_constructor("t_road_type_speed",&std::make_shared<t_road_type_speed>) 
        .property("max", &t_road_type_speed::max) 
        .property("unit", &t_road_type_speed::unit) //optional
; 
//
    class_<t_road_lanes>("t_road_lanes") 
        .smart_ptr_constructor("t_road_lanes",&std::make_shared<t_road_lanes>) 
        .property("laneOffset", &t_road_lanes::m_laneOffsets ) //t_road_lanes_laneOffset 
        .property("laneSection", &t_road_lanes::m_laneSections ) //t_road_lanes_laneSection 
    .property("g_additionalData", &t_road_lanes::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lanes_laneOffset>>("vector<t_road_lanes_laneOffset>"); //t_road_lanes_laneOffset
        register_vector<std::shared_ptr<t_road_lanes_laneSection>>("vector<t_road_lanes_laneSection>"); //t_road_lanes_laneSection
//
    class_<t_road_lanes_laneOffset>("t_road_lanes_laneOffset") 
        .smart_ptr_constructor("t_road_lanes_laneOffset",&std::make_shared<t_road_lanes_laneOffset>) 
        .property("a", &t_road_lanes_laneOffset::a) //required
        .property("b", &t_road_lanes_laneOffset::b) //required
        .property("c", &t_road_lanes_laneOffset::c) //required
        .property("d", &t_road_lanes_laneOffset::d) //required
        .property("s", &t_road_lanes_laneOffset::s) //required
; 
//
    class_<t_road_lanes_laneSection>("t_road_lanes_laneSection") 
        .smart_ptr_constructor("t_road_lanes_laneSection",&std::make_shared<t_road_lanes_laneSection>) 
        .property("s", &t_road_lanes_laneSection::s) //required
        .property("singleSide", &t_road_lanes_laneSection::singleSide) //optional
        .property("left", &t_road_lanes_laneSection::m_left ) //t_road_lanes_laneSection_left
        .property("center", &t_road_lanes_laneSection::m_center ) //t_road_lanes_laneSection_center
        .property("right", &t_road_lanes_laneSection::m_right ) //t_road_lanes_laneSection_right
    .property("g_additionalData", &t_road_lanes_laneSection::m_g_additionalData ) // group read 
; 
//
    class_<t_road_lanes_laneSection_center>("t_road_lanes_laneSection_center") 
        .smart_ptr_constructor("t_road_lanes_laneSection_center",&std::make_shared<t_road_lanes_laneSection_center>) 
        .property("lane", &t_road_lanes_laneSection_center::m_lanes ) //t_road_lanes_laneSection_center_lane 
    .property("g_additionalData", &t_road_lanes_laneSection_center::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lanes_laneSection_center_lane>>("vector<t_road_lanes_laneSection_center_lane>"); //t_road_lanes_laneSection_center_lane
//
    class_<t_road_lanes_laneSection_center_lane>("t_road_lanes_laneSection_center_lane") 
        .smart_ptr_constructor("t_road_lanes_laneSection_center_lane",&std::make_shared<t_road_lanes_laneSection_center_lane>) 
        .property("id",&t_road_lanes_laneSection_center_lane::id)
; 
//
    class_<t_road_lanes_laneSection_lcr_lane_link>("t_road_lanes_laneSection_lcr_lane_link") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lcr_lane_link",&std::make_shared<t_road_lanes_laneSection_lcr_lane_link>) 
        .property("predecessor", &t_road_lanes_laneSection_lcr_lane_link::m_predecessors ) //t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor 
        .property("successor", &t_road_lanes_laneSection_lcr_lane_link::m_successors ) //t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor 
    .property("g_additionalData", &t_road_lanes_laneSection_lcr_lane_link::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>>("vector<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>"); //t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>>("vector<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>"); //t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor
//
    class_<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>("t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor",&std::make_shared<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>) 
        .property("id", &t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor::id) //required
; 
//
    class_<t_road_lanes_laneSection_lcr_lane_roadMark>("t_road_lanes_laneSection_lcr_lane_roadMark") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lcr_lane_roadMark",&std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark>) 
        .property("color", &t_road_lanes_laneSection_lcr_lane_roadMark::color) //required
        .property("height", &t_road_lanes_laneSection_lcr_lane_roadMark::height) //optional
        .property("laneChange", &t_road_lanes_laneSection_lcr_lane_roadMark::laneChange) //optional
        .property("material", &t_road_lanes_laneSection_lcr_lane_roadMark::material) //optional
        .property("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark::sOffset) //required
        .property("type", &t_road_lanes_laneSection_lcr_lane_roadMark::type) //required
        .property("weight", &t_road_lanes_laneSection_lcr_lane_roadMark::weight) //optional
        .property("width", &t_road_lanes_laneSection_lcr_lane_roadMark::width) //optional
        .property("sway", &t_road_lanes_laneSection_lcr_lane_roadMark::m_sways ) //t_road_lanes_laneSection_lcr_lane_roadMark_sway 
        .property("type", &t_road_lanes_laneSection_lcr_lane_roadMark::m_type ) //t_road_lanes_laneSection_lcr_lane_roadMark_type
        .property("explicit", &t_road_lanes_laneSection_lcr_lane_roadMark::m_explicit ) //t_road_lanes_laneSection_lcr_lane_roadMark_explicit
    .property("g_additionalData", &t_road_lanes_laneSection_lcr_lane_roadMark::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_sway>>("vector<t_road_lanes_laneSection_lcr_lane_roadMark_sway>"); //t_road_lanes_laneSection_lcr_lane_roadMark_sway
//
    class_<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>("t_road_lanes_laneSection_lcr_lane_roadMark_explicit") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lcr_lane_roadMark_explicit",&std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>) 
        .property("line", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit::m_lines ) //t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line 
    .property("g_additionalData", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>>("vector<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>"); //t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line
//
    class_<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>("t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line",&std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>) 
        .property("length", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::length) //required
        .property("rule", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::rule) //optional
        .property("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::sOffset) //required
        .property("tOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::tOffset) //required
        .property("width", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::width) //optional
; 
//
    class_<t_road_lanes_laneSection_lcr_lane_roadMark_sway>("t_road_lanes_laneSection_lcr_lane_roadMark_sway") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lcr_lane_roadMark_sway",&std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_sway>) 
        .property("a", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::a) //required
        .property("b", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::b) //required
        .property("c", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::c) //required
        .property("d", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::d) //required
        .property("ds", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::ds) //required
; 
//
    class_<t_road_lanes_laneSection_lcr_lane_roadMark_type>("t_road_lanes_laneSection_lcr_lane_roadMark_type") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lcr_lane_roadMark_type",&std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_type>) 
        .property("name", &t_road_lanes_laneSection_lcr_lane_roadMark_type::name) //required
        .property("width", &t_road_lanes_laneSection_lcr_lane_roadMark_type::width) //required
        .property("line", &t_road_lanes_laneSection_lcr_lane_roadMark_type::m_lines ) //t_road_lanes_laneSection_lcr_lane_roadMark_type_line 
    .property("g_additionalData", &t_road_lanes_laneSection_lcr_lane_roadMark_type::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>>("vector<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>"); //t_road_lanes_laneSection_lcr_lane_roadMark_type_line
//
    class_<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>("t_road_lanes_laneSection_lcr_lane_roadMark_type_line") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lcr_lane_roadMark_type_line",&std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>) 
        .property("color", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::color) //optional
        .property("length", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::length) //required
        .property("rule", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::rule) //optional
        .property("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::sOffset) //required
        .property("space", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::space) //required
        .property("tOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::tOffset) //required
        .property("width", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::width) //optional
; 
//
    class_<t_road_lanes_laneSection_left>("t_road_lanes_laneSection_left") 
        .smart_ptr_constructor("t_road_lanes_laneSection_left",&std::make_shared<t_road_lanes_laneSection_left>) 
        .property("lane", &t_road_lanes_laneSection_left::m_lanes ) //t_road_lanes_laneSection_left_lane 
    .property("g_additionalData", &t_road_lanes_laneSection_left::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lanes_laneSection_left_lane>>("vector<t_road_lanes_laneSection_left_lane>"); //t_road_lanes_laneSection_left_lane
//
    class_<t_road_lanes_laneSection_left_lane>("t_road_lanes_laneSection_left_lane") 
        .smart_ptr_constructor("t_road_lanes_laneSection_left_lane",&std::make_shared<t_road_lanes_laneSection_left_lane>) 
        .property("id", &t_road_lanes_laneSection_left_lane::id) //required
; 
//
    class_<t_road_lanes_laneSection_lr_lane>("t_road_lanes_laneSection_lr_lane") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane",&std::make_shared<t_road_lanes_laneSection_lr_lane>) 
        .property("level", &t_road_lanes_laneSection_lr_lane::level) //optional
        .property("type", &t_road_lanes_laneSection_lr_lane::type) //required
        .property("link", &t_road_lanes_laneSection_lr_lane::m_link ) //t_road_lanes_laneSection_lcr_lane_link
        .property("roadMark", &t_road_lanes_laneSection_lr_lane::m_roadMarks ) //t_road_lanes_laneSection_lcr_lane_roadMark 
        .property("material", &t_road_lanes_laneSection_lr_lane::m_materials ) //t_road_lanes_laneSection_lr_lane_material 
        .property("speed", &t_road_lanes_laneSection_lr_lane::m_speeds ) //t_road_lanes_laneSection_lr_lane_speed 
        .property("access", &t_road_lanes_laneSection_lr_lane::m_accesss ) //t_road_lanes_laneSection_lr_lane_access 
        .property("height", &t_road_lanes_laneSection_lr_lane::m_heights ) //t_road_lanes_laneSection_lr_lane_height 
        .property("rule", &t_road_lanes_laneSection_lr_lane::m_rules ) //t_road_lanes_laneSection_lr_lane_rule 
    .property("g_additionalData", &t_road_lanes_laneSection_lr_lane::m_g_additionalData ) // group read 
        .property("t_road_lanes_laneSection_lr_lane_U", &t_road_lanes_laneSection_lr_lane::m_t_road_lanes_laneSection_lr_lanes ) //
; 
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>>("vector<t_road_lanes_laneSection_lcr_lane_roadMark>"); //t_road_lanes_laneSection_lcr_lane_roadMark
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_material>>("vector<t_road_lanes_laneSection_lr_lane_material>"); //t_road_lanes_laneSection_lr_lane_material
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_speed>>("vector<t_road_lanes_laneSection_lr_lane_speed>"); //t_road_lanes_laneSection_lr_lane_speed
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_access>>("vector<t_road_lanes_laneSection_lr_lane_access>"); //t_road_lanes_laneSection_lr_lane_access
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_height>>("vector<t_road_lanes_laneSection_lr_lane_height>"); //t_road_lanes_laneSection_lr_lane_height
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_rule>>("vector<t_road_lanes_laneSection_lr_lane_rule>"); //t_road_lanes_laneSection_lr_lane_rule
        register_vector<std::shared_ptr<t_road_lanes_laneSection_lr_lane_U>>("vector<t_road_lanes_laneSection_lr_lane_U>"); //t_road_lanes_laneSection_lr_lane
//
    class_<t_road_lanes_laneSection_lr_lane_access>("t_road_lanes_laneSection_lr_lane_access") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane_access",&std::make_shared<t_road_lanes_laneSection_lr_lane_access>) 
        .property("restriction", &t_road_lanes_laneSection_lr_lane_access::restriction) //required
        .property("rule", &t_road_lanes_laneSection_lr_lane_access::rule) //optional
        .property("sOffset", &t_road_lanes_laneSection_lr_lane_access::sOffset) //required
; 
//
    class_<t_road_lanes_laneSection_lr_lane_border>("t_road_lanes_laneSection_lr_lane_border") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane_border",&std::make_shared<t_road_lanes_laneSection_lr_lane_border>) 
        .property("a", &t_road_lanes_laneSection_lr_lane_border::a) //required
        .property("b", &t_road_lanes_laneSection_lr_lane_border::b) //required
        .property("c", &t_road_lanes_laneSection_lr_lane_border::c) //required
        .property("d", &t_road_lanes_laneSection_lr_lane_border::d) //required
        .property("sOffset", &t_road_lanes_laneSection_lr_lane_border::sOffset) //required
; 
//
    class_<t_road_lanes_laneSection_lr_lane_height>("t_road_lanes_laneSection_lr_lane_height") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane_height",&std::make_shared<t_road_lanes_laneSection_lr_lane_height>) 
        .property("inner", &t_road_lanes_laneSection_lr_lane_height::inner) //required
        .property("outer", &t_road_lanes_laneSection_lr_lane_height::outer) //required
        .property("sOffset", &t_road_lanes_laneSection_lr_lane_height::sOffset) //required
; 
//
    class_<t_road_lanes_laneSection_lr_lane_material>("t_road_lanes_laneSection_lr_lane_material") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane_material",&std::make_shared<t_road_lanes_laneSection_lr_lane_material>) 
        .property("friction", &t_road_lanes_laneSection_lr_lane_material::friction) //required
        .property("roughness", &t_road_lanes_laneSection_lr_lane_material::roughness) //optional
        .property("sOffset", &t_road_lanes_laneSection_lr_lane_material::sOffset) //required
        .property("surface", &t_road_lanes_laneSection_lr_lane_material::surface) //optional
; 
//
    class_<t_road_lanes_laneSection_lr_lane_rule>("t_road_lanes_laneSection_lr_lane_rule") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane_rule",&std::make_shared<t_road_lanes_laneSection_lr_lane_rule>) 
        .property("sOffset", &t_road_lanes_laneSection_lr_lane_rule::sOffset) //required
        .property("value", &t_road_lanes_laneSection_lr_lane_rule::value) //required
; 
//
    class_<t_road_lanes_laneSection_lr_lane_speed>("t_road_lanes_laneSection_lr_lane_speed") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane_speed",&std::make_shared<t_road_lanes_laneSection_lr_lane_speed>) 
        .property("max", &t_road_lanes_laneSection_lr_lane_speed::max) //required
        .property("sOffset", &t_road_lanes_laneSection_lr_lane_speed::sOffset) //required
        .property("unit", &t_road_lanes_laneSection_lr_lane_speed::unit) //optional
; 
//
    class_<t_road_lanes_laneSection_lr_lane_width>("t_road_lanes_laneSection_lr_lane_width") 
        .smart_ptr_constructor("t_road_lanes_laneSection_lr_lane_width",&std::make_shared<t_road_lanes_laneSection_lr_lane_width>) 
        .property("a", &t_road_lanes_laneSection_lr_lane_width::a) //required
        .property("b", &t_road_lanes_laneSection_lr_lane_width::b) //required
        .property("c", &t_road_lanes_laneSection_lr_lane_width::c) //required
        .property("d", &t_road_lanes_laneSection_lr_lane_width::d) //required
        .property("sOffset", &t_road_lanes_laneSection_lr_lane_width::sOffset) //required
; 
//
    class_<t_road_lanes_laneSection_right>("t_road_lanes_laneSection_right") 
        .smart_ptr_constructor("t_road_lanes_laneSection_right",&std::make_shared<t_road_lanes_laneSection_right>) 
        .property("lane", &t_road_lanes_laneSection_right::m_lanes ) //t_road_lanes_laneSection_right_lane 
    .property("g_additionalData", &t_road_lanes_laneSection_right::m_g_additionalData ) // group read 
; 
        register_vector<std::shared_ptr<t_road_lanes_laneSection_right_lane>>("vector<t_road_lanes_laneSection_right_lane>"); //t_road_lanes_laneSection_right_lane
//
    class_<t_road_lanes_laneSection_right_lane>("t_road_lanes_laneSection_right_lane") 
        .smart_ptr_constructor("t_road_lanes_laneSection_right_lane",&std::make_shared<t_road_lanes_laneSection_right_lane>) 
        .property("id", &t_road_lanes_laneSection_right_lane::id) //required
; 
//
    class_<t_road_objects_object_laneValidity>("t_road_objects_object_laneValidity") 
        .smart_ptr_constructor("t_road_objects_object_laneValidity",&std::make_shared<t_road_objects_object_laneValidity>) 
        .property("fromLane", &t_road_objects_object_laneValidity::fromLane) //required
        .property("toLane", &t_road_objects_object_laneValidity::toLane) //required
; 
    // xs:group -> aliased to group definition
    class_<g_additionalData>("g_additionalData")  // Group g_additionalData
        .smart_ptr_constructor("g_additionalData",&std::make_shared<g_additionalData>) 
        .property("dataQuality", &g_additionalData::m_dataQuality ) //t_dataQuality
        .property("include", &g_additionalData::m_includes ) //t_include 
        .property("userData", &g_additionalData::m_userDatas ) //t_userData 
    ;
//
    //@js::enum_<e_dataQuality_RawData_PostProcessing>(m,"e_dataQuality_RawData_PostProcessing", js::arithmetic(),"")
    enum_<e_dataQuality_RawData_PostProcessing>("e_dataQuality_RawData_PostProcessing")  //""
        .value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::RAW).c_str(),e_dataQuality_RawData_PostProcessing::RAW)            //raw
        .value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::CLEANED).c_str(),e_dataQuality_RawData_PostProcessing::CLEANED)            //cleaned
        .value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::PROCESSED).c_str(),e_dataQuality_RawData_PostProcessing::PROCESSED)            //processed
        .value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::FUSED).c_str(),e_dataQuality_RawData_PostProcessing::FUSED);            //fused
    ;
    //@js::enum_<e_dataQuality_RawData_Source>(m,"e_dataQuality_RawData_Source", js::arithmetic(),"")
    enum_<e_dataQuality_RawData_Source>("e_dataQuality_RawData_Source")  //""
        .value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::SENSOR).c_str(),e_dataQuality_RawData_Source::SENSOR)            //sensor
        .value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::CADASTER).c_str(),e_dataQuality_RawData_Source::CADASTER)            //cadaster
        .value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::CUSTOM).c_str(),e_dataQuality_RawData_Source::CUSTOM);            //custom
    ;
    //@js::enum_<e_unitDistance>(m,"e_unitDistance", js::arithmetic(),"")
    enum_<e_unitDistance>("e_unitDistance")  //""
        .value(enum2str<e_unitDistance>(e_unitDistance::M).c_str(),e_unitDistance::M)            //m
        .value(enum2str<e_unitDistance>(e_unitDistance::KM).c_str(),e_unitDistance::KM)            //km
        .value(enum2str<e_unitDistance>(e_unitDistance::FT).c_str(),e_unitDistance::FT)            //ft
        .value(enum2str<e_unitDistance>(e_unitDistance::MILE).c_str(),e_unitDistance::MILE);            //mile
    ;
    //@js::enum_<e_unitMass>(m,"e_unitMass", js::arithmetic(),"")
    enum_<e_unitMass>("e_unitMass")  //""
        .value(enum2str<e_unitMass>(e_unitMass::KG).c_str(),e_unitMass::KG)            //kg
        .value(enum2str<e_unitMass>(e_unitMass::T).c_str(),e_unitMass::T);            //t
    ;
    //@js::enum_<e_unitSlope>(m,"e_unitSlope", js::arithmetic(),"")
    enum_<e_unitSlope>("e_unitSlope")  //""
        .value(enum2str<e_unitSlope>(e_unitSlope::PERCENT).c_str(),e_unitSlope::PERCENT);            //%
    ;
    //@js::enum_<e_unitSpeed>(m,"e_unitSpeed", js::arithmetic(),"")
    enum_<e_unitSpeed>("e_unitSpeed")  //""
        .value(enum2str<e_unitSpeed>(e_unitSpeed::M_S).c_str(),e_unitSpeed::M_S)            //m/s
        .value(enum2str<e_unitSpeed>(e_unitSpeed::MPH).c_str(),e_unitSpeed::MPH)            //mph
        .value(enum2str<e_unitSpeed>(e_unitSpeed::KM_H).c_str(),e_unitSpeed::KM_H);            //km/h
    ;
    //@js::enum_<t_yesNo>(m,"t_yesNo", js::arithmetic(),"")
    enum_<t_yesNo>("t_yesNo")  //""
        .value(enum2str<t_yesNo>(t_yesNo::YES).c_str(),t_yesNo::YES)            //yes
        .value(enum2str<t_yesNo>(t_yesNo::NO).c_str(),t_yesNo::NO);            //no
    ;
    //@js::enum_<e_borderType>(m,"e_borderType", js::arithmetic(),"")
    enum_<e_borderType>("e_borderType")  //""
        .value(enum2str<e_borderType>(e_borderType::CONCRETE).c_str(),e_borderType::CONCRETE)            //concrete
        .value(enum2str<e_borderType>(e_borderType::CURB).c_str(),e_borderType::CURB);            //curb
    ;
    //@js::enum_<e_bridgeType>(m,"e_bridgeType", js::arithmetic(),"")
    enum_<e_bridgeType>("e_bridgeType")  //""
        .value(enum2str<e_bridgeType>(e_bridgeType::CONCRETE).c_str(),e_bridgeType::CONCRETE)            //concrete
        .value(enum2str<e_bridgeType>(e_bridgeType::STEEL).c_str(),e_bridgeType::STEEL)            //steel
        .value(enum2str<e_bridgeType>(e_bridgeType::BRICK).c_str(),e_bridgeType::BRICK)            //brick
        .value(enum2str<e_bridgeType>(e_bridgeType::WOOD).c_str(),e_bridgeType::WOOD);            //wood
    ;
    //@js::enum_<e_objectType>(m,"e_objectType", js::arithmetic(),"")
    enum_<e_objectType>("e_objectType")  //""
        .value(enum2str<e_objectType>(e_objectType::NONE).c_str(),e_objectType::NONE)            //none
        .value(enum2str<e_objectType>(e_objectType::OBSTACLE).c_str(),e_objectType::OBSTACLE)            //obstacle
        .value(enum2str<e_objectType>(e_objectType::CAR).c_str(),e_objectType::CAR)            //car
        .value(enum2str<e_objectType>(e_objectType::POLE).c_str(),e_objectType::POLE)            //pole
        .value(enum2str<e_objectType>(e_objectType::TREE).c_str(),e_objectType::TREE)            //tree
        .value(enum2str<e_objectType>(e_objectType::VEGETATION).c_str(),e_objectType::VEGETATION)            //vegetation
        .value(enum2str<e_objectType>(e_objectType::BARRIER).c_str(),e_objectType::BARRIER)            //barrier
        .value(enum2str<e_objectType>(e_objectType::BUILDING).c_str(),e_objectType::BUILDING)            //building
        .value(enum2str<e_objectType>(e_objectType::PARKINGSPACE).c_str(),e_objectType::PARKINGSPACE)            //parkingSpace
        .value(enum2str<e_objectType>(e_objectType::PATCH).c_str(),e_objectType::PATCH)            //patch
        .value(enum2str<e_objectType>(e_objectType::RAILING).c_str(),e_objectType::RAILING)            //railing
        .value(enum2str<e_objectType>(e_objectType::TRAFFICISLAND).c_str(),e_objectType::TRAFFICISLAND)            //trafficIsland
        .value(enum2str<e_objectType>(e_objectType::CROSSWALK).c_str(),e_objectType::CROSSWALK)            //crosswalk
        .value(enum2str<e_objectType>(e_objectType::STREETLAMP).c_str(),e_objectType::STREETLAMP)            //streetLamp
        .value(enum2str<e_objectType>(e_objectType::GANTRY).c_str(),e_objectType::GANTRY)            //gantry
        .value(enum2str<e_objectType>(e_objectType::SOUNDBARRIER).c_str(),e_objectType::SOUNDBARRIER)            //soundBarrier
        .value(enum2str<e_objectType>(e_objectType::VAN).c_str(),e_objectType::VAN)            //van
        .value(enum2str<e_objectType>(e_objectType::BUS).c_str(),e_objectType::BUS)            //bus
        .value(enum2str<e_objectType>(e_objectType::TRAILER).c_str(),e_objectType::TRAILER)            //trailer
        .value(enum2str<e_objectType>(e_objectType::BIKE).c_str(),e_objectType::BIKE)            //bike
        .value(enum2str<e_objectType>(e_objectType::MOTORBIKE).c_str(),e_objectType::MOTORBIKE)            //motorbike
        .value(enum2str<e_objectType>(e_objectType::TRAM).c_str(),e_objectType::TRAM)            //tram
        .value(enum2str<e_objectType>(e_objectType::TRAIN).c_str(),e_objectType::TRAIN)            //train
        .value(enum2str<e_objectType>(e_objectType::PEDESTRIAN).c_str(),e_objectType::PEDESTRIAN)            //pedestrian
        .value(enum2str<e_objectType>(e_objectType::WIND).c_str(),e_objectType::WIND)            //wind
        .value(enum2str<e_objectType>(e_objectType::ROADMARK).c_str(),e_objectType::ROADMARK);            //roadMark
    ;
    //@js::enum_<e_orientation>(m,"e_orientation", js::arithmetic(),"")
    enum_<e_orientation>("e_orientation")  //""
        .value(enum2str<e_orientation>(e_orientation::PLUS).c_str(),e_orientation::PLUS)            //+
        .value(enum2str<e_orientation>(e_orientation::MINUS).c_str(),e_orientation::MINUS)            //-
        .value(enum2str<e_orientation>(e_orientation::NONE).c_str(),e_orientation::NONE);            //none
    ;
    //@js::enum_<e_outlineFillType>(m,"e_outlineFillType", js::arithmetic(),"")
    enum_<e_outlineFillType>("e_outlineFillType")  //""
        .value(enum2str<e_outlineFillType>(e_outlineFillType::GRASS).c_str(),e_outlineFillType::GRASS)            //grass
        .value(enum2str<e_outlineFillType>(e_outlineFillType::CONCRETE).c_str(),e_outlineFillType::CONCRETE)            //concrete
        .value(enum2str<e_outlineFillType>(e_outlineFillType::COBBLE).c_str(),e_outlineFillType::COBBLE)            //cobble
        .value(enum2str<e_outlineFillType>(e_outlineFillType::ASPHALT).c_str(),e_outlineFillType::ASPHALT)            //asphalt
        .value(enum2str<e_outlineFillType>(e_outlineFillType::PAVEMENT).c_str(),e_outlineFillType::PAVEMENT)            //pavement
        .value(enum2str<e_outlineFillType>(e_outlineFillType::GRAVEL).c_str(),e_outlineFillType::GRAVEL)            //gravel
        .value(enum2str<e_outlineFillType>(e_outlineFillType::SOIL).c_str(),e_outlineFillType::SOIL);            //soil
    ;
    //@js::enum_<e_road_objects_object_parkingSpace_access>(m,"e_road_objects_object_parkingSpace_access", js::arithmetic(),"")
    enum_<e_road_objects_object_parkingSpace_access>("e_road_objects_object_parkingSpace_access")  //""
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::ALL).c_str(),e_road_objects_object_parkingSpace_access::ALL)            //all
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::CAR).c_str(),e_road_objects_object_parkingSpace_access::CAR)            //car
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::WOMEN).c_str(),e_road_objects_object_parkingSpace_access::WOMEN)            //women
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::HANDICAPPED).c_str(),e_road_objects_object_parkingSpace_access::HANDICAPPED)            //handicapped
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::BUS).c_str(),e_road_objects_object_parkingSpace_access::BUS)            //bus
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::TRUCK).c_str(),e_road_objects_object_parkingSpace_access::TRUCK)            //truck
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::ELECTRIC).c_str(),e_road_objects_object_parkingSpace_access::ELECTRIC)            //electric
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::RESIDENTS).c_str(),e_road_objects_object_parkingSpace_access::RESIDENTS);            //residents
    ;
    //@js::enum_<e_sideType>(m,"e_sideType", js::arithmetic(),"")
    enum_<e_sideType>("e_sideType")  //""
        .value(enum2str<e_sideType>(e_sideType::LEFT).c_str(),e_sideType::LEFT)            //left
        .value(enum2str<e_sideType>(e_sideType::RIGHT).c_str(),e_sideType::RIGHT)            //right
        .value(enum2str<e_sideType>(e_sideType::FRONT).c_str(),e_sideType::FRONT)            //front
        .value(enum2str<e_sideType>(e_sideType::REAR).c_str(),e_sideType::REAR);            //rear
    ;
    //@js::enum_<e_tunnelType>(m,"e_tunnelType", js::arithmetic(),"")
    enum_<e_tunnelType>("e_tunnelType")  //""
        .value(enum2str<e_tunnelType>(e_tunnelType::STANDARD).c_str(),e_tunnelType::STANDARD)            //standard
        .value(enum2str<e_tunnelType>(e_tunnelType::UNDERPASS).c_str(),e_tunnelType::UNDERPASS);            //underpass
    ;
    //@js::enum_<e_road_railroad_switch_position>(m,"e_road_railroad_switch_position", js::arithmetic(),"")
    enum_<e_road_railroad_switch_position>("e_road_railroad_switch_position")  //""
        .value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::DYNAMIC).c_str(),e_road_railroad_switch_position::DYNAMIC)            //dynamic
        .value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::STRAIGHT).c_str(),e_road_railroad_switch_position::STRAIGHT)            //straight
        .value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::TURN).c_str(),e_road_railroad_switch_position::TURN);            //turn
    ;
    //@js::enum_<e_station_platform_segment_side>(m,"e_station_platform_segment_side", js::arithmetic(),"")
    enum_<e_station_platform_segment_side>("e_station_platform_segment_side")  //""
        .value(enum2str<e_station_platform_segment_side>(e_station_platform_segment_side::LEFT).c_str(),e_station_platform_segment_side::LEFT)            //left
        .value(enum2str<e_station_platform_segment_side>(e_station_platform_segment_side::RIGHT).c_str(),e_station_platform_segment_side::RIGHT);            //right
    ;
    //@js::enum_<e_station_type>(m,"e_station_type", js::arithmetic(),"")
    enum_<e_station_type>("e_station_type")  //""
        .value(enum2str<e_station_type>(e_station_type::SMALL).c_str(),e_station_type::SMALL)            //small
        .value(enum2str<e_station_type>(e_station_type::MEDIUM).c_str(),e_station_type::MEDIUM)            //medium
        .value(enum2str<e_station_type>(e_station_type::LARGE).c_str(),e_station_type::LARGE);            //large
    ;
    //@js::enum_<e_connection_type>(m,"e_connection_type", js::arithmetic(),"")
    enum_<e_connection_type>("e_connection_type")  //""
        .value(enum2str<e_connection_type>(e_connection_type::DEFAULT).c_str(),e_connection_type::DEFAULT)            //default
        .value(enum2str<e_connection_type>(e_connection_type::VIRTUAL).c_str(),e_connection_type::VIRTUAL);            //virtual
    ;
    //@js::enum_<e_contactPoint>(m,"e_contactPoint", js::arithmetic(),"")
    enum_<e_contactPoint>("e_contactPoint")  //""
        .value(enum2str<e_contactPoint>(e_contactPoint::START).c_str(),e_contactPoint::START)            //start
        .value(enum2str<e_contactPoint>(e_contactPoint::END).c_str(),e_contactPoint::END);            //end
    ;
    //@js::enum_<e_elementDir>(m,"e_elementDir", js::arithmetic(),"")
    enum_<e_elementDir>("e_elementDir")  //""
        .value(enum2str<e_elementDir>(e_elementDir::PLUS).c_str(),e_elementDir::PLUS)            //+
        .value(enum2str<e_elementDir>(e_elementDir::MINUS).c_str(),e_elementDir::MINUS);            //-
    ;
    //@js::enum_<e_junction_surface_CRG_mode>(m,"e_junction_surface_CRG_mode", js::arithmetic(),"")
    enum_<e_junction_surface_CRG_mode>("e_junction_surface_CRG_mode")  //""
        .value(enum2str<e_junction_surface_CRG_mode>(e_junction_surface_CRG_mode::GLOBAL).c_str(),e_junction_surface_CRG_mode::GLOBAL);            //global
    ;
    //@js::enum_<e_junction_type>(m,"e_junction_type", js::arithmetic(),"")
    enum_<e_junction_type>("e_junction_type")  //""
        .value(enum2str<e_junction_type>(e_junction_type::DEFAULT).c_str(),e_junction_type::DEFAULT)            //default
        .value(enum2str<e_junction_type>(e_junction_type::VIRTUAL).c_str(),e_junction_type::VIRTUAL)            //virtual
        .value(enum2str<e_junction_type>(e_junction_type::DIRECT).c_str(),e_junction_type::DIRECT);            //direct
    ;
    //@js::enum_<e_junctionGroup_type>(m,"e_junctionGroup_type", js::arithmetic(),"")
    enum_<e_junctionGroup_type>("e_junctionGroup_type")  //""
        .value(enum2str<e_junctionGroup_type>(e_junctionGroup_type::ROUNDABOUT).c_str(),e_junctionGroup_type::ROUNDABOUT)            //roundabout
        .value(enum2str<e_junctionGroup_type>(e_junctionGroup_type::UNKNOWN).c_str(),e_junctionGroup_type::UNKNOWN);            //unknown
    ;
    //@js::enum_<e_road_surface_CRG_mode>(m,"e_road_surface_CRG_mode", js::arithmetic(),"")
    enum_<e_road_surface_CRG_mode>("e_road_surface_CRG_mode")  //""
        .value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::ATTACHED).c_str(),e_road_surface_CRG_mode::ATTACHED)            //attached
        .value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::ATTACHED0).c_str(),e_road_surface_CRG_mode::ATTACHED0)            //attached0
        .value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::GENUINE).c_str(),e_road_surface_CRG_mode::GENUINE)            //genuine
        .value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::GLOBAL).c_str(),e_road_surface_CRG_mode::GLOBAL);            //global
    ;
    //@js::enum_<e_road_surface_CRG_purpose>(m,"e_road_surface_CRG_purpose", js::arithmetic(),"")
    enum_<e_road_surface_CRG_purpose>("e_road_surface_CRG_purpose")  //""
        .value(enum2str<e_road_surface_CRG_purpose>(e_road_surface_CRG_purpose::ELEVATION).c_str(),e_road_surface_CRG_purpose::ELEVATION)            //elevation
        .value(enum2str<e_road_surface_CRG_purpose>(e_road_surface_CRG_purpose::FRICTION).c_str(),e_road_surface_CRG_purpose::FRICTION);            //friction
    ;
    //@js::enum_<e_road_signals_signal_reference_elementType>(m,"e_road_signals_signal_reference_elementType", js::arithmetic(),"")
    enum_<e_road_signals_signal_reference_elementType>("e_road_signals_signal_reference_elementType")  //""
        .value(enum2str<e_road_signals_signal_reference_elementType>(e_road_signals_signal_reference_elementType::OBJECT).c_str(),e_road_signals_signal_reference_elementType::OBJECT)            //object
        .value(enum2str<e_road_signals_signal_reference_elementType>(e_road_signals_signal_reference_elementType::SIGNAL).c_str(),e_road_signals_signal_reference_elementType::SIGNAL);            //signal
    ;
    //@js::enum_<e_countryCode_deprecated>(m,"e_countryCode_deprecated", js::arithmetic(),"")
    enum_<e_countryCode_deprecated>("e_countryCode_deprecated")  //""
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::OPENDRIVE).c_str(),e_countryCode_deprecated::OPENDRIVE)            //OpenDRIVE
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::AUSTRIA).c_str(),e_countryCode_deprecated::AUSTRIA)            //Austria
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::BRAZIL).c_str(),e_countryCode_deprecated::BRAZIL)            //Brazil
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::CHINA).c_str(),e_countryCode_deprecated::CHINA)            //China
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::FRANCE).c_str(),e_countryCode_deprecated::FRANCE)            //France
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::GERMANY).c_str(),e_countryCode_deprecated::GERMANY)            //Germany
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::ITALY).c_str(),e_countryCode_deprecated::ITALY)            //Italy
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::SWITZERLAND).c_str(),e_countryCode_deprecated::SWITZERLAND)            //Switzerland
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::USA).c_str(),e_countryCode_deprecated::USA);            //USA
    ;
    //@js::enum_<e_direction>(m,"e_direction", js::arithmetic(),"")
    enum_<e_direction>("e_direction")  //""
        .value(enum2str<e_direction>(e_direction::SAME).c_str(),e_direction::SAME)            //same
        .value(enum2str<e_direction>(e_direction::OPPOSITE).c_str(),e_direction::OPPOSITE);            //opposite
    ;
    //@js::enum_<e_maxSpeedString>(m,"e_maxSpeedString", js::arithmetic(),"")
    enum_<e_maxSpeedString>("e_maxSpeedString")  //""
        .value(enum2str<e_maxSpeedString>(e_maxSpeedString::NO_LIMIT).c_str(),e_maxSpeedString::NO_LIMIT)            //no limit
        .value(enum2str<e_maxSpeedString>(e_maxSpeedString::UNDEFINED).c_str(),e_maxSpeedString::UNDEFINED);            //undefined
    ;
    //@js::enum_<e_paramPoly3_pRange>(m,"e_paramPoly3_pRange", js::arithmetic(),"")
    enum_<e_paramPoly3_pRange>("e_paramPoly3_pRange")  //""
        .value(enum2str<e_paramPoly3_pRange>(e_paramPoly3_pRange::ARCLENGTH).c_str(),e_paramPoly3_pRange::ARCLENGTH)            //arcLength
        .value(enum2str<e_paramPoly3_pRange>(e_paramPoly3_pRange::NORMALIZED).c_str(),e_paramPoly3_pRange::NORMALIZED);            //normalized
    ;
    //@js::enum_<e_road_link_elementType>(m,"e_road_link_elementType", js::arithmetic(),"")
    enum_<e_road_link_elementType>("e_road_link_elementType")  //""
        .value(enum2str<e_road_link_elementType>(e_road_link_elementType::ROAD).c_str(),e_road_link_elementType::ROAD)            //road
        .value(enum2str<e_road_link_elementType>(e_road_link_elementType::JUNCTION).c_str(),e_road_link_elementType::JUNCTION);            //junction
    ;
    //@js::enum_<e_roadType>(m,"e_roadType", js::arithmetic(),"The known keywords for the road type information are:")
    enum_<e_roadType>("e_roadType")  //"The known keywords for the road type information are:"
        .value(enum2str<e_roadType>(e_roadType::UNKNOWN).c_str(),e_roadType::UNKNOWN)            //unknown
        .value(enum2str<e_roadType>(e_roadType::RURAL).c_str(),e_roadType::RURAL)            //rural
        .value(enum2str<e_roadType>(e_roadType::MOTORWAY).c_str(),e_roadType::MOTORWAY)            //motorway
        .value(enum2str<e_roadType>(e_roadType::TOWN).c_str(),e_roadType::TOWN)            //town
        .value(enum2str<e_roadType>(e_roadType::LOWSPEED).c_str(),e_roadType::LOWSPEED)            //lowSpeed
        .value(enum2str<e_roadType>(e_roadType::PEDESTRIAN).c_str(),e_roadType::PEDESTRIAN)            //pedestrian
        .value(enum2str<e_roadType>(e_roadType::BICYCLE).c_str(),e_roadType::BICYCLE)            //bicycle
        .value(enum2str<e_roadType>(e_roadType::TOWNEXPRESSWAY).c_str(),e_roadType::TOWNEXPRESSWAY)            //townExpressway
        .value(enum2str<e_roadType>(e_roadType::TOWNCOLLECTOR).c_str(),e_roadType::TOWNCOLLECTOR)            //townCollector
        .value(enum2str<e_roadType>(e_roadType::TOWNARTERIAL).c_str(),e_roadType::TOWNARTERIAL)            //townArterial
        .value(enum2str<e_roadType>(e_roadType::TOWNPRIVATE).c_str(),e_roadType::TOWNPRIVATE)            //townPrivate
        .value(enum2str<e_roadType>(e_roadType::TOWNLOCAL).c_str(),e_roadType::TOWNLOCAL)            //townLocal
        .value(enum2str<e_roadType>(e_roadType::TOWNPLAYSTREET).c_str(),e_roadType::TOWNPLAYSTREET);            //townPlayStreet
    ;
    //@js::enum_<e_trafficRule>(m,"e_trafficRule", js::arithmetic(),"")
    enum_<e_trafficRule>("e_trafficRule")  //""
        .value(enum2str<e_trafficRule>(e_trafficRule::RHT).c_str(),e_trafficRule::RHT)            //RHT
        .value(enum2str<e_trafficRule>(e_trafficRule::LHT).c_str(),e_trafficRule::LHT);            //LHT
    ;
    //@js::enum_<e_accessRestrictionType>(m,"e_accessRestrictionType", js::arithmetic(),"")
    enum_<e_accessRestrictionType>("e_accessRestrictionType")  //""
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::SIMULATOR).c_str(),e_accessRestrictionType::SIMULATOR)            //simulator
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::AUTONOMOUSTRAFFIC).c_str(),e_accessRestrictionType::AUTONOMOUSTRAFFIC)            //autonomousTraffic
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::PEDESTRIAN).c_str(),e_accessRestrictionType::PEDESTRIAN)            //pedestrian
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::PASSENGERCAR).c_str(),e_accessRestrictionType::PASSENGERCAR)            //passengerCar
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::BUS).c_str(),e_accessRestrictionType::BUS)            //bus
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::DELIVERY).c_str(),e_accessRestrictionType::DELIVERY)            //delivery
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::EMERGENCY).c_str(),e_accessRestrictionType::EMERGENCY)            //emergency
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::TAXI).c_str(),e_accessRestrictionType::TAXI)            //taxi
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::THROUGHTRAFFIC).c_str(),e_accessRestrictionType::THROUGHTRAFFIC)            //throughTraffic
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::TRUCK).c_str(),e_accessRestrictionType::TRUCK)            //truck
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::BICYCLE).c_str(),e_accessRestrictionType::BICYCLE)            //bicycle
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::MOTORCYCLE).c_str(),e_accessRestrictionType::MOTORCYCLE)            //motorcycle
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::NONE).c_str(),e_accessRestrictionType::NONE)            //none
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::TRUCKS).c_str(),e_accessRestrictionType::TRUCKS);            //trucks
    ;
    //@js::enum_<e_laneType>(m,"e_laneType", js::arithmetic(),"The lane type is defined per lane. A lane type defines the main purpose of a lane and its corresponding traffic rules.")
    enum_<e_laneType>("e_laneType")  //"The lane type is defined per lane. A lane type defines the main purpose of a lane and its corresponding traffic rules."
        .value(enum2str<e_laneType>(e_laneType::SHOULDER).c_str(),e_laneType::SHOULDER)            //shoulder
        .value(enum2str<e_laneType>(e_laneType::BORDER).c_str(),e_laneType::BORDER)            //border
        .value(enum2str<e_laneType>(e_laneType::DRIVING).c_str(),e_laneType::DRIVING)            //driving
        .value(enum2str<e_laneType>(e_laneType::STOP).c_str(),e_laneType::STOP)            //stop
        .value(enum2str<e_laneType>(e_laneType::NONE).c_str(),e_laneType::NONE)            //none
        .value(enum2str<e_laneType>(e_laneType::RESTRICTED).c_str(),e_laneType::RESTRICTED)            //restricted
        .value(enum2str<e_laneType>(e_laneType::PARKING).c_str(),e_laneType::PARKING)            //parking
        .value(enum2str<e_laneType>(e_laneType::MEDIAN).c_str(),e_laneType::MEDIAN)            //median
        .value(enum2str<e_laneType>(e_laneType::BIKING).c_str(),e_laneType::BIKING)            //biking
        .value(enum2str<e_laneType>(e_laneType::SIDEWALK).c_str(),e_laneType::SIDEWALK)            //sidewalk
        .value(enum2str<e_laneType>(e_laneType::CURB).c_str(),e_laneType::CURB)            //curb
        .value(enum2str<e_laneType>(e_laneType::EXIT).c_str(),e_laneType::EXIT)            //exit
        .value(enum2str<e_laneType>(e_laneType::ENTRY).c_str(),e_laneType::ENTRY)            //entry
        .value(enum2str<e_laneType>(e_laneType::ONRAMP).c_str(),e_laneType::ONRAMP)            //onRamp
        .value(enum2str<e_laneType>(e_laneType::OFFRAMP).c_str(),e_laneType::OFFRAMP)            //offRamp
        .value(enum2str<e_laneType>(e_laneType::CONNECTINGRAMP).c_str(),e_laneType::CONNECTINGRAMP)            //connectingRamp
        .value(enum2str<e_laneType>(e_laneType::BIDIRECTIONAL).c_str(),e_laneType::BIDIRECTIONAL)            //bidirectional
        .value(enum2str<e_laneType>(e_laneType::SPECIAL1).c_str(),e_laneType::SPECIAL1)            //special1
        .value(enum2str<e_laneType>(e_laneType::SPECIAL2).c_str(),e_laneType::SPECIAL2)            //special2
        .value(enum2str<e_laneType>(e_laneType::SPECIAL3).c_str(),e_laneType::SPECIAL3)            //special3
        .value(enum2str<e_laneType>(e_laneType::ROADWORKS).c_str(),e_laneType::ROADWORKS)            //roadWorks
        .value(enum2str<e_laneType>(e_laneType::TRAM).c_str(),e_laneType::TRAM)            //tram
        .value(enum2str<e_laneType>(e_laneType::RAIL).c_str(),e_laneType::RAIL)            //rail
        .value(enum2str<e_laneType>(e_laneType::BUS).c_str(),e_laneType::BUS)            //bus
        .value(enum2str<e_laneType>(e_laneType::TAXI).c_str(),e_laneType::TAXI)            //taxi
        .value(enum2str<e_laneType>(e_laneType::HOV).c_str(),e_laneType::HOV)            //HOV
        .value(enum2str<e_laneType>(e_laneType::MWYENTRY).c_str(),e_laneType::MWYENTRY)            //mwyEntry
        .value(enum2str<e_laneType>(e_laneType::MWYEXIT).c_str(),e_laneType::MWYEXIT);            //mwyExit
    ;
    //@js::enum_<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(m,"e_road_lanes_laneSection_lcr_lane_roadMark_laneChange", js::arithmetic(),"")
    enum_<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>("e_road_lanes_laneSection_lcr_lane_roadMark_laneChange")  //""
        .value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::INCREASE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::INCREASE)            //increase
        .value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::DECREASE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::DECREASE)            //decrease
        .value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::BOTH).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::BOTH)            //both
        .value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::NONE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::NONE);            //none
    ;
    //@js::enum_<e_road_lanes_laneSection_lr_lane_access_rule>(m,"e_road_lanes_laneSection_lr_lane_access_rule", js::arithmetic(),"")
    enum_<e_road_lanes_laneSection_lr_lane_access_rule>("e_road_lanes_laneSection_lr_lane_access_rule")  //""
        .value(enum2str<e_road_lanes_laneSection_lr_lane_access_rule>(e_road_lanes_laneSection_lr_lane_access_rule::ALLOW).c_str(),e_road_lanes_laneSection_lr_lane_access_rule::ALLOW)            //allow
        .value(enum2str<e_road_lanes_laneSection_lr_lane_access_rule>(e_road_lanes_laneSection_lr_lane_access_rule::DENY).c_str(),e_road_lanes_laneSection_lr_lane_access_rule::DENY);            //deny
    ;
    //@js::enum_<e_roadMarkColor>(m,"e_roadMarkColor", js::arithmetic(),"The known keywords for the road mark color information are:")
    enum_<e_roadMarkColor>("e_roadMarkColor")  //"The known keywords for the road mark color information are:"
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::STANDARD).c_str(),e_roadMarkColor::STANDARD)            //standard
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::BLUE).c_str(),e_roadMarkColor::BLUE)            //blue
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::GREEN).c_str(),e_roadMarkColor::GREEN)            //green
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::RED).c_str(),e_roadMarkColor::RED)            //red
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::WHITE).c_str(),e_roadMarkColor::WHITE)            //white
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::YELLOW).c_str(),e_roadMarkColor::YELLOW)            //yellow
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::ORANGE).c_str(),e_roadMarkColor::ORANGE)            //orange
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::VIOLET).c_str(),e_roadMarkColor::VIOLET);            //violet
    ;
    //@js::enum_<e_roadMarkRule>(m,"e_roadMarkRule", js::arithmetic(),"")
    enum_<e_roadMarkRule>("e_roadMarkRule")  //""
        .value(enum2str<e_roadMarkRule>(e_roadMarkRule::NO_PASSING).c_str(),e_roadMarkRule::NO_PASSING)            //no passing
        .value(enum2str<e_roadMarkRule>(e_roadMarkRule::CAUTION).c_str(),e_roadMarkRule::CAUTION)            //caution
        .value(enum2str<e_roadMarkRule>(e_roadMarkRule::NONE).c_str(),e_roadMarkRule::NONE);            //none
    ;
    //@js::enum_<e_roadMarkType>(m,"e_roadMarkType", js::arithmetic(),"The known keywords for the simplified road mark type information are:")
    enum_<e_roadMarkType>("e_roadMarkType")  //"The known keywords for the simplified road mark type information are:"
        .value(enum2str<e_roadMarkType>(e_roadMarkType::NONE).c_str(),e_roadMarkType::NONE)            //none
        .value(enum2str<e_roadMarkType>(e_roadMarkType::SOLID).c_str(),e_roadMarkType::SOLID)            //solid
        .value(enum2str<e_roadMarkType>(e_roadMarkType::BROKEN).c_str(),e_roadMarkType::BROKEN)            //broken
        .value(enum2str<e_roadMarkType>(e_roadMarkType::SOLID_SOLID).c_str(),e_roadMarkType::SOLID_SOLID)            //solid solid
        .value(enum2str<e_roadMarkType>(e_roadMarkType::SOLID_BROKEN).c_str(),e_roadMarkType::SOLID_BROKEN)            //solid broken
        .value(enum2str<e_roadMarkType>(e_roadMarkType::BROKEN_SOLID).c_str(),e_roadMarkType::BROKEN_SOLID)            //broken solid
        .value(enum2str<e_roadMarkType>(e_roadMarkType::BROKEN_BROKEN).c_str(),e_roadMarkType::BROKEN_BROKEN)            //broken broken
        .value(enum2str<e_roadMarkType>(e_roadMarkType::BOTTS_DOTS).c_str(),e_roadMarkType::BOTTS_DOTS)            //botts dots
        .value(enum2str<e_roadMarkType>(e_roadMarkType::GRASS).c_str(),e_roadMarkType::GRASS)            //grass
        .value(enum2str<e_roadMarkType>(e_roadMarkType::CURB).c_str(),e_roadMarkType::CURB)            //curb
        .value(enum2str<e_roadMarkType>(e_roadMarkType::CUSTOM).c_str(),e_roadMarkType::CUSTOM)            //custom
        .value(enum2str<e_roadMarkType>(e_roadMarkType::EDGE).c_str(),e_roadMarkType::EDGE);            //edge
    ;
    //@js::enum_<e_roadMarkWeight>(m,"e_roadMarkWeight", js::arithmetic(),"")
    enum_<e_roadMarkWeight>("e_roadMarkWeight")  //""
        .value(enum2str<e_roadMarkWeight>(e_roadMarkWeight::STANDARD).c_str(),e_roadMarkWeight::STANDARD)            //standard
        .value(enum2str<e_roadMarkWeight>(e_roadMarkWeight::BOLD).c_str(),e_roadMarkWeight::BOLD);            //bold
    ;
    //@js::enum_<t_bool>(m,"t_bool", js::arithmetic(),"")
    enum_<t_bool>("t_bool")  //""
        .value(enum2str<t_bool>(t_bool::TRUE).c_str(),t_bool::TRUE)            //true
        .value(enum2str<t_bool>(t_bool::FALSE).c_str(),t_bool::FALSE);            //false
    ;
    class_<e_unit>("e_unit") // union definition
        .smart_ptr_constructor("e_unit",&std::make_shared<e_unit>) 
        .property("unitDistance",&e_unit::unitDistance)
        .property("unitSpeed",&e_unit::unitSpeed)
        .property("unitMass",&e_unit::unitMass)
        .property("unitSlope",&e_unit::unitSlope)
    ;
    class_<e_countryCode>("e_countryCode") // union definition
        .smart_ptr_constructor("e_countryCode",&std::make_shared<e_countryCode>) 
        .property("m_e_countryCode_iso3166alpha2",&e_countryCode::m_e_countryCode_iso3166alpha2)
        .property("m_e_countryCode_iso3166alpha3_deprecated",&e_countryCode::m_e_countryCode_iso3166alpha3_deprecated)
        .property("countryCode_deprecated",&e_countryCode::countryCode_deprecated)
    ;
    class_<t_maxSpeed>("t_maxSpeed") // union definition
        .smart_ptr_constructor("t_maxSpeed",&std::make_shared<t_maxSpeed>) 
        .property("m_t_grEqZero",&t_maxSpeed::m_t_grEqZero)
        .property("maxSpeedString",&t_maxSpeed::maxSpeedString)
    ;
//
    class_<OpenDRIVE>("OpenDRIVE") 
        .smart_ptr_constructor("OpenDRIVE",&std::make_shared<OpenDRIVE>) 
        .property("header", &OpenDRIVE::m_header ) //t_header
        .property("road", &OpenDRIVE::m_roads ) //t_road 
        .property("controller", &OpenDRIVE::m_controllers ) //t_controller 
        .property("junction", &OpenDRIVE::m_junctions ) //t_junction 
        .property("junctionGroup", &OpenDRIVE::m_junctionGroups ) //t_junctionGroup 
        .property("station", &OpenDRIVE::m_stations ) //t_station 
    .property("g_additionalData", &OpenDRIVE::m_g_additionalData ) // group read 
            ;
    class_<xodr>("xodr")  // "Main Clazz for interfacing with OpenDRIVE"
        .smart_ptr_constructor("xodr",&std::make_shared<xodr>) 
        .function("load", &xodr::load)
        .function("parse", &xodr::parse)
        .property("OpenDRIVE", &xodr::m_OpenDRIVE);
}

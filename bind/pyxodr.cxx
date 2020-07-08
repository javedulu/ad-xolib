//
//  opendrive_16_core_py.cxx
//  xsd2cxx- for OpenDrive CXX classes
//
//  Created by Javed Shaik on Tue Jul  7 21:15:11 2020
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : e6019dc8-4141-43ab-b560-98c01cd466e6 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
//
// pybind11
//
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
//
#include "xodr.h"
namespace py = pybind11;
PYBIND11_MODULE(pyxodr,m)
{
    m.doc() = "Python Bindings for opendrive_16_core - OPENDRIVE_16_CORE";
	py::class_<t_road_signals_signal_U, std::shared_ptr<t_road_signals_signal_U>>(m,"t_road_signals_signal_U")
		.def_readwrite("positionRoad", &t_road_signals_signal_U::m_positionRoad ) //t_road_signals_signal_positionRoad
		.def_readwrite("positionInertial", &t_road_signals_signal_U::m_positionInertial ) //t_road_signals_signal_positionInertial
;
	py::class_<t_road_planView_geometry_U, std::shared_ptr<t_road_planView_geometry_U>>(m,"t_road_planView_geometry_U")
		.def_readwrite("line", &t_road_planView_geometry_U::m_line ) //t_road_planView_geometry_line
		.def_readwrite("spiral", &t_road_planView_geometry_U::m_spiral ) //t_road_planView_geometry_spiral
		.def_readwrite("arc", &t_road_planView_geometry_U::m_arc ) //t_road_planView_geometry_arc
		.def_readwrite("poly3", &t_road_planView_geometry_U::m_poly3 ) //t_road_planView_geometry_poly3
		.def_readwrite("paramPoly3", &t_road_planView_geometry_U::m_paramPoly3 ) //t_road_planView_geometry_paramPoly3
;
	py::class_<t_road_objects_object_outlines_outline_U, std::shared_ptr<t_road_objects_object_outlines_outline_U>>(m,"t_road_objects_object_outlines_outline_U")
		.def_readwrite("cornerRoad", &t_road_objects_object_outlines_outline_U::m_cornerRoads ) //t_road_objects_object_outlines_outline_cornerRoad
		.def_readwrite("cornerLocal", &t_road_objects_object_outlines_outline_U::m_cornerLocals ) //t_road_objects_object_outlines_outline_cornerLocal
;
	py::class_<t_road_lanes_laneSection_lr_lane_U, std::shared_ptr<t_road_lanes_laneSection_lr_lane_U>>(m,"t_road_lanes_laneSection_lr_lane_U")
		.def_readwrite("border", &t_road_lanes_laneSection_lr_lane_U::m_borders ) //t_road_lanes_laneSection_lr_lane_border
		.def_readwrite("width", &t_road_lanes_laneSection_lr_lane_U::m_widths ) //t_road_lanes_laneSection_lr_lane_width
;
//
	py::class_<_OpenDriveElement, std::shared_ptr<_OpenDriveElement>>(m,"_OpenDriveElement");
;
//
	py::class_<t_dataQuality, std::shared_ptr<t_dataQuality>>(m,"t_dataQuality")
		.def_readwrite("error", &t_dataQuality::m_error ) //t_dataQuality_Error
		.def_readwrite("rawData", &t_dataQuality::m_rawData ) //t_dataQuality_RawData
;
//
	py::class_<t_dataQuality_Error, std::shared_ptr<t_dataQuality_Error>>(m,"t_dataQuality_Error")
		.def_readwrite("xyAbsolute", &t_dataQuality_Error::xyAbsolute ) //required
		.def_readwrite("zAbsolute", &t_dataQuality_Error::zAbsolute ) //required
		.def_readwrite("xyRelative", &t_dataQuality_Error::xyRelative ) //required
		.def_readwrite("zRelative", &t_dataQuality_Error::zRelative ) //required
;
//
	py::class_<t_dataQuality_RawData, std::shared_ptr<t_dataQuality_RawData>>(m,"t_dataQuality_RawData")
		.def_readwrite("date", &t_dataQuality_RawData::date ) //required
		.def_readwrite("source", &t_dataQuality_RawData::source ) //required
		.def_readwrite("sourceComment", &t_dataQuality_RawData::sourceComment ) //optional
		.def_readwrite("postProcessing", &t_dataQuality_RawData::postProcessing ) //required
		.def_readwrite("postProcessingComment", &t_dataQuality_RawData::postProcessingComment ) //optional
;
//
	py::class_<t_header, std::shared_ptr<t_header>>(m,"t_header")
		.def_readonly("revMajor",&t_header::revMajor)
		.def_readwrite("revMinor", &t_header::revMinor ) //required
		.def_readwrite("name", &t_header::name ) //optional
		.def_readwrite("version", &t_header::version ) //optional
		.def_readwrite("date", &t_header::date ) //optional
		.def_readwrite("north", &t_header::north ) //optional
		.def_readwrite("south", &t_header::south ) //optional
		.def_readwrite("east", &t_header::east ) //optional
		.def_readwrite("west", &t_header::west ) //optional
		.def_readwrite("vendor", &t_header::vendor ) //optional
		.def_readwrite("geoReference", &t_header::m_geoReference ) //t_header_GeoReference
		.def_readwrite("offset", &t_header::m_offset ) //t_header_Offset
   //group tag : reference g_additionalData
;
//
	py::class_<t_header_GeoReference, std::shared_ptr<t_header_GeoReference>>(m,"t_header_GeoReference")
   //group tag : reference g_additionalData
;
//
	py::class_<t_header_Offset, std::shared_ptr<t_header_Offset>>(m,"t_header_Offset")
		.def_readwrite("x", &t_header_Offset::x ) //required
		.def_readwrite("y", &t_header_Offset::y ) //required
		.def_readwrite("z", &t_header_Offset::z ) //required
		.def_readwrite("hdg", &t_header_Offset::hdg ) //required
   //group tag : reference g_additionalData
;
//
	py::class_<t_include, std::shared_ptr<t_include>>(m,"t_include")
		.def_readwrite("file", &t_include::file ) //required
;
//
	py::class_<t_userData, std::shared_ptr<t_userData>>(m,"t_userData")
		.def_readwrite("code", &t_userData::code ) //required
		.def_readwrite("value", &t_userData::value ) //optional
;
//
	py::class_<t_road_railroad, std::shared_ptr<t_road_railroad>>(m,"t_road_railroad")
		.def_readwrite("switch", &t_road_railroad::m_switchs ) //t_road_railroad_switch
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_railroad_switch, std::shared_ptr<t_road_railroad_switch>>(m,"t_road_railroad_switch")
		.def_readwrite("name", &t_road_railroad_switch::name ) //required
		.def_readwrite("id", &t_road_railroad_switch::id ) //required
		.def_readwrite("position", &t_road_railroad_switch::position ) //required
		.def_readwrite("mainTrack", &t_road_railroad_switch::m_mainTrack ) //t_road_railroad_switch_mainTrack
		.def_readwrite("sideTrack", &t_road_railroad_switch::m_sideTrack ) //t_road_railroad_switch_sideTrack
		.def_readwrite("partner", &t_road_railroad_switch::m_partner ) //t_road_railroad_switch_partner
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_railroad_switch_mainTrack, std::shared_ptr<t_road_railroad_switch_mainTrack>>(m,"t_road_railroad_switch_mainTrack")
		.def_readwrite("id", &t_road_railroad_switch_mainTrack::id ) //required
		.def_readwrite("s", &t_road_railroad_switch_mainTrack::s ) //required
		.def_readwrite("dir", &t_road_railroad_switch_mainTrack::dir ) //required
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_railroad_switch_partner, std::shared_ptr<t_road_railroad_switch_partner>>(m,"t_road_railroad_switch_partner")
		.def_readwrite("name", &t_road_railroad_switch_partner::name ) //optional
		.def_readwrite("id", &t_road_railroad_switch_partner::id ) //required
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_railroad_switch_sideTrack, std::shared_ptr<t_road_railroad_switch_sideTrack>>(m,"t_road_railroad_switch_sideTrack")
		.def_readwrite("id", &t_road_railroad_switch_sideTrack::id ) //required
		.def_readwrite("s", &t_road_railroad_switch_sideTrack::s ) //required
		.def_readwrite("dir", &t_road_railroad_switch_sideTrack::dir ) //required
   //group tag : reference g_additionalData
;
//
	py::class_<t_station, std::shared_ptr<t_station>>(m,"t_station")
		.def_readwrite("name", &t_station::name ) //required
		.def_readwrite("id", &t_station::id ) //required
		.def_readwrite("type", &t_station::type ) //optional
		.def_readwrite("platform", &t_station::m_platforms ) //t_station_platform
   //group tag : reference g_additionalData
;
//
	py::class_<t_station_platform, std::shared_ptr<t_station_platform>>(m,"t_station_platform")
		.def_readwrite("name", &t_station_platform::name ) //optional
		.def_readwrite("id", &t_station_platform::id ) //required
		.def_readwrite("segment", &t_station_platform::m_segments ) //t_station_platform_segment
   //group tag : reference g_additionalData
;
//
	py::class_<t_station_platform_segment, std::shared_ptr<t_station_platform_segment>>(m,"t_station_platform_segment")
		.def_readwrite("roadId", &t_station_platform_segment::roadId ) //required
		.def_readwrite("sStart", &t_station_platform_segment::sStart ) //required
		.def_readwrite("sEnd", &t_station_platform_segment::sEnd ) //required
		.def_readwrite("side", &t_station_platform_segment::side ) //required
;
//
	py::class_<t_junction, std::shared_ptr<t_junction>>(m,"t_junction")
		.def_readwrite("name", &t_junction::name ) //optional
		.def_readwrite("id", &t_junction::id ) //required
		.def_readwrite("type", &t_junction::type ) //optional
		.def_readwrite("connection", &t_junction::m_connections ) //t_junction_connection
		.def_readwrite("priority", &t_junction::m_prioritys ) //t_junction_priority
		.def_readwrite("controller", &t_junction::m_controllers ) //t_junction_controller
		.def_readwrite("surface", &t_junction::m_surface ) //t_junction_surface
   //group tag : reference g_additionalData
;
//
	py::class_<t_junction_connection, std::shared_ptr<t_junction_connection>>(m,"t_junction_connection")
		.def_readwrite("id", &t_junction_connection::id ) //required
		.def_readwrite("type", &t_junction_connection::type ) //optional
		.def_readwrite("incomingRoad", &t_junction_connection::incomingRoad ) //optional
		.def_readwrite("connectingRoad", &t_junction_connection::connectingRoad ) //optional
		.def_readwrite("contactPoint", &t_junction_connection::contactPoint ) //optional
		.def_readwrite("predecessor", &t_junction_connection::m_predecessor ) //t_junction_predecessorSuccessor
		.def_readwrite("successor", &t_junction_connection::m_successor ) //t_junction_predecessorSuccessor
		.def_readwrite("laneLink", &t_junction_connection::m_laneLinks ) //t_junction_connection_laneLink
;
//
	py::class_<t_junction_connection_laneLink, std::shared_ptr<t_junction_connection_laneLink>>(m,"t_junction_connection_laneLink")
		.def_readwrite("from", &t_junction_connection_laneLink::from ) //required
		.def_readwrite("to", &t_junction_connection_laneLink::to ) //required
;
//
	py::class_<t_junction_controller, std::shared_ptr<t_junction_controller>>(m,"t_junction_controller")
		.def_readwrite("id", &t_junction_controller::id ) //required
		.def_readwrite("type", &t_junction_controller::type ) //optional
		.def_readwrite("sequence", &t_junction_controller::sequence ) //optional
;
//
	py::class_<t_junction_predecessorSuccessor, std::shared_ptr<t_junction_predecessorSuccessor>>(m,"t_junction_predecessorSuccessor")
		.def_readonly("elementType",&t_junction_predecessorSuccessor::elementType)
		.def_readwrite("elementId", &t_junction_predecessorSuccessor::elementId ) //required
		.def_readwrite("elementS", &t_junction_predecessorSuccessor::elementS ) //required
		.def_readwrite("elementDir", &t_junction_predecessorSuccessor::elementDir ) //required
;
//
	py::class_<t_junction_priority, std::shared_ptr<t_junction_priority>>(m,"t_junction_priority")
		.def_readwrite("high", &t_junction_priority::high ) //optional
		.def_readwrite("low", &t_junction_priority::low ) //optional
;
//
	py::class_<t_junction_surface, std::shared_ptr<t_junction_surface>>(m,"t_junction_surface")
		.def_readwrite("CRG", &t_junction_surface::m_CRGs ) //t_junction_surface_CRG
   //group tag : reference g_additionalData
;
//
	py::class_<t_junction_surface_CRG, std::shared_ptr<t_junction_surface_CRG>>(m,"t_junction_surface_CRG")
		.def_readwrite("file", &t_junction_surface_CRG::file ) //required
			.def_readonly("mode",&t_junction_surface_CRG::mode)
		.def_readwrite("purpose", &t_junction_surface_CRG::purpose ) //optional
		.def_readwrite("zOffset", &t_junction_surface_CRG::zOffset ) //optional
		.def_readwrite("zScale", &t_junction_surface_CRG::zScale ) //optional
;
//
	py::class_<t_junctionGroup, std::shared_ptr<t_junctionGroup>>(m,"t_junctionGroup")
		.def_readwrite("name", &t_junctionGroup::name ) //optional
		.def_readwrite("id", &t_junctionGroup::id ) //required
		.def_readwrite("type", &t_junctionGroup::type ) //required
		.def_readwrite("junctionReference", &t_junctionGroup::m_junctionReferences ) //t_junctionGroup_junctionReference
   //group tag : reference g_additionalData
;
//
	py::class_<t_junctionGroup_junctionReference, std::shared_ptr<t_junctionGroup_junctionReference>>(m,"t_junctionGroup_junctionReference")
		.def_readwrite("junction", &t_junctionGroup_junctionReference::junction ) //required
;
//
	py::class_<t_controller, std::shared_ptr<t_controller>>(m,"t_controller")
		.def_readwrite("id", &t_controller::id ) //required
		.def_readwrite("name", &t_controller::name ) //optional
		.def_readwrite("sequence", &t_controller::sequence ) //optional
		.def_readwrite("control", &t_controller::m_controls ) //t_controller_control
   //group tag : reference g_additionalData
;
//
	py::class_<t_controller_control, std::shared_ptr<t_controller_control>>(m,"t_controller_control")
		.def_readwrite("signalId", &t_controller_control::signalId ) //required
		.def_readwrite("type", &t_controller_control::type ) //optional
;
//
	py::class_<t_road_signals, std::shared_ptr<t_road_signals>>(m,"t_road_signals")
		.def_readwrite("signal", &t_road_signals::m_signals ) //t_road_signals_signal
		.def_readwrite("signalReference", &t_road_signals::m_signalReferences ) //t_road_signals_signalReference
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_signals_signal, std::shared_ptr<t_road_signals_signal>>(m,"t_road_signals_signal")
		.def_readwrite("s", &t_road_signals_signal::s ) //required
		.def_readwrite("t", &t_road_signals_signal::t ) //required
		.def_readwrite("id", &t_road_signals_signal::id ) //required
		.def_readwrite("name", &t_road_signals_signal::name ) //optional
		.def_readwrite("dynamic", &t_road_signals_signal::dynamic ) //required
		.def_readwrite("orientation", &t_road_signals_signal::orientation ) //required
		.def_readwrite("zOffset", &t_road_signals_signal::zOffset ) //required
	//--> ERROR <-- : if (node.attribute("country")) { country = node.attribute("country").e_countryCode; }  // TODO: >> union - handle properly
		.def_readwrite("countryRevision", &t_road_signals_signal::countryRevision ) //optional
		.def_readwrite("type", &t_road_signals_signal::type ) //required
		.def_readwrite("subtype", &t_road_signals_signal::subtype ) //required
		.def_readwrite("value", &t_road_signals_signal::value ) //optional
	//--> ERROR <-- : if (node.attribute("unit")) { unit = node.attribute("unit").e_unit; }  // TODO: >> union - handle properly
		.def_readwrite("height", &t_road_signals_signal::height ) //optional
		.def_readwrite("width", &t_road_signals_signal::width ) //optional
		.def_readwrite("text", &t_road_signals_signal::text ) //optional
		.def_readwrite("hOffset", &t_road_signals_signal::hOffset ) //optional
		.def_readwrite("pitch", &t_road_signals_signal::pitch ) //optional
		.def_readwrite("roll", &t_road_signals_signal::roll ) //optional
		.def_readwrite("validity", &t_road_signals_signal::m_validitys ) //t_road_objects_object_laneValidity
		.def_readwrite("dependency", &t_road_signals_signal::m_dependencys ) //t_road_signals_signal_dependency
		.def_readwrite("reference", &t_road_signals_signal::m_references ) //t_road_signals_signal_reference
   //group tag : reference g_additionalData
		.def_readwrite("t_road_signals_signal", &t_road_signals_signal::m_t_road_signals_signal ) //
;
//
	py::class_<t_road_signals_signal_dependency, std::shared_ptr<t_road_signals_signal_dependency>>(m,"t_road_signals_signal_dependency")
		.def_readwrite("id", &t_road_signals_signal_dependency::id ) //required
		.def_readwrite("type", &t_road_signals_signal_dependency::type ) //optional
;
//
	py::class_<t_road_signals_signal_positionInertial, std::shared_ptr<t_road_signals_signal_positionInertial>>(m,"t_road_signals_signal_positionInertial")
		.def_readwrite("x", &t_road_signals_signal_positionInertial::x ) //required
		.def_readwrite("y", &t_road_signals_signal_positionInertial::y ) //required
		.def_readwrite("z", &t_road_signals_signal_positionInertial::z ) //required
		.def_readwrite("hdg", &t_road_signals_signal_positionInertial::hdg ) //required
		.def_readwrite("pitch", &t_road_signals_signal_positionInertial::pitch ) //optional
		.def_readwrite("roll", &t_road_signals_signal_positionInertial::roll ) //optional
;
//
	py::class_<t_road_signals_signal_positionRoad, std::shared_ptr<t_road_signals_signal_positionRoad>>(m,"t_road_signals_signal_positionRoad")
		.def_readwrite("roadId", &t_road_signals_signal_positionRoad::roadId ) //required
		.def_readwrite("s", &t_road_signals_signal_positionRoad::s ) //required
		.def_readwrite("t", &t_road_signals_signal_positionRoad::t ) //required
		.def_readwrite("zOffset", &t_road_signals_signal_positionRoad::zOffset ) //required
		.def_readwrite("hOffset", &t_road_signals_signal_positionRoad::hOffset ) //required
		.def_readwrite("pitch", &t_road_signals_signal_positionRoad::pitch ) //optional
		.def_readwrite("roll", &t_road_signals_signal_positionRoad::roll ) //optional
;
//
	py::class_<t_road_signals_signal_reference, std::shared_ptr<t_road_signals_signal_reference>>(m,"t_road_signals_signal_reference")
		.def_readwrite("elementType", &t_road_signals_signal_reference::elementType ) //required
		.def_readwrite("elementId", &t_road_signals_signal_reference::elementId ) //required
		.def_readwrite("type", &t_road_signals_signal_reference::type ) //optional
;
//
	py::class_<t_road_signals_signalReference, std::shared_ptr<t_road_signals_signalReference>>(m,"t_road_signals_signalReference")
		.def_readwrite("s", &t_road_signals_signalReference::s ) //required
		.def_readwrite("t", &t_road_signals_signalReference::t ) //required
		.def_readwrite("id", &t_road_signals_signalReference::id ) //required
		.def_readwrite("orientation", &t_road_signals_signalReference::orientation ) //required
		.def_readwrite("validity", &t_road_signals_signalReference::m_validitys ) //t_road_objects_object_laneValidity
   //group tag : reference g_additionalData
;
//
	py::class_<t_road, std::shared_ptr<t_road>>(m,"t_road")
		.def_readwrite("name", &t_road::name ) //optional
		.def_readwrite("length", &t_road::length ) //required
		.def_readwrite("id", &t_road::id ) //required
		.def_readwrite("junction", &t_road::junction ) //required
		.def_readwrite("rule", &t_road::rule ) //optional
		.def_readwrite("link", &t_road::m_link ) //t_road_link
		.def_readwrite("type", &t_road::m_types ) //t_road_type
		.def_readwrite("planView", &t_road::m_planView ) //t_road_planView
		.def_readwrite("elevationProfile", &t_road::m_elevationProfile ) //t_road_elevationProfile
		.def_readwrite("lateralProfile", &t_road::m_lateralProfile ) //t_road_lateralProfile
		.def_readwrite("lanes", &t_road::m_lanes ) //t_road_lanes
		.def_readwrite("objects", &t_road::m_objects ) //t_road_objects
		.def_readwrite("signals", &t_road::m_signals ) //t_road_signals
		.def_readwrite("surface", &t_road::m_surface ) //t_road_surface
		.def_readwrite("railroad", &t_road::m_railroad ) //t_road_railroad
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_elevationProfile, std::shared_ptr<t_road_elevationProfile>>(m,"t_road_elevationProfile")
		.def_readwrite("elevation", &t_road_elevationProfile::m_elevations ) //t_road_elevationProfile_elevation
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_elevationProfile_elevation, std::shared_ptr<t_road_elevationProfile_elevation>>(m,"t_road_elevationProfile_elevation")
		.def_readwrite("s", &t_road_elevationProfile_elevation::s ) //required
		.def_readwrite("a", &t_road_elevationProfile_elevation::a ) //required
		.def_readwrite("b", &t_road_elevationProfile_elevation::b ) //required
		.def_readwrite("c", &t_road_elevationProfile_elevation::c ) //required
		.def_readwrite("d", &t_road_elevationProfile_elevation::d ) //required
;
//
	py::class_<t_road_lateralProfile, std::shared_ptr<t_road_lateralProfile>>(m,"t_road_lateralProfile")
		.def_readwrite("superelevation", &t_road_lateralProfile::m_superelevations ) //t_road_lateralProfile_superelevation
		.def_readwrite("shape", &t_road_lateralProfile::m_shapes ) //t_road_lateralProfile_shape
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lateralProfile_shape, std::shared_ptr<t_road_lateralProfile_shape>>(m,"t_road_lateralProfile_shape")
		.def_readwrite("s", &t_road_lateralProfile_shape::s ) //required
		.def_readwrite("t", &t_road_lateralProfile_shape::t ) //required
		.def_readwrite("a", &t_road_lateralProfile_shape::a ) //required
		.def_readwrite("b", &t_road_lateralProfile_shape::b ) //required
		.def_readwrite("c", &t_road_lateralProfile_shape::c ) //required
		.def_readwrite("d", &t_road_lateralProfile_shape::d ) //required
;
//
	py::class_<t_road_lateralProfile_superelevation, std::shared_ptr<t_road_lateralProfile_superelevation>>(m,"t_road_lateralProfile_superelevation")
		.def_readwrite("s", &t_road_lateralProfile_superelevation::s ) //required
		.def_readwrite("a", &t_road_lateralProfile_superelevation::a ) //required
		.def_readwrite("b", &t_road_lateralProfile_superelevation::b ) //required
		.def_readwrite("c", &t_road_lateralProfile_superelevation::c ) //required
		.def_readwrite("d", &t_road_lateralProfile_superelevation::d ) //required
;
//
	py::class_<t_road_link, std::shared_ptr<t_road_link>>(m,"t_road_link")
		.def_readwrite("predecessor", &t_road_link::m_predecessor ) //t_road_link_predecessorSuccessor
		.def_readwrite("successor", &t_road_link::m_successor ) //t_road_link_predecessorSuccessor
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_link_predecessorSuccessor, std::shared_ptr<t_road_link_predecessorSuccessor>>(m,"t_road_link_predecessorSuccessor")
		.def_readwrite("elementId", &t_road_link_predecessorSuccessor::elementId ) //required
		.def_readwrite("elementType", &t_road_link_predecessorSuccessor::elementType ) //optional
		.def_readwrite("contactPoint", &t_road_link_predecessorSuccessor::contactPoint ) //optional
		.def_readwrite("elementS", &t_road_link_predecessorSuccessor::elementS ) //optional
		.def_readwrite("elementDir", &t_road_link_predecessorSuccessor::elementDir ) //optional
;
//
	py::class_<t_road_planView, std::shared_ptr<t_road_planView>>(m,"t_road_planView")
		.def_readwrite("geometry", &t_road_planView::m_geometrys ) //t_road_planView_geometry
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_planView_geometry, std::shared_ptr<t_road_planView_geometry>>(m,"t_road_planView_geometry")
		.def_readwrite("s", &t_road_planView_geometry::s ) //required
		.def_readwrite("x", &t_road_planView_geometry::x ) //required
		.def_readwrite("y", &t_road_planView_geometry::y ) //required
		.def_readwrite("hdg", &t_road_planView_geometry::hdg ) //required
		.def_readwrite("length", &t_road_planView_geometry::length ) //required
		.def_readwrite("t_road_planView_geometry", &t_road_planView_geometry::m_t_road_planView_geometry ) //
;
//
	py::class_<t_road_planView_geometry_arc, std::shared_ptr<t_road_planView_geometry_arc>>(m,"t_road_planView_geometry_arc")
		.def_readwrite("curvature", &t_road_planView_geometry_arc::curvature ) //required
;
//
	py::class_<t_road_planView_geometry_line, std::shared_ptr<t_road_planView_geometry_line>>(m,"t_road_planView_geometry_line")
;
//
	py::class_<t_road_planView_geometry_paramPoly3, std::shared_ptr<t_road_planView_geometry_paramPoly3>>(m,"t_road_planView_geometry_paramPoly3")
		.def_readwrite("aU", &t_road_planView_geometry_paramPoly3::aU ) //required
		.def_readwrite("bU", &t_road_planView_geometry_paramPoly3::bU ) //required
		.def_readwrite("cU", &t_road_planView_geometry_paramPoly3::cU ) //required
		.def_readwrite("dU", &t_road_planView_geometry_paramPoly3::dU ) //required
		.def_readwrite("aV", &t_road_planView_geometry_paramPoly3::aV ) //required
		.def_readwrite("bV", &t_road_planView_geometry_paramPoly3::bV ) //required
		.def_readwrite("cV", &t_road_planView_geometry_paramPoly3::cV ) //required
		.def_readwrite("dV", &t_road_planView_geometry_paramPoly3::dV ) //required
		.def_readwrite("pRange", &t_road_planView_geometry_paramPoly3::pRange ) //required
;
//
	py::class_<t_road_planView_geometry_poly3, std::shared_ptr<t_road_planView_geometry_poly3>>(m,"t_road_planView_geometry_poly3")
		.def_readwrite("a", &t_road_planView_geometry_poly3::a ) //required
		.def_readwrite("b", &t_road_planView_geometry_poly3::b ) //required
		.def_readwrite("c", &t_road_planView_geometry_poly3::c ) //required
		.def_readwrite("d", &t_road_planView_geometry_poly3::d ) //required
;
//
	py::class_<t_road_planView_geometry_spiral, std::shared_ptr<t_road_planView_geometry_spiral>>(m,"t_road_planView_geometry_spiral")
		.def_readwrite("curvStart", &t_road_planView_geometry_spiral::curvStart ) //required
		.def_readwrite("curvEnd", &t_road_planView_geometry_spiral::curvEnd ) //required
;
//
	py::class_<t_road_surface, std::shared_ptr<t_road_surface>>(m,"t_road_surface")
		.def_readwrite("CRG", &t_road_surface::m_CRGs ) //t_road_surface_CRG
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_surface_CRG, std::shared_ptr<t_road_surface_CRG>>(m,"t_road_surface_CRG")
		.def_readwrite("file", &t_road_surface_CRG::file ) //required
		.def_readwrite("sStart", &t_road_surface_CRG::sStart ) //required
		.def_readwrite("sEnd", &t_road_surface_CRG::sEnd ) //required
		.def_readwrite("orientation", &t_road_surface_CRG::orientation ) //required
		.def_readwrite("mode", &t_road_surface_CRG::mode ) //required
		.def_readwrite("purpose", &t_road_surface_CRG::purpose ) //optional
		.def_readwrite("sOffset", &t_road_surface_CRG::sOffset ) //optional
		.def_readwrite("tOffset", &t_road_surface_CRG::tOffset ) //optional
		.def_readwrite("zOffset", &t_road_surface_CRG::zOffset ) //optional
		.def_readwrite("zScale", &t_road_surface_CRG::zScale ) //optional
		.def_readwrite("hOffset", &t_road_surface_CRG::hOffset ) //optional
;
//
	py::class_<t_road_type, std::shared_ptr<t_road_type>>(m,"t_road_type")
		.def_readwrite("s", &t_road_type::s ) //required
		.def_readwrite("type", &t_road_type::type ) //required
	//--> ERROR <-- : if (node.attribute("country")) { country = node.attribute("country").e_countryCode; }  // TODO: >> union - handle properly
		.def_readwrite("speed", &t_road_type::m_speed ) //t_road_type_speed
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_type_speed, std::shared_ptr<t_road_type_speed>>(m,"t_road_type_speed")
	//--> ERROR <-- : if (node.attribute("max")) { max = node.attribute("max").t_maxSpeed; }  // TODO: >> union - handle properly
		.def_readwrite("unit", &t_road_type_speed::unit ) //optional
;
//
	py::class_<t_road_objects, std::shared_ptr<t_road_objects>>(m,"t_road_objects")
		.def_readwrite("object", &t_road_objects::m_objects ) //t_road_objects_object
		.def_readwrite("objectReference", &t_road_objects::m_objectReferences ) //t_road_objects_objectReference
		.def_readwrite("tunnel", &t_road_objects::m_tunnels ) //t_road_objects_tunnel
		.def_readwrite("bridge", &t_road_objects::m_bridges ) //t_road_objects_bridge
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_bridge, std::shared_ptr<t_road_objects_bridge>>(m,"t_road_objects_bridge")
		.def_readwrite("s", &t_road_objects_bridge::s ) //required
		.def_readwrite("length", &t_road_objects_bridge::length ) //required
		.def_readwrite("name", &t_road_objects_bridge::name ) //optional
		.def_readwrite("id", &t_road_objects_bridge::id ) //required
		.def_readwrite("type", &t_road_objects_bridge::type ) //required
		.def_readwrite("validity", &t_road_objects_bridge::m_validitys ) //t_road_objects_object_laneValidity
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_object, std::shared_ptr<t_road_objects_object>>(m,"t_road_objects_object")
		.def_readwrite("t", &t_road_objects_object::t ) //required
		.def_readwrite("zOffset", &t_road_objects_object::zOffset ) //required
		.def_readwrite("type", &t_road_objects_object::type ) //optional
		.def_readwrite("validLength", &t_road_objects_object::validLength ) //optional
		.def_readwrite("orientation", &t_road_objects_object::orientation ) //optional
		.def_readwrite("subtype", &t_road_objects_object::subtype ) //optional
		.def_readwrite("dynamic", &t_road_objects_object::dynamic ) //optional
		.def_readwrite("hdg", &t_road_objects_object::hdg ) //optional
		.def_readwrite("name", &t_road_objects_object::name ) //optional
		.def_readwrite("pitch", &t_road_objects_object::pitch ) //optional
		.def_readwrite("id", &t_road_objects_object::id ) //required
		.def_readwrite("roll", &t_road_objects_object::roll ) //optional
		.def_readwrite("height", &t_road_objects_object::height ) //optional
		.def_readwrite("s", &t_road_objects_object::s ) //required
		.def_readwrite("length", &t_road_objects_object::length ) //optional
		.def_readwrite("width", &t_road_objects_object::width ) //optional
		.def_readwrite("radius", &t_road_objects_object::radius ) //optional
		.def_readwrite("repeat", &t_road_objects_object::m_repeats ) //t_road_objects_object_repeat
		.def_readwrite("outline", &t_road_objects_object::m_outline ) //t_road_objects_object_outlines_outline
		.def_readwrite("outlines", &t_road_objects_object::m_outlines ) //t_road_objects_object_outlines
		.def_readwrite("material", &t_road_objects_object::m_materials ) //t_road_objects_object_material
		.def_readwrite("validity", &t_road_objects_object::m_validitys ) //t_road_objects_object_laneValidity
		.def_readwrite("parkingSpace", &t_road_objects_object::m_parkingSpace ) //t_road_objects_object_parkingSpace
		.def_readwrite("markings", &t_road_objects_object::m_markings ) //t_road_objects_object_markings
		.def_readwrite("borders", &t_road_objects_object::m_borders ) //t_road_objects_object_borders
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_object_borders, std::shared_ptr<t_road_objects_object_borders>>(m,"t_road_objects_object_borders")
		.def_readwrite("border", &t_road_objects_object_borders::m_borders ) //t_road_objects_object_borders_border
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_object_borders_border, std::shared_ptr<t_road_objects_object_borders_border>>(m,"t_road_objects_object_borders_border")
		.def_readwrite("width", &t_road_objects_object_borders_border::width ) //required
		.def_readwrite("type", &t_road_objects_object_borders_border::type ) //required
		.def_readwrite("outlineId", &t_road_objects_object_borders_border::outlineId ) //required
		.def_readwrite("useCompleteOutline", &t_road_objects_object_borders_border::useCompleteOutline ) //optional
		.def_readwrite("cornerReference", &t_road_objects_object_borders_border::m_cornerReferences ) //t_road_objects_object_markings_marking_cornerReference
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_object_markings, std::shared_ptr<t_road_objects_object_markings>>(m,"t_road_objects_object_markings")
		.def_readwrite("marking", &t_road_objects_object_markings::m_markings ) //t_road_objects_object_markings_marking
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_object_markings_marking, std::shared_ptr<t_road_objects_object_markings_marking>>(m,"t_road_objects_object_markings_marking")
		.def_readwrite("side", &t_road_objects_object_markings_marking::side ) //required
		.def_readwrite("weight", &t_road_objects_object_markings_marking::weight ) //optional
		.def_readwrite("width", &t_road_objects_object_markings_marking::width ) //optional
		.def_readwrite("color", &t_road_objects_object_markings_marking::color ) //required
		.def_readwrite("zOffset", &t_road_objects_object_markings_marking::zOffset ) //optional
		.def_readwrite("spaceLength", &t_road_objects_object_markings_marking::spaceLength ) //required
		.def_readwrite("lineLength", &t_road_objects_object_markings_marking::lineLength ) //required
		.def_readwrite("startOffset", &t_road_objects_object_markings_marking::startOffset ) //required
		.def_readwrite("stopOffset", &t_road_objects_object_markings_marking::stopOffset ) //required
		.def_readwrite("cornerReference", &t_road_objects_object_markings_marking::m_cornerReferences ) //t_road_objects_object_markings_marking_cornerReference
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_object_markings_marking_cornerReference, std::shared_ptr<t_road_objects_object_markings_marking_cornerReference>>(m,"t_road_objects_object_markings_marking_cornerReference")
		.def_readwrite("id", &t_road_objects_object_markings_marking_cornerReference::id ) //required
;
//
	py::class_<t_road_objects_object_material, std::shared_ptr<t_road_objects_object_material>>(m,"t_road_objects_object_material")
		.def_readwrite("surface", &t_road_objects_object_material::surface ) //optional
		.def_readwrite("friction", &t_road_objects_object_material::friction ) //optional
		.def_readwrite("roughness", &t_road_objects_object_material::roughness ) //optional
;
//
	py::class_<t_road_objects_object_outlines, std::shared_ptr<t_road_objects_object_outlines>>(m,"t_road_objects_object_outlines")
		.def_readwrite("outline", &t_road_objects_object_outlines::m_outlines ) //t_road_objects_object_outlines_outline
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_object_outlines_outline, std::shared_ptr<t_road_objects_object_outlines_outline>>(m,"t_road_objects_object_outlines_outline")
		.def_readwrite("id", &t_road_objects_object_outlines_outline::id ) //optional
		.def_readwrite("fillType", &t_road_objects_object_outlines_outline::fillType ) //optional
		.def_readwrite("outer", &t_road_objects_object_outlines_outline::outer ) //optional
		.def_readwrite("closed", &t_road_objects_object_outlines_outline::closed ) //optional
		.def_readwrite("laneType", &t_road_objects_object_outlines_outline::laneType ) //optional
   //group tag : reference g_additionalData
		.def_readwrite("t_road_objects_object_outlines_outline", &t_road_objects_object_outlines_outline::m_t_road_objects_object_outlines_outline ) //
;
//
	py::class_<t_road_objects_object_outlines_outline_cornerLocal, std::shared_ptr<t_road_objects_object_outlines_outline_cornerLocal>>(m,"t_road_objects_object_outlines_outline_cornerLocal")
		.def_readwrite("u", &t_road_objects_object_outlines_outline_cornerLocal::u ) //required
		.def_readwrite("v", &t_road_objects_object_outlines_outline_cornerLocal::v ) //required
		.def_readwrite("z", &t_road_objects_object_outlines_outline_cornerLocal::z ) //required
		.def_readwrite("height", &t_road_objects_object_outlines_outline_cornerLocal::height ) //required
		.def_readwrite("id", &t_road_objects_object_outlines_outline_cornerLocal::id ) //optional
;
//
	py::class_<t_road_objects_object_outlines_outline_cornerRoad, std::shared_ptr<t_road_objects_object_outlines_outline_cornerRoad>>(m,"t_road_objects_object_outlines_outline_cornerRoad")
		.def_readwrite("s", &t_road_objects_object_outlines_outline_cornerRoad::s ) //required
		.def_readwrite("t", &t_road_objects_object_outlines_outline_cornerRoad::t ) //required
		.def_readwrite("dz", &t_road_objects_object_outlines_outline_cornerRoad::dz ) //required
		.def_readwrite("height", &t_road_objects_object_outlines_outline_cornerRoad::height ) //required
		.def_readwrite("id", &t_road_objects_object_outlines_outline_cornerRoad::id ) //optional
;
//
	py::class_<t_road_objects_object_parkingSpace, std::shared_ptr<t_road_objects_object_parkingSpace>>(m,"t_road_objects_object_parkingSpace")
		.def_readwrite("access", &t_road_objects_object_parkingSpace::access ) //required
		.def_readwrite("restrictions", &t_road_objects_object_parkingSpace::restrictions ) //optional
;
//
	py::class_<t_road_objects_object_repeat, std::shared_ptr<t_road_objects_object_repeat>>(m,"t_road_objects_object_repeat")
		.def_readwrite("s", &t_road_objects_object_repeat::s ) //required
		.def_readwrite("length", &t_road_objects_object_repeat::length ) //required
		.def_readwrite("distance", &t_road_objects_object_repeat::distance ) //required
		.def_readwrite("tStart", &t_road_objects_object_repeat::tStart ) //required
		.def_readwrite("tEnd", &t_road_objects_object_repeat::tEnd ) //required
		.def_readwrite("heightStart", &t_road_objects_object_repeat::heightStart ) //required
		.def_readwrite("heightEnd", &t_road_objects_object_repeat::heightEnd ) //required
		.def_readwrite("zOffsetStart", &t_road_objects_object_repeat::zOffsetStart ) //required
		.def_readwrite("zOffsetEnd", &t_road_objects_object_repeat::zOffsetEnd ) //required
		.def_readwrite("widthStart", &t_road_objects_object_repeat::widthStart ) //optional
		.def_readwrite("widthEnd", &t_road_objects_object_repeat::widthEnd ) //optional
		.def_readwrite("lengthStart", &t_road_objects_object_repeat::lengthStart ) //optional
		.def_readwrite("lengthEnd", &t_road_objects_object_repeat::lengthEnd ) //optional
		.def_readwrite("radiusStart", &t_road_objects_object_repeat::radiusStart ) //optional
		.def_readwrite("radiusEnd", &t_road_objects_object_repeat::radiusEnd ) //optional
;
//
	py::class_<t_road_objects_objectReference, std::shared_ptr<t_road_objects_objectReference>>(m,"t_road_objects_objectReference")
		.def_readwrite("s", &t_road_objects_objectReference::s ) //required
		.def_readwrite("t", &t_road_objects_objectReference::t ) //required
		.def_readwrite("id", &t_road_objects_objectReference::id ) //required
		.def_readwrite("zOffset", &t_road_objects_objectReference::zOffset ) //optional
		.def_readwrite("validLength", &t_road_objects_objectReference::validLength ) //optional
		.def_readwrite("orientation", &t_road_objects_objectReference::orientation ) //required
		.def_readwrite("validity", &t_road_objects_objectReference::m_validitys ) //t_road_objects_object_laneValidity
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_objects_tunnel, std::shared_ptr<t_road_objects_tunnel>>(m,"t_road_objects_tunnel")
		.def_readwrite("s", &t_road_objects_tunnel::s ) //required
		.def_readwrite("length", &t_road_objects_tunnel::length ) //required
		.def_readwrite("name", &t_road_objects_tunnel::name ) //optional
		.def_readwrite("id", &t_road_objects_tunnel::id ) //required
		.def_readwrite("type", &t_road_objects_tunnel::type ) //required
		.def_readwrite("lighting", &t_road_objects_tunnel::lighting ) //optional
		.def_readwrite("daylight", &t_road_objects_tunnel::daylight ) //optional
		.def_readwrite("validity", &t_road_objects_tunnel::m_validitys ) //t_road_objects_object_laneValidity
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes, std::shared_ptr<t_road_lanes>>(m,"t_road_lanes")
		.def_readwrite("laneOffset", &t_road_lanes::m_laneOffsets ) //t_road_lanes_laneOffset
		.def_readwrite("laneSection", &t_road_lanes::m_laneSections ) //t_road_lanes_laneSection
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneOffset, std::shared_ptr<t_road_lanes_laneOffset>>(m,"t_road_lanes_laneOffset")
		.def_readwrite("s", &t_road_lanes_laneOffset::s ) //required
		.def_readwrite("a", &t_road_lanes_laneOffset::a ) //required
		.def_readwrite("b", &t_road_lanes_laneOffset::b ) //required
		.def_readwrite("c", &t_road_lanes_laneOffset::c ) //required
		.def_readwrite("d", &t_road_lanes_laneOffset::d ) //required
;
//
	py::class_<t_road_lanes_laneSection, std::shared_ptr<t_road_lanes_laneSection>>(m,"t_road_lanes_laneSection")
		.def_readwrite("s", &t_road_lanes_laneSection::s ) //required
		.def_readwrite("singleSide", &t_road_lanes_laneSection::singleSide ) //optional
		.def_readwrite("left", &t_road_lanes_laneSection::m_left ) //t_road_lanes_laneSection_left
		.def_readwrite("center", &t_road_lanes_laneSection::m_center ) //t_road_lanes_laneSection_center
		.def_readwrite("right", &t_road_lanes_laneSection::m_right ) //t_road_lanes_laneSection_right
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneSection_center, std::shared_ptr<t_road_lanes_laneSection_center>>(m,"t_road_lanes_laneSection_center")
		.def_readwrite("lane", &t_road_lanes_laneSection_center::m_lanes ) //t_road_lanes_laneSection_center_lane
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneSection_lr_lane, std::shared_ptr<t_road_lanes_laneSection_lr_lane>>(m,"t_road_lanes_laneSection_lr_lane")
		.def_readwrite("type", &t_road_lanes_laneSection_lr_lane::type ) //required
		.def_readwrite("level", &t_road_lanes_laneSection_lr_lane::level ) //optional
		.def_readwrite("link", &t_road_lanes_laneSection_lr_lane::m_link ) //t_road_lanes_laneSection_lcr_lane_link
		.def_readwrite("roadMark", &t_road_lanes_laneSection_lr_lane::m_roadMarks ) //t_road_lanes_laneSection_lcr_lane_roadMark
		.def_readwrite("material", &t_road_lanes_laneSection_lr_lane::m_materials ) //t_road_lanes_laneSection_lr_lane_material
		.def_readwrite("speed", &t_road_lanes_laneSection_lr_lane::m_speeds ) //t_road_lanes_laneSection_lr_lane_speed
		.def_readwrite("access", &t_road_lanes_laneSection_lr_lane::m_accesss ) //t_road_lanes_laneSection_lr_lane_access
		.def_readwrite("height", &t_road_lanes_laneSection_lr_lane::m_heights ) //t_road_lanes_laneSection_lr_lane_height
		.def_readwrite("rule", &t_road_lanes_laneSection_lr_lane::m_rules ) //t_road_lanes_laneSection_lr_lane_rule
   //group tag : reference g_additionalData
		.def_readwrite("t_road_lanes_laneSection_lr_lane", &t_road_lanes_laneSection_lr_lane::m_t_road_lanes_laneSection_lr_lanes ) //
;
//
	py::class_<t_road_lanes_laneSection_center_lane, std::shared_ptr<t_road_lanes_laneSection_center_lane>>(m,"t_road_lanes_laneSection_center_lane")
		.def_readonly("id",&t_road_lanes_laneSection_center_lane::id)
;
//
	py::class_<t_road_lanes_laneSection_lcr_lane_link, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link>>(m,"t_road_lanes_laneSection_lcr_lane_link")
		.def_readwrite("predecessor", &t_road_lanes_laneSection_lcr_lane_link::m_predecessors ) //t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor
		.def_readwrite("successor", &t_road_lanes_laneSection_lcr_lane_link::m_successors ) //t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>>(m,"t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor")
		.def_readwrite("id", &t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor::id ) //required
;
//
	py::class_<t_road_lanes_laneSection_lcr_lane_roadMark, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark")
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark::sOffset ) //required
		.def_readwrite("type", &t_road_lanes_laneSection_lcr_lane_roadMark::type ) //required
		.def_readwrite("weight", &t_road_lanes_laneSection_lcr_lane_roadMark::weight ) //optional
		.def_readwrite("color", &t_road_lanes_laneSection_lcr_lane_roadMark::color ) //required
		.def_readwrite("material", &t_road_lanes_laneSection_lcr_lane_roadMark::material ) //optional
		.def_readwrite("width", &t_road_lanes_laneSection_lcr_lane_roadMark::width ) //optional
		.def_readwrite("laneChange", &t_road_lanes_laneSection_lcr_lane_roadMark::laneChange ) //optional
		.def_readwrite("height", &t_road_lanes_laneSection_lcr_lane_roadMark::height ) //optional
		.def_readwrite("sway", &t_road_lanes_laneSection_lcr_lane_roadMark::m_sways ) //t_road_lanes_laneSection_lcr_lane_roadMark_sway
		.def_readwrite("type", &t_road_lanes_laneSection_lcr_lane_roadMark::m_type ) //t_road_lanes_laneSection_lcr_lane_roadMark_type
		.def_readwrite("explicit", &t_road_lanes_laneSection_lcr_lane_roadMark::m_explicit ) //t_road_lanes_laneSection_lcr_lane_roadMark_explicit
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_explicit, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_explicit")
		.def_readwrite("line", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit::m_lines ) //t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line")
		.def_readwrite("length", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::length ) //required
		.def_readwrite("tOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::tOffset ) //required
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::sOffset ) //required
		.def_readwrite("rule", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::rule ) //optional
		.def_readwrite("width", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::width ) //optional
;
//
	py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_sway, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_sway>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_sway")
		.def_readwrite("ds", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::ds ) //required
		.def_readwrite("a", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::a ) //required
		.def_readwrite("b", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::b ) //required
		.def_readwrite("c", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::c ) //required
		.def_readwrite("d", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::d ) //required
;
//
	py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_type, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_type")
		.def_readwrite("name", &t_road_lanes_laneSection_lcr_lane_roadMark_type::name ) //required
		.def_readwrite("width", &t_road_lanes_laneSection_lcr_lane_roadMark_type::width ) //required
		.def_readwrite("line", &t_road_lanes_laneSection_lcr_lane_roadMark_type::m_lines ) //t_road_lanes_laneSection_lcr_lane_roadMark_type_line
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_type_line, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_type_line")
		.def_readwrite("length", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::length ) //required
		.def_readwrite("space", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::space ) //required
		.def_readwrite("tOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::tOffset ) //required
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::sOffset ) //required
		.def_readwrite("rule", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::rule ) //optional
		.def_readwrite("width", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::width ) //optional
		.def_readwrite("color", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::color ) //optional
;
//
	py::class_<t_road_lanes_laneSection_left, std::shared_ptr<t_road_lanes_laneSection_left>>(m,"t_road_lanes_laneSection_left")
		.def_readwrite("lane", &t_road_lanes_laneSection_left::m_lanes ) //t_road_lanes_laneSection_left_lane
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneSection_left_lane, std::shared_ptr<t_road_lanes_laneSection_left_lane>>(m,"t_road_lanes_laneSection_left_lane")
		.def_readwrite("id", &t_road_lanes_laneSection_left_lane::id ) //required
;
//
	py::class_<t_road_lanes_laneSection_lr_lane_access, std::shared_ptr<t_road_lanes_laneSection_lr_lane_access>>(m,"t_road_lanes_laneSection_lr_lane_access")
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_access::sOffset ) //required
		.def_readwrite("rule", &t_road_lanes_laneSection_lr_lane_access::rule ) //optional
		.def_readwrite("restriction", &t_road_lanes_laneSection_lr_lane_access::restriction ) //required
;
//
	py::class_<t_road_lanes_laneSection_lr_lane_border, std::shared_ptr<t_road_lanes_laneSection_lr_lane_border>>(m,"t_road_lanes_laneSection_lr_lane_border")
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_border::sOffset ) //required
		.def_readwrite("a", &t_road_lanes_laneSection_lr_lane_border::a ) //required
		.def_readwrite("b", &t_road_lanes_laneSection_lr_lane_border::b ) //required
		.def_readwrite("c", &t_road_lanes_laneSection_lr_lane_border::c ) //required
		.def_readwrite("d", &t_road_lanes_laneSection_lr_lane_border::d ) //required
;
//
	py::class_<t_road_lanes_laneSection_lr_lane_height, std::shared_ptr<t_road_lanes_laneSection_lr_lane_height>>(m,"t_road_lanes_laneSection_lr_lane_height")
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_height::sOffset ) //required
		.def_readwrite("inner", &t_road_lanes_laneSection_lr_lane_height::inner ) //required
		.def_readwrite("outer", &t_road_lanes_laneSection_lr_lane_height::outer ) //required
;
//
	py::class_<t_road_lanes_laneSection_lr_lane_material, std::shared_ptr<t_road_lanes_laneSection_lr_lane_material>>(m,"t_road_lanes_laneSection_lr_lane_material")
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_material::sOffset ) //required
		.def_readwrite("surface", &t_road_lanes_laneSection_lr_lane_material::surface ) //optional
		.def_readwrite("friction", &t_road_lanes_laneSection_lr_lane_material::friction ) //required
		.def_readwrite("roughness", &t_road_lanes_laneSection_lr_lane_material::roughness ) //optional
;
//
	py::class_<t_road_lanes_laneSection_lr_lane_rule, std::shared_ptr<t_road_lanes_laneSection_lr_lane_rule>>(m,"t_road_lanes_laneSection_lr_lane_rule")
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_rule::sOffset ) //required
		.def_readwrite("value", &t_road_lanes_laneSection_lr_lane_rule::value ) //required
;
//
	py::class_<t_road_lanes_laneSection_lr_lane_speed, std::shared_ptr<t_road_lanes_laneSection_lr_lane_speed>>(m,"t_road_lanes_laneSection_lr_lane_speed")
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_speed::sOffset ) //required
		.def_readwrite("max", &t_road_lanes_laneSection_lr_lane_speed::max ) //required
		.def_readwrite("unit", &t_road_lanes_laneSection_lr_lane_speed::unit ) //optional
;
//
	py::class_<t_road_lanes_laneSection_lr_lane_width, std::shared_ptr<t_road_lanes_laneSection_lr_lane_width>>(m,"t_road_lanes_laneSection_lr_lane_width")
		.def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_width::sOffset ) //required
		.def_readwrite("a", &t_road_lanes_laneSection_lr_lane_width::a ) //required
		.def_readwrite("b", &t_road_lanes_laneSection_lr_lane_width::b ) //required
		.def_readwrite("c", &t_road_lanes_laneSection_lr_lane_width::c ) //required
		.def_readwrite("d", &t_road_lanes_laneSection_lr_lane_width::d ) //required
;
//
	py::class_<t_road_lanes_laneSection_right, std::shared_ptr<t_road_lanes_laneSection_right>>(m,"t_road_lanes_laneSection_right")
		.def_readwrite("lane", &t_road_lanes_laneSection_right::m_lanes ) //t_road_lanes_laneSection_right_lane
   //group tag : reference g_additionalData
;
//
	py::class_<t_road_lanes_laneSection_right_lane, std::shared_ptr<t_road_lanes_laneSection_right_lane>>(m,"t_road_lanes_laneSection_right_lane")
		.def_readwrite("id", &t_road_lanes_laneSection_right_lane::id ) //required
;
//
	py::class_<t_road_objects_object_laneValidity, std::shared_ptr<t_road_objects_object_laneValidity>>(m,"t_road_objects_object_laneValidity")
		.def_readwrite("fromLane", &t_road_objects_object_laneValidity::fromLane ) //required
		.def_readwrite("toLane", &t_road_objects_object_laneValidity::toLane ) //required
;
//
	py::enum_<e_dataQuality_RawData_PostProcessing>(m,"e_dataQuality_RawData_PostProcessing", py::arithmetic())
		.value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::RAW).c_str(),e_dataQuality_RawData_PostProcessing::RAW)            //raw
		.value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::CLEANED).c_str(),e_dataQuality_RawData_PostProcessing::CLEANED)            //cleaned
		.value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::PROCESSED).c_str(),e_dataQuality_RawData_PostProcessing::PROCESSED)            //processed
		.value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::FUSED).c_str(),e_dataQuality_RawData_PostProcessing::FUSED);            //fused
	;
	py::enum_<e_dataQuality_RawData_Source>(m,"e_dataQuality_RawData_Source", py::arithmetic())
		.value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::SENSOR).c_str(),e_dataQuality_RawData_Source::SENSOR)            //sensor
		.value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::CADASTER).c_str(),e_dataQuality_RawData_Source::CADASTER)            //cadaster
		.value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::CUSTOM).c_str(),e_dataQuality_RawData_Source::CUSTOM);            //custom
	;
	py::enum_<e_unitDistance>(m,"e_unitDistance", py::arithmetic())
		.value(enum2str<e_unitDistance>(e_unitDistance::M).c_str(),e_unitDistance::M)            //m
		.value(enum2str<e_unitDistance>(e_unitDistance::KM).c_str(),e_unitDistance::KM)            //km
		.value(enum2str<e_unitDistance>(e_unitDistance::FT).c_str(),e_unitDistance::FT)            //ft
		.value(enum2str<e_unitDistance>(e_unitDistance::MILE).c_str(),e_unitDistance::MILE);            //mile
	;
	py::enum_<e_unitMass>(m,"e_unitMass", py::arithmetic())
		.value(enum2str<e_unitMass>(e_unitMass::KG).c_str(),e_unitMass::KG)            //kg
		.value(enum2str<e_unitMass>(e_unitMass::T).c_str(),e_unitMass::T);            //t
	;
	py::enum_<e_unitSlope>(m,"e_unitSlope", py::arithmetic())
		.value(enum2str<e_unitSlope>(e_unitSlope::PERCENT).c_str(),e_unitSlope::PERCENT);            //%
	;
	py::enum_<e_unitSpeed>(m,"e_unitSpeed", py::arithmetic())
		.value(enum2str<e_unitSpeed>(e_unitSpeed::M_S).c_str(),e_unitSpeed::M_S)            //m/s
		.value(enum2str<e_unitSpeed>(e_unitSpeed::MPH).c_str(),e_unitSpeed::MPH)            //mph
		.value(enum2str<e_unitSpeed>(e_unitSpeed::KM_H).c_str(),e_unitSpeed::KM_H);            //km/h
	;
	py::enum_<t_yesNo>(m,"t_yesNo", py::arithmetic())
		.value(enum2str<t_yesNo>(t_yesNo::YES).c_str(),t_yesNo::YES)            //yes
		.value(enum2str<t_yesNo>(t_yesNo::NO).c_str(),t_yesNo::NO);            //no
	;
	py::enum_<e_road_railroad_switch_position>(m,"e_road_railroad_switch_position", py::arithmetic())
		.value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::DYNAMIC).c_str(),e_road_railroad_switch_position::DYNAMIC)            //dynamic
		.value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::STRAIGHT).c_str(),e_road_railroad_switch_position::STRAIGHT)            //straight
		.value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::TURN).c_str(),e_road_railroad_switch_position::TURN);            //turn
	;
	py::enum_<e_station_platform_segment_side>(m,"e_station_platform_segment_side", py::arithmetic())
		.value(enum2str<e_station_platform_segment_side>(e_station_platform_segment_side::LEFT).c_str(),e_station_platform_segment_side::LEFT)            //left
		.value(enum2str<e_station_platform_segment_side>(e_station_platform_segment_side::RIGHT).c_str(),e_station_platform_segment_side::RIGHT);            //right
	;
	py::enum_<e_station_type>(m,"e_station_type", py::arithmetic())
		.value(enum2str<e_station_type>(e_station_type::SMALL).c_str(),e_station_type::SMALL)            //small
		.value(enum2str<e_station_type>(e_station_type::MEDIUM).c_str(),e_station_type::MEDIUM)            //medium
		.value(enum2str<e_station_type>(e_station_type::LARGE).c_str(),e_station_type::LARGE);            //large
	;
	py::enum_<e_contactPoint>(m,"e_contactPoint", py::arithmetic())
		.value(enum2str<e_contactPoint>(e_contactPoint::START).c_str(),e_contactPoint::START)            //start
		.value(enum2str<e_contactPoint>(e_contactPoint::END).c_str(),e_contactPoint::END);            //end
	;
	py::enum_<e_elementDir>(m,"e_elementDir", py::arithmetic())
		.value(enum2str<e_elementDir>(e_elementDir::PLUS).c_str(),e_elementDir::PLUS)            //+
		.value(enum2str<e_elementDir>(e_elementDir::MINUS).c_str(),e_elementDir::MINUS);            //-
	;
	py::enum_<e_junction_type>(m,"e_junction_type", py::arithmetic())
		.value(enum2str<e_junction_type>(e_junction_type::DEFAULT).c_str(),e_junction_type::DEFAULT)            //default
		.value(enum2str<e_junction_type>(e_junction_type::VIRTUAL).c_str(),e_junction_type::VIRTUAL);            //virtual
	;
	py::enum_<e_junctionGroup_type>(m,"e_junctionGroup_type", py::arithmetic())
		.value(enum2str<e_junctionGroup_type>(e_junctionGroup_type::ROUNDABOUT).c_str(),e_junctionGroup_type::ROUNDABOUT)            //roundabout
		.value(enum2str<e_junctionGroup_type>(e_junctionGroup_type::UNKNOWN).c_str(),e_junctionGroup_type::UNKNOWN);            //unknown
	;
	py::enum_<e_road_surface_CRG_mode>(m,"e_road_surface_CRG_mode", py::arithmetic())
		.value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::ATTACHED).c_str(),e_road_surface_CRG_mode::ATTACHED)            //attached
		.value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::ATTACHED0).c_str(),e_road_surface_CRG_mode::ATTACHED0)            //attached0
		.value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::GENUINE).c_str(),e_road_surface_CRG_mode::GENUINE)            //genuine
		.value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::GLOBAL).c_str(),e_road_surface_CRG_mode::GLOBAL);            //global
	;
	py::enum_<e_road_surface_CRG_purpose>(m,"e_road_surface_CRG_purpose", py::arithmetic())
		.value(enum2str<e_road_surface_CRG_purpose>(e_road_surface_CRG_purpose::ELEVATION).c_str(),e_road_surface_CRG_purpose::ELEVATION)            //elevation
		.value(enum2str<e_road_surface_CRG_purpose>(e_road_surface_CRG_purpose::FRICTION).c_str(),e_road_surface_CRG_purpose::FRICTION);            //friction
	;
	py::enum_<e_road_signals_signal_reference_elementType>(m,"e_road_signals_signal_reference_elementType", py::arithmetic())
		.value(enum2str<e_road_signals_signal_reference_elementType>(e_road_signals_signal_reference_elementType::OBJECT).c_str(),e_road_signals_signal_reference_elementType::OBJECT)            //object
		.value(enum2str<e_road_signals_signal_reference_elementType>(e_road_signals_signal_reference_elementType::SIGNAL).c_str(),e_road_signals_signal_reference_elementType::SIGNAL);            //signal
	;
	py::enum_<e_countryCode_deprecated>(m,"e_countryCode_deprecated", py::arithmetic())
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
	py::enum_<e_direction>(m,"e_direction", py::arithmetic())
		.value(enum2str<e_direction>(e_direction::SAME).c_str(),e_direction::SAME)            //same
		.value(enum2str<e_direction>(e_direction::OPPOSITE).c_str(),e_direction::OPPOSITE);            //opposite
	;
	py::enum_<e_maxSpeedString>(m,"e_maxSpeedString", py::arithmetic())
		.value(enum2str<e_maxSpeedString>(e_maxSpeedString::NO_LIMIT).c_str(),e_maxSpeedString::NO_LIMIT)            //no limit
		.value(enum2str<e_maxSpeedString>(e_maxSpeedString::UNDEFINED).c_str(),e_maxSpeedString::UNDEFINED);            //undefined
	;
	py::enum_<e_paramPoly3_pRange>(m,"e_paramPoly3_pRange", py::arithmetic())
		.value(enum2str<e_paramPoly3_pRange>(e_paramPoly3_pRange::ARCLENGTH).c_str(),e_paramPoly3_pRange::ARCLENGTH)            //arcLength
		.value(enum2str<e_paramPoly3_pRange>(e_paramPoly3_pRange::NORMALIZED).c_str(),e_paramPoly3_pRange::NORMALIZED);            //normalized
	;
	py::enum_<e_road_link_elementType>(m,"e_road_link_elementType", py::arithmetic())
		.value(enum2str<e_road_link_elementType>(e_road_link_elementType::ROAD).c_str(),e_road_link_elementType::ROAD)            //road
		.value(enum2str<e_road_link_elementType>(e_road_link_elementType::JUNCTION).c_str(),e_road_link_elementType::JUNCTION);            //junction
	;
	py::enum_<e_roadType>(m,"e_roadType", py::arithmetic())
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
	py::enum_<e_trafficRule>(m,"e_trafficRule", py::arithmetic())
		.value(enum2str<e_trafficRule>(e_trafficRule::RHT).c_str(),e_trafficRule::RHT)            //RHT
		.value(enum2str<e_trafficRule>(e_trafficRule::LHT).c_str(),e_trafficRule::LHT);            //LHT
	;
	py::enum_<e_borderType>(m,"e_borderType", py::arithmetic())
		.value(enum2str<e_borderType>(e_borderType::CONCRETE).c_str(),e_borderType::CONCRETE)            //concrete
		.value(enum2str<e_borderType>(e_borderType::CURB).c_str(),e_borderType::CURB);            //curb
	;
	py::enum_<e_bridgeType>(m,"e_bridgeType", py::arithmetic())
		.value(enum2str<e_bridgeType>(e_bridgeType::CONCRETE).c_str(),e_bridgeType::CONCRETE)            //concrete
		.value(enum2str<e_bridgeType>(e_bridgeType::STEEL).c_str(),e_bridgeType::STEEL)            //steel
		.value(enum2str<e_bridgeType>(e_bridgeType::BRICK).c_str(),e_bridgeType::BRICK)            //brick
		.value(enum2str<e_bridgeType>(e_bridgeType::WOOD).c_str(),e_bridgeType::WOOD);            //wood
	;
	py::enum_<e_objectType>(m,"e_objectType", py::arithmetic())
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
	py::enum_<e_orientation>(m,"e_orientation", py::arithmetic())
		.value(enum2str<e_orientation>(e_orientation::PLUS).c_str(),e_orientation::PLUS)            //+
		.value(enum2str<e_orientation>(e_orientation::MINUS).c_str(),e_orientation::MINUS)            //-
		.value(enum2str<e_orientation>(e_orientation::NONE).c_str(),e_orientation::NONE);            //none
	;
	py::enum_<e_outlineFillType>(m,"e_outlineFillType", py::arithmetic())
		.value(enum2str<e_outlineFillType>(e_outlineFillType::GRASS).c_str(),e_outlineFillType::GRASS)            //grass
		.value(enum2str<e_outlineFillType>(e_outlineFillType::CONCRETE).c_str(),e_outlineFillType::CONCRETE)            //concrete
		.value(enum2str<e_outlineFillType>(e_outlineFillType::COBBLE).c_str(),e_outlineFillType::COBBLE)            //cobble
		.value(enum2str<e_outlineFillType>(e_outlineFillType::ASPHALT).c_str(),e_outlineFillType::ASPHALT)            //asphalt
		.value(enum2str<e_outlineFillType>(e_outlineFillType::PAVEMENT).c_str(),e_outlineFillType::PAVEMENT)            //pavement
		.value(enum2str<e_outlineFillType>(e_outlineFillType::GRAVEL).c_str(),e_outlineFillType::GRAVEL)            //gravel
		.value(enum2str<e_outlineFillType>(e_outlineFillType::SOIL).c_str(),e_outlineFillType::SOIL);            //soil
	;
	py::enum_<e_road_objects_object_parkingSpace_access>(m,"e_road_objects_object_parkingSpace_access", py::arithmetic())
		.value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::ALL).c_str(),e_road_objects_object_parkingSpace_access::ALL)            //all
		.value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::CAR).c_str(),e_road_objects_object_parkingSpace_access::CAR)            //car
		.value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::WOMEN).c_str(),e_road_objects_object_parkingSpace_access::WOMEN)            //women
		.value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::HANDICAPPED).c_str(),e_road_objects_object_parkingSpace_access::HANDICAPPED)            //handicapped
		.value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::BUS).c_str(),e_road_objects_object_parkingSpace_access::BUS)            //bus
		.value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::TRUCK).c_str(),e_road_objects_object_parkingSpace_access::TRUCK)            //truck
		.value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::ELECTRIC).c_str(),e_road_objects_object_parkingSpace_access::ELECTRIC)            //electric
		.value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::RESIDENTS).c_str(),e_road_objects_object_parkingSpace_access::RESIDENTS);            //residents
	;
	py::enum_<e_sideType>(m,"e_sideType", py::arithmetic())
		.value(enum2str<e_sideType>(e_sideType::LEFT).c_str(),e_sideType::LEFT)            //left
		.value(enum2str<e_sideType>(e_sideType::RIGHT).c_str(),e_sideType::RIGHT)            //right
		.value(enum2str<e_sideType>(e_sideType::FRONT).c_str(),e_sideType::FRONT)            //front
		.value(enum2str<e_sideType>(e_sideType::REAR).c_str(),e_sideType::REAR);            //rear
	;
	py::enum_<e_tunnelType>(m,"e_tunnelType", py::arithmetic())
		.value(enum2str<e_tunnelType>(e_tunnelType::STANDARD).c_str(),e_tunnelType::STANDARD)            //standard
		.value(enum2str<e_tunnelType>(e_tunnelType::UNDERPASS).c_str(),e_tunnelType::UNDERPASS);            //underpass
	;
	py::enum_<e_accessRestrictionType>(m,"e_accessRestrictionType", py::arithmetic())
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
	py::enum_<e_laneType>(m,"e_laneType", py::arithmetic())
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
	py::enum_<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(m,"e_road_lanes_laneSection_lcr_lane_roadMark_laneChange", py::arithmetic())
		.value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::INCREASE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::INCREASE)            //increase
		.value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::DECREASE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::DECREASE)            //decrease
		.value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::BOTH).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::BOTH)            //both
		.value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::NONE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::NONE);            //none
	;
	py::enum_<e_road_lanes_laneSection_lr_lane_access_rule>(m,"e_road_lanes_laneSection_lr_lane_access_rule", py::arithmetic())
		.value(enum2str<e_road_lanes_laneSection_lr_lane_access_rule>(e_road_lanes_laneSection_lr_lane_access_rule::ALLOW).c_str(),e_road_lanes_laneSection_lr_lane_access_rule::ALLOW)            //allow
		.value(enum2str<e_road_lanes_laneSection_lr_lane_access_rule>(e_road_lanes_laneSection_lr_lane_access_rule::DENY).c_str(),e_road_lanes_laneSection_lr_lane_access_rule::DENY);            //deny
	;
	py::enum_<e_roadMarkColor>(m,"e_roadMarkColor", py::arithmetic())
		.value(enum2str<e_roadMarkColor>(e_roadMarkColor::STANDARD).c_str(),e_roadMarkColor::STANDARD)            //standard
		.value(enum2str<e_roadMarkColor>(e_roadMarkColor::BLUE).c_str(),e_roadMarkColor::BLUE)            //blue
		.value(enum2str<e_roadMarkColor>(e_roadMarkColor::GREEN).c_str(),e_roadMarkColor::GREEN)            //green
		.value(enum2str<e_roadMarkColor>(e_roadMarkColor::RED).c_str(),e_roadMarkColor::RED)            //red
		.value(enum2str<e_roadMarkColor>(e_roadMarkColor::WHITE).c_str(),e_roadMarkColor::WHITE)            //white
		.value(enum2str<e_roadMarkColor>(e_roadMarkColor::YELLOW).c_str(),e_roadMarkColor::YELLOW)            //yellow
		.value(enum2str<e_roadMarkColor>(e_roadMarkColor::ORANGE).c_str(),e_roadMarkColor::ORANGE);            //orange
	;
	py::enum_<e_roadMarkRule>(m,"e_roadMarkRule", py::arithmetic())
		.value(enum2str<e_roadMarkRule>(e_roadMarkRule::NO_PASSING).c_str(),e_roadMarkRule::NO_PASSING)            //no passing
		.value(enum2str<e_roadMarkRule>(e_roadMarkRule::CAUTION).c_str(),e_roadMarkRule::CAUTION)            //caution
		.value(enum2str<e_roadMarkRule>(e_roadMarkRule::NONE).c_str(),e_roadMarkRule::NONE);            //none
	;
	py::enum_<e_roadMarkType>(m,"e_roadMarkType", py::arithmetic())
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
	py::enum_<e_roadMarkWeight>(m,"e_roadMarkWeight", py::arithmetic())
		.value(enum2str<e_roadMarkWeight>(e_roadMarkWeight::STANDARD).c_str(),e_roadMarkWeight::STANDARD)            //standard
		.value(enum2str<e_roadMarkWeight>(e_roadMarkWeight::BOLD).c_str(),e_roadMarkWeight::BOLD);            //bold
	;
	py::enum_<t_bool>(m,"t_bool", py::arithmetic())
		.value(enum2str<t_bool>(t_bool::TRUE).c_str(),t_bool::TRUE)            //true
		.value(enum2str<t_bool>(t_bool::FALSE).c_str(),t_bool::FALSE);            //false
	;
	py::class_<e_unit, std::shared_ptr<e_unit>>(m,"e_unit") // union definition
		.def_readwrite("unitDistance",&e_unit::unitDistance)
		.def_readwrite("unitSpeed",&e_unit::unitSpeed)
		.def_readwrite("unitMass",&e_unit::unitMass)
		.def_readwrite("unitSlope",&e_unit::unitSlope)
	;
	py::class_<e_countryCode, std::shared_ptr<e_countryCode>>(m,"e_countryCode") // union definition
		.def_readwrite("countryCode_iso3166alpha2",&e_countryCode::countryCode_iso3166alpha2)
		.def_readwrite("countryCode_iso3166alpha3_deprecated",&e_countryCode::countryCode_iso3166alpha3_deprecated)
		.def_readwrite("countryCode_deprecated",&e_countryCode::countryCode_deprecated)
	;
	py::class_<t_maxSpeed, std::shared_ptr<t_maxSpeed>>(m,"t_maxSpeed") // union definition
		.def_readwrite("grEqZero",&t_maxSpeed::grEqZero)
		.def_readwrite("maxSpeedString",&t_maxSpeed::maxSpeedString)
	;
//
	py::class_<OpenDRIVE, std::shared_ptr<OpenDRIVE>>(m,"OpenDRIVE")
		.def_readwrite("header", &OpenDRIVE::m_header ) //t_header
		.def_readwrite("road", &OpenDRIVE::m_roads ) //t_road
		.def_readwrite("controller", &OpenDRIVE::m_controllers ) //t_controller
		.def_readwrite("junction", &OpenDRIVE::m_junctions ) //t_junction
		.def_readwrite("junctionGroup", &OpenDRIVE::m_junctionGroups ) //t_junctionGroup
		.def_readwrite("station", &OpenDRIVE::m_stations ) //t_station
				    //group tag : reference g_additionalData
			;
	py::class_<xodr,std::shared_ptr<xodr>>(m, "xodr")
		.def(py::init<>())
		.def("load", &xodr::load, py::arg("filename"))
		.def("parse", &xodr::parse)
		.def_readwrite("OpenDRIVE", &xodr::m_OpenDRIVE);
}

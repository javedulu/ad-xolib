//
//  opendrive_16_core.cxx
//  xsd2cxx- for OpenDrive CXX classes
//
//  Created by Javed Shaik on Sat Jul 11 12:40:05 2020
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : cee7ecd4-d9a0-4773-a2fc-a907ec37b010 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
//
#include "xodr.h"
e_unit::e_unit(pugi::xml_attribute attr)
{
	if (isvalid<e_unitDistance>(attr.as_string())) { unitDistance = str2enum<e_unitDistance>(attr.as_string()); }
	if (isvalid<e_unitSpeed>(attr.as_string())) { unitSpeed = str2enum<e_unitSpeed>(attr.as_string()); }
	if (isvalid<e_unitMass>(attr.as_string())) { unitMass = str2enum<e_unitMass>(attr.as_string()); }
	if (isvalid<e_unitSlope>(attr.as_string())) { unitSlope = str2enum<e_unitSlope>(attr.as_string()); }
}
e_countryCode::e_countryCode(pugi::xml_attribute attr)
{
	if (  (m_e_countryCode_iso3166alpha2 = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (  (m_e_countryCode_iso3166alpha3_deprecated = attr.as_string())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_countryCode_deprecated>(attr.as_string())) { countryCode_deprecated = str2enum<e_countryCode_deprecated>(attr.as_string()); }
}
t_maxSpeed::t_maxSpeed(pugi::xml_attribute attr)
{
	if (  (m_t_grEqZero = attr.as_double())  ) { return ; }   // Typedef redirected to read value
	if (isvalid<e_maxSpeedString>(attr.as_string())) { maxSpeedString = str2enum<e_maxSpeedString>(attr.as_string()); }
}
t_road_signals_signal_U::t_road_signals_signal_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"positionRoad")==0) { m_positionRoad = std::make_shared<t_road_signals_signal_positionRoad>(node); }
	if (strcmp(node.name(),"positionInertial")==0) { m_positionInertial = std::make_shared<t_road_signals_signal_positionInertial>(node); }
}
t_road_planView_geometry_U::t_road_planView_geometry_U(pugi::xml_node node)
{
	if (strcmp(node.name(),"line")==0) { m_line = std::make_shared<t_road_planView_geometry_line>(node); }
	if (strcmp(node.name(),"spiral")==0) { m_spiral = std::make_shared<t_road_planView_geometry_spiral>(node); }
	if (strcmp(node.name(),"arc")==0) { m_arc = std::make_shared<t_road_planView_geometry_arc>(node); }
	if (strcmp(node.name(),"poly3")==0) { m_poly3 = std::make_shared<t_road_planView_geometry_poly3>(node); }
	if (strcmp(node.name(),"paramPoly3")==0) { m_paramPoly3 = std::make_shared<t_road_planView_geometry_paramPoly3>(node); }
}
t_road_objects_object_outlines_outline_U::t_road_objects_object_outlines_outline_U(pugi::xml_node node)
{
	for (pugi::xml_node e_cornerRoad : node.children())
	{
		if (strcmp(node.name(),"cornerRoad")==0)
		{
			m_cornerRoads.push_back(std::make_shared<t_road_objects_object_outlines_outline_cornerRoad>(e_cornerRoad));
		}
	}
	for (pugi::xml_node e_cornerLocal : node.children())
	{
		if (strcmp(node.name(),"cornerLocal")==0)
		{
			m_cornerLocals.push_back(std::make_shared<t_road_objects_object_outlines_outline_cornerLocal>(e_cornerLocal));
		}
	}
}
t_road_lanes_laneSection_lr_lane_U::t_road_lanes_laneSection_lr_lane_U(pugi::xml_node node)
{
	for (pugi::xml_node e_border : node.children())
	{
		if (strcmp(node.name(),"border")==0)
		{
			m_borders.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_border>(e_border));
		}
	}
	for (pugi::xml_node e_width : node.children())
	{
		if (strcmp(node.name(),"width")==0)
		{
			m_widths.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_width>(e_width));
		}
	}
}
t_dataQuality::t_dataQuality(pugi::xml_node node)
{
	if (node.child("error")) { m_error = std::make_shared<t_dataQuality_Error>(node.child("error")); }
	if (node.child("rawData")) { m_rawData = std::make_shared<t_dataQuality_RawData>(node.child("rawData")); }
}
t_dataQuality_Error::t_dataQuality_Error(pugi::xml_node node)
{
    if (node.attribute("xyAbsolute")) { xyAbsolute = node.attribute("xyAbsolute").as_double(); } //required
    if (node.attribute("zAbsolute")) { zAbsolute = node.attribute("zAbsolute").as_double(); } //required
    if (node.attribute("xyRelative")) { xyRelative = node.attribute("xyRelative").as_double(); } //required
    if (node.attribute("zRelative")) { zRelative = node.attribute("zRelative").as_double(); } //required
}
t_dataQuality_RawData::t_dataQuality_RawData(pugi::xml_node node)
{
    if (node.attribute("date")) { date = node.attribute("date").as_string(); } //required
	if (node.attribute("source")) { source = str2enum<e_dataQuality_RawData_Source>(node.attribute("source").as_string()); } // enum
    if (node.attribute("sourceComment")) { sourceComment = node.attribute("sourceComment").as_string(); } //optional
	if (node.attribute("postProcessing")) { postProcessing = str2enum<e_dataQuality_RawData_PostProcessing>(node.attribute("postProcessing").as_string()); } // enum
    if (node.attribute("postProcessingComment")) { postProcessingComment = node.attribute("postProcessingComment").as_string(); } //optional
}
t_header::t_header(pugi::xml_node node)
{
	if (revMajor != node.attribute("revMajor").as_int()) { throw ("revMajor not matching "); }
    if (node.attribute("revMinor")) { revMinor = node.attribute("revMinor").as_int(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("version")) { version = node.attribute("version").as_string(); } //optional
    if (node.attribute("date")) { date = node.attribute("date").as_string(); } //optional
    if (node.attribute("north")) { north = node.attribute("north").as_double(); } //optional
    if (node.attribute("south")) { south = node.attribute("south").as_double(); } //optional
    if (node.attribute("east")) { east = node.attribute("east").as_double(); } //optional
    if (node.attribute("west")) { west = node.attribute("west").as_double(); } //optional
    if (node.attribute("vendor")) { vendor = node.attribute("vendor").as_string(); } //optional
	if (node.child("geoReference")) { m_geoReference = std::make_shared<t_header_GeoReference>(node.child("geoReference")); }
	if (node.child("offset")) { m_offset = std::make_shared<t_header_Offset>(node.child("offset")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_header_GeoReference::t_header_GeoReference(pugi::xml_node node)
{
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_header_Offset::t_header_Offset(pugi::xml_node node)
{
    if (node.attribute("x")) { x = node.attribute("x").as_double(); } //required
    if (node.attribute("y")) { y = node.attribute("y").as_double(); } //required
    if (node.attribute("z")) { z = node.attribute("z").as_double(); } //required
    if (node.attribute("hdg")) { hdg = node.attribute("hdg").as_float(); } //required
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_include::t_include(pugi::xml_node node)
{
    if (node.attribute("file")) { file = node.attribute("file").as_string(); } //required
}
t_userData::t_userData(pugi::xml_node node)
{
    if (node.attribute("code")) { code = node.attribute("code").as_string(); } //required
    if (node.attribute("value")) { value = node.attribute("value").as_string(); } //optional
}
t_road_railroad::t_road_railroad(pugi::xml_node node)
{
	for (pugi::xml_node e_switch = node.child("switch"); e_switch; e_switch= e_switch.next_sibling("switch"))
	{
		m_switchs.push_back(std::make_shared<t_road_railroad_switch>(e_switch));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_railroad_switch::t_road_railroad_switch(pugi::xml_node node)
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //required
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("position")) { position = str2enum<e_road_railroad_switch_position>(node.attribute("position").as_string()); } // enum
	if (node.child("mainTrack")) { m_mainTrack = std::make_shared<t_road_railroad_switch_mainTrack>(node.child("mainTrack")); }
	if (node.child("sideTrack")) { m_sideTrack = std::make_shared<t_road_railroad_switch_sideTrack>(node.child("sideTrack")); }
	if (node.child("partner")) { m_partner = std::make_shared<t_road_railroad_switch_partner>(node.child("partner")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_railroad_switch_mainTrack::t_road_railroad_switch_mainTrack(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
	if (node.attribute("dir")) { dir = str2enum<e_elementDir>(node.attribute("dir").as_string()); } // enum
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_railroad_switch_partner::t_road_railroad_switch_partner(pugi::xml_node node)
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_railroad_switch_sideTrack::t_road_railroad_switch_sideTrack(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
	if (node.attribute("dir")) { dir = str2enum<e_elementDir>(node.attribute("dir").as_string()); } // enum
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_station::t_station(pugi::xml_node node)
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //required
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("type")) { type = str2enum<e_station_type>(node.attribute("type").as_string()); } // enum
	for (pugi::xml_node e_platform = node.child("platform"); e_platform; e_platform= e_platform.next_sibling("platform"))
	{
		m_platforms.push_back(std::make_shared<t_station_platform>(e_platform));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_station_platform::t_station_platform(pugi::xml_node node)
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	for (pugi::xml_node e_segment = node.child("segment"); e_segment; e_segment= e_segment.next_sibling("segment"))
	{
		m_segments.push_back(std::make_shared<t_station_platform_segment>(e_segment));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_station_platform_segment::t_station_platform_segment(pugi::xml_node node)
{
    if (node.attribute("roadId")) { roadId = node.attribute("roadId").as_string(); } //required
	if (node.attribute("sStart")) { sStart = node.attribute("sStart").as_double(); }  //typedef
	if (node.attribute("sEnd")) { sEnd = node.attribute("sEnd").as_double(); }  //typedef
	if (node.attribute("side")) { side = str2enum<e_station_platform_segment_side>(node.attribute("side").as_string()); } // enum
}
t_junction::t_junction(pugi::xml_node node)
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("type")) { type = str2enum<e_junction_type>(node.attribute("type").as_string()); } // enum
	for (pugi::xml_node e_connection = node.child("connection"); e_connection; e_connection= e_connection.next_sibling("connection"))
	{
		m_connections.push_back(std::make_shared<t_junction_connection>(e_connection));
	}
	for (pugi::xml_node e_priority = node.child("priority"); e_priority; e_priority= e_priority.next_sibling("priority"))
	{
		m_prioritys.push_back(std::make_shared<t_junction_priority>(e_priority));
	}
	for (pugi::xml_node e_controller = node.child("controller"); e_controller; e_controller= e_controller.next_sibling("controller"))
	{
		m_controllers.push_back(std::make_shared<t_junction_controller>(e_controller));
	}
	if (node.child("surface")) { m_surface = std::make_shared<t_junction_surface>(node.child("surface")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_junction_connection::t_junction_connection(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("type")) { type = str2enum<e_junction_type>(node.attribute("type").as_string()); } // enum
    if (node.attribute("incomingRoad")) { incomingRoad = node.attribute("incomingRoad").as_string(); } //optional
    if (node.attribute("connectingRoad")) { connectingRoad = node.attribute("connectingRoad").as_string(); } //optional
    if (node.attribute("contactPoint")) { contactPoint = node.attribute("contactPoint").as_string(); } //optional
	if (node.child("predecessor")) { m_predecessor = std::make_shared<t_junction_predecessorSuccessor>(node.child("predecessor")); }
	if (node.child("successor")) { m_successor = std::make_shared<t_junction_predecessorSuccessor>(node.child("successor")); }
	for (pugi::xml_node e_laneLink = node.child("laneLink"); e_laneLink; e_laneLink= e_laneLink.next_sibling("laneLink"))
	{
		m_laneLinks.push_back(std::make_shared<t_junction_connection_laneLink>(e_laneLink));
	}
}
t_junction_connection_laneLink::t_junction_connection_laneLink(pugi::xml_node node)
{
    if (node.attribute("from")) { from = node.attribute("from").as_int(); } //required
    if (node.attribute("to")) { to = node.attribute("to").as_int(); } //required
}
t_junction_controller::t_junction_controller(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //optional
    if (node.attribute("sequence")) { sequence = node.attribute("sequence").as_ullong(); } //optional
}
t_junction_predecessorSuccessor::t_junction_predecessorSuccessor(pugi::xml_node node)
{
	if (elementType != node.attribute("elementType").as_string()) { throw ("elementType not matching "); }
    if (node.attribute("elementId")) { elementId = node.attribute("elementId").as_string(); } //required
	if (node.attribute("elementS")) { elementS = node.attribute("elementS").as_double(); }  //typedef
	if (node.attribute("elementDir")) { elementDir = str2enum<e_elementDir>(node.attribute("elementDir").as_string()); } // enum
}
t_junction_priority::t_junction_priority(pugi::xml_node node)
{
    if (node.attribute("high")) { high = node.attribute("high").as_string(); } //optional
    if (node.attribute("low")) { low = node.attribute("low").as_string(); } //optional
}
t_junction_surface::t_junction_surface(pugi::xml_node node)
{
	for (pugi::xml_node e_CRG = node.child("CRG"); e_CRG; e_CRG= e_CRG.next_sibling("CRG"))
	{
		m_CRGs.push_back(std::make_shared<t_junction_surface_CRG>(e_CRG));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_junction_surface_CRG::t_junction_surface_CRG(pugi::xml_node node)
{
    if (node.attribute("file")) { file = node.attribute("file").as_string(); } //required
	if (mode != str2enum<e_road_surface_CRG_mode>(node.attribute("mode").as_string())) { throw ("mode not matching "); }
	if (node.attribute("purpose")) { purpose = str2enum<e_road_surface_CRG_purpose>(node.attribute("purpose").as_string()); } // enum
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //optional
    if (node.attribute("zScale")) { zScale = node.attribute("zScale").as_double(); } //optional
}
t_junctionGroup::t_junctionGroup(pugi::xml_node node)
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("type")) { type = str2enum<e_junctionGroup_type>(node.attribute("type").as_string()); } // enum
	for (pugi::xml_node e_junctionReference = node.child("junctionReference"); e_junctionReference; e_junctionReference= e_junctionReference.next_sibling("junctionReference"))
	{
		m_junctionReferences.push_back(std::make_shared<t_junctionGroup_junctionReference>(e_junctionReference));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_junctionGroup_junctionReference::t_junctionGroup_junctionReference(pugi::xml_node node)
{
    if (node.attribute("junction")) { junction = node.attribute("junction").as_string(); } //required
}
t_controller::t_controller(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("sequence")) { sequence = node.attribute("sequence").as_ullong(); } //optional
	for (pugi::xml_node e_control = node.child("control"); e_control; e_control= e_control.next_sibling("control"))
	{
		m_controls.push_back(std::make_shared<t_controller_control>(e_control));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_controller_control::t_controller_control(pugi::xml_node node)
{
    if (node.attribute("signalId")) { signalId = node.attribute("signalId").as_string(); } //required
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //optional
}
t_road_signals::t_road_signals(pugi::xml_node node)
{
	for (pugi::xml_node e_signal = node.child("signal"); e_signal; e_signal= e_signal.next_sibling("signal"))
	{
		m_signals.push_back(std::make_shared<t_road_signals_signal>(e_signal));
	}
	for (pugi::xml_node e_signalReference = node.child("signalReference"); e_signalReference; e_signalReference= e_signalReference.next_sibling("signalReference"))
	{
		m_signalReferences.push_back(std::make_shared<t_road_signals_signalReference>(e_signalReference));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_signals_signal::t_road_signals_signal(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
	if (node.attribute("dynamic")) { dynamic = str2enum<t_yesNo>(node.attribute("dynamic").as_string()); } // enum
	if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //required
	if (node.attribute("country")) { country = e_countryCode(node.attribute("country")); }  // TODO: >> union - handle properly
    if (node.attribute("countryRevision")) { countryRevision = node.attribute("countryRevision").as_string(); } //optional
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //required
    if (node.attribute("subtype")) { subtype = node.attribute("subtype").as_string(); } //required
    if (node.attribute("value")) { value = node.attribute("value").as_double(); } //optional
	if (node.attribute("unit")) { unit = e_unit(node.attribute("unit")); }  // TODO: >> union - handle properly
	if (node.attribute("height")) { height = node.attribute("height").as_double(); }  //typedef
	if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef
    if (node.attribute("text")) { text = node.attribute("text").as_string(); } //optional
    if (node.attribute("hOffset")) { hOffset = node.attribute("hOffset").as_double(); } //optional
    if (node.attribute("pitch")) { pitch = node.attribute("pitch").as_double(); } //optional
    if (node.attribute("roll")) { roll = node.attribute("roll").as_double(); } //optional
	for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
	{
		m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
	}
	for (pugi::xml_node e_dependency = node.child("dependency"); e_dependency; e_dependency= e_dependency.next_sibling("dependency"))
	{
		m_dependencys.push_back(std::make_shared<t_road_signals_signal_dependency>(e_dependency));
	}
	for (pugi::xml_node e_reference = node.child("reference"); e_reference; e_reference= e_reference.next_sibling("reference"))
	{
		m_references.push_back(std::make_shared<t_road_signals_signal_reference>(e_reference));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
    //t_road_signals_signal_U	m_t_road_signals_signal;
	if (node.first_child()) { m_t_road_signals_signal = std::make_shared<t_road_signals_signal_U>(node.first_child()); }
}
t_road_signals_signal_dependency::t_road_signals_signal_dependency(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //optional
}
t_road_signals_signal_positionInertial::t_road_signals_signal_positionInertial(pugi::xml_node node)
{
    if (node.attribute("x")) { x = node.attribute("x").as_double(); } //required
    if (node.attribute("y")) { y = node.attribute("y").as_double(); } //required
    if (node.attribute("z")) { z = node.attribute("z").as_double(); } //required
    if (node.attribute("hdg")) { hdg = node.attribute("hdg").as_double(); } //required
    if (node.attribute("pitch")) { pitch = node.attribute("pitch").as_double(); } //optional
    if (node.attribute("roll")) { roll = node.attribute("roll").as_double(); } //optional
}
t_road_signals_signal_positionRoad::t_road_signals_signal_positionRoad(pugi::xml_node node)
{
    if (node.attribute("roadId")) { roadId = node.attribute("roadId").as_string(); } //required
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //required
    if (node.attribute("hOffset")) { hOffset = node.attribute("hOffset").as_double(); } //required
    if (node.attribute("pitch")) { pitch = node.attribute("pitch").as_double(); } //optional
    if (node.attribute("roll")) { roll = node.attribute("roll").as_double(); } //optional
}
t_road_signals_signal_reference::t_road_signals_signal_reference(pugi::xml_node node)
{
	if (node.attribute("elementType")) { elementType = str2enum<e_road_signals_signal_reference_elementType>(node.attribute("elementType").as_string()); } // enum
    if (node.attribute("elementId")) { elementId = node.attribute("elementId").as_string(); } //required
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //optional
}
t_road_signals_signalReference::t_road_signals_signalReference(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
	for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
	{
		m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road::t_road(pugi::xml_node node)
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("length")) { length = node.attribute("length").as_string(); } //required
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("junction")) { junction = node.attribute("junction").as_string(); } //required
	if (node.attribute("rule")) { rule = str2enum<e_trafficRule>(node.attribute("rule").as_string()); } // enum
	if (node.child("link")) { m_link = std::make_shared<t_road_link>(node.child("link")); }
	for (pugi::xml_node e_type = node.child("type"); e_type; e_type= e_type.next_sibling("type"))
	{
		m_types.push_back(std::make_shared<t_road_type>(e_type));
	}
	if (node.child("planView")) { m_planView = std::make_shared<t_road_planView>(node.child("planView")); }
	if (node.child("elevationProfile")) { m_elevationProfile = std::make_shared<t_road_elevationProfile>(node.child("elevationProfile")); }
	if (node.child("lateralProfile")) { m_lateralProfile = std::make_shared<t_road_lateralProfile>(node.child("lateralProfile")); }
	if (node.child("lanes")) { m_lanes = std::make_shared<t_road_lanes>(node.child("lanes")); }
	if (node.child("objects")) { m_objects = std::make_shared<t_road_objects>(node.child("objects")); }
	if (node.child("signals")) { m_signals = std::make_shared<t_road_signals>(node.child("signals")); }
	if (node.child("surface")) { m_surface = std::make_shared<t_road_surface>(node.child("surface")); }
	if (node.child("railroad")) { m_railroad = std::make_shared<t_road_railroad>(node.child("railroad")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_elevationProfile::t_road_elevationProfile(pugi::xml_node node)
{
	for (pugi::xml_node e_elevation = node.child("elevation"); e_elevation; e_elevation= e_elevation.next_sibling("elevation"))
	{
		m_elevations.push_back(std::make_shared<t_road_elevationProfile_elevation>(e_elevation));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_elevationProfile_elevation::t_road_elevationProfile_elevation(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
t_road_lateralProfile::t_road_lateralProfile(pugi::xml_node node)
{
	for (pugi::xml_node e_superelevation = node.child("superelevation"); e_superelevation; e_superelevation= e_superelevation.next_sibling("superelevation"))
	{
		m_superelevations.push_back(std::make_shared<t_road_lateralProfile_superelevation>(e_superelevation));
	}
	for (pugi::xml_node e_shape = node.child("shape"); e_shape; e_shape= e_shape.next_sibling("shape"))
	{
		m_shapes.push_back(std::make_shared<t_road_lateralProfile_shape>(e_shape));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lateralProfile_shape::t_road_lateralProfile_shape(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
t_road_lateralProfile_superelevation::t_road_lateralProfile_superelevation(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
t_road_link::t_road_link(pugi::xml_node node)
{
	if (node.child("predecessor")) { m_predecessor = std::make_shared<t_road_link_predecessorSuccessor>(node.child("predecessor")); }
	if (node.child("successor")) { m_successor = std::make_shared<t_road_link_predecessorSuccessor>(node.child("successor")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_link_predecessorSuccessor::t_road_link_predecessorSuccessor(pugi::xml_node node)
{
    if (node.attribute("elementId")) { elementId = node.attribute("elementId").as_string(); } //required
    if (node.attribute("elementType")) { elementType = node.attribute("elementType").as_string(); } //optional
    if (node.attribute("contactPoint")) { contactPoint = node.attribute("contactPoint").as_string(); } //optional
	if (node.attribute("elementS")) { elementS = node.attribute("elementS").as_double(); }  //typedef
    if (node.attribute("elementDir")) { elementDir = node.attribute("elementDir").as_string(); } //optional
}
t_road_planView::t_road_planView(pugi::xml_node node)
{
	for (pugi::xml_node e_geometry = node.child("geometry"); e_geometry; e_geometry= e_geometry.next_sibling("geometry"))
	{
		m_geometrys.push_back(std::make_shared<t_road_planView_geometry>(e_geometry));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_planView_geometry::t_road_planView_geometry(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("x")) { x = node.attribute("x").as_double(); } //required
    if (node.attribute("y")) { y = node.attribute("y").as_double(); } //required
    if (node.attribute("hdg")) { hdg = node.attribute("hdg").as_double(); } //required
    if (node.attribute("length")) { length = node.attribute("length").as_string(); } //required
    //t_road_planView_geometry_U	m_t_road_planView_geometry;
	if (node.first_child()) { m_t_road_planView_geometry = std::make_shared<t_road_planView_geometry_U>(node.first_child()); }
}
t_road_planView_geometry_arc::t_road_planView_geometry_arc(pugi::xml_node node)
{
    if (node.attribute("curvature")) { curvature = node.attribute("curvature").as_double(); } //required
}
t_road_planView_geometry_line::t_road_planView_geometry_line(pugi::xml_node node)
{
}
t_road_planView_geometry_paramPoly3::t_road_planView_geometry_paramPoly3(pugi::xml_node node)
{
    if (node.attribute("aU")) { aU = node.attribute("aU").as_double(); } //required
    if (node.attribute("bU")) { bU = node.attribute("bU").as_double(); } //required
    if (node.attribute("cU")) { cU = node.attribute("cU").as_double(); } //required
    if (node.attribute("dU")) { dU = node.attribute("dU").as_double(); } //required
    if (node.attribute("aV")) { aV = node.attribute("aV").as_double(); } //required
    if (node.attribute("bV")) { bV = node.attribute("bV").as_double(); } //required
    if (node.attribute("cV")) { cV = node.attribute("cV").as_double(); } //required
    if (node.attribute("dV")) { dV = node.attribute("dV").as_double(); } //required
	if (node.attribute("pRange")) { pRange = str2enum<e_paramPoly3_pRange>(node.attribute("pRange").as_string()); } // enum
}
t_road_planView_geometry_poly3::t_road_planView_geometry_poly3(pugi::xml_node node)
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
t_road_planView_geometry_spiral::t_road_planView_geometry_spiral(pugi::xml_node node)
{
    if (node.attribute("curvStart")) { curvStart = node.attribute("curvStart").as_double(); } //required
    if (node.attribute("curvEnd")) { curvEnd = node.attribute("curvEnd").as_double(); } //required
}
t_road_surface::t_road_surface(pugi::xml_node node)
{
	for (pugi::xml_node e_CRG = node.child("CRG"); e_CRG; e_CRG= e_CRG.next_sibling("CRG"))
	{
		m_CRGs.push_back(std::make_shared<t_road_surface_CRG>(e_CRG));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_surface_CRG::t_road_surface_CRG(pugi::xml_node node)
{
    if (node.attribute("file")) { file = node.attribute("file").as_string(); } //required
	if (node.attribute("sStart")) { sStart = node.attribute("sStart").as_double(); }  //typedef
	if (node.attribute("sEnd")) { sEnd = node.attribute("sEnd").as_double(); }  //typedef
	if (node.attribute("orientation")) { orientation = str2enum<e_direction>(node.attribute("orientation").as_string()); } // enum
	if (node.attribute("mode")) { mode = str2enum<e_road_surface_CRG_mode>(node.attribute("mode").as_string()); } // enum
	if (node.attribute("purpose")) { purpose = str2enum<e_road_surface_CRG_purpose>(node.attribute("purpose").as_string()); } // enum
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); } //optional
    if (node.attribute("tOffset")) { tOffset = node.attribute("tOffset").as_double(); } //optional
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //optional
    if (node.attribute("zScale")) { zScale = node.attribute("zScale").as_double(); } //optional
    if (node.attribute("hOffset")) { hOffset = node.attribute("hOffset").as_double(); } //optional
}
t_road_type::t_road_type(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
	if (node.attribute("type")) { type = str2enum<e_roadType>(node.attribute("type").as_string()); } // enum
	if (node.attribute("country")) { country = e_countryCode(node.attribute("country")); }  // TODO: >> union - handle properly
	if (node.child("speed")) { m_speed = std::make_shared<t_road_type_speed>(node.child("speed")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_type_speed::t_road_type_speed(pugi::xml_node node)
{
	if (node.attribute("max")) { max = t_maxSpeed(node.attribute("max")); }  // TODO: >> union - handle properly
	if (node.attribute("unit")) { unit = str2enum<e_unitSpeed>(node.attribute("unit").as_string()); } // enum
}
t_road_objects::t_road_objects(pugi::xml_node node)
{
	for (pugi::xml_node e_object = node.child("object"); e_object; e_object= e_object.next_sibling("object"))
	{
		m_objects.push_back(std::make_shared<t_road_objects_object>(e_object));
	}
	for (pugi::xml_node e_objectReference = node.child("objectReference"); e_objectReference; e_objectReference= e_objectReference.next_sibling("objectReference"))
	{
		m_objectReferences.push_back(std::make_shared<t_road_objects_objectReference>(e_objectReference));
	}
	for (pugi::xml_node e_tunnel = node.child("tunnel"); e_tunnel; e_tunnel= e_tunnel.next_sibling("tunnel"))
	{
		m_tunnels.push_back(std::make_shared<t_road_objects_tunnel>(e_tunnel));
	}
	for (pugi::xml_node e_bridge = node.child("bridge"); e_bridge; e_bridge= e_bridge.next_sibling("bridge"))
	{
		m_bridges.push_back(std::make_shared<t_road_objects_bridge>(e_bridge));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_bridge::t_road_objects_bridge(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
	if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("type")) { type = str2enum<e_bridgeType>(node.attribute("type").as_string()); } // enum
	for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
	{
		m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object::t_road_objects_object(pugi::xml_node node)
{
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //required
	if (node.attribute("type")) { type = str2enum<e_objectType>(node.attribute("type").as_string()); } // enum
	if (node.attribute("validLength")) { validLength = node.attribute("validLength").as_double(); }  //typedef
	if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
    if (node.attribute("subtype")) { subtype = node.attribute("subtype").as_string(); } //optional
	if (node.attribute("dynamic")) { dynamic = str2enum<t_yesNo>(node.attribute("dynamic").as_string()); } // enum
    if (node.attribute("hdg")) { hdg = node.attribute("hdg").as_double(); } //optional
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("pitch")) { pitch = node.attribute("pitch").as_double(); } //optional
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("roll")) { roll = node.attribute("roll").as_double(); } //optional
    if (node.attribute("height")) { height = node.attribute("height").as_double(); } //optional
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("length")) { length = node.attribute("length").as_double(); } //optional
    if (node.attribute("width")) { width = node.attribute("width").as_double(); } //optional
    if (node.attribute("radius")) { radius = node.attribute("radius").as_double(); } //optional
	for (pugi::xml_node e_repeat = node.child("repeat"); e_repeat; e_repeat= e_repeat.next_sibling("repeat"))
	{
		m_repeats.push_back(std::make_shared<t_road_objects_object_repeat>(e_repeat));
	}
	if (node.child("outline")) { m_outline = std::make_shared<t_road_objects_object_outlines_outline>(node.child("outline")); }
	if (node.child("outlines")) { m_outlines = std::make_shared<t_road_objects_object_outlines>(node.child("outlines")); }
	for (pugi::xml_node e_material = node.child("material"); e_material; e_material= e_material.next_sibling("material"))
	{
		m_materials.push_back(std::make_shared<t_road_objects_object_material>(e_material));
	}
	for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
	{
		m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
	}
	if (node.child("parkingSpace")) { m_parkingSpace = std::make_shared<t_road_objects_object_parkingSpace>(node.child("parkingSpace")); }
	if (node.child("markings")) { m_markings = std::make_shared<t_road_objects_object_markings>(node.child("markings")); }
	if (node.child("borders")) { m_borders = std::make_shared<t_road_objects_object_borders>(node.child("borders")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_borders::t_road_objects_object_borders(pugi::xml_node node)
{
	for (pugi::xml_node e_border = node.child("border"); e_border; e_border= e_border.next_sibling("border"))
	{
		m_borders.push_back(std::make_shared<t_road_objects_object_borders_border>(e_border));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_borders_border::t_road_objects_object_borders_border(pugi::xml_node node)
{
	if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef
	if (node.attribute("type")) { type = str2enum<e_borderType>(node.attribute("type").as_string()); } // enum
    if (node.attribute("outlineId")) { outlineId = node.attribute("outlineId").as_ullong(); } //required
	if (node.attribute("useCompleteOutline")) { useCompleteOutline = str2enum<t_bool>(node.attribute("useCompleteOutline").as_string()); } // enum
	for (pugi::xml_node e_cornerReference = node.child("cornerReference"); e_cornerReference; e_cornerReference= e_cornerReference.next_sibling("cornerReference"))
	{
		m_cornerReferences.push_back(std::make_shared<t_road_objects_object_markings_marking_cornerReference>(e_cornerReference));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_markings::t_road_objects_object_markings(pugi::xml_node node)
{
	for (pugi::xml_node e_marking = node.child("marking"); e_marking; e_marking= e_marking.next_sibling("marking"))
	{
		m_markings.push_back(std::make_shared<t_road_objects_object_markings_marking>(e_marking));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_markings_marking::t_road_objects_object_markings_marking(pugi::xml_node node)
{
	if (node.attribute("side")) { side = str2enum<e_sideType>(node.attribute("side").as_string()); } // enum
	if (node.attribute("weight")) { weight = str2enum<e_roadMarkWeight>(node.attribute("weight").as_string()); } // enum
    if (node.attribute("width")) { width = node.attribute("width").as_string(); } //optional
	if (node.attribute("color")) { color = str2enum<e_roadMarkColor>(node.attribute("color").as_string()); } // enum
	if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); }  //typedef
	if (node.attribute("spaceLength")) { spaceLength = node.attribute("spaceLength").as_double(); }  //typedef
    if (node.attribute("lineLength")) { lineLength = node.attribute("lineLength").as_string(); } //required
    if (node.attribute("startOffset")) { startOffset = node.attribute("startOffset").as_double(); } //required
    if (node.attribute("stopOffset")) { stopOffset = node.attribute("stopOffset").as_double(); } //required
	for (pugi::xml_node e_cornerReference = node.child("cornerReference"); e_cornerReference; e_cornerReference= e_cornerReference.next_sibling("cornerReference"))
	{
		m_cornerReferences.push_back(std::make_shared<t_road_objects_object_markings_marking_cornerReference>(e_cornerReference));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_markings_marking_cornerReference::t_road_objects_object_markings_marking_cornerReference(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //required
}
t_road_objects_object_material::t_road_objects_object_material(pugi::xml_node node)
{
    if (node.attribute("surface")) { surface = node.attribute("surface").as_string(); } //optional
	if (node.attribute("friction")) { friction = node.attribute("friction").as_double(); }  //typedef
	if (node.attribute("roughness")) { roughness = node.attribute("roughness").as_double(); }  //typedef
}
t_road_objects_object_outlines::t_road_objects_object_outlines(pugi::xml_node node)
{
	for (pugi::xml_node e_outline = node.child("outline"); e_outline; e_outline= e_outline.next_sibling("outline"))
	{
		m_outlines.push_back(std::make_shared<t_road_objects_object_outlines_outline>(e_outline));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_outlines_outline::t_road_objects_object_outlines_outline(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //optional
	if (node.attribute("fillType")) { fillType = str2enum<e_outlineFillType>(node.attribute("fillType").as_string()); } // enum
	if (node.attribute("outer")) { outer = str2enum<t_bool>(node.attribute("outer").as_string()); } // enum
	if (node.attribute("closed")) { closed = str2enum<t_bool>(node.attribute("closed").as_string()); } // enum
	if (node.attribute("laneType")) { laneType = str2enum<e_laneType>(node.attribute("laneType").as_string()); } // enum
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
    //t_road_objects_object_outlines_outline_U	m_t_road_objects_object_outlines_outline;
	if (node.first_child()) { m_t_road_objects_object_outlines_outline = std::make_shared<t_road_objects_object_outlines_outline_U>(node.first_child()); }
}
t_road_objects_object_outlines_outline_cornerLocal::t_road_objects_object_outlines_outline_cornerLocal(pugi::xml_node node)
{
    if (node.attribute("u")) { u = node.attribute("u").as_double(); } //required
    if (node.attribute("v")) { v = node.attribute("v").as_double(); } //required
    if (node.attribute("z")) { z = node.attribute("z").as_double(); } //required
    if (node.attribute("height")) { height = node.attribute("height").as_double(); } //required
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //optional
}
t_road_objects_object_outlines_outline_cornerRoad::t_road_objects_object_outlines_outline_cornerRoad(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("dz")) { dz = node.attribute("dz").as_double(); } //required
    if (node.attribute("height")) { height = node.attribute("height").as_double(); } //required
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //optional
}
t_road_objects_object_parkingSpace::t_road_objects_object_parkingSpace(pugi::xml_node node)
{
	if (node.attribute("access")) { access = str2enum<e_road_objects_object_parkingSpace_access>(node.attribute("access").as_string()); } // enum
    if (node.attribute("restrictions")) { restrictions = node.attribute("restrictions").as_string(); } //optional
}
t_road_objects_object_repeat::t_road_objects_object_repeat(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
	if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef
	if (node.attribute("distance")) { distance = node.attribute("distance").as_double(); }  //typedef
    if (node.attribute("tStart")) { tStart = node.attribute("tStart").as_double(); } //required
    if (node.attribute("tEnd")) { tEnd = node.attribute("tEnd").as_double(); } //required
    if (node.attribute("heightStart")) { heightStart = node.attribute("heightStart").as_double(); } //required
    if (node.attribute("heightEnd")) { heightEnd = node.attribute("heightEnd").as_double(); } //required
    if (node.attribute("zOffsetStart")) { zOffsetStart = node.attribute("zOffsetStart").as_double(); } //required
    if (node.attribute("zOffsetEnd")) { zOffsetEnd = node.attribute("zOffsetEnd").as_double(); } //required
	if (node.attribute("widthStart")) { widthStart = node.attribute("widthStart").as_double(); }  //typedef
	if (node.attribute("widthEnd")) { widthEnd = node.attribute("widthEnd").as_double(); }  //typedef
	if (node.attribute("lengthStart")) { lengthStart = node.attribute("lengthStart").as_double(); }  //typedef
	if (node.attribute("lengthEnd")) { lengthEnd = node.attribute("lengthEnd").as_double(); }  //typedef
	if (node.attribute("radiusStart")) { radiusStart = node.attribute("radiusStart").as_double(); }  //typedef
	if (node.attribute("radiusEnd")) { radiusEnd = node.attribute("radiusEnd").as_double(); }  //typedef
}
t_road_objects_objectReference::t_road_objects_objectReference(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //optional
	if (node.attribute("validLength")) { validLength = node.attribute("validLength").as_double(); }  //typedef
	if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
	for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
	{
		m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_tunnel::t_road_objects_tunnel(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
	if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
	if (node.attribute("type")) { type = str2enum<e_tunnelType>(node.attribute("type").as_string()); } // enum
	if (node.attribute("lighting")) { lighting = node.attribute("lighting").as_double(); }  //typedef
	if (node.attribute("daylight")) { daylight = node.attribute("daylight").as_double(); }  //typedef
	for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
	{
		m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes::t_road_lanes(pugi::xml_node node)
{
	for (pugi::xml_node e_laneOffset = node.child("laneOffset"); e_laneOffset; e_laneOffset= e_laneOffset.next_sibling("laneOffset"))
	{
		m_laneOffsets.push_back(std::make_shared<t_road_lanes_laneOffset>(e_laneOffset));
	}
	for (pugi::xml_node e_laneSection = node.child("laneSection"); e_laneSection; e_laneSection= e_laneSection.next_sibling("laneSection"))
	{
		m_laneSections.push_back(std::make_shared<t_road_lanes_laneSection>(e_laneSection));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneOffset::t_road_lanes_laneOffset(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
t_road_lanes_laneSection::t_road_lanes_laneSection(pugi::xml_node node)
{
	if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef
	if (node.attribute("singleSide")) { singleSide = str2enum<t_bool>(node.attribute("singleSide").as_string()); } // enum
	if (node.child("left")) { m_left = std::make_shared<t_road_lanes_laneSection_left>(node.child("left")); }
	if (node.child("center")) { m_center = std::make_shared<t_road_lanes_laneSection_center>(node.child("center")); }
	if (node.child("right")) { m_right = std::make_shared<t_road_lanes_laneSection_right>(node.child("right")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_center::t_road_lanes_laneSection_center(pugi::xml_node node)
{
	for (pugi::xml_node e_lane = node.child("lane"); e_lane; e_lane= e_lane.next_sibling("lane"))
	{
		m_lanes.push_back(std::make_shared<t_road_lanes_laneSection_center_lane>(e_lane));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lr_lane::t_road_lanes_laneSection_lr_lane(pugi::xml_node node)
{
	if (node.attribute("type")) { type = str2enum<e_laneType>(node.attribute("type").as_string()); } // enum
	if (node.attribute("level")) { level = str2enum<t_bool>(node.attribute("level").as_string()); } // enum
	if (node.child("link")) { m_link = std::make_shared<t_road_lanes_laneSection_lcr_lane_link>(node.child("link")); }
	for (pugi::xml_node e_roadMark = node.child("roadMark"); e_roadMark; e_roadMark= e_roadMark.next_sibling("roadMark"))
	{
		m_roadMarks.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark>(e_roadMark));
	}
	for (pugi::xml_node e_material = node.child("material"); e_material; e_material= e_material.next_sibling("material"))
	{
		m_materials.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_material>(e_material));
	}
	for (pugi::xml_node e_speed = node.child("speed"); e_speed; e_speed= e_speed.next_sibling("speed"))
	{
		m_speeds.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_speed>(e_speed));
	}
	for (pugi::xml_node e_access = node.child("access"); e_access; e_access= e_access.next_sibling("access"))
	{
		m_accesss.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_access>(e_access));
	}
	for (pugi::xml_node e_height = node.child("height"); e_height; e_height= e_height.next_sibling("height"))
	{
		m_heights.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_height>(e_height));
	}
	for (pugi::xml_node e_rule = node.child("rule"); e_rule; e_rule= e_rule.next_sibling("rule"))
	{
		m_rules.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_rule>(e_rule));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
    //std::vector<t_road_lanes_laneSection_lr_lane_U>	m_t_road_lanes_laneSection_lr_lane;
	for (pugi::xml_node e_t_road_lanes_laneSection_lr_lane : node.children())
	{
		m_t_road_lanes_laneSection_lr_lanes.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_U>(e_t_road_lanes_laneSection_lr_lane));
	}
}
t_road_lanes_laneSection_center_lane::t_road_lanes_laneSection_center_lane(pugi::xml_node node)
{
	if (id != node.attribute("id").as_int()) { throw ("id not matching "); }
}
t_road_lanes_laneSection_lcr_lane_link::t_road_lanes_laneSection_lcr_lane_link(pugi::xml_node node)
{
	for (pugi::xml_node e_predecessor = node.child("predecessor"); e_predecessor; e_predecessor= e_predecessor.next_sibling("predecessor"))
	{
		m_predecessors.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>(e_predecessor));
	}
	for (pugi::xml_node e_successor = node.child("successor"); e_successor; e_successor= e_successor.next_sibling("successor"))
	{
		m_successors.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>(e_successor));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor::t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_int(); } //required
}
t_road_lanes_laneSection_lcr_lane_roadMark::t_road_lanes_laneSection_lcr_lane_roadMark(pugi::xml_node node)
{
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
	if (node.attribute("type")) { type = str2enum<e_roadMarkType>(node.attribute("type").as_string()); } // enum
	if (node.attribute("weight")) { weight = str2enum<e_roadMarkWeight>(node.attribute("weight").as_string()); } // enum
	if (node.attribute("color")) { color = str2enum<e_roadMarkColor>(node.attribute("color").as_string()); } // enum
    if (node.attribute("material")) { material = node.attribute("material").as_string(); } //optional
	if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef
	if (node.attribute("laneChange")) { laneChange = str2enum<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(node.attribute("laneChange").as_string()); } // enum
    if (node.attribute("height")) { height = node.attribute("height").as_double(); } //optional
	for (pugi::xml_node e_sway = node.child("sway"); e_sway; e_sway= e_sway.next_sibling("sway"))
	{
		m_sways.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_sway>(e_sway));
	}
	if (node.child("type")) { m_type = std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_type>(node.child("type")); }
	if (node.child("explicit")) { m_explicit = std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>(node.child("explicit")); }
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lcr_lane_roadMark_explicit::t_road_lanes_laneSection_lcr_lane_roadMark_explicit(pugi::xml_node node)
{
	for (pugi::xml_node e_line = node.child("line"); e_line; e_line= e_line.next_sibling("line"))
	{
		m_lines.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>(e_line));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(pugi::xml_node node)
{
    if (node.attribute("length")) { length = node.attribute("length").as_string(); } //required
    if (node.attribute("tOffset")) { tOffset = node.attribute("tOffset").as_double(); } //required
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
	if (node.attribute("rule")) { rule = str2enum<e_roadMarkRule>(node.attribute("rule").as_string()); } // enum
    if (node.attribute("width")) { width = node.attribute("width").as_string(); } //optional
}
t_road_lanes_laneSection_lcr_lane_roadMark_sway::t_road_lanes_laneSection_lcr_lane_roadMark_sway(pugi::xml_node node)
{
	if (node.attribute("ds")) { ds = node.attribute("ds").as_double(); }  //typedef
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
t_road_lanes_laneSection_lcr_lane_roadMark_type::t_road_lanes_laneSection_lcr_lane_roadMark_type(pugi::xml_node node)
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //required
	if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef
	for (pugi::xml_node e_line = node.child("line"); e_line; e_line= e_line.next_sibling("line"))
	{
		m_lines.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>(e_line));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lcr_lane_roadMark_type_line::t_road_lanes_laneSection_lcr_lane_roadMark_type_line(pugi::xml_node node)
{
    if (node.attribute("length")) { length = node.attribute("length").as_string(); } //required
	if (node.attribute("space")) { space = node.attribute("space").as_double(); }  //typedef
    if (node.attribute("tOffset")) { tOffset = node.attribute("tOffset").as_double(); } //required
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
	if (node.attribute("rule")) { rule = str2enum<e_roadMarkRule>(node.attribute("rule").as_string()); } // enum
    if (node.attribute("width")) { width = node.attribute("width").as_string(); } //optional
	if (node.attribute("color")) { color = str2enum<e_roadMarkColor>(node.attribute("color").as_string()); } // enum
}
t_road_lanes_laneSection_left::t_road_lanes_laneSection_left(pugi::xml_node node)
{
	for (pugi::xml_node e_lane = node.child("lane"); e_lane; e_lane= e_lane.next_sibling("lane"))
	{
		m_lanes.push_back(std::make_shared<t_road_lanes_laneSection_left_lane>(e_lane));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_left_lane::t_road_lanes_laneSection_left_lane(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //required
}
t_road_lanes_laneSection_lr_lane_access::t_road_lanes_laneSection_lr_lane_access(pugi::xml_node node)
{
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
	if (node.attribute("rule")) { rule = str2enum<e_road_lanes_laneSection_lr_lane_access_rule>(node.attribute("rule").as_string()); } // enum
	if (node.attribute("restriction")) { restriction = str2enum<e_accessRestrictionType>(node.attribute("restriction").as_string()); } // enum
}
t_road_lanes_laneSection_lr_lane_border::t_road_lanes_laneSection_lr_lane_border(pugi::xml_node node)
{
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
t_road_lanes_laneSection_lr_lane_height::t_road_lanes_laneSection_lr_lane_height(pugi::xml_node node)
{
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
    if (node.attribute("inner")) { inner = node.attribute("inner").as_double(); } //required
    if (node.attribute("outer")) { outer = node.attribute("outer").as_double(); } //required
}
t_road_lanes_laneSection_lr_lane_material::t_road_lanes_laneSection_lr_lane_material(pugi::xml_node node)
{
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
    if (node.attribute("surface")) { surface = node.attribute("surface").as_string(); } //optional
	if (node.attribute("friction")) { friction = node.attribute("friction").as_double(); }  //typedef
	if (node.attribute("roughness")) { roughness = node.attribute("roughness").as_double(); }  //typedef
}
t_road_lanes_laneSection_lr_lane_rule::t_road_lanes_laneSection_lr_lane_rule(pugi::xml_node node)
{
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
    if (node.attribute("value")) { value = node.attribute("value").as_string(); } //required
}
t_road_lanes_laneSection_lr_lane_speed::t_road_lanes_laneSection_lr_lane_speed(pugi::xml_node node)
{
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
	if (node.attribute("max")) { max = node.attribute("max").as_double(); }  //typedef
	if (node.attribute("unit")) { unit = str2enum<e_unitSpeed>(node.attribute("unit").as_string()); } // enum
}
t_road_lanes_laneSection_lr_lane_width::t_road_lanes_laneSection_lr_lane_width(pugi::xml_node node)
{
	if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
t_road_lanes_laneSection_right::t_road_lanes_laneSection_right(pugi::xml_node node)
{
	for (pugi::xml_node e_lane = node.child("lane"); e_lane; e_lane= e_lane.next_sibling("lane"))
	{
		m_lanes.push_back(std::make_shared<t_road_lanes_laneSection_right_lane>(e_lane));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_right_lane::t_road_lanes_laneSection_right_lane(pugi::xml_node node)
{
    if (node.attribute("id")) { id = node.attribute("id").as_int(); } //required
}
t_road_objects_object_laneValidity::t_road_objects_object_laneValidity(pugi::xml_node node)
{
    if (node.attribute("fromLane")) { fromLane = node.attribute("fromLane").as_int(); } //required
    if (node.attribute("toLane")) { toLane = node.attribute("toLane").as_int(); } //required
}
// xs:group -> aliased to group definition
g_additionalData::g_additionalData(pugi::xml_node node)
{
	for (pugi::xml_node e_include = node.child("include"); e_include; e_include= e_include.next_sibling("include"))
	{
		m_includes.push_back(std::make_shared<t_include>(e_include));
	}
	for (pugi::xml_node e_userData = node.child("userData"); e_userData; e_userData= e_userData.next_sibling("userData"))
	{
		m_userDatas.push_back(std::make_shared<t_userData>(e_userData));
	}
	if (node.child("dataQuality")) { m_dataQuality = std::make_shared<t_dataQuality>(node.child("dataQuality")); }
}
OpenDRIVE::OpenDRIVE(pugi::xml_node node)
{
	if (node.child("header")) { m_header = std::make_shared<t_header>(node.child("header")); }
	for (pugi::xml_node e_road = node.child("road"); e_road; e_road= e_road.next_sibling("road"))
	{
		m_roads.push_back(std::make_shared<t_road>(e_road));
	}
	for (pugi::xml_node e_controller = node.child("controller"); e_controller; e_controller= e_controller.next_sibling("controller"))
	{
		m_controllers.push_back(std::make_shared<t_controller>(e_controller));
	}
	for (pugi::xml_node e_junction = node.child("junction"); e_junction; e_junction= e_junction.next_sibling("junction"))
	{
		m_junctions.push_back(std::make_shared<t_junction>(e_junction));
	}
	for (pugi::xml_node e_junctionGroup = node.child("junctionGroup"); e_junctionGroup; e_junctionGroup= e_junctionGroup.next_sibling("junctionGroup"))
	{
		m_junctionGroups.push_back(std::make_shared<t_junctionGroup>(e_junctionGroup));
	}
	for (pugi::xml_node e_station = node.child("station"); e_station; e_station= e_station.next_sibling("station"))
	{
		m_stations.push_back(std::make_shared<t_station>(e_station));
	}
	{ m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
#ifdef __DEBUG__
	std::cout<<*this<<std::endl;
#endif
}
xodr::xodr()
{
}
void xodr::load(std::string xodrfilename )
{
	bool status = m_doc.load_file(xodrfilename.c_str());
	if (status)
	{
		std::cout << "Loaded XML File : " << xodrfilename.c_str()<<"\n";
	}
	else
	{
		std::cout << " Failed to load xml definition file .. " << xodrfilename.c_str() <<"\n";
		return;
	}
	m_root = m_doc.root();
}
void xodr::parse()
{
	try {
		m_OpenDRIVE = std::make_shared<OpenDRIVE>(m_root.child("OpenDRIVE"));
		std::cout << "OpenDRIVE parse successfully " << m_OpenDRIVE<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR :Exception .. " << e.what() << std::endl;
	}
}
xodr::~xodr()
{
}


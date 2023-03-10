//
//  opendrive_17_core.cxx
//  Created by Javed Shaik on Sat Jun 25 09:29:05 2022
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : a5823928-6b52-41d1-8a2e-c2eacc91b160 --
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
void e_unit::save(pugi::xml_attribute attr) 
{
    if (isdefined<e_unitDistance>(unitDistance)) attr = enum2str<e_unitDistance>(unitDistance).c_str();  
    if (isdefined<e_unitSpeed>(unitSpeed)) attr = enum2str<e_unitSpeed>(unitSpeed).c_str();  
    if (isdefined<e_unitMass>(unitMass)) attr = enum2str<e_unitMass>(unitMass).c_str();  
    if (isdefined<e_unitSlope>(unitSlope)) attr = enum2str<e_unitSlope>(unitSlope).c_str();  
}
e_countryCode::e_countryCode(pugi::xml_attribute attr)
{
    if (  (m_e_countryCode_iso3166alpha2 = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (  (m_e_countryCode_iso3166alpha3_deprecated = attr.as_string())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_countryCode_deprecated>(attr.as_string())) { countryCode_deprecated = str2enum<e_countryCode_deprecated>(attr.as_string()); }
}
void e_countryCode::save(pugi::xml_attribute attr) 
{
    if (m_e_countryCode_iso3166alpha2) { attr = m_e_countryCode_iso3166alpha2.value(); }  
    if (m_e_countryCode_iso3166alpha3_deprecated) { attr = m_e_countryCode_iso3166alpha3_deprecated.value(); }  
    if (isdefined<e_countryCode_deprecated>(countryCode_deprecated)) attr = enum2str<e_countryCode_deprecated>(countryCode_deprecated).c_str();  
}
t_maxSpeed::t_maxSpeed(pugi::xml_attribute attr)
{
    if (  (m_t_grEqZero = attr.as_double())  ) { return ; }   // Typedef redirected to read value
    if (isvalid<e_maxSpeedString>(attr.as_string())) { maxSpeedString = str2enum<e_maxSpeedString>(attr.as_string()); }
}
void t_maxSpeed::save(pugi::xml_attribute attr) 
{
    if (m_t_grEqZero) { attr = m_t_grEqZero.value(); }  
    if (isdefined<e_maxSpeedString>(maxSpeedString)) attr = enum2str<e_maxSpeedString>(maxSpeedString).c_str();  
}
t_road_objects_object_outlines_outline_U::t_road_objects_object_outlines_outline_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"cornerRoad")==0)
    {
        m_cornerRoads.push_back(std::make_shared<t_road_objects_object_outlines_outline_cornerRoad>(node));
    }
    // for (pugi::xml_node e_cornerRoad : node.children())
    // {
    // 	if (strcmp(node.name(),"cornerRoad")==0)
    // 	{
    // 		m_cornerRoads.push_back(std::make_shared<t_road_objects_object_outlines_outline_cornerRoad>(e_cornerRoad)); 
    // 	}
    // }
    if (strcmp(node.name(),"cornerLocal")==0)
    {
        m_cornerLocals.push_back(std::make_shared<t_road_objects_object_outlines_outline_cornerLocal>(node));
    }
    // for (pugi::xml_node e_cornerLocal : node.children())
    // {
    // 	if (strcmp(node.name(),"cornerLocal")==0)
    // 	{
    // 		m_cornerLocals.push_back(std::make_shared<t_road_objects_object_outlines_outline_cornerLocal>(e_cornerLocal)); 
    // 	}
    // }
}
void t_road_objects_object_outlines_outline_U::save(pugi::xml_node node)
{
    for (std::shared_ptr<t_road_objects_object_outlines_outline_cornerRoad> m_cornerRoad : m_cornerRoads ){ m_cornerRoad->save(node.append_child("cornerRoad")); } 
    for (std::shared_ptr<t_road_objects_object_outlines_outline_cornerLocal> m_cornerLocal : m_cornerLocals ){ m_cornerLocal->save(node.append_child("cornerLocal")); } 
}
t_road_signals_signal_U::t_road_signals_signal_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"positionInertial")==0) { m_positionInertial = std::make_shared<t_road_signals_signal_positionInertial>(node); }  
    if (strcmp(node.name(),"positionRoad")==0) { m_positionRoad = std::make_shared<t_road_signals_signal_positionRoad>(node); }  
}
void t_road_signals_signal_U::save(pugi::xml_node node)
{
    if ( m_positionInertial ) { m_positionInertial->save(node.append_child("positionInertial")); }  
    if ( m_positionRoad ) { m_positionRoad->save(node.append_child("positionRoad")); }  
}
t_road_planView_geometry_U::t_road_planView_geometry_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"line")==0) { m_line = std::make_shared<t_road_planView_geometry_line>(node); }  
    if (strcmp(node.name(),"spiral")==0) { m_spiral = std::make_shared<t_road_planView_geometry_spiral>(node); }  
    if (strcmp(node.name(),"arc")==0) { m_arc = std::make_shared<t_road_planView_geometry_arc>(node); }  
    if (strcmp(node.name(),"poly3")==0) { m_poly3 = std::make_shared<t_road_planView_geometry_poly3>(node); }  
    if (strcmp(node.name(),"paramPoly3")==0) { m_paramPoly3 = std::make_shared<t_road_planView_geometry_paramPoly3>(node); }  
}
void t_road_planView_geometry_U::save(pugi::xml_node node)
{
    if ( m_line ) { m_line->save(node.append_child("line")); }  
    if ( m_spiral ) { m_spiral->save(node.append_child("spiral")); }  
    if ( m_arc ) { m_arc->save(node.append_child("arc")); }  
    if ( m_poly3 ) { m_poly3->save(node.append_child("poly3")); }  
    if ( m_paramPoly3 ) { m_paramPoly3->save(node.append_child("paramPoly3")); }  
}
t_road_lanes_laneSection_lr_lane_U::t_road_lanes_laneSection_lr_lane_U(pugi::xml_node node)
{
    if (strcmp(node.name(),"border")==0)
    {
        m_borders.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_border>(node));
    }
    // for (pugi::xml_node e_border : node.children())
    // {
    // 	if (strcmp(node.name(),"border")==0)
    // 	{
    // 		m_borders.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_border>(e_border)); 
    // 	}
    // }
    if (strcmp(node.name(),"width")==0)
    {
        m_widths.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_width>(node));
    }
    // for (pugi::xml_node e_width : node.children())
    // {
    // 	if (strcmp(node.name(),"width")==0)
    // 	{
    // 		m_widths.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_width>(e_width)); 
    // 	}
    // }
}
void t_road_lanes_laneSection_lr_lane_U::save(pugi::xml_node node)
{
    for (std::shared_ptr<t_road_lanes_laneSection_lr_lane_border> m_border : m_borders ){ m_border->save(node.append_child("border")); } 
    for (std::shared_ptr<t_road_lanes_laneSection_lr_lane_width> m_width : m_widths ){ m_width->save(node.append_child("width")); } 
}
t_dataQuality::t_dataQuality(pugi::xml_node node) 
{
    if (node.child("error")) { m_error = std::make_shared<t_dataQuality_Error>(node.child("error")); }  
    if (node.child("rawData")) { m_rawData = std::make_shared<t_dataQuality_RawData>(node.child("rawData")); }  
}
void t_dataQuality::save(pugi::xml_node node)
{
    if (m_error ) { m_error->save(node.append_child("error")); }   
    if (m_rawData ) { m_rawData->save(node.append_child("rawData")); }   
}
t_dataQuality_Error::t_dataQuality_Error(pugi::xml_node node) 
{
    if (node.attribute("xyAbsolute")) { xyAbsolute = node.attribute("xyAbsolute").as_double(); } //required
    if (node.attribute("xyRelative")) { xyRelative = node.attribute("xyRelative").as_double(); } //required
    if (node.attribute("zAbsolute")) { zAbsolute = node.attribute("zAbsolute").as_double(); } //required
    if (node.attribute("zRelative")) { zRelative = node.attribute("zRelative").as_double(); } //required
}
void t_dataQuality_Error::save(pugi::xml_node node)
{
    node.append_attribute("xyAbsolute") = to_str(xyAbsolute).c_str();
    node.append_attribute("xyRelative") = to_str(xyRelative).c_str();
    node.append_attribute("zAbsolute") = to_str(zAbsolute).c_str();
    node.append_attribute("zRelative") = to_str(zRelative).c_str();
}
t_dataQuality_RawData::t_dataQuality_RawData(pugi::xml_node node) 
{
    if (node.attribute("date")) { date = node.attribute("date").as_string(); } //required
    if (node.attribute("postProcessing")) { postProcessing = str2enum<e_dataQuality_RawData_PostProcessing>(node.attribute("postProcessing").as_string()); } // enum
    if (node.attribute("postProcessingComment")) { postProcessingComment = node.attribute("postProcessingComment").as_string(); } //optional
    if (node.attribute("source")) { source = str2enum<e_dataQuality_RawData_Source>(node.attribute("source").as_string()); } // enum
    if (node.attribute("sourceComment")) { sourceComment = node.attribute("sourceComment").as_string(); } //optional
}
void t_dataQuality_RawData::save(pugi::xml_node node)
{
    node.append_attribute("date") = to_str(date).c_str();
    if (isdefined<e_dataQuality_RawData_PostProcessing>(postProcessing)) node.append_attribute("postProcessing") = enum2str<e_dataQuality_RawData_PostProcessing>(postProcessing).c_str(); 
    node.append_attribute("postProcessingComment") = to_str(postProcessingComment).c_str();
    if (isdefined<e_dataQuality_RawData_Source>(source)) node.append_attribute("source") = enum2str<e_dataQuality_RawData_Source>(source).c_str(); 
    node.append_attribute("sourceComment") = to_str(sourceComment).c_str();
}
t_header::t_header(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("date")) { date = node.attribute("date").as_string(); } //optional
    if (node.attribute("east")) { east = node.attribute("east").as_double(); } //optional
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("north")) { north = node.attribute("north").as_double(); } //optional
    if (revMajor != node.attribute("revMajor").as_int()) { throw ("revMajor not matching "); }
    if (node.attribute("revMinor")) { revMinor = node.attribute("revMinor").as_int(); } //required
    if (node.attribute("south")) { south = node.attribute("south").as_double(); } //optional
    if (node.attribute("vendor")) { vendor = node.attribute("vendor").as_string(); } //optional
    if (node.attribute("version")) { version = node.attribute("version").as_string(); } //optional
    if (node.attribute("west")) { west = node.attribute("west").as_double(); } //optional
    if (node.child("geoReference")) { m_geoReference = std::make_shared<t_header_GeoReference>(node.child("geoReference")); }  
    if (node.child("offset")) { m_offset = std::make_shared<t_header_Offset>(node.child("offset")); }  
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_header::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("date") = to_str(date).c_str();
    node.append_attribute("east") = to_str(east).c_str();
    node.append_attribute("name") = to_str(name).c_str();
    node.append_attribute("north") = to_str(north).c_str();
    node.append_attribute("revMajor") = to_str(revMajor).c_str();
    node.append_attribute("revMinor") = to_str(revMinor).c_str();
    node.append_attribute("south") = to_str(south).c_str();
    node.append_attribute("vendor") = to_str(vendor).c_str();
    node.append_attribute("version") = to_str(version).c_str();
    node.append_attribute("west") = to_str(west).c_str();
    if (m_geoReference ) { m_geoReference->save(node.append_child("geoReference")); }   
    if (m_offset ) { m_offset->save(node.append_child("offset")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_header_GeoReference::t_header_GeoReference(pugi::xml_node node) 
{
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_header_GeoReference::save(pugi::xml_node node)
{
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_header_Offset::t_header_Offset(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("hdg")) { hdg = node.attribute("hdg").as_double(); } //required
    if (node.attribute("x")) { x = node.attribute("x").as_double(); } //required
    if (node.attribute("y")) { y = node.attribute("y").as_double(); } //required
    if (node.attribute("z")) { z = node.attribute("z").as_double(); } //required
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_header_Offset::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("hdg") = to_str(hdg).c_str();
    node.append_attribute("x") = to_str(x).c_str();
    node.append_attribute("y") = to_str(y).c_str();
    node.append_attribute("z") = to_str(z).c_str();
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_include::t_include(pugi::xml_node node) 
{
    if (node.attribute("file")) { file = node.attribute("file").as_string(); } //required
}
void t_include::save(pugi::xml_node node)
{
    node.append_attribute("file") = to_str(file).c_str();
}
t_userData::t_userData(pugi::xml_node node) 
{
    if (node.attribute("code")) { code = node.attribute("code").as_string(); } //required
    if (node.attribute("value")) { value = node.attribute("value").as_string(); } //optional
}
void t_userData::save(pugi::xml_node node)
{
    node.append_attribute("code") = to_str(code).c_str();
    node.append_attribute("value") = to_str(value).c_str();
}
t_road_objects::t_road_objects(pugi::xml_node node)  : _OpenDriveElement(node) 
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
void t_road_objects::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_objects_object> m_object : m_objects ){ m_object->save(node.append_child("object")); } 
    for (std::shared_ptr<t_road_objects_objectReference> m_objectReference : m_objectReferences ){ m_objectReference->save(node.append_child("objectReference")); } 
    for (std::shared_ptr<t_road_objects_tunnel> m_tunnel : m_tunnels ){ m_tunnel->save(node.append_child("tunnel")); } 
    for (std::shared_ptr<t_road_objects_bridge> m_bridge : m_bridges ){ m_bridge->save(node.append_child("bridge")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_bridge::t_road_objects_bridge(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef 
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("type")) { type = str2enum<e_bridgeType>(node.attribute("type").as_string()); } // enum
    for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
    {
        m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_bridge::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("length") = length.value(); 
    node.append_attribute("name") = to_str(name).c_str();
    node.append_attribute("s") = s.value(); 
    if (isdefined<e_bridgeType>(type)) node.append_attribute("type") = enum2str<e_bridgeType>(type).c_str(); 
    for (std::shared_ptr<t_road_objects_object_laneValidity> m_validity : m_validitys ){ m_validity->save(node.append_child("validity")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object::t_road_objects_object(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("dynamic")) { dynamic = str2enum<t_yesNo>(node.attribute("dynamic").as_string()); } // enum
    if (node.attribute("hdg")) { hdg = node.attribute("hdg").as_double(); } //optional
    if (node.attribute("height")) { height = node.attribute("height").as_double(); }  //typedef 
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef 
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
    if (node.attribute("perpToRoad")) { perpToRoad = str2enum<t_bool>(node.attribute("perpToRoad").as_string()); } // enum
    if (node.attribute("pitch")) { pitch = node.attribute("pitch").as_double(); } //optional
    if (node.attribute("radius")) { radius = node.attribute("radius").as_double(); }  //typedef 
    if (node.attribute("roll")) { roll = node.attribute("roll").as_double(); } //optional
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("subtype")) { subtype = node.attribute("subtype").as_string(); } //optional
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("type")) { type = str2enum<e_objectType>(node.attribute("type").as_string()); } // enum
    if (node.attribute("validLength")) { validLength = node.attribute("validLength").as_double(); }  //typedef 
    if (node.attribute("width")) { width = node.attribute("width").as_double(); } //optional
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //required
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
    if (node.child("surface")) { m_surface = std::make_shared<t_road_objects_object_surface>(node.child("surface")); }  
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_object::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<t_yesNo>(dynamic)) node.append_attribute("dynamic") = enum2str<t_yesNo>(dynamic).c_str(); 
    node.append_attribute("hdg") = to_str(hdg).c_str();
    node.append_attribute("height") = height.value(); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("length") = length.value(); 
    node.append_attribute("name") = to_str(name).c_str();
    if (isdefined<e_orientation>(orientation)) node.append_attribute("orientation") = enum2str<e_orientation>(orientation).c_str(); 
    if (isdefined<t_bool>(perpToRoad)) node.append_attribute("perpToRoad") = enum2str<t_bool>(perpToRoad).c_str(); 
    node.append_attribute("pitch") = to_str(pitch).c_str();
    node.append_attribute("radius") = radius.value(); 
    node.append_attribute("roll") = to_str(roll).c_str();
    node.append_attribute("s") = s.value(); 
    node.append_attribute("subtype") = to_str(subtype).c_str();
    node.append_attribute("t") = to_str(t).c_str();
    if (isdefined<e_objectType>(type)) node.append_attribute("type") = enum2str<e_objectType>(type).c_str(); 
    node.append_attribute("validLength") = validLength.value(); 
    node.append_attribute("width") = to_str(width).c_str();
    node.append_attribute("zOffset") = to_str(zOffset).c_str();
    for (std::shared_ptr<t_road_objects_object_repeat> m_repeat : m_repeats ){ m_repeat->save(node.append_child("repeat")); } 
    if (m_outline ) { m_outline->save(node.append_child("outline")); }   
    if (m_outlines ) { m_outlines->save(node.append_child("outlines")); }   
    for (std::shared_ptr<t_road_objects_object_material> m_material : m_materials ){ m_material->save(node.append_child("material")); } 
    for (std::shared_ptr<t_road_objects_object_laneValidity> m_validity : m_validitys ){ m_validity->save(node.append_child("validity")); } 
    if (m_parkingSpace ) { m_parkingSpace->save(node.append_child("parkingSpace")); }   
    if (m_markings ) { m_markings->save(node.append_child("markings")); }   
    if (m_borders ) { m_borders->save(node.append_child("borders")); }   
    if (m_surface ) { m_surface->save(node.append_child("surface")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_borders::t_road_objects_object_borders(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_border = node.child("border"); e_border; e_border= e_border.next_sibling("border"))
    {
        m_borders.push_back(std::make_shared<t_road_objects_object_borders_border>(e_border));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_object_borders::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_objects_object_borders_border> m_border : m_borders ){ m_border->save(node.append_child("border")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_borders_border::t_road_objects_object_borders_border(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("outlineId")) { outlineId = node.attribute("outlineId").as_ullong(); } //required
    if (node.attribute("type")) { type = str2enum<e_borderType>(node.attribute("type").as_string()); } // enum
    if (node.attribute("useCompleteOutline")) { useCompleteOutline = str2enum<t_bool>(node.attribute("useCompleteOutline").as_string()); } // enum
    if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef 
    for (pugi::xml_node e_cornerReference = node.child("cornerReference"); e_cornerReference; e_cornerReference= e_cornerReference.next_sibling("cornerReference"))
    {
        m_cornerReferences.push_back(std::make_shared<t_road_objects_object_markings_marking_cornerReference>(e_cornerReference));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_object_borders_border::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("outlineId") = to_str(outlineId).c_str();
    if (isdefined<e_borderType>(type)) node.append_attribute("type") = enum2str<e_borderType>(type).c_str(); 
    if (isdefined<t_bool>(useCompleteOutline)) node.append_attribute("useCompleteOutline") = enum2str<t_bool>(useCompleteOutline).c_str(); 
    node.append_attribute("width") = width.value(); 
    for (std::shared_ptr<t_road_objects_object_markings_marking_cornerReference> m_cornerReference : m_cornerReferences ){ m_cornerReference->save(node.append_child("cornerReference")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_markings::t_road_objects_object_markings(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_marking = node.child("marking"); e_marking; e_marking= e_marking.next_sibling("marking"))
    {
        m_markings.push_back(std::make_shared<t_road_objects_object_markings_marking>(e_marking));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_object_markings::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_objects_object_markings_marking> m_marking : m_markings ){ m_marking->save(node.append_child("marking")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_markings_marking::t_road_objects_object_markings_marking(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("color")) { color = str2enum<e_roadMarkColor>(node.attribute("color").as_string()); } // enum
    if (node.attribute("lineLength")) { lineLength = node.attribute("lineLength").as_double(); }  //typedef 
    if (node.attribute("side")) { side = str2enum<e_sideType>(node.attribute("side").as_string()); } // enum
    if (node.attribute("spaceLength")) { spaceLength = node.attribute("spaceLength").as_double(); }  //typedef 
    if (node.attribute("startOffset")) { startOffset = node.attribute("startOffset").as_double(); } //required
    if (node.attribute("stopOffset")) { stopOffset = node.attribute("stopOffset").as_double(); } //required
    if (node.attribute("weight")) { weight = str2enum<e_roadMarkWeight>(node.attribute("weight").as_string()); } // enum
    if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef 
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); }  //typedef 
    for (pugi::xml_node e_cornerReference = node.child("cornerReference"); e_cornerReference; e_cornerReference= e_cornerReference.next_sibling("cornerReference"))
    {
        m_cornerReferences.push_back(std::make_shared<t_road_objects_object_markings_marking_cornerReference>(e_cornerReference));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_object_markings_marking::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_roadMarkColor>(color)) node.append_attribute("color") = enum2str<e_roadMarkColor>(color).c_str(); 
    node.append_attribute("lineLength") = lineLength.value(); 
    if (isdefined<e_sideType>(side)) node.append_attribute("side") = enum2str<e_sideType>(side).c_str(); 
    node.append_attribute("spaceLength") = spaceLength.value(); 
    node.append_attribute("startOffset") = to_str(startOffset).c_str();
    node.append_attribute("stopOffset") = to_str(stopOffset).c_str();
    if (isdefined<e_roadMarkWeight>(weight)) node.append_attribute("weight") = enum2str<e_roadMarkWeight>(weight).c_str(); 
    node.append_attribute("width") = width.value(); 
    node.append_attribute("zOffset") = zOffset.value(); 
    for (std::shared_ptr<t_road_objects_object_markings_marking_cornerReference> m_cornerReference : m_cornerReferences ){ m_cornerReference->save(node.append_child("cornerReference")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_markings_marking_cornerReference::t_road_objects_object_markings_marking_cornerReference(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //required
}
void t_road_objects_object_markings_marking_cornerReference::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
}
t_road_objects_object_material::t_road_objects_object_material(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("friction")) { friction = node.attribute("friction").as_double(); }  //typedef 
    if (node.attribute("roughness")) { roughness = node.attribute("roughness").as_double(); }  //typedef 
    if (node.attribute("surface")) { surface = node.attribute("surface").as_string(); } //optional
}
void t_road_objects_object_material::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("friction") = friction.value(); 
    node.append_attribute("roughness") = roughness.value(); 
    node.append_attribute("surface") = to_str(surface).c_str();
}
t_road_objects_object_outlines::t_road_objects_object_outlines(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_outline = node.child("outline"); e_outline; e_outline= e_outline.next_sibling("outline"))
    {
        m_outlines.push_back(std::make_shared<t_road_objects_object_outlines_outline>(e_outline));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_object_outlines::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_objects_object_outlines_outline> m_outline : m_outlines ){ m_outline->save(node.append_child("outline")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_outlines_outline::t_road_objects_object_outlines_outline(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("closed")) { closed = str2enum<t_bool>(node.attribute("closed").as_string()); } // enum
    if (node.attribute("fillType")) { fillType = str2enum<e_outlineFillType>(node.attribute("fillType").as_string()); } // enum
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //optional
    if (node.attribute("laneType")) { laneType = str2enum<e_laneType>(node.attribute("laneType").as_string()); } // enum
    if (node.attribute("outer")) { outer = str2enum<t_bool>(node.attribute("outer").as_string()); } // enum
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
    if (node.first_child()) { m_t_road_objects_object_outlines_outline = std::make_shared<t_road_objects_object_outlines_outline_U>(node.first_child()); }  
}
void t_road_objects_object_outlines_outline::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<t_bool>(closed)) node.append_attribute("closed") = enum2str<t_bool>(closed).c_str(); 
    if (isdefined<e_outlineFillType>(fillType)) node.append_attribute("fillType") = enum2str<e_outlineFillType>(fillType).c_str(); 
    node.append_attribute("id") = to_str(id).c_str();
    if (isdefined<e_laneType>(laneType)) node.append_attribute("laneType") = enum2str<e_laneType>(laneType).c_str(); 
    if (isdefined<t_bool>(outer)) node.append_attribute("outer") = enum2str<t_bool>(outer).c_str(); 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
    if (m_t_road_objects_object_outlines_outline) { m_t_road_objects_object_outlines_outline->save(node); }  
}
t_road_objects_object_outlines_outline_cornerLocal::t_road_objects_object_outlines_outline_cornerLocal(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("height")) { height = node.attribute("height").as_double(); }  //typedef 
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //optional
    if (node.attribute("u")) { u = node.attribute("u").as_double(); } //required
    if (node.attribute("v")) { v = node.attribute("v").as_double(); } //required
    if (node.attribute("z")) { z = node.attribute("z").as_double(); } //required
}
void t_road_objects_object_outlines_outline_cornerLocal::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("height") = height.value(); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("u") = to_str(u).c_str();
    node.append_attribute("v") = to_str(v).c_str();
    node.append_attribute("z") = to_str(z).c_str();
}
t_road_objects_object_outlines_outline_cornerRoad::t_road_objects_object_outlines_outline_cornerRoad(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("dz")) { dz = node.attribute("dz").as_double(); } //required
    if (node.attribute("height")) { height = node.attribute("height").as_double(); }  //typedef 
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //optional
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
}
void t_road_objects_object_outlines_outline_cornerRoad::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("dz") = to_str(dz).c_str();
    node.append_attribute("height") = height.value(); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("s") = s.value(); 
    node.append_attribute("t") = to_str(t).c_str();
}
t_road_objects_object_parkingSpace::t_road_objects_object_parkingSpace(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("access")) { access = str2enum<e_road_objects_object_parkingSpace_access>(node.attribute("access").as_string()); } // enum
    if (node.attribute("restrictions")) { restrictions = node.attribute("restrictions").as_string(); } //optional
}
void t_road_objects_object_parkingSpace::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_road_objects_object_parkingSpace_access>(access)) node.append_attribute("access") = enum2str<e_road_objects_object_parkingSpace_access>(access).c_str(); 
    node.append_attribute("restrictions") = to_str(restrictions).c_str();
}
t_road_objects_object_repeat::t_road_objects_object_repeat(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("distance")) { distance = node.attribute("distance").as_double(); }  //typedef 
    if (node.attribute("heightEnd")) { heightEnd = node.attribute("heightEnd").as_double(); }  //typedef 
    if (node.attribute("heightStart")) { heightStart = node.attribute("heightStart").as_double(); }  //typedef 
    if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef 
    if (node.attribute("lengthEnd")) { lengthEnd = node.attribute("lengthEnd").as_double(); }  //typedef 
    if (node.attribute("lengthStart")) { lengthStart = node.attribute("lengthStart").as_double(); }  //typedef 
    if (node.attribute("radiusEnd")) { radiusEnd = node.attribute("radiusEnd").as_double(); }  //typedef 
    if (node.attribute("radiusStart")) { radiusStart = node.attribute("radiusStart").as_double(); }  //typedef 
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("tEnd")) { tEnd = node.attribute("tEnd").as_double(); } //required
    if (node.attribute("tStart")) { tStart = node.attribute("tStart").as_double(); } //required
    if (node.attribute("widthEnd")) { widthEnd = node.attribute("widthEnd").as_double(); }  //typedef 
    if (node.attribute("widthStart")) { widthStart = node.attribute("widthStart").as_double(); }  //typedef 
    if (node.attribute("zOffsetEnd")) { zOffsetEnd = node.attribute("zOffsetEnd").as_double(); } //required
    if (node.attribute("zOffsetStart")) { zOffsetStart = node.attribute("zOffsetStart").as_double(); } //required
}
void t_road_objects_object_repeat::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("distance") = distance.value(); 
    node.append_attribute("heightEnd") = heightEnd.value(); 
    node.append_attribute("heightStart") = heightStart.value(); 
    node.append_attribute("length") = length.value(); 
    node.append_attribute("lengthEnd") = lengthEnd.value(); 
    node.append_attribute("lengthStart") = lengthStart.value(); 
    node.append_attribute("radiusEnd") = radiusEnd.value(); 
    node.append_attribute("radiusStart") = radiusStart.value(); 
    node.append_attribute("s") = s.value(); 
    node.append_attribute("tEnd") = to_str(tEnd).c_str();
    node.append_attribute("tStart") = to_str(tStart).c_str();
    node.append_attribute("widthEnd") = widthEnd.value(); 
    node.append_attribute("widthStart") = widthStart.value(); 
    node.append_attribute("zOffsetEnd") = to_str(zOffsetEnd).c_str();
    node.append_attribute("zOffsetStart") = to_str(zOffsetStart).c_str();
}
t_road_objects_object_surface::t_road_objects_object_surface(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.child("CRG")) { m_CRG = std::make_shared<t_road_objects_object_surface_CRG>(node.child("CRG")); }  
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_object_surface::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (m_CRG ) { m_CRG->save(node.append_child("CRG")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_object_surface_CRG::t_road_objects_object_surface_CRG(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("file")) { file = node.attribute("file").as_string(); } //optional
    if (node.attribute("hideRoadSurfaceCRG")) { hideRoadSurfaceCRG = str2enum<t_bool>(node.attribute("hideRoadSurfaceCRG").as_string()); } // enum
    if (node.attribute("zScale")) { zScale = node.attribute("zScale").as_double(); } //optional
}
void t_road_objects_object_surface_CRG::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("file") = to_str(file).c_str();
    if (isdefined<t_bool>(hideRoadSurfaceCRG)) node.append_attribute("hideRoadSurfaceCRG") = enum2str<t_bool>(hideRoadSurfaceCRG).c_str(); 
    node.append_attribute("zScale") = to_str(zScale).c_str();
}
t_road_objects_objectReference::t_road_objects_objectReference(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("validLength")) { validLength = node.attribute("validLength").as_double(); }  //typedef 
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //optional
    for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
    {
        m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_objectReference::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    if (isdefined<e_orientation>(orientation)) node.append_attribute("orientation") = enum2str<e_orientation>(orientation).c_str(); 
    node.append_attribute("s") = s.value(); 
    node.append_attribute("t") = to_str(t).c_str();
    node.append_attribute("validLength") = validLength.value(); 
    node.append_attribute("zOffset") = to_str(zOffset).c_str();
    for (std::shared_ptr<t_road_objects_object_laneValidity> m_validity : m_validitys ){ m_validity->save(node.append_child("validity")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_objects_tunnel::t_road_objects_tunnel(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("daylight")) { daylight = node.attribute("daylight").as_double(); }  //typedef 
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef 
    if (node.attribute("lighting")) { lighting = node.attribute("lighting").as_double(); }  //typedef 
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("type")) { type = str2enum<e_tunnelType>(node.attribute("type").as_string()); } // enum
    for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
    {
        m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_objects_tunnel::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("daylight") = daylight.value(); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("length") = length.value(); 
    node.append_attribute("lighting") = lighting.value(); 
    node.append_attribute("name") = to_str(name).c_str();
    node.append_attribute("s") = s.value(); 
    if (isdefined<e_tunnelType>(type)) node.append_attribute("type") = enum2str<e_tunnelType>(type).c_str(); 
    for (std::shared_ptr<t_road_objects_object_laneValidity> m_validity : m_validitys ){ m_validity->save(node.append_child("validity")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_railroad::t_road_railroad(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_switch = node.child("switch"); e_switch; e_switch= e_switch.next_sibling("switch"))
    {
        m_switchs.push_back(std::make_shared<t_road_railroad_switch>(e_switch));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_railroad::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_railroad_switch> m_switch : m_switchs ){ m_switch->save(node.append_child("switch")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_railroad_switch::t_road_railroad_switch(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //required
    if (node.attribute("position")) { position = str2enum<e_road_railroad_switch_position>(node.attribute("position").as_string()); } // enum
    if (node.child("mainTrack")) { m_mainTrack = std::make_shared<t_road_railroad_switch_mainTrack>(node.child("mainTrack")); }  
    if (node.child("sideTrack")) { m_sideTrack = std::make_shared<t_road_railroad_switch_sideTrack>(node.child("sideTrack")); }  
    if (node.child("partner")) { m_partner = std::make_shared<t_road_railroad_switch_partner>(node.child("partner")); }  
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_railroad_switch::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("name") = to_str(name).c_str();
    if (isdefined<e_road_railroad_switch_position>(position)) node.append_attribute("position") = enum2str<e_road_railroad_switch_position>(position).c_str(); 
    if (m_mainTrack ) { m_mainTrack->save(node.append_child("mainTrack")); }   
    if (m_sideTrack ) { m_sideTrack->save(node.append_child("sideTrack")); }   
    if (m_partner ) { m_partner->save(node.append_child("partner")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_railroad_switch_mainTrack::t_road_railroad_switch_mainTrack(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("dir")) { dir = str2enum<e_elementDir>(node.attribute("dir").as_string()); } // enum
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
}
void t_road_railroad_switch_mainTrack::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_elementDir>(dir)) node.append_attribute("dir") = enum2str<e_elementDir>(dir).c_str(); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("s") = s.value(); 
}
t_road_railroad_switch_partner::t_road_railroad_switch_partner(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
}
void t_road_railroad_switch_partner::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("name") = to_str(name).c_str();
}
t_road_railroad_switch_sideTrack::t_road_railroad_switch_sideTrack(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("dir")) { dir = str2enum<e_elementDir>(node.attribute("dir").as_string()); } // enum
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
}
void t_road_railroad_switch_sideTrack::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_elementDir>(dir)) node.append_attribute("dir") = enum2str<e_elementDir>(dir).c_str(); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("s") = s.value(); 
}
t_station::t_station(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //required
    if (node.attribute("type")) { type = str2enum<e_station_type>(node.attribute("type").as_string()); } // enum
    for (pugi::xml_node e_platform = node.child("platform"); e_platform; e_platform= e_platform.next_sibling("platform"))
    {
        m_platforms.push_back(std::make_shared<t_station_platform>(e_platform));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_station::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("name") = to_str(name).c_str();
    if (isdefined<e_station_type>(type)) node.append_attribute("type") = enum2str<e_station_type>(type).c_str(); 
    for (std::shared_ptr<t_station_platform> m_platform : m_platforms ){ m_platform->save(node.append_child("platform")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_station_platform::t_station_platform(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    for (pugi::xml_node e_segment = node.child("segment"); e_segment; e_segment= e_segment.next_sibling("segment"))
    {
        m_segments.push_back(std::make_shared<t_station_platform_segment>(e_segment));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_station_platform::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("name") = to_str(name).c_str();
    for (std::shared_ptr<t_station_platform_segment> m_segment : m_segments ){ m_segment->save(node.append_child("segment")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_station_platform_segment::t_station_platform_segment(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("roadId")) { roadId = node.attribute("roadId").as_string(); } //required
    if (node.attribute("sEnd")) { sEnd = node.attribute("sEnd").as_double(); }  //typedef 
    if (node.attribute("side")) { side = str2enum<e_station_platform_segment_side>(node.attribute("side").as_string()); } // enum
    if (node.attribute("sStart")) { sStart = node.attribute("sStart").as_double(); }  //typedef 
}
void t_station_platform_segment::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("roadId") = to_str(roadId).c_str();
    node.append_attribute("sEnd") = sEnd.value(); 
    if (isdefined<e_station_platform_segment_side>(side)) node.append_attribute("side") = enum2str<e_station_platform_segment_side>(side).c_str(); 
    node.append_attribute("sStart") = sStart.value(); 
}
t_junction::t_junction(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("mainRoad")) { mainRoad = node.attribute("mainRoad").as_string(); } //optional
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
    if (node.attribute("sEnd")) { sEnd = node.attribute("sEnd").as_double(); }  //typedef 
    if (node.attribute("sStart")) { sStart = node.attribute("sStart").as_double(); }  //typedef 
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
void t_junction::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("mainRoad") = to_str(mainRoad).c_str();
    node.append_attribute("name") = to_str(name).c_str();
    if (isdefined<e_orientation>(orientation)) node.append_attribute("orientation") = enum2str<e_orientation>(orientation).c_str(); 
    node.append_attribute("sEnd") = sEnd.value(); 
    node.append_attribute("sStart") = sStart.value(); 
    if (isdefined<e_junction_type>(type)) node.append_attribute("type") = enum2str<e_junction_type>(type).c_str(); 
    for (std::shared_ptr<t_junction_connection> m_connection : m_connections ){ m_connection->save(node.append_child("connection")); } 
    for (std::shared_ptr<t_junction_priority> m_priority : m_prioritys ){ m_priority->save(node.append_child("priority")); } 
    for (std::shared_ptr<t_junction_controller> m_controller : m_controllers ){ m_controller->save(node.append_child("controller")); } 
    if (m_surface ) { m_surface->save(node.append_child("surface")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_junction_connection::t_junction_connection(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("connectingRoad")) { connectingRoad = node.attribute("connectingRoad").as_string(); } //optional
    if (node.attribute("contactPoint")) { contactPoint = str2enum<e_contactPoint>(node.attribute("contactPoint").as_string()); } // enum
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("incomingRoad")) { incomingRoad = node.attribute("incomingRoad").as_string(); } //optional
    if (node.attribute("linkedRoad")) { linkedRoad = node.attribute("linkedRoad").as_string(); } //optional
    if (node.attribute("type")) { type = str2enum<e_connection_type>(node.attribute("type").as_string()); } // enum
    if (node.child("predecessor")) { m_predecessor = std::make_shared<t_junction_predecessorSuccessor>(node.child("predecessor")); }  
    if (node.child("successor")) { m_successor = std::make_shared<t_junction_predecessorSuccessor>(node.child("successor")); }  
    for (pugi::xml_node e_laneLink = node.child("laneLink"); e_laneLink; e_laneLink= e_laneLink.next_sibling("laneLink"))
    {
        m_laneLinks.push_back(std::make_shared<t_junction_connection_laneLink>(e_laneLink));
    }
}
void t_junction_connection::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("connectingRoad") = to_str(connectingRoad).c_str();
    if (isdefined<e_contactPoint>(contactPoint)) node.append_attribute("contactPoint") = enum2str<e_contactPoint>(contactPoint).c_str(); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("incomingRoad") = to_str(incomingRoad).c_str();
    node.append_attribute("linkedRoad") = to_str(linkedRoad).c_str();
    if (isdefined<e_connection_type>(type)) node.append_attribute("type") = enum2str<e_connection_type>(type).c_str(); 
    if (m_predecessor ) { m_predecessor->save(node.append_child("predecessor")); }   
    if (m_successor ) { m_successor->save(node.append_child("successor")); }   
    for (std::shared_ptr<t_junction_connection_laneLink> m_laneLink : m_laneLinks ){ m_laneLink->save(node.append_child("laneLink")); } 
}
t_junction_connection_laneLink::t_junction_connection_laneLink(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("from")) { from = node.attribute("from").as_int(); } //required
    if (node.attribute("to")) { to = node.attribute("to").as_int(); } //required
}
void t_junction_connection_laneLink::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("from") = to_str(from).c_str();
    node.append_attribute("to") = to_str(to).c_str();
}
t_junction_controller::t_junction_controller(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("sequence")) { sequence = node.attribute("sequence").as_ullong(); } //optional
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //optional
}
void t_junction_controller::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("sequence") = to_str(sequence).c_str();
    node.append_attribute("type") = to_str(type).c_str();
}
t_junction_predecessorSuccessor::t_junction_predecessorSuccessor(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("elementDir")) { elementDir = str2enum<e_elementDir>(node.attribute("elementDir").as_string()); } // enum
    if (node.attribute("elementId")) { elementId = node.attribute("elementId").as_string(); } //required
    if (node.attribute("elementS")) { elementS = node.attribute("elementS").as_double(); }  //typedef 
    if (elementType != node.attribute("elementType").as_string()) { throw ("elementType not matching "); }
}
void t_junction_predecessorSuccessor::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_elementDir>(elementDir)) node.append_attribute("elementDir") = enum2str<e_elementDir>(elementDir).c_str(); 
    node.append_attribute("elementId") = to_str(elementId).c_str();
    node.append_attribute("elementS") = elementS.value(); 
    node.append_attribute("elementType") = to_str(elementType).c_str();
}
t_junction_priority::t_junction_priority(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("high")) { high = node.attribute("high").as_string(); } //optional
    if (node.attribute("low")) { low = node.attribute("low").as_string(); } //optional
}
void t_junction_priority::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("high") = to_str(high).c_str();
    node.append_attribute("low") = to_str(low).c_str();
}
t_junction_surface::t_junction_surface(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_CRG = node.child("CRG"); e_CRG; e_CRG= e_CRG.next_sibling("CRG"))
    {
        m_CRGs.push_back(std::make_shared<t_junction_surface_CRG>(e_CRG));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_junction_surface::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_junction_surface_CRG> m_CRG : m_CRGs ){ m_CRG->save(node.append_child("CRG")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_junction_surface_CRG::t_junction_surface_CRG(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("file")) { file = node.attribute("file").as_string(); } //required
    if (mode != str2enum<e_junction_surface_CRG_mode>(node.attribute("mode").as_string())) { throw ("mode not matching "); }
    if (node.attribute("purpose")) { purpose = str2enum<e_road_surface_CRG_purpose>(node.attribute("purpose").as_string()); } // enum
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //optional
    if (node.attribute("zScale")) { zScale = node.attribute("zScale").as_double(); } //optional
}
void t_junction_surface_CRG::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("file") = to_str(file).c_str();
    if (mode != str2enum<e_junction_surface_CRG_mode>(node.append_attribute("mode").as_string())) { throw ("mode not matching "); }
    if (isdefined<e_road_surface_CRG_purpose>(purpose)) node.append_attribute("purpose") = enum2str<e_road_surface_CRG_purpose>(purpose).c_str(); 
    node.append_attribute("zOffset") = to_str(zOffset).c_str();
    node.append_attribute("zScale") = to_str(zScale).c_str();
}
t_junctionGroup::t_junctionGroup(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("type")) { type = str2enum<e_junctionGroup_type>(node.attribute("type").as_string()); } // enum
    for (pugi::xml_node e_junctionReference = node.child("junctionReference"); e_junctionReference; e_junctionReference= e_junctionReference.next_sibling("junctionReference"))
    {
        m_junctionReferences.push_back(std::make_shared<t_junctionGroup_junctionReference>(e_junctionReference));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_junctionGroup::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("name") = to_str(name).c_str();
    if (isdefined<e_junctionGroup_type>(type)) node.append_attribute("type") = enum2str<e_junctionGroup_type>(type).c_str(); 
    for (std::shared_ptr<t_junctionGroup_junctionReference> m_junctionReference : m_junctionReferences ){ m_junctionReference->save(node.append_child("junctionReference")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_junctionGroup_junctionReference::t_junctionGroup_junctionReference(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("junction")) { junction = node.attribute("junction").as_string(); } //required
}
void t_junctionGroup_junctionReference::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("junction") = to_str(junction).c_str();
}
t_controller::t_controller(pugi::xml_node node)  : _OpenDriveElement(node) 
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
void t_controller::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("name") = to_str(name).c_str();
    node.append_attribute("sequence") = to_str(sequence).c_str();
    for (std::shared_ptr<t_controller_control> m_control : m_controls ){ m_control->save(node.append_child("control")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_controller_control::t_controller_control(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("signalId")) { signalId = node.attribute("signalId").as_string(); } //required
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //optional
}
void t_controller_control::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("signalId") = to_str(signalId).c_str();
    node.append_attribute("type") = to_str(type).c_str();
}
t_road_signals::t_road_signals(pugi::xml_node node)  : _OpenDriveElement(node) 
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
void t_road_signals::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_signals_signal> m_signal : m_signals ){ m_signal->save(node.append_child("signal")); } 
    for (std::shared_ptr<t_road_signals_signalReference> m_signalReference : m_signalReferences ){ m_signalReference->save(node.append_child("signalReference")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_signals_signal::t_road_signals_signal(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("country")) { country = e_countryCode(node.attribute("country")); }  // >> union - handle properly
    if (node.attribute("countryRevision")) { countryRevision = node.attribute("countryRevision").as_string(); } //optional
    if (node.attribute("dynamic")) { dynamic = str2enum<t_yesNo>(node.attribute("dynamic").as_string()); } // enum
    if (node.attribute("height")) { height = node.attribute("height").as_double(); }  //typedef 
    if (node.attribute("hOffset")) { hOffset = node.attribute("hOffset").as_double(); } //optional
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
    if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
    if (node.attribute("pitch")) { pitch = node.attribute("pitch").as_double(); } //optional
    if (node.attribute("roll")) { roll = node.attribute("roll").as_double(); } //optional
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("subtype")) { subtype = node.attribute("subtype").as_string(); } //required
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("text")) { text = node.attribute("text").as_string(); } //optional
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //required
    if (node.attribute("unit")) { unit = e_unit(node.attribute("unit")); }  // >> union - handle properly
    if (node.attribute("value")) { value = node.attribute("value").as_double(); } //optional
    if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef 
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //required
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
    if (node.first_child()) { m_t_road_signals_signal = std::make_shared<t_road_signals_signal_U>(node.first_child()); }  
}
void t_road_signals_signal::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    country.save(node.append_attribute("country")); 
    node.append_attribute("countryRevision") = to_str(countryRevision).c_str();
    if (isdefined<t_yesNo>(dynamic)) node.append_attribute("dynamic") = enum2str<t_yesNo>(dynamic).c_str(); 
    node.append_attribute("height") = height.value(); 
    node.append_attribute("hOffset") = to_str(hOffset).c_str();
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("name") = to_str(name).c_str();
    if (isdefined<e_orientation>(orientation)) node.append_attribute("orientation") = enum2str<e_orientation>(orientation).c_str(); 
    node.append_attribute("pitch") = to_str(pitch).c_str();
    node.append_attribute("roll") = to_str(roll).c_str();
    node.append_attribute("s") = s.value(); 
    node.append_attribute("subtype") = to_str(subtype).c_str();
    node.append_attribute("t") = to_str(t).c_str();
    node.append_attribute("text") = to_str(text).c_str();
    node.append_attribute("type") = to_str(type).c_str();
    unit.save(node.append_attribute("unit")); 
    node.append_attribute("value") = to_str(value).c_str();
    node.append_attribute("width") = width.value(); 
    node.append_attribute("zOffset") = to_str(zOffset).c_str();
    for (std::shared_ptr<t_road_objects_object_laneValidity> m_validity : m_validitys ){ m_validity->save(node.append_child("validity")); } 
    for (std::shared_ptr<t_road_signals_signal_dependency> m_dependency : m_dependencys ){ m_dependency->save(node.append_child("dependency")); } 
    for (std::shared_ptr<t_road_signals_signal_reference> m_reference : m_references ){ m_reference->save(node.append_child("reference")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
    if (m_t_road_signals_signal) { m_t_road_signals_signal->save(node); }  
}
t_road_signals_signal_dependency::t_road_signals_signal_dependency(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //optional
}
void t_road_signals_signal_dependency::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("type") = to_str(type).c_str();
}
t_road_signals_signal_positionInertial::t_road_signals_signal_positionInertial(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("hdg")) { hdg = node.attribute("hdg").as_double(); } //required
    if (node.attribute("pitch")) { pitch = node.attribute("pitch").as_double(); } //optional
    if (node.attribute("roll")) { roll = node.attribute("roll").as_double(); } //optional
    if (node.attribute("x")) { x = node.attribute("x").as_double(); } //required
    if (node.attribute("y")) { y = node.attribute("y").as_double(); } //required
    if (node.attribute("z")) { z = node.attribute("z").as_double(); } //required
}
void t_road_signals_signal_positionInertial::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("hdg") = to_str(hdg).c_str();
    node.append_attribute("pitch") = to_str(pitch).c_str();
    node.append_attribute("roll") = to_str(roll).c_str();
    node.append_attribute("x") = to_str(x).c_str();
    node.append_attribute("y") = to_str(y).c_str();
    node.append_attribute("z") = to_str(z).c_str();
}
t_road_signals_signal_positionRoad::t_road_signals_signal_positionRoad(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("hOffset")) { hOffset = node.attribute("hOffset").as_double(); } //required
    if (node.attribute("pitch")) { pitch = node.attribute("pitch").as_double(); } //optional
    if (node.attribute("roadId")) { roadId = node.attribute("roadId").as_string(); } //required
    if (node.attribute("roll")) { roll = node.attribute("roll").as_double(); } //optional
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //required
}
void t_road_signals_signal_positionRoad::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("hOffset") = to_str(hOffset).c_str();
    node.append_attribute("pitch") = to_str(pitch).c_str();
    node.append_attribute("roadId") = to_str(roadId).c_str();
    node.append_attribute("roll") = to_str(roll).c_str();
    node.append_attribute("s") = s.value(); 
    node.append_attribute("t") = to_str(t).c_str();
    node.append_attribute("zOffset") = to_str(zOffset).c_str();
}
t_road_signals_signal_reference::t_road_signals_signal_reference(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("elementId")) { elementId = node.attribute("elementId").as_string(); } //required
    if (node.attribute("elementType")) { elementType = str2enum<e_road_signals_signal_reference_elementType>(node.attribute("elementType").as_string()); } // enum
    if (node.attribute("type")) { type = node.attribute("type").as_string(); } //optional
}
void t_road_signals_signal_reference::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("elementId") = to_str(elementId).c_str();
    if (isdefined<e_road_signals_signal_reference_elementType>(elementType)) node.append_attribute("elementType") = enum2str<e_road_signals_signal_reference_elementType>(elementType).c_str(); 
    node.append_attribute("type") = to_str(type).c_str();
}
t_road_signals_signalReference::t_road_signals_signalReference(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("orientation")) { orientation = str2enum<e_orientation>(node.attribute("orientation").as_string()); } // enum
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
    for (pugi::xml_node e_validity = node.child("validity"); e_validity; e_validity= e_validity.next_sibling("validity"))
    {
        m_validitys.push_back(std::make_shared<t_road_objects_object_laneValidity>(e_validity));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_signals_signalReference::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    if (isdefined<e_orientation>(orientation)) node.append_attribute("orientation") = enum2str<e_orientation>(orientation).c_str(); 
    node.append_attribute("s") = s.value(); 
    node.append_attribute("t") = to_str(t).c_str();
    for (std::shared_ptr<t_road_objects_object_laneValidity> m_validity : m_validitys ){ m_validity->save(node.append_child("validity")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road::t_road(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_string(); } //required
    if (node.attribute("junction")) { junction = node.attribute("junction").as_string(); } //required
    if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef 
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //optional
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
void t_road::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
    node.append_attribute("junction") = to_str(junction).c_str();
    node.append_attribute("length") = length.value(); 
    node.append_attribute("name") = to_str(name).c_str();
    if (isdefined<e_trafficRule>(rule)) node.append_attribute("rule") = enum2str<e_trafficRule>(rule).c_str(); 
    if (m_link ) { m_link->save(node.append_child("link")); }   
    for (std::shared_ptr<t_road_type> m_type : m_types ){ m_type->save(node.append_child("type")); } 
    if (m_planView ) { m_planView->save(node.append_child("planView")); }   
    if (m_elevationProfile ) { m_elevationProfile->save(node.append_child("elevationProfile")); }   
    if (m_lateralProfile ) { m_lateralProfile->save(node.append_child("lateralProfile")); }   
    if (m_lanes ) { m_lanes->save(node.append_child("lanes")); }   
    if (m_objects ) { m_objects->save(node.append_child("objects")); }   
    if (m_signals ) { m_signals->save(node.append_child("signals")); }   
    if (m_surface ) { m_surface->save(node.append_child("surface")); }   
    if (m_railroad ) { m_railroad->save(node.append_child("railroad")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_elevationProfile::t_road_elevationProfile(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_elevation = node.child("elevation"); e_elevation; e_elevation= e_elevation.next_sibling("elevation"))
    {
        m_elevations.push_back(std::make_shared<t_road_elevationProfile_elevation>(e_elevation));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_elevationProfile::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_elevationProfile_elevation> m_elevation : m_elevations ){ m_elevation->save(node.append_child("elevation")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_elevationProfile_elevation::t_road_elevationProfile_elevation(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
}
void t_road_elevationProfile_elevation::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("a") = to_str(a).c_str();
    node.append_attribute("b") = to_str(b).c_str();
    node.append_attribute("c") = to_str(c).c_str();
    node.append_attribute("d") = to_str(d).c_str();
    node.append_attribute("s") = s.value(); 
}
t_road_lateralProfile::t_road_lateralProfile(pugi::xml_node node)  : _OpenDriveElement(node) 
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
void t_road_lateralProfile::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_lateralProfile_superelevation> m_superelevation : m_superelevations ){ m_superelevation->save(node.append_child("superelevation")); } 
    for (std::shared_ptr<t_road_lateralProfile_shape> m_shape : m_shapes ){ m_shape->save(node.append_child("shape")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lateralProfile_shape::t_road_lateralProfile_shape(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("t")) { t = node.attribute("t").as_double(); } //required
}
void t_road_lateralProfile_shape::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("a") = to_str(a).c_str();
    node.append_attribute("b") = to_str(b).c_str();
    node.append_attribute("c") = to_str(c).c_str();
    node.append_attribute("d") = to_str(d).c_str();
    node.append_attribute("s") = s.value(); 
    node.append_attribute("t") = to_str(t).c_str();
}
t_road_lateralProfile_superelevation::t_road_lateralProfile_superelevation(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
}
void t_road_lateralProfile_superelevation::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("a") = to_str(a).c_str();
    node.append_attribute("b") = to_str(b).c_str();
    node.append_attribute("c") = to_str(c).c_str();
    node.append_attribute("d") = to_str(d).c_str();
    node.append_attribute("s") = s.value(); 
}
t_road_link::t_road_link(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.child("predecessor")) { m_predecessor = std::make_shared<t_road_link_predecessorSuccessor>(node.child("predecessor")); }  
    if (node.child("successor")) { m_successor = std::make_shared<t_road_link_predecessorSuccessor>(node.child("successor")); }  
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_link::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (m_predecessor ) { m_predecessor->save(node.append_child("predecessor")); }   
    if (m_successor ) { m_successor->save(node.append_child("successor")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_link_predecessorSuccessor::t_road_link_predecessorSuccessor(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("contactPoint")) { contactPoint = str2enum<e_contactPoint>(node.attribute("contactPoint").as_string()); } // enum
    if (node.attribute("elementDir")) { elementDir = str2enum<e_elementDir>(node.attribute("elementDir").as_string()); } // enum
    if (node.attribute("elementId")) { elementId = node.attribute("elementId").as_string(); } //required
    if (node.attribute("elementS")) { elementS = node.attribute("elementS").as_double(); }  //typedef 
    if (node.attribute("elementType")) { elementType = str2enum<e_road_link_elementType>(node.attribute("elementType").as_string()); } // enum
}
void t_road_link_predecessorSuccessor::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_contactPoint>(contactPoint)) node.append_attribute("contactPoint") = enum2str<e_contactPoint>(contactPoint).c_str(); 
    if (isdefined<e_elementDir>(elementDir)) node.append_attribute("elementDir") = enum2str<e_elementDir>(elementDir).c_str(); 
    node.append_attribute("elementId") = to_str(elementId).c_str();
    node.append_attribute("elementS") = elementS.value(); 
    if (isdefined<e_road_link_elementType>(elementType)) node.append_attribute("elementType") = enum2str<e_road_link_elementType>(elementType).c_str(); 
}
t_road_planView::t_road_planView(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_geometry = node.child("geometry"); e_geometry; e_geometry= e_geometry.next_sibling("geometry"))
    {
        m_geometrys.push_back(std::make_shared<t_road_planView_geometry>(e_geometry));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_planView::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_planView_geometry> m_geometry : m_geometrys ){ m_geometry->save(node.append_child("geometry")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_planView_geometry::t_road_planView_geometry(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("hdg")) { hdg = node.attribute("hdg").as_double(); } //required
    if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef 
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("x")) { x = node.attribute("x").as_double(); } //required
    if (node.attribute("y")) { y = node.attribute("y").as_double(); } //required
    if (node.first_child()) { m_t_road_planView_geometry = std::make_shared<t_road_planView_geometry_U>(node.first_child()); }  
}
void t_road_planView_geometry::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("hdg") = to_str(hdg).c_str();
    node.append_attribute("length") = length.value(); 
    node.append_attribute("s") = s.value(); 
    node.append_attribute("x") = to_str(x).c_str();
    node.append_attribute("y") = to_str(y).c_str();
    if (m_t_road_planView_geometry) { m_t_road_planView_geometry->save(node); }  
}
t_road_planView_geometry_arc::t_road_planView_geometry_arc(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("curvature")) { curvature = node.attribute("curvature").as_double(); } //required
}
void t_road_planView_geometry_arc::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("curvature") = to_str(curvature).c_str();
}
t_road_planView_geometry_line::t_road_planView_geometry_line(pugi::xml_node node)  : _OpenDriveElement(node) 
{
}
void t_road_planView_geometry_line::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
}
t_road_planView_geometry_paramPoly3::t_road_planView_geometry_paramPoly3(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("aU")) { aU = node.attribute("aU").as_double(); } //required
    if (node.attribute("aV")) { aV = node.attribute("aV").as_double(); } //required
    if (node.attribute("bU")) { bU = node.attribute("bU").as_double(); } //required
    if (node.attribute("bV")) { bV = node.attribute("bV").as_double(); } //required
    if (node.attribute("cU")) { cU = node.attribute("cU").as_double(); } //required
    if (node.attribute("cV")) { cV = node.attribute("cV").as_double(); } //required
    if (node.attribute("dU")) { dU = node.attribute("dU").as_double(); } //required
    if (node.attribute("dV")) { dV = node.attribute("dV").as_double(); } //required
    if (node.attribute("pRange")) { pRange = str2enum<e_paramPoly3_pRange>(node.attribute("pRange").as_string()); } // enum
}
void t_road_planView_geometry_paramPoly3::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("aU") = to_str(aU).c_str();
    node.append_attribute("aV") = to_str(aV).c_str();
    node.append_attribute("bU") = to_str(bU).c_str();
    node.append_attribute("bV") = to_str(bV).c_str();
    node.append_attribute("cU") = to_str(cU).c_str();
    node.append_attribute("cV") = to_str(cV).c_str();
    node.append_attribute("dU") = to_str(dU).c_str();
    node.append_attribute("dV") = to_str(dV).c_str();
    if (isdefined<e_paramPoly3_pRange>(pRange)) node.append_attribute("pRange") = enum2str<e_paramPoly3_pRange>(pRange).c_str(); 
}
t_road_planView_geometry_poly3::t_road_planView_geometry_poly3(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
}
void t_road_planView_geometry_poly3::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("a") = to_str(a).c_str();
    node.append_attribute("b") = to_str(b).c_str();
    node.append_attribute("c") = to_str(c).c_str();
    node.append_attribute("d") = to_str(d).c_str();
}
t_road_planView_geometry_spiral::t_road_planView_geometry_spiral(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("curvEnd")) { curvEnd = node.attribute("curvEnd").as_double(); } //required
    if (node.attribute("curvStart")) { curvStart = node.attribute("curvStart").as_double(); } //required
}
void t_road_planView_geometry_spiral::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("curvEnd") = to_str(curvEnd).c_str();
    node.append_attribute("curvStart") = to_str(curvStart).c_str();
}
t_road_surface::t_road_surface(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_CRG = node.child("CRG"); e_CRG; e_CRG= e_CRG.next_sibling("CRG"))
    {
        m_CRGs.push_back(std::make_shared<t_road_surface_CRG>(e_CRG));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_surface::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_surface_CRG> m_CRG : m_CRGs ){ m_CRG->save(node.append_child("CRG")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_surface_CRG::t_road_surface_CRG(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("file")) { file = node.attribute("file").as_string(); } //required
    if (node.attribute("hOffset")) { hOffset = node.attribute("hOffset").as_double(); } //optional
    if (node.attribute("mode")) { mode = str2enum<e_road_surface_CRG_mode>(node.attribute("mode").as_string()); } // enum
    if (node.attribute("orientation")) { orientation = str2enum<e_direction>(node.attribute("orientation").as_string()); } // enum
    if (node.attribute("purpose")) { purpose = str2enum<e_road_surface_CRG_purpose>(node.attribute("purpose").as_string()); } // enum
    if (node.attribute("sEnd")) { sEnd = node.attribute("sEnd").as_double(); }  //typedef 
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); } //optional
    if (node.attribute("sStart")) { sStart = node.attribute("sStart").as_double(); }  //typedef 
    if (node.attribute("tOffset")) { tOffset = node.attribute("tOffset").as_double(); } //optional
    if (node.attribute("zOffset")) { zOffset = node.attribute("zOffset").as_double(); } //optional
    if (node.attribute("zScale")) { zScale = node.attribute("zScale").as_double(); } //optional
}
void t_road_surface_CRG::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("file") = to_str(file).c_str();
    node.append_attribute("hOffset") = to_str(hOffset).c_str();
    if (isdefined<e_road_surface_CRG_mode>(mode)) node.append_attribute("mode") = enum2str<e_road_surface_CRG_mode>(mode).c_str(); 
    if (isdefined<e_direction>(orientation)) node.append_attribute("orientation") = enum2str<e_direction>(orientation).c_str(); 
    if (isdefined<e_road_surface_CRG_purpose>(purpose)) node.append_attribute("purpose") = enum2str<e_road_surface_CRG_purpose>(purpose).c_str(); 
    node.append_attribute("sEnd") = sEnd.value(); 
    node.append_attribute("sOffset") = to_str(sOffset).c_str();
    node.append_attribute("sStart") = sStart.value(); 
    node.append_attribute("tOffset") = to_str(tOffset).c_str();
    node.append_attribute("zOffset") = to_str(zOffset).c_str();
    node.append_attribute("zScale") = to_str(zScale).c_str();
}
t_road_type::t_road_type(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("country")) { country = e_countryCode(node.attribute("country")); }  // >> union - handle properly
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("type")) { type = str2enum<e_roadType>(node.attribute("type").as_string()); } // enum
    if (node.child("speed")) { m_speed = std::make_shared<t_road_type_speed>(node.child("speed")); }  
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_type::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    country.save(node.append_attribute("country")); 
    node.append_attribute("s") = s.value(); 
    if (isdefined<e_roadType>(type)) node.append_attribute("type") = enum2str<e_roadType>(type).c_str(); 
    if (m_speed ) { m_speed->save(node.append_child("speed")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_type_speed::t_road_type_speed(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("max")) { max = t_maxSpeed(node.attribute("max")); }  // >> union - handle properly
    if (node.attribute("unit")) { unit = str2enum<e_unitSpeed>(node.attribute("unit").as_string()); } // enum
}
void t_road_type_speed::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    max.save(node.append_attribute("max")); 
    if (isdefined<e_unitSpeed>(unit)) node.append_attribute("unit") = enum2str<e_unitSpeed>(unit).c_str(); 
}
t_road_lanes::t_road_lanes(pugi::xml_node node)  : _OpenDriveElement(node) 
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
void t_road_lanes::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_lanes_laneOffset> m_laneOffset : m_laneOffsets ){ m_laneOffset->save(node.append_child("laneOffset")); } 
    for (std::shared_ptr<t_road_lanes_laneSection> m_laneSection : m_laneSections ){ m_laneSection->save(node.append_child("laneSection")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneOffset::t_road_lanes_laneOffset(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
}
void t_road_lanes_laneOffset::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("a") = to_str(a).c_str();
    node.append_attribute("b") = to_str(b).c_str();
    node.append_attribute("c") = to_str(c).c_str();
    node.append_attribute("d") = to_str(d).c_str();
    node.append_attribute("s") = s.value(); 
}
t_road_lanes_laneSection::t_road_lanes_laneSection(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("s")) { s = node.attribute("s").as_double(); }  //typedef 
    if (node.attribute("singleSide")) { singleSide = str2enum<t_bool>(node.attribute("singleSide").as_string()); } // enum
    if (node.child("left")) { m_left = std::make_shared<t_road_lanes_laneSection_left>(node.child("left")); }  
    if (node.child("center")) { m_center = std::make_shared<t_road_lanes_laneSection_center>(node.child("center")); }  
    if (node.child("right")) { m_right = std::make_shared<t_road_lanes_laneSection_right>(node.child("right")); }  
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_lanes_laneSection::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("s") = s.value(); 
    if (isdefined<t_bool>(singleSide)) node.append_attribute("singleSide") = enum2str<t_bool>(singleSide).c_str(); 
    if (m_left ) { m_left->save(node.append_child("left")); }   
    if (m_center ) { m_center->save(node.append_child("center")); }   
    if (m_right ) { m_right->save(node.append_child("right")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_center::t_road_lanes_laneSection_center(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_lane = node.child("lane"); e_lane; e_lane= e_lane.next_sibling("lane"))
    {
        m_lanes.push_back(std::make_shared<t_road_lanes_laneSection_center_lane>(e_lane));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_lanes_laneSection_center::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_lanes_laneSection_center_lane> m_lane : m_lanes ){ m_lane->save(node.append_child("lane")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_center_lane::t_road_lanes_laneSection_center_lane(pugi::xml_node node)  : t_road_lanes_laneSection_lr_lane(node) 
{
    if (id != node.attribute("id").as_int()) { throw ("id not matching "); }
}
void t_road_lanes_laneSection_center_lane::save(pugi::xml_node node)
{
    t_road_lanes_laneSection_lr_lane::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
}
t_road_lanes_laneSection_lcr_lane_link::t_road_lanes_laneSection_lcr_lane_link(pugi::xml_node node)  : _OpenDriveElement(node) 
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
void t_road_lanes_laneSection_lcr_lane_link::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor> m_predecessor : m_predecessors ){ m_predecessor->save(node.append_child("predecessor")); } 
    for (std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor> m_successor : m_successors ){ m_successor->save(node.append_child("successor")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor::t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_int(); } //required
}
void t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
}
t_road_lanes_laneSection_lcr_lane_roadMark::t_road_lanes_laneSection_lcr_lane_roadMark(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("color")) { color = str2enum<e_roadMarkColor>(node.attribute("color").as_string()); } // enum
    if (node.attribute("height")) { height = node.attribute("height").as_double(); }  //typedef 
    if (node.attribute("laneChange")) { laneChange = str2enum<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(node.attribute("laneChange").as_string()); } // enum
    if (node.attribute("material")) { material = node.attribute("material").as_string(); } //optional
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
    if (node.attribute("type")) { type = str2enum<e_roadMarkType>(node.attribute("type").as_string()); } // enum
    if (node.attribute("weight")) { weight = str2enum<e_roadMarkWeight>(node.attribute("weight").as_string()); } // enum
    if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef 
    for (pugi::xml_node e_sway = node.child("sway"); e_sway; e_sway= e_sway.next_sibling("sway"))
    {
        m_sways.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_sway>(e_sway));
    }
    if (node.child("type")) { m_type = std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_type>(node.child("type")); }  
    if (node.child("explicit")) { m_explicit = std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>(node.child("explicit")); }  
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_lanes_laneSection_lcr_lane_roadMark::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_roadMarkColor>(color)) node.append_attribute("color") = enum2str<e_roadMarkColor>(color).c_str(); 
    node.append_attribute("height") = height.value(); 
    if (isdefined<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(laneChange)) node.append_attribute("laneChange") = enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(laneChange).c_str(); 
    node.append_attribute("material") = to_str(material).c_str();
    node.append_attribute("sOffset") = sOffset.value(); 
    if (isdefined<e_roadMarkType>(type)) node.append_attribute("type") = enum2str<e_roadMarkType>(type).c_str(); 
    if (isdefined<e_roadMarkWeight>(weight)) node.append_attribute("weight") = enum2str<e_roadMarkWeight>(weight).c_str(); 
    node.append_attribute("width") = width.value(); 
    for (std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_sway> m_sway : m_sways ){ m_sway->save(node.append_child("sway")); } 
    if (m_type ) { m_type->save(node.append_child("type")); }   
    if (m_explicit ) { m_explicit->save(node.append_child("explicit")); }   
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lcr_lane_roadMark_explicit::t_road_lanes_laneSection_lcr_lane_roadMark_explicit(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_line = node.child("line"); e_line; e_line= e_line.next_sibling("line"))
    {
        m_lines.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>(e_line));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_lanes_laneSection_lcr_lane_roadMark_explicit::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line> m_line : m_lines ){ m_line->save(node.append_child("line")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef 
    if (node.attribute("rule")) { rule = str2enum<e_roadMarkRule>(node.attribute("rule").as_string()); } // enum
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
    if (node.attribute("tOffset")) { tOffset = node.attribute("tOffset").as_double(); } //required
    if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef 
}
void t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("length") = length.value(); 
    if (isdefined<e_roadMarkRule>(rule)) node.append_attribute("rule") = enum2str<e_roadMarkRule>(rule).c_str(); 
    node.append_attribute("sOffset") = sOffset.value(); 
    node.append_attribute("tOffset") = to_str(tOffset).c_str();
    node.append_attribute("width") = width.value(); 
}
t_road_lanes_laneSection_lcr_lane_roadMark_sway::t_road_lanes_laneSection_lcr_lane_roadMark_sway(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
    if (node.attribute("ds")) { ds = node.attribute("ds").as_double(); }  //typedef 
}
void t_road_lanes_laneSection_lcr_lane_roadMark_sway::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("a") = to_str(a).c_str();
    node.append_attribute("b") = to_str(b).c_str();
    node.append_attribute("c") = to_str(c).c_str();
    node.append_attribute("d") = to_str(d).c_str();
    node.append_attribute("ds") = ds.value(); 
}
t_road_lanes_laneSection_lcr_lane_roadMark_type::t_road_lanes_laneSection_lcr_lane_roadMark_type(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("name")) { name = node.attribute("name").as_string(); } //required
    if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef 
    for (pugi::xml_node e_line = node.child("line"); e_line; e_line= e_line.next_sibling("line"))
    {
        m_lines.push_back(std::make_shared<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>(e_line));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_lanes_laneSection_lcr_lane_roadMark_type::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("name") = to_str(name).c_str();
    node.append_attribute("width") = width.value(); 
    for (std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type_line> m_line : m_lines ){ m_line->save(node.append_child("line")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_lcr_lane_roadMark_type_line::t_road_lanes_laneSection_lcr_lane_roadMark_type_line(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("color")) { color = str2enum<e_roadMarkColor>(node.attribute("color").as_string()); } // enum
    if (node.attribute("length")) { length = node.attribute("length").as_double(); }  //typedef 
    if (node.attribute("rule")) { rule = str2enum<e_roadMarkRule>(node.attribute("rule").as_string()); } // enum
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
    if (node.attribute("space")) { space = node.attribute("space").as_double(); }  //typedef 
    if (node.attribute("tOffset")) { tOffset = node.attribute("tOffset").as_double(); } //required
    if (node.attribute("width")) { width = node.attribute("width").as_double(); }  //typedef 
}
void t_road_lanes_laneSection_lcr_lane_roadMark_type_line::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_roadMarkColor>(color)) node.append_attribute("color") = enum2str<e_roadMarkColor>(color).c_str(); 
    node.append_attribute("length") = length.value(); 
    if (isdefined<e_roadMarkRule>(rule)) node.append_attribute("rule") = enum2str<e_roadMarkRule>(rule).c_str(); 
    node.append_attribute("sOffset") = sOffset.value(); 
    node.append_attribute("space") = space.value(); 
    node.append_attribute("tOffset") = to_str(tOffset).c_str();
    node.append_attribute("width") = width.value(); 
}
t_road_lanes_laneSection_left::t_road_lanes_laneSection_left(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_lane = node.child("lane"); e_lane; e_lane= e_lane.next_sibling("lane"))
    {
        m_lanes.push_back(std::make_shared<t_road_lanes_laneSection_left_lane>(e_lane));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_lanes_laneSection_left::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_lanes_laneSection_left_lane> m_lane : m_lanes ){ m_lane->save(node.append_child("lane")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_left_lane::t_road_lanes_laneSection_left_lane(pugi::xml_node node)  : t_road_lanes_laneSection_lr_lane(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_ullong(); } //required
}
void t_road_lanes_laneSection_left_lane::save(pugi::xml_node node)
{
    t_road_lanes_laneSection_lr_lane::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
}
t_road_lanes_laneSection_lr_lane::t_road_lanes_laneSection_lr_lane(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("level")) { level = str2enum<t_bool>(node.attribute("level").as_string()); } // enum
    if (node.attribute("type")) { type = str2enum<e_laneType>(node.attribute("type").as_string()); } // enum
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
    for (pugi::xml_node e_t_road_lanes_laneSection_lr_lane : node.children())
    {
        m_t_road_lanes_laneSection_lr_lanes.push_back(std::make_shared<t_road_lanes_laneSection_lr_lane_U>(e_t_road_lanes_laneSection_lr_lane)); // choicevar _vector ? 
    }
}
void t_road_lanes_laneSection_lr_lane::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<t_bool>(level)) node.append_attribute("level") = enum2str<t_bool>(level).c_str(); 
    if (isdefined<e_laneType>(type)) node.append_attribute("type") = enum2str<e_laneType>(type).c_str(); 
    if (m_link ) { m_link->save(node.append_child("link")); }   
    for (std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark> m_roadMark : m_roadMarks ){ m_roadMark->save(node.append_child("roadMark")); } 
    for (std::shared_ptr<t_road_lanes_laneSection_lr_lane_material> m_material : m_materials ){ m_material->save(node.append_child("material")); } 
    for (std::shared_ptr<t_road_lanes_laneSection_lr_lane_speed> m_speed : m_speeds ){ m_speed->save(node.append_child("speed")); } 
    for (std::shared_ptr<t_road_lanes_laneSection_lr_lane_access> m_access : m_accesss ){ m_access->save(node.append_child("access")); } 
    for (std::shared_ptr<t_road_lanes_laneSection_lr_lane_height> m_height : m_heights ){ m_height->save(node.append_child("height")); } 
    for (std::shared_ptr<t_road_lanes_laneSection_lr_lane_rule> m_rule : m_rules ){ m_rule->save(node.append_child("rule")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
    for (std::shared_ptr<t_road_lanes_laneSection_lr_lane_U> m_t_road_lanes_laneSection_lr_lane : m_t_road_lanes_laneSection_lr_lanes ){ m_t_road_lanes_laneSection_lr_lane->save(node); }  
}
t_road_lanes_laneSection_lr_lane_access::t_road_lanes_laneSection_lr_lane_access(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("restriction")) { restriction = str2enum<e_accessRestrictionType>(node.attribute("restriction").as_string()); } // enum
    if (node.attribute("rule")) { rule = str2enum<e_road_lanes_laneSection_lr_lane_access_rule>(node.attribute("rule").as_string()); } // enum
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
}
void t_road_lanes_laneSection_lr_lane_access::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    if (isdefined<e_accessRestrictionType>(restriction)) node.append_attribute("restriction") = enum2str<e_accessRestrictionType>(restriction).c_str(); 
    if (isdefined<e_road_lanes_laneSection_lr_lane_access_rule>(rule)) node.append_attribute("rule") = enum2str<e_road_lanes_laneSection_lr_lane_access_rule>(rule).c_str(); 
    node.append_attribute("sOffset") = sOffset.value(); 
}
t_road_lanes_laneSection_lr_lane_border::t_road_lanes_laneSection_lr_lane_border(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
}
void t_road_lanes_laneSection_lr_lane_border::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("a") = to_str(a).c_str();
    node.append_attribute("b") = to_str(b).c_str();
    node.append_attribute("c") = to_str(c).c_str();
    node.append_attribute("d") = to_str(d).c_str();
    node.append_attribute("sOffset") = sOffset.value(); 
}
t_road_lanes_laneSection_lr_lane_height::t_road_lanes_laneSection_lr_lane_height(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("inner")) { inner = node.attribute("inner").as_double(); } //required
    if (node.attribute("outer")) { outer = node.attribute("outer").as_double(); } //required
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
}
void t_road_lanes_laneSection_lr_lane_height::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("inner") = to_str(inner).c_str();
    node.append_attribute("outer") = to_str(outer).c_str();
    node.append_attribute("sOffset") = sOffset.value(); 
}
t_road_lanes_laneSection_lr_lane_material::t_road_lanes_laneSection_lr_lane_material(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("friction")) { friction = node.attribute("friction").as_double(); }  //typedef 
    if (node.attribute("roughness")) { roughness = node.attribute("roughness").as_double(); }  //typedef 
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
    if (node.attribute("surface")) { surface = node.attribute("surface").as_string(); } //optional
}
void t_road_lanes_laneSection_lr_lane_material::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("friction") = friction.value(); 
    node.append_attribute("roughness") = roughness.value(); 
    node.append_attribute("sOffset") = sOffset.value(); 
    node.append_attribute("surface") = to_str(surface).c_str();
}
t_road_lanes_laneSection_lr_lane_rule::t_road_lanes_laneSection_lr_lane_rule(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
    if (node.attribute("value")) { value = node.attribute("value").as_string(); } //required
}
void t_road_lanes_laneSection_lr_lane_rule::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("sOffset") = sOffset.value(); 
    node.append_attribute("value") = to_str(value).c_str();
}
t_road_lanes_laneSection_lr_lane_speed::t_road_lanes_laneSection_lr_lane_speed(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("max")) { max = node.attribute("max").as_double(); }  //typedef 
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
    if (node.attribute("unit")) { unit = str2enum<e_unitSpeed>(node.attribute("unit").as_string()); } // enum
}
void t_road_lanes_laneSection_lr_lane_speed::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("max") = max.value(); 
    node.append_attribute("sOffset") = sOffset.value(); 
    if (isdefined<e_unitSpeed>(unit)) node.append_attribute("unit") = enum2str<e_unitSpeed>(unit).c_str(); 
}
t_road_lanes_laneSection_lr_lane_width::t_road_lanes_laneSection_lr_lane_width(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("a")) { a = node.attribute("a").as_double(); } //required
    if (node.attribute("b")) { b = node.attribute("b").as_double(); } //required
    if (node.attribute("c")) { c = node.attribute("c").as_double(); } //required
    if (node.attribute("d")) { d = node.attribute("d").as_double(); } //required
    if (node.attribute("sOffset")) { sOffset = node.attribute("sOffset").as_double(); }  //typedef 
}
void t_road_lanes_laneSection_lr_lane_width::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("a") = to_str(a).c_str();
    node.append_attribute("b") = to_str(b).c_str();
    node.append_attribute("c") = to_str(c).c_str();
    node.append_attribute("d") = to_str(d).c_str();
    node.append_attribute("sOffset") = sOffset.value(); 
}
t_road_lanes_laneSection_right::t_road_lanes_laneSection_right(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    for (pugi::xml_node e_lane = node.child("lane"); e_lane; e_lane= e_lane.next_sibling("lane"))
    {
        m_lanes.push_back(std::make_shared<t_road_lanes_laneSection_right_lane>(e_lane));
    }
    { m_g_additionalData = std::make_shared<g_additionalData>(node); } // Node has no xml def, same node passes through until it finds an element.
}
void t_road_lanes_laneSection_right::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    for (std::shared_ptr<t_road_lanes_laneSection_right_lane> m_lane : m_lanes ){ m_lane->save(node.append_child("lane")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
}
t_road_lanes_laneSection_right_lane::t_road_lanes_laneSection_right_lane(pugi::xml_node node)  : t_road_lanes_laneSection_lr_lane(node) 
{
    if (node.attribute("id")) { id = node.attribute("id").as_int(); } //required
}
void t_road_lanes_laneSection_right_lane::save(pugi::xml_node node)
{
    t_road_lanes_laneSection_lr_lane::save(node); 
    node.append_attribute("id") = to_str(id).c_str();
}
t_road_objects_object_laneValidity::t_road_objects_object_laneValidity(pugi::xml_node node)  : _OpenDriveElement(node) 
{
    if (node.attribute("fromLane")) { fromLane = node.attribute("fromLane").as_int(); } //required
    if (node.attribute("toLane")) { toLane = node.attribute("toLane").as_int(); } //required
}
void t_road_objects_object_laneValidity::save(pugi::xml_node node)
{
    _OpenDriveElement::save(node); 
    node.append_attribute("fromLane") = to_str(fromLane).c_str();
    node.append_attribute("toLane") = to_str(toLane).c_str();
}
// xs:group -> aliased to group definition
g_additionalData::g_additionalData(pugi::xml_node node)
{
    if (node.child("dataQuality")) { m_dataQuality = std::make_shared<t_dataQuality>(node.child("dataQuality")); }  
    for (pugi::xml_node e_include = node.child("include"); e_include; e_include= e_include.next_sibling("include"))
    {
        m_includes.push_back(std::make_shared<t_include>(e_include));
    }
    for (pugi::xml_node e_userData = node.child("userData"); e_userData; e_userData= e_userData.next_sibling("userData"))
    {
        m_userDatas.push_back(std::make_shared<t_userData>(e_userData));
    }
}
// xs:group -> aliased to group definition
void g_additionalData::save(pugi::xml_node node)
{
    if (m_dataQuality ) { m_dataQuality->save(node.append_child("dataQuality")); }   
    for (std::shared_ptr<t_include> m_include : m_includes ){ m_include->save(node.append_child("include")); } 
    for (std::shared_ptr<t_userData> m_userData : m_userDatas ){ m_userData->save(node.append_child("userData")); } 
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
void OpenDRIVE::save(pugi::xml_node node)
{
    if (m_header ) { m_header->save(node.append_child("header")); }   
    for (std::shared_ptr<t_road> m_road : m_roads ){ m_road->save(node.append_child("road")); } 
    for (std::shared_ptr<t_controller> m_controller : m_controllers ){ m_controller->save(node.append_child("controller")); } 
    for (std::shared_ptr<t_junction> m_junction : m_junctions ){ m_junction->save(node.append_child("junction")); } 
    for (std::shared_ptr<t_junctionGroup> m_junctionGroup : m_junctionGroups ){ m_junctionGroup->save(node.append_child("junctionGroup")); } 
    for (std::shared_ptr<t_station> m_station : m_stations ){ m_station->save(node.append_child("station")); } 
    { if (m_g_additionalData ) { m_g_additionalData->save(node); } } // Node has no xml def, same node passes through until it finds an element.
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
    m_OpenDRIVE = std::make_shared<OpenDRIVE>(m_root.child("OpenDRIVE"));
}
void xodr::save(std::string filename)
{
    pugi::xml_document doc;
    m_OpenDRIVE->save(doc.append_child("OpenDRIVE"));
    doc.save_file(filename.c_str());
}
xodr::~xodr()
{
}

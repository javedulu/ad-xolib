//
//  opendrive_17_core_py.cxx
//  Created by Javed Shaik on Mon Dec 20 22:11:30 2021
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 65f0bc62-d4b3-41b8-bc36-e45f03aca61a --
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
    m.doc() = "Python Bindings for opendrive_17_core - OPENDRIVE_17_CORE";
    py::class_<t_road_objects_object_outlines_outline_U, std::shared_ptr<t_road_objects_object_outlines_outline_U>>(m,"t_road_objects_object_outlines_outline_U")
        .def_readwrite("cornerRoad", &t_road_objects_object_outlines_outline_U::m_cornerRoads ) //t_road_objects_object_outlines_outline_cornerRoad
        .def_readwrite("cornerLocal", &t_road_objects_object_outlines_outline_U::m_cornerLocals ) //t_road_objects_object_outlines_outline_cornerLocal
;
    py::class_<t_road_signals_signal_U, std::shared_ptr<t_road_signals_signal_U>>(m,"t_road_signals_signal_U")
        .def_readwrite("positionInertial", &t_road_signals_signal_U::m_positionInertial ) //t_road_signals_signal_positionInertial
        .def_readwrite("positionRoad", &t_road_signals_signal_U::m_positionRoad ) //t_road_signals_signal_positionRoad
;
    py::class_<t_road_planView_geometry_U, std::shared_ptr<t_road_planView_geometry_U>>(m,"t_road_planView_geometry_U")
        .def_readwrite("line", &t_road_planView_geometry_U::m_line ) //t_road_planView_geometry_line
        .def_readwrite("spiral", &t_road_planView_geometry_U::m_spiral ) //t_road_planView_geometry_spiral
        .def_readwrite("arc", &t_road_planView_geometry_U::m_arc ) //t_road_planView_geometry_arc
        .def_readwrite("poly3", &t_road_planView_geometry_U::m_poly3 ) //t_road_planView_geometry_poly3
        .def_readwrite("paramPoly3", &t_road_planView_geometry_U::m_paramPoly3 ) //t_road_planView_geometry_paramPoly3
;
    py::class_<t_road_lanes_laneSection_lr_lane_U, std::shared_ptr<t_road_lanes_laneSection_lr_lane_U>>(m,"t_road_lanes_laneSection_lr_lane_U")
        .def_readwrite("border", &t_road_lanes_laneSection_lr_lane_U::m_borders ) //t_road_lanes_laneSection_lr_lane_border
        .def_readwrite("width", &t_road_lanes_laneSection_lr_lane_U::m_widths ) //t_road_lanes_laneSection_lr_lane_width
;
//
    py::class_<_OpenDriveElement, std::shared_ptr<_OpenDriveElement>>(m,"_OpenDriveElement","");
; 
//
    py::class_<t_dataQuality, std::shared_ptr<t_dataQuality>>(m,"t_dataQuality","Raw data or data from external sources that is integrated in ASAM OpenDRIVE may be of varying quality. It is possible to describe quality and accuracy of external data in ASAM OpenDRIVE.The description of the data quality is represented by &lt;dataQuality&gt; elements. They may be stored at any position in ASAM OpenDRIVE.Measurement data derived from external sources like GPS that is integrated in ASAM OpenDRIVE may be inaccurate. The error range, given in [m], may be listed in the application.")
        .def_readwrite("error", &t_dataQuality::m_error ) //t_dataQuality_Error
        .def_readwrite("rawData", &t_dataQuality::m_rawData ) //t_dataQuality_RawData
; 
//
    py::class_<t_dataQuality_Error, std::shared_ptr<t_dataQuality_Error>>(m,"t_dataQuality_Error","The absolute or relative errors of road data are described by &lt;error&gt; elements within the &lt;dataQuality&gt; element.")
        .def_readwrite("xyAbsolute", &t_dataQuality_Error::xyAbsolute, "Absolute error of the road data in x/y direction" ) //required
        .def_readwrite("xyRelative", &t_dataQuality_Error::xyRelative, "Relative error of the road data in x/y direction" ) //required
        .def_readwrite("zAbsolute", &t_dataQuality_Error::zAbsolute, "Absolute error of the road data in z direction" ) //required
        .def_readwrite("zRelative", &t_dataQuality_Error::zRelative, "Relative error of the road data in z direction" ) //required
; 
//
    py::class_<t_dataQuality_RawData, std::shared_ptr<t_dataQuality_RawData>>(m,"t_dataQuality_RawData","Some basic metadata containing information about raw data included in ASAM OpenDRIVE is described by the &lt;rawData&gt; element within the &lt;dataQuality&gt; element. ")
        .def_readwrite("date", &t_dataQuality_RawData::date, "Date of the delivery of raw data, to be given in ISO 8601 notification (YYYY-MM-DDTHH:MM:SS) [9]. Time-of-day may be omitted" ) //required
        .def_readwrite("postProcessing", &t_dataQuality_RawData::postProcessing, "Information about the kind of data handling before exporting data into the ASAM OpenDRIVE file" ) //required
        .def_readwrite("postProcessingComment", &t_dataQuality_RawData::postProcessingComment, "Comments concerning the postprocessing attribute. Free text, depending on the application" ) //optional
        .def_readwrite("source", &t_dataQuality_RawData::source, "Source that has been used for retrieving the raw data; further sources to be added in upcoming versions" ) //required
        .def_readwrite("sourceComment", &t_dataQuality_RawData::sourceComment, "Comments concerning the @source . Free text, depending on the application" ) //optional
; 
//
    py::class_<t_header, std::shared_ptr<t_header>>(m,"t_header","")
        .def_readwrite("date", &t_header::date, "Time/date of database creation according to ISO 8601 (preference: YYYY-MM-DDThh:mm:ss)" ) //optional
        .def_readwrite("east", &t_header::east, "Maximum inertial x value" ) //optional
        .def_readwrite("name", &t_header::name, "Database name" ) //optional
        .def_readwrite("north", &t_header::north, "Maximum inertial y value" ) //optional
        .def_readonly("revMajor",&t_header::revMajor)
        .def_readwrite("revMinor", &t_header::revMinor, "Minor revision number of OpenDRIVE format; 6 for OpenDrive 1.6 " ) //required
        .def_readwrite("south", &t_header::south, "Minimum inertial y value" ) //optional
        .def_readwrite("vendor", &t_header::vendor, "Vendor name" ) //optional
        .def_readwrite("version", &t_header::version, "Version of this road network" ) //optional
        .def_readwrite("west", &t_header::west, "Minimum inertial x value" ) //optional
        .def_readwrite("geoReference", &t_header::m_geoReference ) //t_header_GeoReference
        .def_readwrite("offset", &t_header::m_offset ) //t_header_Offset
    .def_readwrite("g_additionalData", &t_header::m_g_additionalData ) // group read 
; 
//
    py::class_<t_header_GeoReference, std::shared_ptr<t_header_GeoReference>>(m,"t_header_GeoReference","Spatial reference systems are standardized by the European Petroleum Survey Group Geodesy (EPSG) and are defined by parameters describing the geodetic datum. A geodetic datum is a coordinate reference system for a collection of positions that are relative to an ellipsoid model of the earth.A geodetic datum is described by a projection string according to PROJ, that is, a format for the exchange of data between two coordinate systems. This data shall be marked as CDATA, because it may contain characters that interfere with the XML syntax of an element’s attribute.In ASAM OpenDRIVE, the information about the geographic reference of an ASAM OpenDRIVE dataset is represented by the &lt;geoReference&gt; element within the &lt;header&gt; element.")
    .def_readwrite("g_additionalData", &t_header_GeoReference::m_g_additionalData ) // group read 
; 
//
    py::class_<t_header_Offset, std::shared_ptr<t_header_Offset>>(m,"t_header_Offset","")
        .def_readwrite("hdg", &t_header_Offset::hdg, "Heading offset (rotation around resulting z-axis)" ) //required
        .def_readwrite("x", &t_header_Offset::x, "Inertial x offset" ) //required
        .def_readwrite("y", &t_header_Offset::y, "Inertial y offset" ) //required
        .def_readwrite("z", &t_header_Offset::z, "Inertial z offset" ) //required
    .def_readwrite("g_additionalData", &t_header_Offset::m_g_additionalData ) // group read 
; 
//
    py::class_<t_include, std::shared_ptr<t_include>>(m,"t_include","ASAM OpenDRIVE allows including external files into the ASAM OpenDRIVE file. The processing of the files depends on the application.Included data is represented by &lt;include&gt; elements. They may be stored at any position in ASAM OpenDRIVE.")
        .def_readwrite("file", &t_include::file, "Location of the file that is to be included" ) //required
; 
//
    py::class_<t_userData, std::shared_ptr<t_userData>>(m,"t_userData","Ancillary data should be described near the element it refers to. Ancillary data contains data that are not yet described in ASAM OpenDRIVE, or data that is needed by an application for a specific reason. Examples are different road textures.In ASAM OpenDRIVE, ancillary data is represented by &lt;userData&gt; elements. They may be stored at any element in ASAM OpenDRIVE.")
        .def_readwrite("code", &t_userData::code, "Code for the user data. Free text, depending on application." ) //required
        .def_readwrite("value", &t_userData::value, "User data. Free text, depending on application. " ) //optional
; 
//
    py::class_<t_road_objects, std::shared_ptr<t_road_objects>>(m,"t_road_objects","")
        .def_readwrite("object", &t_road_objects::m_objects ) //t_road_objects_object
        .def_readwrite("objectReference", &t_road_objects::m_objectReferences ) //t_road_objects_objectReference
        .def_readwrite("tunnel", &t_road_objects::m_tunnels ) //t_road_objects_tunnel
        .def_readwrite("bridge", &t_road_objects::m_bridges ) //t_road_objects_bridge
    .def_readwrite("g_additionalData", &t_road_objects::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_bridge, std::shared_ptr<t_road_objects_bridge>>(m,"t_road_objects_bridge","")
        .def_readwrite("id", &t_road_objects_bridge::id, "Unique ID within database" ) //required
        .def_readwrite("length", &t_road_objects_bridge::length , "Length of the bridge (in s-direction)" ) //required
        .def_readwrite("name", &t_road_objects_bridge::name, "Name of the bridge. May be chosen freely." ) //optional
        .def_readwrite("s", &t_road_objects_bridge::s , "s-coordinate" ) //required
        .def_readwrite("type", &t_road_objects_bridge::type, "Type of bridge" ) //required
        .def_readwrite("validity", &t_road_objects_bridge::m_validitys ) //t_road_objects_object_laneValidity
    .def_readwrite("g_additionalData", &t_road_objects_bridge::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_object, std::shared_ptr<t_road_objects_object>>(m,"t_road_objects_object","")
        .def_readwrite("dynamic", &t_road_objects_object::dynamic, "Indicates whether the object is dynamic or static, default value is “no” (static). Dynamic object cannot change its position." ) //optional
        .def_readwrite("hdg", &t_road_objects_object::hdg, "Heading angle of the object relative to road direction" ) //optional
        .def_readwrite("height", &t_road_objects_object::height , "Height of the object&apos;s bounding box. @height is defined in the local coordinate system u/v along the z-axis" ) //optional
        .def_readwrite("id", &t_road_objects_object::id, "Unique ID within database" ) //required
        .def_readwrite("length", &t_road_objects_object::length , "Length of the object&apos;s bounding box, alternative to @radius.@length is defined in the local coordinate system u/v along the v-axis" ) //optional
        .def_readwrite("name", &t_road_objects_object::name, "Name of the object. May be chosen freely." ) //optional
        .def_readwrite("orientation", &t_road_objects_object::orientation, "&quot;+&quot; = valid in positive s-direction&quot;-&quot; = valid in negative s-direction&quot;none&quot; = valid in both directions(does not affect the heading)" ) //optional
        .def_readwrite("perpToRoad", &t_road_objects_object::perpToRoad, "Alternative to @pitch and @roll. If true, the object is vertically perpendicular to the road surface at all points and @pitch and @roll are ignored. Default is false." ) //optional
        .def_readwrite("pitch", &t_road_objects_object::pitch, "Pitch angle relative to the x/y-plane" ) //optional
        .def_readwrite("radius", &t_road_objects_object::radius , "radius of the circular object&apos;s bounding box, alternative to @length and @width. @radius is defined in the local coordinate system u/v" ) //optional
        .def_readwrite("roll", &t_road_objects_object::roll, "Roll angle relative to the x/y-plane" ) //optional
        .def_readwrite("s", &t_road_objects_object::s , "s-coordinate of object&apos;s origin" ) //required
        .def_readwrite("subtype", &t_road_objects_object::subtype, "Variant of a type" ) //optional
        .def_readwrite("t", &t_road_objects_object::t, "t-coordinate of object&apos;s origin" ) //required
        .def_readwrite("type", &t_road_objects_object::type, "Type of object. For a parking space, the &lt;parkingSpace&gt; element may be used additionally." ) //optional
        .def_readwrite("validLength", &t_road_objects_object::validLength , "Validity of object along s-axis (0.0 for point object)" ) //optional
        .def_readwrite("width", &t_road_objects_object::width, "Width of the object&apos;s bounding box, alternative to @radius.@width is defined in the local coordinate system u/v along the u-axis" ) //optional
        .def_readwrite("zOffset", &t_road_objects_object::zOffset, "z-offset of object&apos;s origin relative to the elevation of the reference line" ) //required
        .def_readwrite("repeat", &t_road_objects_object::m_repeats ) //t_road_objects_object_repeat
        .def_readwrite("outline", &t_road_objects_object::m_outline ) //t_road_objects_object_outlines_outline
        .def_readwrite("outlines", &t_road_objects_object::m_outlines ) //t_road_objects_object_outlines
        .def_readwrite("material", &t_road_objects_object::m_materials ) //t_road_objects_object_material
        .def_readwrite("validity", &t_road_objects_object::m_validitys ) //t_road_objects_object_laneValidity
        .def_readwrite("parkingSpace", &t_road_objects_object::m_parkingSpace ) //t_road_objects_object_parkingSpace
        .def_readwrite("markings", &t_road_objects_object::m_markings ) //t_road_objects_object_markings
        .def_readwrite("borders", &t_road_objects_object::m_borders ) //t_road_objects_object_borders
        .def_readwrite("surface", &t_road_objects_object::m_surface ) //t_road_objects_object_surface
    .def_readwrite("g_additionalData", &t_road_objects_object::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_object_borders, std::shared_ptr<t_road_objects_object_borders>>(m,"t_road_objects_object_borders","")
        .def_readwrite("border", &t_road_objects_object_borders::m_borders ) //t_road_objects_object_borders_border
    .def_readwrite("g_additionalData", &t_road_objects_object_borders::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_object_borders_border, std::shared_ptr<t_road_objects_object_borders_border>>(m,"t_road_objects_object_borders_border","")
        .def_readwrite("outlineId", &t_road_objects_object_borders_border::outlineId, "ID of the outline to use" ) //required
        .def_readwrite("type", &t_road_objects_object_borders_border::type, "Appearance of border" ) //required
        .def_readwrite("useCompleteOutline", &t_road_objects_object_borders_border::useCompleteOutline, "Use all outline points for border. “true” is used as default." ) //optional
        .def_readwrite("width", &t_road_objects_object_borders_border::width , "Border width" ) //required
        .def_readwrite("cornerReference", &t_road_objects_object_borders_border::m_cornerReferences ) //t_road_objects_object_markings_marking_cornerReference
    .def_readwrite("g_additionalData", &t_road_objects_object_borders_border::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_object_markings, std::shared_ptr<t_road_objects_object_markings>>(m,"t_road_objects_object_markings","")
        .def_readwrite("marking", &t_road_objects_object_markings::m_markings ) //t_road_objects_object_markings_marking
    .def_readwrite("g_additionalData", &t_road_objects_object_markings::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_object_markings_marking, std::shared_ptr<t_road_objects_object_markings_marking>>(m,"t_road_objects_object_markings_marking","")
        .def_readwrite("color", &t_road_objects_object_markings_marking::color, "Color of the marking" ) //required
        .def_readwrite("lineLength", &t_road_objects_object_markings_marking::lineLength , "Length of the visible part" ) //required
        .def_readwrite("side", &t_road_objects_object_markings_marking::side, "Side of the bounding box described in &lt;object&gt; element in the local coordinate system u/v" ) //optional
        .def_readwrite("spaceLength", &t_road_objects_object_markings_marking::spaceLength , "Length of the gap between the visible parts" ) //required
        .def_readwrite("startOffset", &t_road_objects_object_markings_marking::startOffset, "Lateral offset in u-direction from start of bounding box side where the first marking starts" ) //required
        .def_readwrite("stopOffset", &t_road_objects_object_markings_marking::stopOffset, "Lateral offset in u-direction from end of bounding box side where the marking ends" ) //required
        .def_readwrite("weight", &t_road_objects_object_markings_marking::weight, "Optical &quot;weight&quot; of the marking" ) //optional
        .def_readwrite("width", &t_road_objects_object_markings_marking::width , "Width of the marking" ) //optional
        .def_readwrite("zOffset", &t_road_objects_object_markings_marking::zOffset , "Height of road mark above the road, i.e. thickness of the road mark" ) //optional
        .def_readwrite("cornerReference", &t_road_objects_object_markings_marking::m_cornerReferences ) //t_road_objects_object_markings_marking_cornerReference
    .def_readwrite("g_additionalData", &t_road_objects_object_markings_marking::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_object_markings_marking_cornerReference, std::shared_ptr<t_road_objects_object_markings_marking_cornerReference>>(m,"t_road_objects_object_markings_marking_cornerReference","")
        .def_readwrite("id", &t_road_objects_object_markings_marking_cornerReference::id, "Identifier of the referenced outline point" ) //required
; 
//
    py::class_<t_road_objects_object_material, std::shared_ptr<t_road_objects_object_material>>(m,"t_road_objects_object_material","")
        .def_readwrite("friction", &t_road_objects_object_material::friction , "Friction value, depending on application" ) //optional
        .def_readwrite("roughness", &t_road_objects_object_material::roughness , "Roughness, for example, for sound and motion systems, depending on application" ) //optional
        .def_readwrite("surface", &t_road_objects_object_material::surface, "Surface material code, depending on application" ) //optional
; 
//
    py::class_<t_road_objects_object_outlines, std::shared_ptr<t_road_objects_object_outlines>>(m,"t_road_objects_object_outlines","")
        .def_readwrite("outline", &t_road_objects_object_outlines::m_outlines ) //t_road_objects_object_outlines_outline
    .def_readwrite("g_additionalData", &t_road_objects_object_outlines::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_object_outlines_outline, std::shared_ptr<t_road_objects_object_outlines_outline>>(m,"t_road_objects_object_outlines_outline","")
        .def_readwrite("closed", &t_road_objects_object_outlines_outline::closed, "If true, the outline describes an area, not a linear feature" ) //optional
        .def_readwrite("fillType", &t_road_objects_object_outlines_outline::fillType, "Type used to fill the area inside the outline" ) //optional
        .def_readwrite("id", &t_road_objects_object_outlines_outline::id, "ID of the outline. Must be unique within one object." ) //optional
        .def_readwrite("laneType", &t_road_objects_object_outlines_outline::laneType, "Describes the lane type of the outline" ) //optional
        .def_readwrite("outer", &t_road_objects_object_outlines_outline::outer, "Defines if outline is an outer outline of the object" ) //optional
    .def_readwrite("g_additionalData", &t_road_objects_object_outlines_outline::m_g_additionalData ) // group read 
        .def_readwrite("t_road_objects_object_outlines_outline", &t_road_objects_object_outlines_outline::m_t_road_objects_object_outlines_outline ) //
; 
//
    py::class_<t_road_objects_object_outlines_outline_cornerLocal, std::shared_ptr<t_road_objects_object_outlines_outline_cornerLocal>>(m,"t_road_objects_object_outlines_outline_cornerLocal","")
        .def_readwrite("height", &t_road_objects_object_outlines_outline_cornerLocal::height , "Height of the object at this corner, along the z-axis" ) //required
        .def_readwrite("id", &t_road_objects_object_outlines_outline_cornerLocal::id, "ID of the outline point. Shall be unique within one outline." ) //optional
        .def_readwrite("u", &t_road_objects_object_outlines_outline_cornerLocal::u, "Local u-coordinate of the corner" ) //required
        .def_readwrite("v", &t_road_objects_object_outlines_outline_cornerLocal::v, "Local v-coordinate of the corner" ) //required
        .def_readwrite("z", &t_road_objects_object_outlines_outline_cornerLocal::z, "Local z-coordinate of the corner" ) //required
; 
//
    py::class_<t_road_objects_object_outlines_outline_cornerRoad, std::shared_ptr<t_road_objects_object_outlines_outline_cornerRoad>>(m,"t_road_objects_object_outlines_outline_cornerRoad","")
        .def_readwrite("dz", &t_road_objects_object_outlines_outline_cornerRoad::dz, "dz of the corner relative to road reference line" ) //required
        .def_readwrite("height", &t_road_objects_object_outlines_outline_cornerRoad::height , "Height of the object at this corner, along the z-axis" ) //required
        .def_readwrite("id", &t_road_objects_object_outlines_outline_cornerRoad::id, "ID of the outline point. Must be unique within one outline" ) //optional
        .def_readwrite("s", &t_road_objects_object_outlines_outline_cornerRoad::s , "s-coordinate of the corner" ) //required
        .def_readwrite("t", &t_road_objects_object_outlines_outline_cornerRoad::t, "t-coordinate of the corner" ) //required
; 
//
    py::class_<t_road_objects_object_parkingSpace, std::shared_ptr<t_road_objects_object_parkingSpace>>(m,"t_road_objects_object_parkingSpace","")
        .def_readwrite("access", &t_road_objects_object_parkingSpace::access, "Access definitions for the parking space. Parking spaces tagged with &quot;women&quot; and &quot;handicapped&quot; are vehicles of type car." ) //required
        .def_readwrite("restrictions", &t_road_objects_object_parkingSpace::restrictions, "Free text, depending on application" ) //optional
; 
//
    py::class_<t_road_objects_object_repeat, std::shared_ptr<t_road_objects_object_repeat>>(m,"t_road_objects_object_repeat","")
        .def_readwrite("distance", &t_road_objects_object_repeat::distance , "Distance between two instances of the object;If this value is zero, then the object is treated like a continuous feature, for example, a guard rail, a wall, etc." ) //required
        .def_readwrite("heightEnd", &t_road_objects_object_repeat::heightEnd , "Height of the object at @s + @length" ) //required
        .def_readwrite("heightStart", &t_road_objects_object_repeat::heightStart , "Height of the object at @s" ) //required
        .def_readwrite("length", &t_road_objects_object_repeat::length , "Length of the repeat area, along the reference line in s-direction." ) //required
        .def_readwrite("lengthEnd", &t_road_objects_object_repeat::lengthEnd , "Length of the object at @s + @length" ) //optional
        .def_readwrite("lengthStart", &t_road_objects_object_repeat::lengthStart , "Length of the object at @s" ) //optional
        .def_readwrite("radiusEnd", &t_road_objects_object_repeat::radiusEnd , "Radius of the object at @s + @length" ) //optional
        .def_readwrite("radiusStart", &t_road_objects_object_repeat::radiusStart , "Radius of the object at @s" ) //optional
        .def_readwrite("s", &t_road_objects_object_repeat::s , "s-coordinate of start position, overrides the corresponding argument in the original &lt;object&gt; record" ) //required
        .def_readwrite("tEnd", &t_road_objects_object_repeat::tEnd, "Lateral offset of object&apos;s reference point at @s + @length" ) //required
        .def_readwrite("tStart", &t_road_objects_object_repeat::tStart, "Lateral offset of objects reference point at @s" ) //required
        .def_readwrite("widthEnd", &t_road_objects_object_repeat::widthEnd , "Width of the object at @s + @length" ) //optional
        .def_readwrite("widthStart", &t_road_objects_object_repeat::widthStart , "Width of the object at @s" ) //optional
        .def_readwrite("zOffsetEnd", &t_road_objects_object_repeat::zOffsetEnd, "z-offset of the object at @s + @length, relative to the elevation of the reference line" ) //required
        .def_readwrite("zOffsetStart", &t_road_objects_object_repeat::zOffsetStart, "z-offset of the object at @s, relative to the elevation of the reference line" ) //required
; 
//
    py::class_<t_road_objects_object_surface, std::shared_ptr<t_road_objects_object_surface>>(m,"t_road_objects_object_surface","")
        .def_readwrite("CRG", &t_road_objects_object_surface::m_CRG ) //t_road_objects_object_surface_CRG
    .def_readwrite("g_additionalData", &t_road_objects_object_surface::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_object_surface_CRG, std::shared_ptr<t_road_objects_object_surface_CRG>>(m,"t_road_objects_object_surface_CRG","")
        .def_readwrite("file", &t_road_objects_object_surface_CRG::file, "Name of the file containing the CRG data." ) //optional
        .def_readwrite("hideRoadSurfaceCRG", &t_road_objects_object_surface_CRG::hideRoadSurfaceCRG, "Determines if the object CRG hides the road surface CRG. Default is true." ) //optional
        .def_readwrite("zScale", &t_road_objects_object_surface_CRG::zScale, "z-scale factor for the surface description (default = 1.0)." ) //optional
; 
//
    py::class_<t_road_objects_objectReference, std::shared_ptr<t_road_objects_objectReference>>(m,"t_road_objects_objectReference","")
        .def_readwrite("id", &t_road_objects_objectReference::id, "Unique ID of the referred object within the database" ) //required
        .def_readwrite("orientation", &t_road_objects_objectReference::orientation, "&quot;+&quot; = valid in positive s-direction&quot;-&quot; = valid in negative s-direction&quot;none&quot; = valid in both directions" ) //required
        .def_readwrite("s", &t_road_objects_objectReference::s , "s-coordinate" ) //required
        .def_readwrite("t", &t_road_objects_objectReference::t, "t-coordinate" ) //required
        .def_readwrite("validLength", &t_road_objects_objectReference::validLength , "Validity of the object along s-axis(0.0 for point object)" ) //optional
        .def_readwrite("zOffset", &t_road_objects_objectReference::zOffset, "z offset relative to the elevation of the reference line" ) //optional
        .def_readwrite("validity", &t_road_objects_objectReference::m_validitys ) //t_road_objects_object_laneValidity
    .def_readwrite("g_additionalData", &t_road_objects_objectReference::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_objects_tunnel, std::shared_ptr<t_road_objects_tunnel>>(m,"t_road_objects_tunnel","")
        .def_readwrite("daylight", &t_road_objects_tunnel::daylight , "Degree of daylight intruding the tunnel. Depends on the application." ) //optional
        .def_readwrite("id", &t_road_objects_tunnel::id, "Unique ID within database" ) //required
        .def_readwrite("length", &t_road_objects_tunnel::length , "Length of the tunnel (in s-direction)" ) //required
        .def_readwrite("lighting", &t_road_objects_tunnel::lighting , "Degree of artificial tunnel lighting. Depends on the application." ) //optional
        .def_readwrite("name", &t_road_objects_tunnel::name, "Name of the tunnel. May be chosen freely." ) //optional
        .def_readwrite("s", &t_road_objects_tunnel::s , "s-coordinate" ) //required
        .def_readwrite("type", &t_road_objects_tunnel::type, "Type of tunnel" ) //required
        .def_readwrite("validity", &t_road_objects_tunnel::m_validitys ) //t_road_objects_object_laneValidity
    .def_readwrite("g_additionalData", &t_road_objects_tunnel::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_railroad, std::shared_ptr<t_road_railroad>>(m,"t_road_railroad","")
        .def_readwrite("switch", &t_road_railroad::m_switchs ) //t_road_railroad_switch
    .def_readwrite("g_additionalData", &t_road_railroad::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_railroad_switch, std::shared_ptr<t_road_railroad_switch>>(m,"t_road_railroad_switch","")
        .def_readwrite("id", &t_road_railroad_switch::id, "Unique ID of the switch; preferably an integer number, see uint32_t" ) //required
        .def_readwrite("name", &t_road_railroad_switch::name, "Unique name of the switch" ) //required
        .def_readwrite("position", &t_road_railroad_switch::position, "Either a switch can be operated (dynamic) or it is in a static position" ) //required
        .def_readwrite("mainTrack", &t_road_railroad_switch::m_mainTrack ) //t_road_railroad_switch_mainTrack
        .def_readwrite("sideTrack", &t_road_railroad_switch::m_sideTrack ) //t_road_railroad_switch_sideTrack
        .def_readwrite("partner", &t_road_railroad_switch::m_partner ) //t_road_railroad_switch_partner
    .def_readwrite("g_additionalData", &t_road_railroad_switch::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_railroad_switch_mainTrack, std::shared_ptr<t_road_railroad_switch_mainTrack>>(m,"t_road_railroad_switch_mainTrack","")
        .def_readwrite("dir", &t_road_railroad_switch_mainTrack::dir, "direction, relative to the s-direction, on the main track for entering the side track via the switch" ) //required
        .def_readwrite("id", &t_road_railroad_switch_mainTrack::id, "Unique ID of the main track, that is, the &lt;road&gt; element. Must be consistent with parent containing this &lt;railroad&gt; element." ) //required
        .def_readwrite("s", &t_road_railroad_switch_mainTrack::s , "s-coordinate of the switch, that is, the point where main track and side track meet" ) //required
; 
//
    py::class_<t_road_railroad_switch_partner, std::shared_ptr<t_road_railroad_switch_partner>>(m,"t_road_railroad_switch_partner","")
        .def_readwrite("id", &t_road_railroad_switch_partner::id, "Unique ID of the partner switch" ) //required
        .def_readwrite("name", &t_road_railroad_switch_partner::name, "Unique name of the partner switch" ) //optional
; 
//
    py::class_<t_road_railroad_switch_sideTrack, std::shared_ptr<t_road_railroad_switch_sideTrack>>(m,"t_road_railroad_switch_sideTrack","")
        .def_readwrite("dir", &t_road_railroad_switch_sideTrack::dir, "direction, relative to the s-direction, on the side track for after entering it via the switch" ) //required
        .def_readwrite("id", &t_road_railroad_switch_sideTrack::id, "Unique ID of the side track, that is, the &lt;road&gt; element" ) //required
        .def_readwrite("s", &t_road_railroad_switch_sideTrack::s , "s-coordinate of the switch on the side track " ) //required
; 
//
    py::class_<t_station, std::shared_ptr<t_station>>(m,"t_station","")
        .def_readwrite("id", &t_station::id, "Unique ID within database" ) //required
        .def_readwrite("name", &t_station::name, "Unique name of the station" ) //required
        .def_readwrite("type", &t_station::type, "Type of station. Free text, depending on the application.e.g.: small, medium, large" ) //optional
        .def_readwrite("platform", &t_station::m_platforms ) //t_station_platform
    .def_readwrite("g_additionalData", &t_station::m_g_additionalData ) // group read 
; 
//
    py::class_<t_station_platform, std::shared_ptr<t_station_platform>>(m,"t_station_platform","")
        .def_readwrite("id", &t_station_platform::id, "Unique ID within database" ) //required
        .def_readwrite("name", &t_station_platform::name, "Name of the platform. May be chosen freely." ) //optional
        .def_readwrite("segment", &t_station_platform::m_segments ) //t_station_platform_segment
    .def_readwrite("g_additionalData", &t_station_platform::m_g_additionalData ) // group read 
; 
//
    py::class_<t_station_platform_segment, std::shared_ptr<t_station_platform_segment>>(m,"t_station_platform_segment","")
        .def_readwrite("roadId", &t_station_platform_segment::roadId, "Unique ID of the &lt;road&gt; element (track) that accompanies the platform" ) //required
        .def_readwrite("sEnd", &t_station_platform_segment::sEnd , "Maximum s-coordiante on &lt;road&gt; element that has an adjacent platform" ) //required
        .def_readwrite("side", &t_station_platform_segment::side, "Side of track on which the platform is situated when going from sStart to sEnd" ) //required
        .def_readwrite("sStart", &t_station_platform_segment::sStart , "Minimum s-coordinate on &lt;road&gt; element that has an adjacent platform" ) //required
; 
//
    py::class_<t_junction, std::shared_ptr<t_junction>>(m,"t_junction","")
        .def_readwrite("id", &t_junction::id, "Unique ID within database" ) //required
        .def_readwrite("mainRoad", &t_junction::mainRoad, "The main road from which the connecting roads of the virtual junction branch off. This attribute is mandatory for virtual junctions and shall not be specified for other junction types." ) //optional
        .def_readwrite("name", &t_junction::name, "Name of the junction. May be chosen freely." ) //optional
        .def_readwrite("orientation", &t_junction::orientation, "Defines the relevance of the virtual junction according to the driving direction. This attribute is mandatory for virtual junctions and shall not be specified for other junction types. The enumerator &quot;none&quot; specifies that the virtual junction is valid in both directions." ) //optional
        .def_readwrite("sEnd", &t_junction::sEnd , "End position of the virtual junction in the reference line coordinate system. This attribute is mandatory for virtual junctions and shall not be specified for other junction types." ) //optional
        .def_readwrite("sStart", &t_junction::sStart , "Start position of the virtual junction in the reference line coordinate system. This attribute is mandatory for virtual junctions and shall not be specified for other junction types." ) //optional
        .def_readwrite("type", &t_junction::type, "Type of the junction. Common junctions are of type &quot;default&quot;. This attribute is mandatory for virtual junctions and direct junctions. If the attribute is not specified, the junction type is &quot;default&quot;." ) //optional
        .def_readwrite("connection", &t_junction::m_connections ) //t_junction_connection
        .def_readwrite("priority", &t_junction::m_prioritys ) //t_junction_priority
        .def_readwrite("controller", &t_junction::m_controllers ) //t_junction_controller
        .def_readwrite("surface", &t_junction::m_surface ) //t_junction_surface
    .def_readwrite("g_additionalData", &t_junction::m_g_additionalData ) // group read 
; 
//
    py::class_<t_junction_connection, std::shared_ptr<t_junction_connection>>(m,"t_junction_connection","")
        .def_readwrite("connectingRoad", &t_junction_connection::connectingRoad, "ID of the connecting road" ) //optional
        .def_readwrite("contactPoint", &t_junction_connection::contactPoint, "Contact point on the connecting road" ) //optional
        .def_readwrite("id", &t_junction_connection::id, "Unique ID within the junction" ) //required
        .def_readwrite("incomingRoad", &t_junction_connection::incomingRoad, "ID of the incoming road" ) //optional
        .def_readwrite("linkedRoad", &t_junction_connection::linkedRoad, "ID of the directly linked road. Only to be used for junctions of @type=&quot;direct&quot;." ) //optional
        .def_readwrite("type", &t_junction_connection::type, "Type of the connection. Regular connections are @type=“default” . This attribute is mandatory for virtual connections." ) //optional
        .def_readwrite("predecessor", &t_junction_connection::m_predecessor ) //t_junction_predecessorSuccessor
        .def_readwrite("successor", &t_junction_connection::m_successor ) //t_junction_predecessorSuccessor
        .def_readwrite("laneLink", &t_junction_connection::m_laneLinks ) //t_junction_connection_laneLink
; 
//
    py::class_<t_junction_connection_laneLink, std::shared_ptr<t_junction_connection_laneLink>>(m,"t_junction_connection_laneLink","")
        .def_readwrite("from", &t_junction_connection_laneLink::from, "ID of the incoming lane" ) //required
        .def_readwrite("to", &t_junction_connection_laneLink::to, "ID of the connection lane" ) //required
; 
//
    py::class_<t_junction_controller, std::shared_ptr<t_junction_controller>>(m,"t_junction_controller","")
        .def_readwrite("id", &t_junction_controller::id, "ID of the controller" ) //required
        .def_readwrite("sequence", &t_junction_controller::sequence, "Sequence number (priority) of this controller with respect to other controllers in the same junction" ) //optional
        .def_readwrite("type", &t_junction_controller::type, "Type of control for this junction. Free text, depending on the application." ) //optional
; 
//
    py::class_<t_junction_predecessorSuccessor, std::shared_ptr<t_junction_predecessorSuccessor>>(m,"t_junction_predecessorSuccessor","")
        .def_readwrite("elementDir", &t_junction_predecessorSuccessor::elementDir, "Direction, relative to the s-direction, of the connection on the preceding / succeding road" ) //required
        .def_readwrite("elementId", &t_junction_predecessorSuccessor::elementId, "ID of the linked element" ) //required
        .def_readwrite("elementS", &t_junction_predecessorSuccessor::elementS , "s-coordinate where the connection meets the preceding / succeding road." ) //required
        .def_readonly("elementType",&t_junction_predecessorSuccessor::elementType)
; 
//
    py::class_<t_junction_priority, std::shared_ptr<t_junction_priority>>(m,"t_junction_priority","")
        .def_readwrite("high", &t_junction_priority::high, "ID of the prioritized connecting road" ) //optional
        .def_readwrite("low", &t_junction_priority::low, "ID of the connecting road with lower priority" ) //optional
; 
//
    py::class_<t_junction_surface, std::shared_ptr<t_junction_surface>>(m,"t_junction_surface","")
        .def_readwrite("CRG", &t_junction_surface::m_CRGs ) //t_junction_surface_CRG
    .def_readwrite("g_additionalData", &t_junction_surface::m_g_additionalData ) // group read 
; 
//
    py::class_<t_junction_surface_CRG, std::shared_ptr<t_junction_surface_CRG>>(m,"t_junction_surface_CRG","")
        .def_readwrite("file", &t_junction_surface_CRG::file, "Name of the file containing the CRG data" ) //required
            .def_readonly("mode",&t_junction_surface_CRG::mode)
        .def_readwrite("purpose", &t_junction_surface_CRG::purpose, "Physical purpose of the data contained in the CRG file; if the attribute is missing, data will be interpreted as elevation data." ) //optional
        .def_readwrite("zOffset", &t_junction_surface_CRG::zOffset, "z offset between CRG center line and inertial xy-plane(default = 0.0)" ) //optional
        .def_readwrite("zScale", &t_junction_surface_CRG::zScale, "z scale factor for the surface description (default = 1.0) " ) //optional
; 
//
    py::class_<t_junctionGroup, std::shared_ptr<t_junctionGroup>>(m,"t_junctionGroup","")
        .def_readwrite("id", &t_junctionGroup::id, "Unique ID within database" ) //required
        .def_readwrite("name", &t_junctionGroup::name, "Name of the junction group. May be chosen freely." ) //optional
        .def_readwrite("type", &t_junctionGroup::type, "Type of junction group" ) //required
        .def_readwrite("junctionReference", &t_junctionGroup::m_junctionReferences ) //t_junctionGroup_junctionReference
    .def_readwrite("g_additionalData", &t_junctionGroup::m_g_additionalData ) // group read 
; 
//
    py::class_<t_junctionGroup_junctionReference, std::shared_ptr<t_junctionGroup_junctionReference>>(m,"t_junctionGroup_junctionReference","")
        .def_readwrite("junction", &t_junctionGroup_junctionReference::junction, "ID of the junction" ) //required
; 
//
    py::class_<t_controller, std::shared_ptr<t_controller>>(m,"t_controller","")
        .def_readwrite("id", &t_controller::id, "Unique ID within database" ) //required
        .def_readwrite("name", &t_controller::name, "Name of the controller. May be chosen freely." ) //optional
        .def_readwrite("sequence", &t_controller::sequence, "Sequence number (priority) of this controller with respect to other controllers of same logical level" ) //optional
        .def_readwrite("control", &t_controller::m_controls ) //t_controller_control
    .def_readwrite("g_additionalData", &t_controller::m_g_additionalData ) // group read 
; 
//
    py::class_<t_controller_control, std::shared_ptr<t_controller_control>>(m,"t_controller_control","")
        .def_readwrite("signalId", &t_controller_control::signalId, "ID of the controlled signal" ) //required
        .def_readwrite("type", &t_controller_control::type, "Type of control.Free Text, depends on the application." ) //optional
; 
//
    py::class_<t_road_signals, std::shared_ptr<t_road_signals>>(m,"t_road_signals","")
        .def_readwrite("signal", &t_road_signals::m_signals ) //t_road_signals_signal
        .def_readwrite("signalReference", &t_road_signals::m_signalReferences ) //t_road_signals_signalReference
    .def_readwrite("g_additionalData", &t_road_signals::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_signals_signal, std::shared_ptr<t_road_signals_signal>>(m,"t_road_signals_signal","")
        .def_readwrite("country", &t_road_signals_signal::country, "Country code of the road, see ISO 3166-1, alpha-2 codes.") 
        .def_readwrite("countryRevision", &t_road_signals_signal::countryRevision, "Defines the year of the applied traffic rules" ) //optional
        .def_readwrite("dynamic", &t_road_signals_signal::dynamic, "Indicates whether the signal is dynamic or static. Example: traffic light is dynamic" ) //required
        .def_readwrite("height", &t_road_signals_signal::height , "Height of the signal, measured from bottom edge of the signal" ) //optional
        .def_readwrite("hOffset", &t_road_signals_signal::hOffset, "Heading offset of the signal (relative to @orientation, if orientation is equal to “+” or “-“)Heading offset of the signal (relative to reference line, if orientation is equal to “none” )" ) //optional
        .def_readwrite("id", &t_road_signals_signal::id, "Unique ID of the signal within the OpenDRIVE file" ) //required
        .def_readwrite("name", &t_road_signals_signal::name, "Name of the signal. May be chosen freely." ) //optional
        .def_readwrite("orientation", &t_road_signals_signal::orientation, "&quot;+&quot; = valid in positive s- direction&quot;-&quot; = valid in negative s- direction&quot;none&quot; = valid in both directions" ) //required
        .def_readwrite("pitch", &t_road_signals_signal::pitch, "Pitch angle of the signal, relative to the inertial system (xy-plane)" ) //optional
        .def_readwrite("roll", &t_road_signals_signal::roll, "Roll angle of the signal after applying pitch, relative to the inertial system (x’’y’’-plane) " ) //optional
        .def_readwrite("s", &t_road_signals_signal::s , "s-coordinate" ) //required
        .def_readwrite("subtype", &t_road_signals_signal::subtype, "Subtype identifier according to country code or &quot;-1&quot; / &quot;none&quot;" ) //required
        .def_readwrite("t", &t_road_signals_signal::t, "t-coordinate" ) //required
        .def_readwrite("text", &t_road_signals_signal::text, "Additional text associated with the signal, for example, text on city limit &quot;City\nBadAibling&quot;" ) //optional
        .def_readwrite("type", &t_road_signals_signal::type, "Type identifier according to country code or &quot;-1&quot; / &quot;none&quot;. See extra document." ) //required
        .def_readwrite("unit", &t_road_signals_signal::unit, "Unit of @value") 
        .def_readwrite("value", &t_road_signals_signal::value, "Value of the signal, if value is given, unit is mandatory" ) //optional
        .def_readwrite("width", &t_road_signals_signal::width , "Width of the signal" ) //optional
        .def_readwrite("zOffset", &t_road_signals_signal::zOffset, "z offset from the road to bottom edge of the signal. This represents the vertical clearance of the object. Relative to the reference line." ) //required
        .def_readwrite("validity", &t_road_signals_signal::m_validitys ) //t_road_objects_object_laneValidity
        .def_readwrite("dependency", &t_road_signals_signal::m_dependencys ) //t_road_signals_signal_dependency
        .def_readwrite("reference", &t_road_signals_signal::m_references ) //t_road_signals_signal_reference
    .def_readwrite("g_additionalData", &t_road_signals_signal::m_g_additionalData ) // group read 
        .def_readwrite("t_road_signals_signal", &t_road_signals_signal::m_t_road_signals_signal ) //
; 
//
    py::class_<t_road_signals_signal_dependency, std::shared_ptr<t_road_signals_signal_dependency>>(m,"t_road_signals_signal_dependency","")
        .def_readwrite("id", &t_road_signals_signal_dependency::id, "ID of the controlling signal" ) //required
        .def_readwrite("type", &t_road_signals_signal_dependency::type, "Type of the dependency, Free text, depending on application" ) //optional
; 
//
    py::class_<t_road_signals_signal_positionInertial, std::shared_ptr<t_road_signals_signal_positionInertial>>(m,"t_road_signals_signal_positionInertial","")
        .def_readwrite("hdg", &t_road_signals_signal_positionInertial::hdg, "Heading of the signal, relative to the inertial system" ) //required
        .def_readwrite("pitch", &t_road_signals_signal_positionInertial::pitch, "Pitch angle of the signal after applying heading, relative to the inertial system (x’y’-plane)" ) //optional
        .def_readwrite("roll", &t_road_signals_signal_positionInertial::roll, "Roll angle of the signal after applying heading and pitch, relative to the inertial system (x’’y’’-plane)" ) //optional
        .def_readwrite("x", &t_road_signals_signal_positionInertial::x, "x-coordinate" ) //required
        .def_readwrite("y", &t_road_signals_signal_positionInertial::y, "y-coordinate" ) //required
        .def_readwrite("z", &t_road_signals_signal_positionInertial::z, "z-coordinate" ) //required
; 
//
    py::class_<t_road_signals_signal_positionRoad, std::shared_ptr<t_road_signals_signal_positionRoad>>(m,"t_road_signals_signal_positionRoad","")
        .def_readwrite("hOffset", &t_road_signals_signal_positionRoad::hOffset, "Heading offset of the signal (relative to @orientation)" ) //required
        .def_readwrite("pitch", &t_road_signals_signal_positionRoad::pitch, "Pitch angle of the signal after applying hOffset, relative to the inertial system (x’y’-plane)" ) //optional
        .def_readwrite("roadId", &t_road_signals_signal_positionRoad::roadId, "Unique ID of the referenced road" ) //required
        .def_readwrite("roll", &t_road_signals_signal_positionRoad::roll, "Roll angle of the signal after applying hOffset and pitch, relative to the inertial system (x’’y’’-plane)" ) //optional
        .def_readwrite("s", &t_road_signals_signal_positionRoad::s , "s-coordinate" ) //required
        .def_readwrite("t", &t_road_signals_signal_positionRoad::t, "t-coordinate" ) //required
        .def_readwrite("zOffset", &t_road_signals_signal_positionRoad::zOffset, "z offset from road level to bottom edge of the signal" ) //required
; 
//
    py::class_<t_road_signals_signal_reference, std::shared_ptr<t_road_signals_signal_reference>>(m,"t_road_signals_signal_reference","")
        .def_readwrite("elementId", &t_road_signals_signal_reference::elementId, "Unique ID of the linked element" ) //required
        .def_readwrite("elementType", &t_road_signals_signal_reference::elementType, "Type of the linked element" ) //required
        .def_readwrite("type", &t_road_signals_signal_reference::type, "Type of the linkage Free text, depending on application" ) //optional
; 
//
    py::class_<t_road_signals_signalReference, std::shared_ptr<t_road_signals_signalReference>>(m,"t_road_signals_signalReference","")
        .def_readwrite("id", &t_road_signals_signalReference::id, "Unique ID of the referenced signal within the database" ) //required
        .def_readwrite("orientation", &t_road_signals_signalReference::orientation, "&quot;+&quot; = valid in positive s-direction&quot;-&quot; = valid in negative s-direction&quot;none&quot; = valid in both directions" ) //required
        .def_readwrite("s", &t_road_signals_signalReference::s , "s-coordinate" ) //required
        .def_readwrite("t", &t_road_signals_signalReference::t, "t-coordinate" ) //required
        .def_readwrite("validity", &t_road_signals_signalReference::m_validitys ) //t_road_objects_object_laneValidity
    .def_readwrite("g_additionalData", &t_road_signals_signalReference::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road, std::shared_ptr<t_road>>(m,"t_road","")
        .def_readwrite("id", &t_road::id, "Unique ID within the database. If it represents an integer number, it should comply to uint32_t and stay within the given range." ) //required
        .def_readwrite("junction", &t_road::junction, "ID of the junction to which the road belongs as a connecting road (= -1 for none)" ) //required
        .def_readwrite("length", &t_road::length , "Total length of the reference line in the xy-plane. Change in length due to elevation is not considered" ) //required
        .def_readwrite("name", &t_road::name, "Name of the road. May be chosen freely." ) //optional
        .def_readwrite("rule", &t_road::rule, "Basic rule for using the road; RHT=right-hand traffic, LHT=left-hand traffic. When this attribute is missing, RHT is assumed." ) //optional
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
    .def_readwrite("g_additionalData", &t_road::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_elevationProfile, std::shared_ptr<t_road_elevationProfile>>(m,"t_road_elevationProfile","")
        .def_readwrite("elevation", &t_road_elevationProfile::m_elevations ) //t_road_elevationProfile_elevation
    .def_readwrite("g_additionalData", &t_road_elevationProfile::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_elevationProfile_elevation, std::shared_ptr<t_road_elevationProfile_elevation>>(m,"t_road_elevationProfile_elevation","")
        .def_readwrite("a", &t_road_elevationProfile_elevation::a, "Polynom parameter a, elevation at @s (ds=0)" ) //required
        .def_readwrite("b", &t_road_elevationProfile_elevation::b, "Polynom parameter b" ) //required
        .def_readwrite("c", &t_road_elevationProfile_elevation::c, "Polynom parameter c" ) //required
        .def_readwrite("d", &t_road_elevationProfile_elevation::d, "Polynom parameter d" ) //required
        .def_readwrite("s", &t_road_elevationProfile_elevation::s , "s-coordinate of start position" ) //required
; 
//
    py::class_<t_road_lateralProfile, std::shared_ptr<t_road_lateralProfile>>(m,"t_road_lateralProfile","")
        .def_readwrite("superelevation", &t_road_lateralProfile::m_superelevations ) //t_road_lateralProfile_superelevation
        .def_readwrite("shape", &t_road_lateralProfile::m_shapes ) //t_road_lateralProfile_shape
    .def_readwrite("g_additionalData", &t_road_lateralProfile::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lateralProfile_shape, std::shared_ptr<t_road_lateralProfile_shape>>(m,"t_road_lateralProfile_shape","")
        .def_readwrite("a", &t_road_lateralProfile_shape::a, "Polynom parameter a, relative height at @t (dt=0)" ) //required
        .def_readwrite("b", &t_road_lateralProfile_shape::b, "Polynom parameter b" ) //required
        .def_readwrite("c", &t_road_lateralProfile_shape::c, "Polynom parameter c" ) //required
        .def_readwrite("d", &t_road_lateralProfile_shape::d, "Polynom parameter d" ) //required
        .def_readwrite("s", &t_road_lateralProfile_shape::s , "s-coordinate of start position" ) //required
        .def_readwrite("t", &t_road_lateralProfile_shape::t, "t-coordinate of start position " ) //required
; 
//
    py::class_<t_road_lateralProfile_superelevation, std::shared_ptr<t_road_lateralProfile_superelevation>>(m,"t_road_lateralProfile_superelevation","")
        .def_readwrite("a", &t_road_lateralProfile_superelevation::a, "Polynom parameter a, superelevation at @s (ds=0)" ) //required
        .def_readwrite("b", &t_road_lateralProfile_superelevation::b, "Polynom parameter b" ) //required
        .def_readwrite("c", &t_road_lateralProfile_superelevation::c, "Polynom parameter c" ) //required
        .def_readwrite("d", &t_road_lateralProfile_superelevation::d, "Polynom parameter d" ) //required
        .def_readwrite("s", &t_road_lateralProfile_superelevation::s , "s-coordinate of start position" ) //required
; 
//
    py::class_<t_road_link, std::shared_ptr<t_road_link>>(m,"t_road_link","")
        .def_readwrite("predecessor", &t_road_link::m_predecessor ) //t_road_link_predecessorSuccessor
        .def_readwrite("successor", &t_road_link::m_successor ) //t_road_link_predecessorSuccessor
    .def_readwrite("g_additionalData", &t_road_link::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_link_predecessorSuccessor, std::shared_ptr<t_road_link_predecessorSuccessor>>(m,"t_road_link_predecessorSuccessor","")
        .def_readwrite("contactPoint", &t_road_link_predecessorSuccessor::contactPoint, "Contact point of link on the linked element" ) //optional
        .def_readwrite("elementDir", &t_road_link_predecessorSuccessor::elementDir, "To be provided when elementS is used for the connection definition. Indicates the direction on the predecessor from which the road is entered." ) //optional
        .def_readwrite("elementId", &t_road_link_predecessorSuccessor::elementId, "ID of the linked element" ) //required
        .def_readwrite("elementS", &t_road_link_predecessorSuccessor::elementS , "Alternative to contactPoint for virtual junctions. Indicates a connection within the predecessor, meaning not at the start or end of the predecessor. Shall only be used for elementType &quot;road&quot;" ) //optional
        .def_readwrite("elementType", &t_road_link_predecessorSuccessor::elementType, "Type of the linked element" ) //optional
; 
//
    py::class_<t_road_planView, std::shared_ptr<t_road_planView>>(m,"t_road_planView","")
        .def_readwrite("geometry", &t_road_planView::m_geometrys ) //t_road_planView_geometry
    .def_readwrite("g_additionalData", &t_road_planView::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_planView_geometry, std::shared_ptr<t_road_planView_geometry>>(m,"t_road_planView_geometry","")
        .def_readwrite("hdg", &t_road_planView_geometry::hdg, "Start orientation (inertial heading)" ) //required
        .def_readwrite("length", &t_road_planView_geometry::length , "Length of the element&apos;s reference line" ) //required
        .def_readwrite("s", &t_road_planView_geometry::s , "s-coordinate of start position" ) //required
        .def_readwrite("x", &t_road_planView_geometry::x, "Start position (x inertial)" ) //required
        .def_readwrite("y", &t_road_planView_geometry::y, "Start position (y inertial)" ) //required
        .def_readwrite("t_road_planView_geometry", &t_road_planView_geometry::m_t_road_planView_geometry ) //
; 
//
    py::class_<t_road_planView_geometry_arc, std::shared_ptr<t_road_planView_geometry_arc>>(m,"t_road_planView_geometry_arc","")
        .def_readwrite("curvature", &t_road_planView_geometry_arc::curvature, "Constant curvature throughout the element" ) //required
; 
//
    py::class_<t_road_planView_geometry_line, std::shared_ptr<t_road_planView_geometry_line>>(m,"t_road_planView_geometry_line","")
; 
//
    py::class_<t_road_planView_geometry_paramPoly3, std::shared_ptr<t_road_planView_geometry_paramPoly3>>(m,"t_road_planView_geometry_paramPoly3","")
        .def_readwrite("aU", &t_road_planView_geometry_paramPoly3::aU, "Polynom parameter a for u" ) //required
        .def_readwrite("aV", &t_road_planView_geometry_paramPoly3::aV, "Polynom parameter a for v" ) //required
        .def_readwrite("bU", &t_road_planView_geometry_paramPoly3::bU, "Polynom parameter b for u" ) //required
        .def_readwrite("bV", &t_road_planView_geometry_paramPoly3::bV, "Polynom parameter b for v" ) //required
        .def_readwrite("cU", &t_road_planView_geometry_paramPoly3::cU, "Polynom parameter c for u" ) //required
        .def_readwrite("cV", &t_road_planView_geometry_paramPoly3::cV, "Polynom parameter c for v" ) //required
        .def_readwrite("dU", &t_road_planView_geometry_paramPoly3::dU, "Polynom parameter d for u" ) //required
        .def_readwrite("dV", &t_road_planView_geometry_paramPoly3::dV, "Polynom parameter d for v" ) //required
        .def_readwrite("pRange", &t_road_planView_geometry_paramPoly3::pRange, "Range of parameter p.	- Case arcLength: p in [0, @length of &lt;geometry&gt;]	- Case normalized: p in [0, 1]" ) //required
; 
//
    py::class_<t_road_planView_geometry_poly3, std::shared_ptr<t_road_planView_geometry_poly3>>(m,"t_road_planView_geometry_poly3","")
        .def_readwrite("a", &t_road_planView_geometry_poly3::a, "Polynom parameter a" ) //required
        .def_readwrite("b", &t_road_planView_geometry_poly3::b, "Polynom parameter b" ) //required
        .def_readwrite("c", &t_road_planView_geometry_poly3::c, "Polynom parameter c" ) //required
        .def_readwrite("d", &t_road_planView_geometry_poly3::d, "Polynom parameter d" ) //required
; 
//
    py::class_<t_road_planView_geometry_spiral, std::shared_ptr<t_road_planView_geometry_spiral>>(m,"t_road_planView_geometry_spiral","")
        .def_readwrite("curvEnd", &t_road_planView_geometry_spiral::curvEnd, "Curvature at the end of the element" ) //required
        .def_readwrite("curvStart", &t_road_planView_geometry_spiral::curvStart, "Curvature at the start of the element" ) //required
; 
//
    py::class_<t_road_surface, std::shared_ptr<t_road_surface>>(m,"t_road_surface","")
        .def_readwrite("CRG", &t_road_surface::m_CRGs ) //t_road_surface_CRG
    .def_readwrite("g_additionalData", &t_road_surface::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_surface_CRG, std::shared_ptr<t_road_surface_CRG>>(m,"t_road_surface_CRG","")
        .def_readwrite("file", &t_road_surface_CRG::file, "Name of the file containing the CRG data" ) //required
        .def_readwrite("hOffset", &t_road_surface_CRG::hOffset, "Heading offset between CRG center line and reference line of the road (only allowed for mode genuine, default = 0.0)." ) //optional
        .def_readwrite("mode", &t_road_surface_CRG::mode, "Attachment mode for the surface data, see specification." ) //required
        .def_readwrite("orientation", &t_road_surface_CRG::orientation, "Orientation of the CRG data set relative to the parent &lt;road&gt; element. Only allowed for mode attached and attached0." ) //required
        .def_readwrite("purpose", &t_road_surface_CRG::purpose, "Physical purpose of the data contained in the CRG file; if the attribute is missing, data will be interpreted as elevation data." ) //optional
        .def_readwrite("sEnd", &t_road_surface_CRG::sEnd , "End of the application of CRG(s-coordinate)" ) //required
        .def_readwrite("sOffset", &t_road_surface_CRG::sOffset, "s-offset between CRG center line and reference line of the road (default = 0.0)" ) //optional
        .def_readwrite("sStart", &t_road_surface_CRG::sStart , "Start of the application of CRG data(s-coordinate)" ) //required
        .def_readwrite("tOffset", &t_road_surface_CRG::tOffset, "t-offset between CRG center line and reference line of the road (default = 0.0)" ) //optional
        .def_readwrite("zOffset", &t_road_surface_CRG::zOffset, "z-offset between CRG center line and reference line of the road (default = 0.0). Only allowed for purpose elevation." ) //optional
        .def_readwrite("zScale", &t_road_surface_CRG::zScale, "z-scale factor for the surface description (default = 1.0). Only allowed for purpose elevation." ) //optional
; 
//
    py::class_<t_road_type, std::shared_ptr<t_road_type>>(m,"t_road_type","")
        .def_readwrite("country", &t_road_type::country, "Country code of the road, see ISO 3166-1, alpha-2 codes.") 
        .def_readwrite("s", &t_road_type::s , "s-coordinate of start position" ) //required
        .def_readwrite("type", &t_road_type::type, "Type of the road defined as enumeration" ) //required
        .def_readwrite("speed", &t_road_type::m_speed ) //t_road_type_speed
    .def_readwrite("g_additionalData", &t_road_type::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_type_speed, std::shared_ptr<t_road_type_speed>>(m,"t_road_type_speed","")
        .def_readwrite("max", &t_road_type_speed::max, "Maximum allowed speed. Given as string (only &quot;no limit&quot; / &quot;undefined&quot;) or numerical value in the respective unit (see attribute unit). If the attribute unit is not specified, m/s is used as default. ") 
        .def_readwrite("unit", &t_road_type_speed::unit, "Unit of the attribute max. For values, see chapter “units”." ) //optional
; 
//
    py::class_<t_road_lanes, std::shared_ptr<t_road_lanes>>(m,"t_road_lanes","")
        .def_readwrite("laneOffset", &t_road_lanes::m_laneOffsets ) //t_road_lanes_laneOffset
        .def_readwrite("laneSection", &t_road_lanes::m_laneSections ) //t_road_lanes_laneSection
    .def_readwrite("g_additionalData", &t_road_lanes::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneOffset, std::shared_ptr<t_road_lanes_laneOffset>>(m,"t_road_lanes_laneOffset","")
        .def_readwrite("a", &t_road_lanes_laneOffset::a, "Polynom parameter a, offset at @s (ds=0)" ) //required
        .def_readwrite("b", &t_road_lanes_laneOffset::b, "Polynom parameter b" ) //required
        .def_readwrite("c", &t_road_lanes_laneOffset::c, "Polynom parameter c" ) //required
        .def_readwrite("d", &t_road_lanes_laneOffset::d, "Polynom parameter d" ) //required
        .def_readwrite("s", &t_road_lanes_laneOffset::s , "s-coordinate of start position" ) //required
; 
//
    py::class_<t_road_lanes_laneSection, std::shared_ptr<t_road_lanes_laneSection>>(m,"t_road_lanes_laneSection","")
        .def_readwrite("s", &t_road_lanes_laneSection::s , "s-coordinate of start position" ) //required
        .def_readwrite("singleSide", &t_road_lanes_laneSection::singleSide, "Lane section element is valid for one side only (left, center, or right), depending on the child elements." ) //optional
        .def_readwrite("left", &t_road_lanes_laneSection::m_left ) //t_road_lanes_laneSection_left
        .def_readwrite("center", &t_road_lanes_laneSection::m_center ) //t_road_lanes_laneSection_center
        .def_readwrite("right", &t_road_lanes_laneSection::m_right ) //t_road_lanes_laneSection_right
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneSection_center, std::shared_ptr<t_road_lanes_laneSection_center>>(m,"t_road_lanes_laneSection_center","")
        .def_readwrite("lane", &t_road_lanes_laneSection_center::m_lanes ) //t_road_lanes_laneSection_center_lane
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection_center::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneSection_center_lane, std::shared_ptr<t_road_lanes_laneSection_center_lane>>(m,"t_road_lanes_laneSection_center_lane","")
        .def_readonly("id",&t_road_lanes_laneSection_center_lane::id)
; 
//
    py::class_<t_road_lanes_laneSection_lcr_lane_link, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link>>(m,"t_road_lanes_laneSection_lcr_lane_link","")
        .def_readwrite("predecessor", &t_road_lanes_laneSection_lcr_lane_link::m_predecessors ) //t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor
        .def_readwrite("successor", &t_road_lanes_laneSection_lcr_lane_link::m_successors ) //t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection_lcr_lane_link::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor>>(m,"t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor","")
        .def_readwrite("id", &t_road_lanes_laneSection_lcr_lane_link_predecessorSuccessor::id, "ID of the preceding / succeeding linked lane" ) //required
; 
//
    py::class_<t_road_lanes_laneSection_lcr_lane_roadMark, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark","")
        .def_readwrite("color", &t_road_lanes_laneSection_lcr_lane_roadMark::color, "Color of the road mark" ) //required
        .def_readwrite("height", &t_road_lanes_laneSection_lcr_lane_roadMark::height , "Height of road mark above the road, i.e. thickness of the road mark" ) //optional
        .def_readwrite("laneChange", &t_road_lanes_laneSection_lcr_lane_roadMark::laneChange, "Allows a lane change in the indicated direction, taking into account that lanes are numbered in ascending order from right to left. If the attribute is missing, “both” is used as default." ) //optional
        .def_readwrite("material", &t_road_lanes_laneSection_lcr_lane_roadMark::material, "Material of the road mark. Identifiers to be defined by the user, use &quot;standard&quot; as default value." ) //optional
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark::sOffset , "s-coordinate of start position of the &lt;roadMark&gt; element, relative to the position of the preceding &lt;laneSection&gt; element" ) //required
        .def_readwrite("type", &t_road_lanes_laneSection_lcr_lane_roadMark::type, "Type of the road mark" ) //required
        .def_readwrite("weight", &t_road_lanes_laneSection_lcr_lane_roadMark::weight, "Weight of the road mark. This attribute is optional if detailed definition is given below." ) //optional
        .def_readwrite("width", &t_road_lanes_laneSection_lcr_lane_roadMark::width , "Width of the road mark. This attribute is optional if detailed definition is given by &lt;line&gt; element. " ) //optional
        .def_readwrite("sway", &t_road_lanes_laneSection_lcr_lane_roadMark::m_sways ) //t_road_lanes_laneSection_lcr_lane_roadMark_sway
        .def_readwrite("type", &t_road_lanes_laneSection_lcr_lane_roadMark::m_type ) //t_road_lanes_laneSection_lcr_lane_roadMark_type
        .def_readwrite("explicit", &t_road_lanes_laneSection_lcr_lane_roadMark::m_explicit ) //t_road_lanes_laneSection_lcr_lane_roadMark_explicit
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection_lcr_lane_roadMark::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_explicit, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_explicit","")
        .def_readwrite("line", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit::m_lines ) //t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line","")
        .def_readwrite("length", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::length , "Length of the visible line" ) //required
        .def_readwrite("rule", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::rule, "Rule that must be observed when passing the line from inside, that is, from the lane with the lower absolute ID to the lane with the higher absolute ID" ) //optional
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::sOffset , "Offset of start position of the &lt;line&gt; element, relative to the @sOffset  given in the &lt;roadMark&gt; element" ) //required
        .def_readwrite("tOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::tOffset, "Lateral offset from the lane border.If &lt;sway&gt; element is present, the lateral offset follows the sway." ) //required
        .def_readwrite("width", &t_road_lanes_laneSection_lcr_lane_roadMark_explicit_line::width , "Line width. This attribute supersedes the definition in the &lt;roadMark&gt; element." ) //optional
; 
//
    py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_sway, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_sway>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_sway","")
        .def_readwrite("a", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::a, "Polynom parameter a, sway value at @s (ds=0)" ) //required
        .def_readwrite("b", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::b, "Polynom parameter b" ) //required
        .def_readwrite("c", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::c, "Polynom parameter c" ) //required
        .def_readwrite("d", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::d, "Polynom parameter d" ) //required
        .def_readwrite("ds", &t_road_lanes_laneSection_lcr_lane_roadMark_sway::ds , "s-coordinate of start position of the &lt;sway&gt; element, relative to the @sOffset given in the &lt;roadMark&gt; element" ) //required
; 
//
    py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_type, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_type","")
        .def_readwrite("name", &t_road_lanes_laneSection_lcr_lane_roadMark_type::name, "Name of the road mark type. May be chosen freely." ) //required
        .def_readwrite("width", &t_road_lanes_laneSection_lcr_lane_roadMark_type::width , "Accumulated width of the road mark. In case of several &lt;line&gt; elements this @width is the sum of all @width of &lt;line&gt; elements and spaces in between, necessary to form the road mark. This attribute supersedes the definition in the &lt;roadMark&gt; element." ) //required
        .def_readwrite("line", &t_road_lanes_laneSection_lcr_lane_roadMark_type::m_lines ) //t_road_lanes_laneSection_lcr_lane_roadMark_type_line
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection_lcr_lane_roadMark_type::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneSection_lcr_lane_roadMark_type_line, std::shared_ptr<t_road_lanes_laneSection_lcr_lane_roadMark_type_line>>(m,"t_road_lanes_laneSection_lcr_lane_roadMark_type_line","")
        .def_readwrite("color", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::color, "Line color. If given, this attribute supersedes the definition in the &lt;roadMark&gt; element." ) //optional
        .def_readwrite("length", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::length , "Length of the visible part" ) //required
        .def_readwrite("rule", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::rule, "Rule that must be observed when passing the line from inside, for example, from the lane with the lower absolute ID to the lane with the higher absolute ID" ) //optional
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::sOffset , "Initial longitudinal offset of the line definition from the start of the road mark definition" ) //required
        .def_readwrite("space", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::space , "Length of the gap between the visible parts" ) //required
        .def_readwrite("tOffset", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::tOffset, "Lateral offset from the lane border.If &lt;sway&gt; element is present, the lateral offset follows the sway." ) //required
        .def_readwrite("width", &t_road_lanes_laneSection_lcr_lane_roadMark_type_line::width , "Line width" ) //optional
; 
//
    py::class_<t_road_lanes_laneSection_left, std::shared_ptr<t_road_lanes_laneSection_left>>(m,"t_road_lanes_laneSection_left","")
        .def_readwrite("lane", &t_road_lanes_laneSection_left::m_lanes ) //t_road_lanes_laneSection_left_lane
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection_left::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneSection_left_lane, std::shared_ptr<t_road_lanes_laneSection_left_lane>>(m,"t_road_lanes_laneSection_left_lane","")
        .def_readwrite("id", &t_road_lanes_laneSection_left_lane::id, "ID of the lane" ) //required
; 
//
    py::class_<t_road_lanes_laneSection_lr_lane, std::shared_ptr<t_road_lanes_laneSection_lr_lane>>(m,"t_road_lanes_laneSection_lr_lane","")
        .def_readwrite("level", &t_road_lanes_laneSection_lr_lane::level, "&quot;true&quot; = keep lane on level, that is, do not apply superelevation;&quot;false&quot; = apply superelevation to this lane (default, also used if attribute level is missing)" ) //optional
        .def_readwrite("type", &t_road_lanes_laneSection_lr_lane::type, "Type of the lane" ) //required
        .def_readwrite("link", &t_road_lanes_laneSection_lr_lane::m_link ) //t_road_lanes_laneSection_lcr_lane_link
        .def_readwrite("roadMark", &t_road_lanes_laneSection_lr_lane::m_roadMarks ) //t_road_lanes_laneSection_lcr_lane_roadMark
        .def_readwrite("material", &t_road_lanes_laneSection_lr_lane::m_materials ) //t_road_lanes_laneSection_lr_lane_material
        .def_readwrite("speed", &t_road_lanes_laneSection_lr_lane::m_speeds ) //t_road_lanes_laneSection_lr_lane_speed
        .def_readwrite("access", &t_road_lanes_laneSection_lr_lane::m_accesss ) //t_road_lanes_laneSection_lr_lane_access
        .def_readwrite("height", &t_road_lanes_laneSection_lr_lane::m_heights ) //t_road_lanes_laneSection_lr_lane_height
        .def_readwrite("rule", &t_road_lanes_laneSection_lr_lane::m_rules ) //t_road_lanes_laneSection_lr_lane_rule
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection_lr_lane::m_g_additionalData ) // group read 
        .def_readwrite("t_road_lanes_laneSection_lr_lane", &t_road_lanes_laneSection_lr_lane::m_t_road_lanes_laneSection_lr_lanes ) //
; 
//
    py::class_<t_road_lanes_laneSection_lr_lane_access, std::shared_ptr<t_road_lanes_laneSection_lr_lane_access>>(m,"t_road_lanes_laneSection_lr_lane_access","")
        .def_readwrite("restriction", &t_road_lanes_laneSection_lr_lane_access::restriction, "Identifier of the participant to whom the restriction applies" ) //required
        .def_readwrite("rule", &t_road_lanes_laneSection_lr_lane_access::rule, "Specifies whether the participant given in the attribute @restriction is allowed or denied access to the given lane" ) //optional
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_access::sOffset , "s-coordinate of start position, relative to the position of the preceding &lt;laneSection&gt; element" ) //required
; 
//
    py::class_<t_road_lanes_laneSection_lr_lane_border, std::shared_ptr<t_road_lanes_laneSection_lr_lane_border>>(m,"t_road_lanes_laneSection_lr_lane_border","")
        .def_readwrite("a", &t_road_lanes_laneSection_lr_lane_border::a, "Polynom parameter a, border position at @s (ds=0)" ) //required
        .def_readwrite("b", &t_road_lanes_laneSection_lr_lane_border::b, "Polynom parameter b" ) //required
        .def_readwrite("c", &t_road_lanes_laneSection_lr_lane_border::c, "Polynom parameter c" ) //required
        .def_readwrite("d", &t_road_lanes_laneSection_lr_lane_border::d, "Polynom parameter d" ) //required
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_border::sOffset , "s-coordinate of start position of the &lt;border&gt; element , relative to the position of the preceding &lt;laneSection&gt; element" ) //required
; 
//
    py::class_<t_road_lanes_laneSection_lr_lane_height, std::shared_ptr<t_road_lanes_laneSection_lr_lane_height>>(m,"t_road_lanes_laneSection_lr_lane_height","")
        .def_readwrite("inner", &t_road_lanes_laneSection_lr_lane_height::inner, "Inner offset from road level" ) //required
        .def_readwrite("outer", &t_road_lanes_laneSection_lr_lane_height::outer, "Outer offset from road level" ) //required
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_height::sOffset , "s-coordinate of start position, relative to the position of the preceding &lt;laneSection&gt; element" ) //required
; 
//
    py::class_<t_road_lanes_laneSection_lr_lane_material, std::shared_ptr<t_road_lanes_laneSection_lr_lane_material>>(m,"t_road_lanes_laneSection_lr_lane_material","")
        .def_readwrite("friction", &t_road_lanes_laneSection_lr_lane_material::friction , "Friction coefficient" ) //required
        .def_readwrite("roughness", &t_road_lanes_laneSection_lr_lane_material::roughness , "Roughness, for example, for sound and motion systems" ) //optional
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_material::sOffset , "s-coordinate of start position, relative to the position of the preceding &lt;laneSection&gt; element" ) //required
        .def_readwrite("surface", &t_road_lanes_laneSection_lr_lane_material::surface, "Surface material code, depending on application" ) //optional
; 
//
    py::class_<t_road_lanes_laneSection_lr_lane_rule, std::shared_ptr<t_road_lanes_laneSection_lr_lane_rule>>(m,"t_road_lanes_laneSection_lr_lane_rule","")
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_rule::sOffset , "s-coordinate of start position, relative to the position of the preceding &lt;laneSection&gt; element" ) //required
        .def_readwrite("value", &t_road_lanes_laneSection_lr_lane_rule::value, "Free text; currently recommended values are&quot;no stopping at any time&quot;&quot;disabled parking&quot;&quot;car pool&quot;" ) //required
; 
//
    py::class_<t_road_lanes_laneSection_lr_lane_speed, std::shared_ptr<t_road_lanes_laneSection_lr_lane_speed>>(m,"t_road_lanes_laneSection_lr_lane_speed","")
        .def_readwrite("max", &t_road_lanes_laneSection_lr_lane_speed::max , "Maximum allowed speed. If the attribute unit is not specified, m/s is used as default." ) //required
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_speed::sOffset , "s-coordinate of start position, relative to the position of the preceding &lt;laneSection&gt; element" ) //required
        .def_readwrite("unit", &t_road_lanes_laneSection_lr_lane_speed::unit, "Unit of the attribute max" ) //optional
; 
//
    py::class_<t_road_lanes_laneSection_lr_lane_width, std::shared_ptr<t_road_lanes_laneSection_lr_lane_width>>(m,"t_road_lanes_laneSection_lr_lane_width","")
        .def_readwrite("a", &t_road_lanes_laneSection_lr_lane_width::a, "Polynom parameter a, width at @s (ds=0)" ) //required
        .def_readwrite("b", &t_road_lanes_laneSection_lr_lane_width::b, "Polynom parameter b" ) //required
        .def_readwrite("c", &t_road_lanes_laneSection_lr_lane_width::c, "Polynom parameter c" ) //required
        .def_readwrite("d", &t_road_lanes_laneSection_lr_lane_width::d, "Polynom parameter d" ) //required
        .def_readwrite("sOffset", &t_road_lanes_laneSection_lr_lane_width::sOffset , "s-coordinate of start position of the &lt;width&gt; element, relative to the position of the preceding &lt;laneSection&gt; element" ) //required
; 
//
    py::class_<t_road_lanes_laneSection_right, std::shared_ptr<t_road_lanes_laneSection_right>>(m,"t_road_lanes_laneSection_right","")
        .def_readwrite("lane", &t_road_lanes_laneSection_right::m_lanes ) //t_road_lanes_laneSection_right_lane
    .def_readwrite("g_additionalData", &t_road_lanes_laneSection_right::m_g_additionalData ) // group read 
; 
//
    py::class_<t_road_lanes_laneSection_right_lane, std::shared_ptr<t_road_lanes_laneSection_right_lane>>(m,"t_road_lanes_laneSection_right_lane","")
        .def_readwrite("id", &t_road_lanes_laneSection_right_lane::id, "ID of the lane" ) //required
; 
//
    py::class_<t_road_objects_object_laneValidity, std::shared_ptr<t_road_objects_object_laneValidity>>(m,"t_road_objects_object_laneValidity","")
        .def_readwrite("fromLane", &t_road_objects_object_laneValidity::fromLane, "Minimum ID of the lanes for which the object is valid" ) //required
        .def_readwrite("toLane", &t_road_objects_object_laneValidity::toLane, "Maximum ID of the lanes for which the object is valid" ) //required
; 
    // xs:group -> aliased to group definition
    py::class_<g_additionalData, std::shared_ptr<g_additionalData>>(m,"g_additionalData","Group g_additionalData")
        .def_readwrite("dataQuality", &g_additionalData::m_dataQuality ) //t_dataQuality
        .def_readwrite("include", &g_additionalData::m_includes ) //t_include
        .def_readwrite("userData", &g_additionalData::m_userDatas ) //t_userData
    ;
//
    py::enum_<e_dataQuality_RawData_PostProcessing>(m,"e_dataQuality_RawData_PostProcessing", py::arithmetic(),"")
        .value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::RAW).c_str(),e_dataQuality_RawData_PostProcessing::RAW,"")            //raw
        .value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::CLEANED).c_str(),e_dataQuality_RawData_PostProcessing::CLEANED,"")            //cleaned
        .value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::PROCESSED).c_str(),e_dataQuality_RawData_PostProcessing::PROCESSED,"")            //processed
        .value(enum2str<e_dataQuality_RawData_PostProcessing>(e_dataQuality_RawData_PostProcessing::FUSED).c_str(),e_dataQuality_RawData_PostProcessing::FUSED,"");            //fused
    ;
    py::enum_<e_dataQuality_RawData_Source>(m,"e_dataQuality_RawData_Source", py::arithmetic(),"")
        .value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::SENSOR).c_str(),e_dataQuality_RawData_Source::SENSOR,"")            //sensor
        .value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::CADASTER).c_str(),e_dataQuality_RawData_Source::CADASTER,"")            //cadaster
        .value(enum2str<e_dataQuality_RawData_Source>(e_dataQuality_RawData_Source::CUSTOM).c_str(),e_dataQuality_RawData_Source::CUSTOM,"");            //custom
    ;
    py::enum_<e_unitDistance>(m,"e_unitDistance", py::arithmetic(),"")
        .value(enum2str<e_unitDistance>(e_unitDistance::M).c_str(),e_unitDistance::M,"")            //m
        .value(enum2str<e_unitDistance>(e_unitDistance::KM).c_str(),e_unitDistance::KM,"")            //km
        .value(enum2str<e_unitDistance>(e_unitDistance::FT).c_str(),e_unitDistance::FT,"")            //ft
        .value(enum2str<e_unitDistance>(e_unitDistance::MILE).c_str(),e_unitDistance::MILE,"");            //mile
    ;
    py::enum_<e_unitMass>(m,"e_unitMass", py::arithmetic(),"")
        .value(enum2str<e_unitMass>(e_unitMass::KG).c_str(),e_unitMass::KG,"")            //kg
        .value(enum2str<e_unitMass>(e_unitMass::T).c_str(),e_unitMass::T,"");            //t
    ;
    py::enum_<e_unitSlope>(m,"e_unitSlope", py::arithmetic(),"")
        .value(enum2str<e_unitSlope>(e_unitSlope::PERCENT).c_str(),e_unitSlope::PERCENT,"");            //%
    ;
    py::enum_<e_unitSpeed>(m,"e_unitSpeed", py::arithmetic(),"")
        .value(enum2str<e_unitSpeed>(e_unitSpeed::M_S).c_str(),e_unitSpeed::M_S,"")            //m/s
        .value(enum2str<e_unitSpeed>(e_unitSpeed::MPH).c_str(),e_unitSpeed::MPH,"")            //mph
        .value(enum2str<e_unitSpeed>(e_unitSpeed::KM_H).c_str(),e_unitSpeed::KM_H,"");            //km/h
    ;
    py::enum_<t_yesNo>(m,"t_yesNo", py::arithmetic(),"")
        .value(enum2str<t_yesNo>(t_yesNo::YES).c_str(),t_yesNo::YES,"")            //yes
        .value(enum2str<t_yesNo>(t_yesNo::NO).c_str(),t_yesNo::NO,"");            //no
    ;
    py::enum_<e_borderType>(m,"e_borderType", py::arithmetic(),"")
        .value(enum2str<e_borderType>(e_borderType::CONCRETE).c_str(),e_borderType::CONCRETE,"")            //concrete
        .value(enum2str<e_borderType>(e_borderType::CURB).c_str(),e_borderType::CURB,"");            //curb
    ;
    py::enum_<e_bridgeType>(m,"e_bridgeType", py::arithmetic(),"")
        .value(enum2str<e_bridgeType>(e_bridgeType::CONCRETE).c_str(),e_bridgeType::CONCRETE,"")            //concrete
        .value(enum2str<e_bridgeType>(e_bridgeType::STEEL).c_str(),e_bridgeType::STEEL,"")            //steel
        .value(enum2str<e_bridgeType>(e_bridgeType::BRICK).c_str(),e_bridgeType::BRICK,"")            //brick
        .value(enum2str<e_bridgeType>(e_bridgeType::WOOD).c_str(),e_bridgeType::WOOD,"");            //wood
    ;
    py::enum_<e_objectType>(m,"e_objectType", py::arithmetic(),"")
        .value(enum2str<e_objectType>(e_objectType::NONE).c_str(),e_objectType::NONE,"i.e. unknown")            //none
        .value(enum2str<e_objectType>(e_objectType::OBSTACLE).c_str(),e_objectType::OBSTACLE,"for anything that is not further categorized")            //obstacle
        .value(enum2str<e_objectType>(e_objectType::CAR).c_str(),e_objectType::CAR,"deprecated")            //car
        .value(enum2str<e_objectType>(e_objectType::POLE).c_str(),e_objectType::POLE,"")            //pole
        .value(enum2str<e_objectType>(e_objectType::TREE).c_str(),e_objectType::TREE,"")            //tree
        .value(enum2str<e_objectType>(e_objectType::VEGETATION).c_str(),e_objectType::VEGETATION,"")            //vegetation
        .value(enum2str<e_objectType>(e_objectType::BARRIER).c_str(),e_objectType::BARRIER,"")            //barrier
        .value(enum2str<e_objectType>(e_objectType::BUILDING).c_str(),e_objectType::BUILDING,"")            //building
        .value(enum2str<e_objectType>(e_objectType::PARKINGSPACE).c_str(),e_objectType::PARKINGSPACE,"")            //parkingSpace
        .value(enum2str<e_objectType>(e_objectType::PATCH).c_str(),e_objectType::PATCH,"")            //patch
        .value(enum2str<e_objectType>(e_objectType::RAILING).c_str(),e_objectType::RAILING,"")            //railing
        .value(enum2str<e_objectType>(e_objectType::TRAFFICISLAND).c_str(),e_objectType::TRAFFICISLAND,"")            //trafficIsland
        .value(enum2str<e_objectType>(e_objectType::CROSSWALK).c_str(),e_objectType::CROSSWALK,"")            //crosswalk
        .value(enum2str<e_objectType>(e_objectType::STREETLAMP).c_str(),e_objectType::STREETLAMP,"")            //streetLamp
        .value(enum2str<e_objectType>(e_objectType::GANTRY).c_str(),e_objectType::GANTRY,"")            //gantry
        .value(enum2str<e_objectType>(e_objectType::SOUNDBARRIER).c_str(),e_objectType::SOUNDBARRIER,"")            //soundBarrier
        .value(enum2str<e_objectType>(e_objectType::VAN).c_str(),e_objectType::VAN,"deprecated")            //van
        .value(enum2str<e_objectType>(e_objectType::BUS).c_str(),e_objectType::BUS,"deprecated")            //bus
        .value(enum2str<e_objectType>(e_objectType::TRAILER).c_str(),e_objectType::TRAILER,"deprecated")            //trailer
        .value(enum2str<e_objectType>(e_objectType::BIKE).c_str(),e_objectType::BIKE,"deprecated")            //bike
        .value(enum2str<e_objectType>(e_objectType::MOTORBIKE).c_str(),e_objectType::MOTORBIKE,"deprecated")            //motorbike
        .value(enum2str<e_objectType>(e_objectType::TRAM).c_str(),e_objectType::TRAM,"deprecated")            //tram
        .value(enum2str<e_objectType>(e_objectType::TRAIN).c_str(),e_objectType::TRAIN,"deprecated")            //train
        .value(enum2str<e_objectType>(e_objectType::PEDESTRIAN).c_str(),e_objectType::PEDESTRIAN,"deprecated")            //pedestrian
        .value(enum2str<e_objectType>(e_objectType::WIND).c_str(),e_objectType::WIND,"deprecated")            //wind
        .value(enum2str<e_objectType>(e_objectType::ROADMARK).c_str(),e_objectType::ROADMARK,"");            //roadMark
    ;
    py::enum_<e_orientation>(m,"e_orientation", py::arithmetic(),"")
        .value(enum2str<e_orientation>(e_orientation::PLUS).c_str(),e_orientation::PLUS,"")            //+
        .value(enum2str<e_orientation>(e_orientation::MINUS).c_str(),e_orientation::MINUS,"")            //-
        .value(enum2str<e_orientation>(e_orientation::NONE).c_str(),e_orientation::NONE,"");            //none
    ;
    py::enum_<e_outlineFillType>(m,"e_outlineFillType", py::arithmetic(),"")
        .value(enum2str<e_outlineFillType>(e_outlineFillType::GRASS).c_str(),e_outlineFillType::GRASS,"")            //grass
        .value(enum2str<e_outlineFillType>(e_outlineFillType::CONCRETE).c_str(),e_outlineFillType::CONCRETE,"")            //concrete
        .value(enum2str<e_outlineFillType>(e_outlineFillType::COBBLE).c_str(),e_outlineFillType::COBBLE,"")            //cobble
        .value(enum2str<e_outlineFillType>(e_outlineFillType::ASPHALT).c_str(),e_outlineFillType::ASPHALT,"")            //asphalt
        .value(enum2str<e_outlineFillType>(e_outlineFillType::PAVEMENT).c_str(),e_outlineFillType::PAVEMENT,"")            //pavement
        .value(enum2str<e_outlineFillType>(e_outlineFillType::GRAVEL).c_str(),e_outlineFillType::GRAVEL,"")            //gravel
        .value(enum2str<e_outlineFillType>(e_outlineFillType::SOIL).c_str(),e_outlineFillType::SOIL,"");            //soil
    ;
    py::enum_<e_road_objects_object_parkingSpace_access>(m,"e_road_objects_object_parkingSpace_access", py::arithmetic(),"")
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::ALL).c_str(),e_road_objects_object_parkingSpace_access::ALL,"")            //all
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::CAR).c_str(),e_road_objects_object_parkingSpace_access::CAR,"")            //car
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::WOMEN).c_str(),e_road_objects_object_parkingSpace_access::WOMEN,"")            //women
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::HANDICAPPED).c_str(),e_road_objects_object_parkingSpace_access::HANDICAPPED,"")            //handicapped
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::BUS).c_str(),e_road_objects_object_parkingSpace_access::BUS,"")            //bus
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::TRUCK).c_str(),e_road_objects_object_parkingSpace_access::TRUCK,"")            //truck
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::ELECTRIC).c_str(),e_road_objects_object_parkingSpace_access::ELECTRIC,"")            //electric
        .value(enum2str<e_road_objects_object_parkingSpace_access>(e_road_objects_object_parkingSpace_access::RESIDENTS).c_str(),e_road_objects_object_parkingSpace_access::RESIDENTS,"");            //residents
    ;
    py::enum_<e_sideType>(m,"e_sideType", py::arithmetic(),"")
        .value(enum2str<e_sideType>(e_sideType::LEFT).c_str(),e_sideType::LEFT,"")            //left
        .value(enum2str<e_sideType>(e_sideType::RIGHT).c_str(),e_sideType::RIGHT,"")            //right
        .value(enum2str<e_sideType>(e_sideType::FRONT).c_str(),e_sideType::FRONT,"")            //front
        .value(enum2str<e_sideType>(e_sideType::REAR).c_str(),e_sideType::REAR,"");            //rear
    ;
    py::enum_<e_tunnelType>(m,"e_tunnelType", py::arithmetic(),"")
        .value(enum2str<e_tunnelType>(e_tunnelType::STANDARD).c_str(),e_tunnelType::STANDARD,"")            //standard
        .value(enum2str<e_tunnelType>(e_tunnelType::UNDERPASS).c_str(),e_tunnelType::UNDERPASS,"i.e. sides are open for daylight");            //underpass
    ;
    py::enum_<e_road_railroad_switch_position>(m,"e_road_railroad_switch_position", py::arithmetic(),"")
        .value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::DYNAMIC).c_str(),e_road_railroad_switch_position::DYNAMIC,"")            //dynamic
        .value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::STRAIGHT).c_str(),e_road_railroad_switch_position::STRAIGHT,"")            //straight
        .value(enum2str<e_road_railroad_switch_position>(e_road_railroad_switch_position::TURN).c_str(),e_road_railroad_switch_position::TURN,"");            //turn
    ;
    py::enum_<e_station_platform_segment_side>(m,"e_station_platform_segment_side", py::arithmetic(),"")
        .value(enum2str<e_station_platform_segment_side>(e_station_platform_segment_side::LEFT).c_str(),e_station_platform_segment_side::LEFT,"")            //left
        .value(enum2str<e_station_platform_segment_side>(e_station_platform_segment_side::RIGHT).c_str(),e_station_platform_segment_side::RIGHT,"");            //right
    ;
    py::enum_<e_station_type>(m,"e_station_type", py::arithmetic(),"")
        .value(enum2str<e_station_type>(e_station_type::SMALL).c_str(),e_station_type::SMALL,"")            //small
        .value(enum2str<e_station_type>(e_station_type::MEDIUM).c_str(),e_station_type::MEDIUM,"")            //medium
        .value(enum2str<e_station_type>(e_station_type::LARGE).c_str(),e_station_type::LARGE,"");            //large
    ;
    py::enum_<e_connection_type>(m,"e_connection_type", py::arithmetic(),"")
        .value(enum2str<e_connection_type>(e_connection_type::DEFAULT).c_str(),e_connection_type::DEFAULT,"")            //default
        .value(enum2str<e_connection_type>(e_connection_type::VIRTUAL).c_str(),e_connection_type::VIRTUAL,"");            //virtual
    ;
    py::enum_<e_contactPoint>(m,"e_contactPoint", py::arithmetic(),"")
        .value(enum2str<e_contactPoint>(e_contactPoint::START).c_str(),e_contactPoint::START,"")            //start
        .value(enum2str<e_contactPoint>(e_contactPoint::END).c_str(),e_contactPoint::END,"");            //end
    ;
    py::enum_<e_elementDir>(m,"e_elementDir", py::arithmetic(),"")
        .value(enum2str<e_elementDir>(e_elementDir::PLUS).c_str(),e_elementDir::PLUS,"")            //+
        .value(enum2str<e_elementDir>(e_elementDir::MINUS).c_str(),e_elementDir::MINUS,"");            //-
    ;
    py::enum_<e_junction_surface_CRG_mode>(m,"e_junction_surface_CRG_mode", py::arithmetic(),"")
        .value(enum2str<e_junction_surface_CRG_mode>(e_junction_surface_CRG_mode::GLOBAL).c_str(),e_junction_surface_CRG_mode::GLOBAL,"");            //global
    ;
    py::enum_<e_junction_type>(m,"e_junction_type", py::arithmetic(),"")
        .value(enum2str<e_junction_type>(e_junction_type::DEFAULT).c_str(),e_junction_type::DEFAULT,"")            //default
        .value(enum2str<e_junction_type>(e_junction_type::VIRTUAL).c_str(),e_junction_type::VIRTUAL,"")            //virtual
        .value(enum2str<e_junction_type>(e_junction_type::DIRECT).c_str(),e_junction_type::DIRECT,"");            //direct
    ;
    py::enum_<e_junctionGroup_type>(m,"e_junctionGroup_type", py::arithmetic(),"")
        .value(enum2str<e_junctionGroup_type>(e_junctionGroup_type::ROUNDABOUT).c_str(),e_junctionGroup_type::ROUNDABOUT,"")            //roundabout
        .value(enum2str<e_junctionGroup_type>(e_junctionGroup_type::UNKNOWN).c_str(),e_junctionGroup_type::UNKNOWN,"");            //unknown
    ;
    py::enum_<e_road_surface_CRG_mode>(m,"e_road_surface_CRG_mode", py::arithmetic(),"")
        .value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::ATTACHED).c_str(),e_road_surface_CRG_mode::ATTACHED,"")            //attached
        .value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::ATTACHED0).c_str(),e_road_surface_CRG_mode::ATTACHED0,"")            //attached0
        .value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::GENUINE).c_str(),e_road_surface_CRG_mode::GENUINE,"")            //genuine
        .value(enum2str<e_road_surface_CRG_mode>(e_road_surface_CRG_mode::GLOBAL).c_str(),e_road_surface_CRG_mode::GLOBAL,"");            //global
    ;
    py::enum_<e_road_surface_CRG_purpose>(m,"e_road_surface_CRG_purpose", py::arithmetic(),"")
        .value(enum2str<e_road_surface_CRG_purpose>(e_road_surface_CRG_purpose::ELEVATION).c_str(),e_road_surface_CRG_purpose::ELEVATION,"")            //elevation
        .value(enum2str<e_road_surface_CRG_purpose>(e_road_surface_CRG_purpose::FRICTION).c_str(),e_road_surface_CRG_purpose::FRICTION,"");            //friction
    ;
    py::enum_<e_road_signals_signal_reference_elementType>(m,"e_road_signals_signal_reference_elementType", py::arithmetic(),"")
        .value(enum2str<e_road_signals_signal_reference_elementType>(e_road_signals_signal_reference_elementType::OBJECT).c_str(),e_road_signals_signal_reference_elementType::OBJECT,"")            //object
        .value(enum2str<e_road_signals_signal_reference_elementType>(e_road_signals_signal_reference_elementType::SIGNAL).c_str(),e_road_signals_signal_reference_elementType::SIGNAL,"");            //signal
    ;
    py::enum_<e_countryCode_deprecated>(m,"e_countryCode_deprecated", py::arithmetic(),"")
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::OPENDRIVE).c_str(),e_countryCode_deprecated::OPENDRIVE,"")            //OpenDRIVE
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::AUSTRIA).c_str(),e_countryCode_deprecated::AUSTRIA,"")            //Austria
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::BRAZIL).c_str(),e_countryCode_deprecated::BRAZIL,"")            //Brazil
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::CHINA).c_str(),e_countryCode_deprecated::CHINA,"")            //China
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::FRANCE).c_str(),e_countryCode_deprecated::FRANCE,"")            //France
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::GERMANY).c_str(),e_countryCode_deprecated::GERMANY,"")            //Germany
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::ITALY).c_str(),e_countryCode_deprecated::ITALY,"")            //Italy
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::SWITZERLAND).c_str(),e_countryCode_deprecated::SWITZERLAND,"")            //Switzerland
        .value(enum2str<e_countryCode_deprecated>(e_countryCode_deprecated::USA).c_str(),e_countryCode_deprecated::USA,"");            //USA
    ;
    py::enum_<e_direction>(m,"e_direction", py::arithmetic(),"")
        .value(enum2str<e_direction>(e_direction::SAME).c_str(),e_direction::SAME,"")            //same
        .value(enum2str<e_direction>(e_direction::OPPOSITE).c_str(),e_direction::OPPOSITE,"");            //opposite
    ;
    py::enum_<e_maxSpeedString>(m,"e_maxSpeedString", py::arithmetic(),"")
        .value(enum2str<e_maxSpeedString>(e_maxSpeedString::NO_LIMIT).c_str(),e_maxSpeedString::NO_LIMIT,"")            //no limit
        .value(enum2str<e_maxSpeedString>(e_maxSpeedString::UNDEFINED).c_str(),e_maxSpeedString::UNDEFINED,"");            //undefined
    ;
    py::enum_<e_paramPoly3_pRange>(m,"e_paramPoly3_pRange", py::arithmetic(),"")
        .value(enum2str<e_paramPoly3_pRange>(e_paramPoly3_pRange::ARCLENGTH).c_str(),e_paramPoly3_pRange::ARCLENGTH,"")            //arcLength
        .value(enum2str<e_paramPoly3_pRange>(e_paramPoly3_pRange::NORMALIZED).c_str(),e_paramPoly3_pRange::NORMALIZED,"");            //normalized
    ;
    py::enum_<e_road_link_elementType>(m,"e_road_link_elementType", py::arithmetic(),"")
        .value(enum2str<e_road_link_elementType>(e_road_link_elementType::ROAD).c_str(),e_road_link_elementType::ROAD,"")            //road
        .value(enum2str<e_road_link_elementType>(e_road_link_elementType::JUNCTION).c_str(),e_road_link_elementType::JUNCTION,"");            //junction
    ;
    py::enum_<e_roadType>(m,"e_roadType", py::arithmetic(),"The known keywords for the road type information are:")
        .value(enum2str<e_roadType>(e_roadType::UNKNOWN).c_str(),e_roadType::UNKNOWN,"")            //unknown
        .value(enum2str<e_roadType>(e_roadType::RURAL).c_str(),e_roadType::RURAL,"")            //rural
        .value(enum2str<e_roadType>(e_roadType::MOTORWAY).c_str(),e_roadType::MOTORWAY,"")            //motorway
        .value(enum2str<e_roadType>(e_roadType::TOWN).c_str(),e_roadType::TOWN,"")            //town
        .value(enum2str<e_roadType>(e_roadType::LOWSPEED).c_str(),e_roadType::LOWSPEED,"In Germany, lowSpeed is equivalent to a 30km/h zone")            //lowSpeed
        .value(enum2str<e_roadType>(e_roadType::PEDESTRIAN).c_str(),e_roadType::PEDESTRIAN,"")            //pedestrian
        .value(enum2str<e_roadType>(e_roadType::BICYCLE).c_str(),e_roadType::BICYCLE,"")            //bicycle
        .value(enum2str<e_roadType>(e_roadType::TOWNEXPRESSWAY).c_str(),e_roadType::TOWNEXPRESSWAY,"")            //townExpressway
        .value(enum2str<e_roadType>(e_roadType::TOWNCOLLECTOR).c_str(),e_roadType::TOWNCOLLECTOR,"")            //townCollector
        .value(enum2str<e_roadType>(e_roadType::TOWNARTERIAL).c_str(),e_roadType::TOWNARTERIAL,"")            //townArterial
        .value(enum2str<e_roadType>(e_roadType::TOWNPRIVATE).c_str(),e_roadType::TOWNPRIVATE,"")            //townPrivate
        .value(enum2str<e_roadType>(e_roadType::TOWNLOCAL).c_str(),e_roadType::TOWNLOCAL,"")            //townLocal
        .value(enum2str<e_roadType>(e_roadType::TOWNPLAYSTREET).c_str(),e_roadType::TOWNPLAYSTREET,"");            //townPlayStreet
    ;
    py::enum_<e_trafficRule>(m,"e_trafficRule", py::arithmetic(),"")
        .value(enum2str<e_trafficRule>(e_trafficRule::RHT).c_str(),e_trafficRule::RHT,"")            //RHT
        .value(enum2str<e_trafficRule>(e_trafficRule::LHT).c_str(),e_trafficRule::LHT,"");            //LHT
    ;
    py::enum_<e_accessRestrictionType>(m,"e_accessRestrictionType", py::arithmetic(),"")
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::SIMULATOR).c_str(),e_accessRestrictionType::SIMULATOR,"")            //simulator
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::AUTONOMOUSTRAFFIC).c_str(),e_accessRestrictionType::AUTONOMOUSTRAFFIC,"")            //autonomousTraffic
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::PEDESTRIAN).c_str(),e_accessRestrictionType::PEDESTRIAN,"")            //pedestrian
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::PASSENGERCAR).c_str(),e_accessRestrictionType::PASSENGERCAR,"")            //passengerCar
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::BUS).c_str(),e_accessRestrictionType::BUS,"")            //bus
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::DELIVERY).c_str(),e_accessRestrictionType::DELIVERY,"")            //delivery
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::EMERGENCY).c_str(),e_accessRestrictionType::EMERGENCY,"")            //emergency
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::TAXI).c_str(),e_accessRestrictionType::TAXI,"")            //taxi
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::THROUGHTRAFFIC).c_str(),e_accessRestrictionType::THROUGHTRAFFIC,"")            //throughTraffic
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::TRUCK).c_str(),e_accessRestrictionType::TRUCK,"")            //truck
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::BICYCLE).c_str(),e_accessRestrictionType::BICYCLE,"")            //bicycle
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::MOTORCYCLE).c_str(),e_accessRestrictionType::MOTORCYCLE,"")            //motorcycle
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::NONE).c_str(),e_accessRestrictionType::NONE,"")            //none
        .value(enum2str<e_accessRestrictionType>(e_accessRestrictionType::TRUCKS).c_str(),e_accessRestrictionType::TRUCKS,"");            //trucks
    ;
    py::enum_<e_laneType>(m,"e_laneType", py::arithmetic(),"The lane type is defined per lane. A lane type defines the main purpose of a lane and its corresponding traffic rules.")
        .value(enum2str<e_laneType>(e_laneType::SHOULDER).c_str(),e_laneType::SHOULDER,"Describes a soft shoulder  at the edge of the road")            //shoulder
        .value(enum2str<e_laneType>(e_laneType::BORDER).c_str(),e_laneType::BORDER,"Describes a hard border at the edge of the road. has the same height as the drivable lane.")            //border
        .value(enum2str<e_laneType>(e_laneType::DRIVING).c_str(),e_laneType::DRIVING,"“normal” drivable road, which is not one of the other types")            //driving
        .value(enum2str<e_laneType>(e_laneType::STOP).c_str(),e_laneType::STOP,"Hard shoulder on motorways for emergency stops")            //stop
        .value(enum2str<e_laneType>(e_laneType::NONE).c_str(),e_laneType::NONE,"&quot;Invisible&quot; lane. This lane is on the most ouside of the road. Its only purpose is for simulation, that there is still opendrive present in case the (human) driver leaves the road. ")            //none
        .value(enum2str<e_laneType>(e_laneType::RESTRICTED).c_str(),e_laneType::RESTRICTED,"Lane on which cars should not drive, but have the same height as the drivable lanes. Typically they are separated with lines and often there are additional striped lines on them. ")            //restricted
        .value(enum2str<e_laneType>(e_laneType::PARKING).c_str(),e_laneType::PARKING,"Lane with parking spaces")            //parking
        .value(enum2str<e_laneType>(e_laneType::MEDIAN).c_str(),e_laneType::MEDIAN,"Lane between driving lanes in oposite directions. Typically used in towns on large roads, to separate the traffic.")            //median
        .value(enum2str<e_laneType>(e_laneType::BIKING).c_str(),e_laneType::BIKING,"Lane reserved for Cyclists ")            //biking
        .value(enum2str<e_laneType>(e_laneType::SIDEWALK).c_str(),e_laneType::SIDEWALK,"Lane on which pedestrians can walk savely")            //sidewalk
        .value(enum2str<e_laneType>(e_laneType::CURB).c_str(),e_laneType::CURB,"Lane &quot;curb&quot; is used for curbstones. These have a different height compared to the drivable lanes.")            //curb
        .value(enum2str<e_laneType>(e_laneType::EXIT).c_str(),e_laneType::EXIT,"Lane Type „exit“ is used for the sections which is parallel to the main road (meaning deceleration lanes) ")            //exit
        .value(enum2str<e_laneType>(e_laneType::ENTRY).c_str(),e_laneType::ENTRY,"Lane Type „entry“ is used for the sections which is parallel to the main road (meaning acceleration lanes")            //entry
        .value(enum2str<e_laneType>(e_laneType::ONRAMP).c_str(),e_laneType::ONRAMP,"A ramp leading to a motorway from rural/urban roads is an „onRamp“. ")            //onRamp
        .value(enum2str<e_laneType>(e_laneType::OFFRAMP).c_str(),e_laneType::OFFRAMP,"A ramp leading away from a motorway and onto rural/urban roads is an „offRamp”. ")            //offRamp
        .value(enum2str<e_laneType>(e_laneType::CONNECTINGRAMP).c_str(),e_laneType::CONNECTINGRAMP,"A ramp connecting two motorways is a „connectingRamp“ (e.g. motorway junction)")            //connectingRamp
        .value(enum2str<e_laneType>(e_laneType::BIDIRECTIONAL).c_str(),e_laneType::BIDIRECTIONAL,"this lane type has two use cases:a) only driving lane on a narrow road which may be used in both directions;b) continuous two-way left turn lane on multi-lane roads – US road networks")            //bidirectional
        .value(enum2str<e_laneType>(e_laneType::SPECIAL1).c_str(),e_laneType::SPECIAL1,"")            //special1
        .value(enum2str<e_laneType>(e_laneType::SPECIAL2).c_str(),e_laneType::SPECIAL2,"")            //special2
        .value(enum2str<e_laneType>(e_laneType::SPECIAL3).c_str(),e_laneType::SPECIAL3,"")            //special3
        .value(enum2str<e_laneType>(e_laneType::ROADWORKS).c_str(),e_laneType::ROADWORKS,"")            //roadWorks
        .value(enum2str<e_laneType>(e_laneType::TRAM).c_str(),e_laneType::TRAM,"")            //tram
        .value(enum2str<e_laneType>(e_laneType::RAIL).c_str(),e_laneType::RAIL,"")            //rail
        .value(enum2str<e_laneType>(e_laneType::BUS).c_str(),e_laneType::BUS,"")            //bus
        .value(enum2str<e_laneType>(e_laneType::TAXI).c_str(),e_laneType::TAXI,"")            //taxi
        .value(enum2str<e_laneType>(e_laneType::HOV).c_str(),e_laneType::HOV,"high-occupancy vehicle / carpool vehicle")            //HOV
        .value(enum2str<e_laneType>(e_laneType::MWYENTRY).c_str(),e_laneType::MWYENTRY,"entry (deprecated)")            //mwyEntry
        .value(enum2str<e_laneType>(e_laneType::MWYEXIT).c_str(),e_laneType::MWYEXIT,"exit (deprecated)");            //mwyExit
    ;
    py::enum_<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(m,"e_road_lanes_laneSection_lcr_lane_roadMark_laneChange", py::arithmetic(),"")
        .value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::INCREASE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::INCREASE,"")            //increase
        .value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::DECREASE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::DECREASE,"")            //decrease
        .value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::BOTH).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::BOTH,"")            //both
        .value(enum2str<e_road_lanes_laneSection_lcr_lane_roadMark_laneChange>(e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::NONE).c_str(),e_road_lanes_laneSection_lcr_lane_roadMark_laneChange::NONE,"");            //none
    ;
    py::enum_<e_road_lanes_laneSection_lr_lane_access_rule>(m,"e_road_lanes_laneSection_lr_lane_access_rule", py::arithmetic(),"")
        .value(enum2str<e_road_lanes_laneSection_lr_lane_access_rule>(e_road_lanes_laneSection_lr_lane_access_rule::ALLOW).c_str(),e_road_lanes_laneSection_lr_lane_access_rule::ALLOW,"")            //allow
        .value(enum2str<e_road_lanes_laneSection_lr_lane_access_rule>(e_road_lanes_laneSection_lr_lane_access_rule::DENY).c_str(),e_road_lanes_laneSection_lr_lane_access_rule::DENY,"");            //deny
    ;
    py::enum_<e_roadMarkColor>(m,"e_roadMarkColor", py::arithmetic(),"The known keywords for the road mark color information are:")
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::STANDARD).c_str(),e_roadMarkColor::STANDARD,"equivalent to &quot;white&quot;")            //standard
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::BLUE).c_str(),e_roadMarkColor::BLUE,"")            //blue
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::GREEN).c_str(),e_roadMarkColor::GREEN,"")            //green
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::RED).c_str(),e_roadMarkColor::RED,"")            //red
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::WHITE).c_str(),e_roadMarkColor::WHITE,"")            //white
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::YELLOW).c_str(),e_roadMarkColor::YELLOW,"")            //yellow
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::ORANGE).c_str(),e_roadMarkColor::ORANGE,"")            //orange
        .value(enum2str<e_roadMarkColor>(e_roadMarkColor::VIOLET).c_str(),e_roadMarkColor::VIOLET,"");            //violet
    ;
    py::enum_<e_roadMarkRule>(m,"e_roadMarkRule", py::arithmetic(),"")
        .value(enum2str<e_roadMarkRule>(e_roadMarkRule::NO_PASSING).c_str(),e_roadMarkRule::NO_PASSING,"")            //no passing
        .value(enum2str<e_roadMarkRule>(e_roadMarkRule::CAUTION).c_str(),e_roadMarkRule::CAUTION,"")            //caution
        .value(enum2str<e_roadMarkRule>(e_roadMarkRule::NONE).c_str(),e_roadMarkRule::NONE,"");            //none
    ;
    py::enum_<e_roadMarkType>(m,"e_roadMarkType", py::arithmetic(),"The known keywords for the simplified road mark type information are:")
        .value(enum2str<e_roadMarkType>(e_roadMarkType::NONE).c_str(),e_roadMarkType::NONE,"")            //none
        .value(enum2str<e_roadMarkType>(e_roadMarkType::SOLID).c_str(),e_roadMarkType::SOLID,"")            //solid
        .value(enum2str<e_roadMarkType>(e_roadMarkType::BROKEN).c_str(),e_roadMarkType::BROKEN,"")            //broken
        .value(enum2str<e_roadMarkType>(e_roadMarkType::SOLID_SOLID).c_str(),e_roadMarkType::SOLID_SOLID,"for double solid line")            //solid solid
        .value(enum2str<e_roadMarkType>(e_roadMarkType::SOLID_BROKEN).c_str(),e_roadMarkType::SOLID_BROKEN,"from inside to outside, exception: center lane – from left to right")            //solid broken
        .value(enum2str<e_roadMarkType>(e_roadMarkType::BROKEN_SOLID).c_str(),e_roadMarkType::BROKEN_SOLID,"from inside to outside, exception: center lane – from left to right")            //broken solid
        .value(enum2str<e_roadMarkType>(e_roadMarkType::BROKEN_BROKEN).c_str(),e_roadMarkType::BROKEN_BROKEN,"from inside to outside, exception: center lane – from left to right")            //broken broken
        .value(enum2str<e_roadMarkType>(e_roadMarkType::BOTTS_DOTS).c_str(),e_roadMarkType::BOTTS_DOTS,"")            //botts dots
        .value(enum2str<e_roadMarkType>(e_roadMarkType::GRASS).c_str(),e_roadMarkType::GRASS,"meaning a grass edge")            //grass
        .value(enum2str<e_roadMarkType>(e_roadMarkType::CURB).c_str(),e_roadMarkType::CURB,"")            //curb
        .value(enum2str<e_roadMarkType>(e_roadMarkType::CUSTOM).c_str(),e_roadMarkType::CUSTOM,"if detailed description is given in child tags")            //custom
        .value(enum2str<e_roadMarkType>(e_roadMarkType::EDGE).c_str(),e_roadMarkType::EDGE,"describing the limit of usable space on a road");            //edge
    ;
    py::enum_<e_roadMarkWeight>(m,"e_roadMarkWeight", py::arithmetic(),"")
        .value(enum2str<e_roadMarkWeight>(e_roadMarkWeight::STANDARD).c_str(),e_roadMarkWeight::STANDARD,"")            //standard
        .value(enum2str<e_roadMarkWeight>(e_roadMarkWeight::BOLD).c_str(),e_roadMarkWeight::BOLD,"");            //bold
    ;
    py::enum_<t_bool>(m,"t_bool", py::arithmetic(),"")
        .value(enum2str<t_bool>(t_bool::TRUE).c_str(),t_bool::TRUE,"")            //true
        .value(enum2str<t_bool>(t_bool::FALSE).c_str(),t_bool::FALSE,"");            //false
    ;
    py::class_<e_unit, std::shared_ptr<e_unit>>(m,"e_unit") // union definition
        .def_readwrite("unitDistance",&e_unit::unitDistance)
        .def_readwrite("unitSpeed",&e_unit::unitSpeed)
        .def_readwrite("unitMass",&e_unit::unitMass)
        .def_readwrite("unitSlope",&e_unit::unitSlope)
    ;
    py::class_<e_countryCode, std::shared_ptr<e_countryCode>>(m,"e_countryCode") // union definition
        .def_readwrite("m_e_countryCode_iso3166alpha2",&e_countryCode::m_e_countryCode_iso3166alpha2)
        .def_readwrite("m_e_countryCode_iso3166alpha3_deprecated",&e_countryCode::m_e_countryCode_iso3166alpha3_deprecated)
        .def_readwrite("countryCode_deprecated",&e_countryCode::countryCode_deprecated)
    ;
    py::class_<t_maxSpeed, std::shared_ptr<t_maxSpeed>>(m,"t_maxSpeed") // union definition
        .def_readwrite("m_t_grEqZero",&t_maxSpeed::m_t_grEqZero)
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
    .def_readwrite("g_additionalData", &OpenDRIVE::m_g_additionalData ) // group read 
            ;
    py::class_<xodr,std::shared_ptr<xodr>>(m, "xodr", "Main Clazz for interfacing with OpenDRIVE")
        .def(py::init<>())
        .def("load", &xodr::load, py::arg("filename"))
        .def("parse", &xodr::parse)
        .def_readwrite("OpenDRIVE", &xodr::m_OpenDRIVE);
}

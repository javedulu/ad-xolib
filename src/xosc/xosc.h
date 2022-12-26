//
//  OpenSCENARIO_v1.2.h
//  xsd2cxx- for OpenSCENARIO_v1.2 CXX classes
//
//  Created by Javed Shaik on Mon Dec 26 09:49:16 2022
//  # AUTO-GENERATED FILE - DO NOT EDIT!!
//  -- UUIDv4 : 486a545d-cc8f-47ca-89a0-0a4f9294aca8 --
//  All BUGS are Credited to ME :) - javedulu@gmail.com
//
#ifndef _OPENSCENARIO_V1_2_H_
#define _OPENSCENARIO_V1_2_H_
#pragma once 
#include <iostream>
#include <iomanip>
#include <sstream>
#include <memory>
#include <cstring>
#include <string>
#include <vector>
#include <limits>
//
#include "pugixml.hpp"
#include "common.h"
//#include "xosc_export.h"
//
// Typedefs 
const constexpr char parameter_pattern[] = "[$][A-Za-z_][A-Za-z0-9_]*"; 
typedef t_patternstr<parameter_pattern> parameter;
const constexpr char expression_pattern[] = "[$][{][ A-Za-z0-9_\\+\\-\\*/%$\\(\\)\\.,]*[\\}]"; 
typedef t_patternstr<expression_pattern> expression;
// Enumerations 
enum class e_AutomaticGearType : std::uint8_t  
{
      N,               //n 
      P,               //p 
      R,               //r 
      D               //d 
};
enum class e_CloudState : std::uint8_t  
{
      CLOUDY,               //cloudy 
      FREE,               //free 
      OVERCAST,               //overcast 
      RAINY,               //rainy 
      SKYOFF               //skyOff 
};
enum class e_ColorType : std::uint8_t  
{
      OTHER,               //other 
      RED,               //red 
      YELLOW,               //yellow 
      GREEN,               //green 
      BLUE,               //blue 
      VIOLET,               //violet 
      ORANGE,               //orange 
      BROWN,               //brown 
      BLACK,               //black 
      GREY,               //grey 
      WHITE               //white 
};
enum class e_ConditionEdge : std::uint8_t  
{
      FALLING,               //falling 
      NONE,               //none 
      RISING,               //rising 
      RISINGORFALLING               //risingOrFalling 
};
enum class e_ControllerType : std::uint8_t  
{
      LATERAL,               //lateral 
      LONGITUDINAL,               //longitudinal 
      LIGHTING,               //lighting 
      ANIMATION,               //animation 
      MOVEMENT,               //movement 
      APPEARANCE,               //appearance 
      ALL               //all 
};
enum class e_CoordinateSystem : std::uint8_t  
{
      ENTITY,               //entity 
      LANE,               //lane 
      ROAD,               //road 
      TRAJECTORY               //trajectory 
};
enum class e_DirectionalDimension : std::uint8_t  
{
      LONGITUDINAL,               //longitudinal 
      LATERAL,               //lateral 
      VERTICAL               //vertical 
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
enum class e_FractionalCloudCover : std::uint8_t  
{
      ZEROOKTAS,               //zeroOktas 
      ONEOKTAS,               //oneOktas 
      TWOOKTAS,               //twoOktas 
      THREEOKTAS,               //threeOktas 
      FOUROKTAS,               //fourOktas 
      FIVEOKTAS,               //fiveOktas 
      SIXOKTAS,               //sixOktas 
      SEVENOKTAS,               //sevenOktas 
      EIGHTOKTAS,               //eightOktas 
      NINEOKTAS               //nineOktas 
};
enum class e_LateralDisplacement : std::uint8_t  
{
      ANY,               //any 
      LEFTTOREFERENCEDENTITY,               //leftToReferencedEntity 
      RIGHTTOREFERENCEDENTITY               //rightToReferencedEntity 
};
enum class e_LightMode : std::uint8_t  
{
      ON,               //on 
      OFF,               //off 
      FLASHING               //flashing 
};
enum class e_LongitudinalDisplacement : std::uint8_t  
{
      ANY,               //any 
      TRAILINGREFERENCEDENTITY,               //trailingReferencedEntity 
      LEADINGREFERENCEDENTITY               //leadingReferencedEntity 
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
      VEHICLE,               //vehicle 
      EXTERNAL               //external 
};
enum class e_ParameterType : std::uint8_t  
{
      BOOLEAN,               //boolean 
      DATETIME,               //dateTime 
      DOUBLE,               //double 
      INTEGER,               //integer 
      STRING,               //string 
      UNSIGNEDINT,               //unsignedInt 
      UNSIGNEDSHORT,               //unsignedShort 
      INT               //int 
};
enum class e_PedestrianCategory : std::uint8_t  
{
      ANIMAL,               //animal 
      PEDESTRIAN,               //pedestrian 
      WHEELCHAIR               //wheelchair 
};
enum class e_PedestrianGestureType : std::uint8_t  
{
      PHONECALLRIGHTHAND,               //phoneCallRightHand 
      PHONECALLLEFTHAND,               //phoneCallLeftHand 
      PHONETEXTRIGHTHAND,               //phoneTextRightHand 
      PHONETEXTLEFTHAND,               //phoneTextLeftHand 
      WAVINGRIGHTARM,               //wavingRightArm 
      WAVINGLEFTARM,               //wavingLeftArm 
      UMBRELLARIGHTHAND,               //umbrellaRightHand 
      UMBRELLALEFTHAND,               //umbrellaLeftHand 
      CROSSARMS,               //crossArms 
      COFFEERIGHTHAND,               //coffeeRightHand 
      COFFEELEFTHAND,               //coffeeLeftHand 
      SANDWICHRIGHTHAND,               //sandwichRightHand 
      SANDWICHLEFTHAND               //sandwichLeftHand 
};
enum class e_PedestrianMotionType : std::uint8_t  
{
      STANDING,               //standing 
      SITTING,               //sitting 
      LYING,               //lying 
      SQUATTING,               //squatting 
      WALKING,               //walking 
      RUNNING,               //running 
      REELING,               //reeling 
      CRAWLING,               //crawling 
      CYCLING,               //cycling 
      JUMPING,               //jumping 
      DUCKING,               //ducking 
      BENDINGDOWN               //bendingDown 
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
      OVERRIDE,               //override 
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
      LATERAL,               //lateral 
      LONGITUDINAL,               //longitudinal 
      CARTESIANDISTANCE,               //cartesianDistance 
      EUCLIDIANDISTANCE               //euclidianDistance 
};
enum class e_Role : std::uint8_t  
{
      NONE,               //none 
      AMBULANCE,               //ambulance 
      CIVIL,               //civil 
      FIRE,               //fire 
      MILITARY,               //military 
      POLICE,               //police 
      PUBLICTRANSPORT,               //publicTransport 
      ROADASSISTANCE               //roadAssistance 
};
enum class e_RouteStrategy : std::uint8_t  
{
      FASTEST,               //fastest 
      LEASTINTERSECTIONS,               //leastIntersections 
      RANDOM,               //random 
      SHORTEST               //shortest 
};
enum class e_RoutingAlgorithm : std::uint8_t  
{
      ASSIGNEDROUTE,               //assignedRoute 
      FASTEST,               //fastest 
      LEASTINTERSECTIONS,               //leastIntersections 
      SHORTEST,               //shortest 
      UNDEFINED               //undefined 
};
enum class e_Rule : std::uint8_t  
{
      EQUALTO,               //equalTo 
      GREATERTHAN,               //greaterThan 
      LESSTHAN,               //lessThan 
      GREATEROREQUAL,               //greaterOrEqual 
      LESSOREQUAL,               //lessOrEqual 
      NOTEQUALTO               //notEqualTo 
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
enum class e_VehicleComponentType : std::uint8_t  
{
      HOOD,               //hood 
      TRUNK,               //trunk 
      DOORFRONTRIGHT,               //doorFrontRight 
      DOORFRONTLEFT,               //doorFrontLeft 
      DOORREARRIGHT,               //doorRearRight 
      DOORREARLEFT,               //doorRearLeft 
      WINDOWFRONTRIGHT,               //windowFrontRight 
      WINDOWFRONTLEFT,               //windowFrontLeft 
      WINDOWREARRIGHT,               //windowRearRight 
      WINDOWREARLEFT,               //windowRearLeft 
      SIDEMIRRORS,               //sideMirrors 
      SIDEMIRRORRIGHT,               //sideMirrorRight 
      SIDEMIRRORLEFT               //sideMirrorLeft 
};
enum class e_VehicleLightType : std::uint8_t  
{
      DAYTIMERUNNINGLIGHTS,               //daytimeRunningLights 
      LOWBEAM,               //lowBeam 
      HIGHBEAM,               //highBeam 
      FOGLIGHTS,               //fogLights 
      FOGLIGHTSFRONT,               //fogLightsFront 
      FOGLIGHTSREAR,               //fogLightsRear 
      BRAKELIGHTS,               //brakeLights 
      WARNINGLIGHTS,               //warningLights 
      INDICATORLEFT,               //indicatorLeft 
      INDICATORRIGHT,               //indicatorRight 
      REVERSINGLIGHTS,               //reversingLights 
      LICENSEPLATEILLUMINATION,               //licensePlateIllumination 
      SPECIALPURPOSELIGHTS               //specialPurposeLights 
};
enum class e_Wetness : std::uint8_t  
{
      DRY,               //dry 
      MOIST,               //moist 
      WETWITHPUDDLES,               //wetWithPuddles 
      LOWFLOODED,               //lowFlooded 
      HIGHFLOODED               //highFlooded 
};
// Union Defintions
struct  Boolean	// TODO: >> Should be union - will have to handle properly 
{
public:
      expression  m_expression;
      parameter  m_parameter;
      bool  m_boolean;
public:
    Boolean(){};
    Boolean(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~Boolean(){};
};
struct  DateTime	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      t_datetime  m_dateTime;
public:
    DateTime(){};
    DateTime(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~DateTime(){};
};
struct  Double	// TODO: >> Should be union - will have to handle properly 
{
public:
      expression  m_expression;
      parameter  m_parameter;
      double  m_double;
public:
    Double(){};
    Double(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~Double(){};
};
struct  Int	// TODO: >> Should be union - will have to handle properly 
{
public:
      expression  m_expression;
      parameter  m_parameter;
      int  m_int;
public:
    Int(){};
    Int(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~Int(){};
};
struct  String	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      std::string  m_string;
public:
    String(){};
    String(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~String(){};
};
struct  UnsignedInt	// TODO: >> Should be union - will have to handle properly 
{
public:
      expression  m_expression;
      parameter  m_parameter;
      uint64_t  m_unsignedInt;
public:
    UnsignedInt(){};
    UnsignedInt(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~UnsignedInt(){};
};
struct  UnsignedShort	// TODO: >> Should be union - will have to handle properly 
{
public:
      expression  m_expression;
      parameter  m_parameter;
      uint64_t  m_unsignedShort;
public:
    UnsignedShort(){};
    UnsignedShort(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~UnsignedShort(){};
};
struct  AutomaticGearType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_AutomaticGearType  automaticGearType;
public:
    AutomaticGearType(){};
    AutomaticGearType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~AutomaticGearType(){};
};
struct  CloudState	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_CloudState  cloudState;
public:
    CloudState(){};
    CloudState(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~CloudState(){};
};
struct  ColorType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_ColorType  colorType;
public:
    ColorType(){};
    ColorType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~ColorType(){};
};
struct  ConditionEdge	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_ConditionEdge  conditionEdge;
public:
    ConditionEdge(){};
    ConditionEdge(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~ConditionEdge(){};
};
struct  ControllerType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_ControllerType  controllerType;
public:
    ControllerType(){};
    ControllerType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~ControllerType(){};
};
struct  CoordinateSystem	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_CoordinateSystem  coordinateSystem;
public:
    CoordinateSystem(){};
    CoordinateSystem(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~CoordinateSystem(){};
};
struct  DirectionalDimension	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_DirectionalDimension  directionalDimension;
public:
    DirectionalDimension(){};
    DirectionalDimension(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~DirectionalDimension(){};
};
struct  DynamicsDimension	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_DynamicsDimension  dynamicsDimension;
public:
    DynamicsDimension(){};
    DynamicsDimension(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~DynamicsDimension(){};
};
struct  DynamicsShape	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_DynamicsShape  dynamicsShape;
public:
    DynamicsShape(){};
    DynamicsShape(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~DynamicsShape(){};
};
struct  FollowingMode	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_FollowingMode  followingMode;
public:
    FollowingMode(){};
    FollowingMode(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~FollowingMode(){};
};
struct  FractionalCloudCover	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_FractionalCloudCover  fractionalCloudCover;
public:
    FractionalCloudCover(){};
    FractionalCloudCover(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~FractionalCloudCover(){};
};
struct  LateralDisplacement	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_LateralDisplacement  lateralDisplacement;
public:
    LateralDisplacement(){};
    LateralDisplacement(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~LateralDisplacement(){};
};
struct  LightMode	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_LightMode  lightMode;
public:
    LightMode(){};
    LightMode(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~LightMode(){};
};
struct  LongitudinalDisplacement	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_LongitudinalDisplacement  longitudinalDisplacement;
public:
    LongitudinalDisplacement(){};
    LongitudinalDisplacement(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~LongitudinalDisplacement(){};
};
struct  MiscObjectCategory	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_MiscObjectCategory  miscObjectCategory;
public:
    MiscObjectCategory(){};
    MiscObjectCategory(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~MiscObjectCategory(){};
};
struct  ObjectType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_ObjectType  objectType;
public:
    ObjectType(){};
    ObjectType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~ObjectType(){};
};
struct  ParameterType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_ParameterType  parameterType;
public:
    ParameterType(){};
    ParameterType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~ParameterType(){};
};
struct  PedestrianCategory	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_PedestrianCategory  pedestrianCategory;
public:
    PedestrianCategory(){};
    PedestrianCategory(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~PedestrianCategory(){};
};
struct  PedestrianGestureType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_PedestrianGestureType  pedestrianGestureType;
public:
    PedestrianGestureType(){};
    PedestrianGestureType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~PedestrianGestureType(){};
};
struct  PedestrianMotionType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_PedestrianMotionType  pedestrianMotionType;
public:
    PedestrianMotionType(){};
    PedestrianMotionType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~PedestrianMotionType(){};
};
struct  PrecipitationType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_PrecipitationType  precipitationType;
public:
    PrecipitationType(){};
    PrecipitationType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~PrecipitationType(){};
};
struct  Priority	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_Priority  priority;
public:
    Priority(){};
    Priority(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~Priority(){};
};
struct  ReferenceContext	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_ReferenceContext  referenceContext;
public:
    ReferenceContext(){};
    ReferenceContext(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~ReferenceContext(){};
};
struct  RelativeDistanceType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_RelativeDistanceType  relativeDistanceType;
public:
    RelativeDistanceType(){};
    RelativeDistanceType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~RelativeDistanceType(){};
};
struct  Role	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_Role  role;
public:
    Role(){};
    Role(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~Role(){};
};
struct  RouteStrategy	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_RouteStrategy  routeStrategy;
public:
    RouteStrategy(){};
    RouteStrategy(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~RouteStrategy(){};
};
struct  RoutingAlgorithm	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_RoutingAlgorithm  routingAlgorithm;
public:
    RoutingAlgorithm(){};
    RoutingAlgorithm(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~RoutingAlgorithm(){};
};
struct  Rule	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_Rule  rule;
public:
    Rule(){};
    Rule(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~Rule(){};
};
struct  SpeedTargetValueType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_SpeedTargetValueType  speedTargetValueType;
public:
    SpeedTargetValueType(){};
    SpeedTargetValueType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~SpeedTargetValueType(){};
};
struct  StoryboardElementState	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_StoryboardElementState  storyboardElementState;
public:
    StoryboardElementState(){};
    StoryboardElementState(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~StoryboardElementState(){};
};
struct  StoryboardElementType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_StoryboardElementType  storyboardElementType;
public:
    StoryboardElementType(){};
    StoryboardElementType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~StoryboardElementType(){};
};
struct  TriggeringEntitiesRule	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_TriggeringEntitiesRule  triggeringEntitiesRule;
public:
    TriggeringEntitiesRule(){};
    TriggeringEntitiesRule(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~TriggeringEntitiesRule(){};
};
struct  VehicleCategory	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_VehicleCategory  vehicleCategory;
public:
    VehicleCategory(){};
    VehicleCategory(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~VehicleCategory(){};
};
struct  VehicleComponentType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_VehicleComponentType  vehicleComponentType;
public:
    VehicleComponentType(){};
    VehicleComponentType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~VehicleComponentType(){};
};
struct  VehicleLightType	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_VehicleLightType  vehicleLightType;
public:
    VehicleLightType(){};
    VehicleLightType(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~VehicleLightType(){};
};
struct  Wetness	// TODO: >> Should be union - will have to handle properly 
{
public:
      parameter  m_parameter;
      e_Wetness  wetness;
public:
    Wetness(){};
    Wetness(pugi::xml_attribute attr);
    void save(pugi::xml_attribute attr);
    ~Wetness(){};
};
// Enumerations to String Value Maps
template<>
inline std::vector<std::pair<std::string, e_AutomaticGearType>>enum_map()
{
    return {
        { "n", e_AutomaticGearType::N } , 
        { "p", e_AutomaticGearType::P } , 
        { "r", e_AutomaticGearType::R } , 
        { "d", e_AutomaticGearType::D }  
    };
}
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
inline std::vector<std::pair<std::string, e_ColorType>>enum_map()
{
    return {
        { "other", e_ColorType::OTHER } , 
        { "red", e_ColorType::RED } , 
        { "yellow", e_ColorType::YELLOW } , 
        { "green", e_ColorType::GREEN } , 
        { "blue", e_ColorType::BLUE } , 
        { "violet", e_ColorType::VIOLET } , 
        { "orange", e_ColorType::ORANGE } , 
        { "brown", e_ColorType::BROWN } , 
        { "black", e_ColorType::BLACK } , 
        { "grey", e_ColorType::GREY } , 
        { "white", e_ColorType::WHITE }  
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
inline std::vector<std::pair<std::string, e_ControllerType>>enum_map()
{
    return {
        { "lateral", e_ControllerType::LATERAL } , 
        { "longitudinal", e_ControllerType::LONGITUDINAL } , 
        { "lighting", e_ControllerType::LIGHTING } , 
        { "animation", e_ControllerType::ANIMATION } , 
        { "movement", e_ControllerType::MOVEMENT } , 
        { "appearance", e_ControllerType::APPEARANCE } , 
        { "all", e_ControllerType::ALL }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_CoordinateSystem>>enum_map()
{
    return {
        { "entity", e_CoordinateSystem::ENTITY } , 
        { "lane", e_CoordinateSystem::LANE } , 
        { "road", e_CoordinateSystem::ROAD } , 
        { "trajectory", e_CoordinateSystem::TRAJECTORY }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_DirectionalDimension>>enum_map()
{
    return {
        { "longitudinal", e_DirectionalDimension::LONGITUDINAL } , 
        { "lateral", e_DirectionalDimension::LATERAL } , 
        { "vertical", e_DirectionalDimension::VERTICAL }  
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
inline std::vector<std::pair<std::string, e_FractionalCloudCover>>enum_map()
{
    return {
        { "zeroOktas", e_FractionalCloudCover::ZEROOKTAS } , 
        { "oneOktas", e_FractionalCloudCover::ONEOKTAS } , 
        { "twoOktas", e_FractionalCloudCover::TWOOKTAS } , 
        { "threeOktas", e_FractionalCloudCover::THREEOKTAS } , 
        { "fourOktas", e_FractionalCloudCover::FOUROKTAS } , 
        { "fiveOktas", e_FractionalCloudCover::FIVEOKTAS } , 
        { "sixOktas", e_FractionalCloudCover::SIXOKTAS } , 
        { "sevenOktas", e_FractionalCloudCover::SEVENOKTAS } , 
        { "eightOktas", e_FractionalCloudCover::EIGHTOKTAS } , 
        { "nineOktas", e_FractionalCloudCover::NINEOKTAS }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_LateralDisplacement>>enum_map()
{
    return {
        { "any", e_LateralDisplacement::ANY } , 
        { "leftToReferencedEntity", e_LateralDisplacement::LEFTTOREFERENCEDENTITY } , 
        { "rightToReferencedEntity", e_LateralDisplacement::RIGHTTOREFERENCEDENTITY }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_LightMode>>enum_map()
{
    return {
        { "on", e_LightMode::ON } , 
        { "off", e_LightMode::OFF } , 
        { "flashing", e_LightMode::FLASHING }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_LongitudinalDisplacement>>enum_map()
{
    return {
        { "any", e_LongitudinalDisplacement::ANY } , 
        { "trailingReferencedEntity", e_LongitudinalDisplacement::TRAILINGREFERENCEDENTITY } , 
        { "leadingReferencedEntity", e_LongitudinalDisplacement::LEADINGREFERENCEDENTITY }  
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
        { "vehicle", e_ObjectType::VEHICLE } , 
        { "external", e_ObjectType::EXTERNAL }  
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
        { "unsignedShort", e_ParameterType::UNSIGNEDSHORT } , 
        { "int", e_ParameterType::INT }  
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
inline std::vector<std::pair<std::string, e_PedestrianGestureType>>enum_map()
{
    return {
        { "phoneCallRightHand", e_PedestrianGestureType::PHONECALLRIGHTHAND } , 
        { "phoneCallLeftHand", e_PedestrianGestureType::PHONECALLLEFTHAND } , 
        { "phoneTextRightHand", e_PedestrianGestureType::PHONETEXTRIGHTHAND } , 
        { "phoneTextLeftHand", e_PedestrianGestureType::PHONETEXTLEFTHAND } , 
        { "wavingRightArm", e_PedestrianGestureType::WAVINGRIGHTARM } , 
        { "wavingLeftArm", e_PedestrianGestureType::WAVINGLEFTARM } , 
        { "umbrellaRightHand", e_PedestrianGestureType::UMBRELLARIGHTHAND } , 
        { "umbrellaLeftHand", e_PedestrianGestureType::UMBRELLALEFTHAND } , 
        { "crossArms", e_PedestrianGestureType::CROSSARMS } , 
        { "coffeeRightHand", e_PedestrianGestureType::COFFEERIGHTHAND } , 
        { "coffeeLeftHand", e_PedestrianGestureType::COFFEELEFTHAND } , 
        { "sandwichRightHand", e_PedestrianGestureType::SANDWICHRIGHTHAND } , 
        { "sandwichLeftHand", e_PedestrianGestureType::SANDWICHLEFTHAND }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_PedestrianMotionType>>enum_map()
{
    return {
        { "standing", e_PedestrianMotionType::STANDING } , 
        { "sitting", e_PedestrianMotionType::SITTING } , 
        { "lying", e_PedestrianMotionType::LYING } , 
        { "squatting", e_PedestrianMotionType::SQUATTING } , 
        { "walking", e_PedestrianMotionType::WALKING } , 
        { "running", e_PedestrianMotionType::RUNNING } , 
        { "reeling", e_PedestrianMotionType::REELING } , 
        { "crawling", e_PedestrianMotionType::CRAWLING } , 
        { "cycling", e_PedestrianMotionType::CYCLING } , 
        { "jumping", e_PedestrianMotionType::JUMPING } , 
        { "ducking", e_PedestrianMotionType::DUCKING } , 
        { "bendingDown", e_PedestrianMotionType::BENDINGDOWN }  
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
        { "override", e_Priority::OVERRIDE } , 
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
        { "lateral", e_RelativeDistanceType::LATERAL } , 
        { "longitudinal", e_RelativeDistanceType::LONGITUDINAL } , 
        { "cartesianDistance", e_RelativeDistanceType::CARTESIANDISTANCE } , 
        { "euclidianDistance", e_RelativeDistanceType::EUCLIDIANDISTANCE }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_Role>>enum_map()
{
    return {
        { "none", e_Role::NONE } , 
        { "ambulance", e_Role::AMBULANCE } , 
        { "civil", e_Role::CIVIL } , 
        { "fire", e_Role::FIRE } , 
        { "military", e_Role::MILITARY } , 
        { "police", e_Role::POLICE } , 
        { "publicTransport", e_Role::PUBLICTRANSPORT } , 
        { "roadAssistance", e_Role::ROADASSISTANCE }  
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
inline std::vector<std::pair<std::string, e_RoutingAlgorithm>>enum_map()
{
    return {
        { "assignedRoute", e_RoutingAlgorithm::ASSIGNEDROUTE } , 
        { "fastest", e_RoutingAlgorithm::FASTEST } , 
        { "leastIntersections", e_RoutingAlgorithm::LEASTINTERSECTIONS } , 
        { "shortest", e_RoutingAlgorithm::SHORTEST } , 
        { "undefined", e_RoutingAlgorithm::UNDEFINED }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_Rule>>enum_map()
{
    return {
        { "equalTo", e_Rule::EQUALTO } , 
        { "greaterThan", e_Rule::GREATERTHAN } , 
        { "lessThan", e_Rule::LESSTHAN } , 
        { "greaterOrEqual", e_Rule::GREATEROREQUAL } , 
        { "lessOrEqual", e_Rule::LESSOREQUAL } , 
        { "notEqualTo", e_Rule::NOTEQUALTO }  
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
template<>
inline std::vector<std::pair<std::string, e_VehicleComponentType>>enum_map()
{
    return {
        { "hood", e_VehicleComponentType::HOOD } , 
        { "trunk", e_VehicleComponentType::TRUNK } , 
        { "doorFrontRight", e_VehicleComponentType::DOORFRONTRIGHT } , 
        { "doorFrontLeft", e_VehicleComponentType::DOORFRONTLEFT } , 
        { "doorRearRight", e_VehicleComponentType::DOORREARRIGHT } , 
        { "doorRearLeft", e_VehicleComponentType::DOORREARLEFT } , 
        { "windowFrontRight", e_VehicleComponentType::WINDOWFRONTRIGHT } , 
        { "windowFrontLeft", e_VehicleComponentType::WINDOWFRONTLEFT } , 
        { "windowRearRight", e_VehicleComponentType::WINDOWREARRIGHT } , 
        { "windowRearLeft", e_VehicleComponentType::WINDOWREARLEFT } , 
        { "sideMirrors", e_VehicleComponentType::SIDEMIRRORS } , 
        { "sideMirrorRight", e_VehicleComponentType::SIDEMIRRORRIGHT } , 
        { "sideMirrorLeft", e_VehicleComponentType::SIDEMIRRORLEFT }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_VehicleLightType>>enum_map()
{
    return {
        { "daytimeRunningLights", e_VehicleLightType::DAYTIMERUNNINGLIGHTS } , 
        { "lowBeam", e_VehicleLightType::LOWBEAM } , 
        { "highBeam", e_VehicleLightType::HIGHBEAM } , 
        { "fogLights", e_VehicleLightType::FOGLIGHTS } , 
        { "fogLightsFront", e_VehicleLightType::FOGLIGHTSFRONT } , 
        { "fogLightsRear", e_VehicleLightType::FOGLIGHTSREAR } , 
        { "brakeLights", e_VehicleLightType::BRAKELIGHTS } , 
        { "warningLights", e_VehicleLightType::WARNINGLIGHTS } , 
        { "indicatorLeft", e_VehicleLightType::INDICATORLEFT } , 
        { "indicatorRight", e_VehicleLightType::INDICATORRIGHT } , 
        { "reversingLights", e_VehicleLightType::REVERSINGLIGHTS } , 
        { "licensePlateIllumination", e_VehicleLightType::LICENSEPLATEILLUMINATION } , 
        { "specialPurposeLights", e_VehicleLightType::SPECIALPURPOSELIGHTS }  
    };
}
template<>
inline std::vector<std::pair<std::string, e_Wetness>>enum_map()
{
    return {
        { "dry", e_Wetness::DRY } , 
        { "moist", e_Wetness::MOIST } , 
        { "wetWithPuddles", e_Wetness::WETWITHPUDDLES } , 
        { "lowFlooded", e_Wetness::LOWFLOODED } , 
        { "highFlooded", e_Wetness::HIGHFLOODED }  
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
struct AnimationAction;
struct AnimationFile;
struct AnimationState;
struct AnimationType;
struct AppearanceAction;
struct AssignControllerAction;
struct AssignRouteAction;
struct AutomaticGear;
struct Axle;
struct Axles;
struct BoundingBox;
struct Brake;
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
struct Color;
struct ColorCmyk;
struct ColorRgb;
struct ComponentAnimation;
struct Condition;
struct ConditionGroup;
struct Controller;
struct ControllerAction;
struct ControllerCatalogLocation;
struct ControllerDistribution;
struct ControllerDistributionEntry;
struct ControlPoint;
struct CustomCommandAction;
struct CustomContent;
struct DeleteEntityAction;
struct Deterministic;
struct DeterministicMultiParameterDistribution;
struct DeterministicSingleParameterDistribution;
struct Dimensions;
struct DirectionOfTravelDistribution;
struct Directory;
struct DistanceCondition;
struct DistributionRange;
struct DistributionSet;
struct DistributionSetElement;
struct DomeImage;
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
struct ExternalObjectReference;
struct File;
struct FileHeader;
struct FinalSpeed;
struct Fog;
struct FollowTrajectoryAction;
struct GeoPosition;
struct GlobalAction;
struct Histogram;
struct HistogramBin;
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
struct License;
struct LightState;
struct LightStateAction;
struct LightType;
struct LongitudinalAction;
struct LongitudinalDistanceAction;
struct Maneuver;
struct ManeuverCatalogLocation;
struct ManeuverGroup;
struct ManualGear;
struct MiscObject;
struct MiscObjectCatalogLocation;
struct ModifyRule;
struct None;
struct NormalDistribution;
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
struct ParameterValueDistribution;
struct ParameterValueSet;
struct Pedestrian;
struct PedestrianAnimation;
struct PedestrianCatalogLocation;
struct PedestrianGesture;
struct Performance;
struct Phase;
struct PoissonDistribution;
struct Polyline;
struct Position;
struct PositionInLaneCoordinates;
struct PositionInRoadCoordinates;
struct PositionOfCurrentEntity;
struct Precipitation;
struct Private;
struct PrivateAction;
struct ProbabilityDistributionSet;
struct ProbabilityDistributionSetElement;
struct Properties;
struct Property;
struct Range;
struct ReachPositionCondition;
struct RelativeClearanceCondition;
struct RelativeDistanceCondition;
struct RelativeLanePosition;
struct RelativeLaneRange;
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
struct SensorReference;
struct SensorReferenceSet;
struct Shape;
struct SimulationTimeCondition;
struct SpeedAction;
struct SpeedActionTarget;
struct SpeedCondition;
struct SpeedProfileAction;
struct SpeedProfileEntry;
struct StandStillCondition;
struct Stochastic;
struct StochasticDistribution;
struct Story;
struct Storyboard;
struct StoryboardElementStateCondition;
struct Sun;
struct SynchronizeAction;
struct TargetDistanceSteadyState;
struct TargetTimeSteadyState;
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
struct TrafficSignalGroupState;
struct TrafficSignalState;
struct TrafficSignalStateAction;
struct TrafficSinkAction;
struct TrafficSourceAction;
struct TrafficStopAction;
struct TrafficSwarmAction;
struct Trajectory;
struct TrajectoryCatalogLocation;
struct TrajectoryFollowingMode;
struct TrajectoryPosition;
struct TrajectoryRef;
struct TransitionDynamics;
struct TraveledDistanceCondition;
struct Trigger;
struct TriggeringEntities;
struct UniformDistribution;
struct UsedArea;
struct UserDefinedAction;
struct UserDefinedAnimation;
struct UserDefinedComponent;
struct UserDefinedDistribution;
struct UserDefinedLight;
struct UserDefinedValueCondition;
struct ValueConstraint;
struct ValueConstraintGroup;
struct ValueSetDistribution;
struct VariableAction;
struct VariableAddValueRule;
struct VariableCondition;
struct VariableDeclaration;
struct VariableDeclarations;
struct VariableModifyAction;
struct VariableModifyRule;
struct VariableMultiplyByValueRule;
struct VariableSetAction;
struct Vehicle;
struct VehicleCatalogLocation;
struct VehicleCategoryDistribution;
struct VehicleCategoryDistributionEntry;
struct VehicleComponent;
struct VehicleLight;
struct VehicleRoleDistribution;
struct VehicleRoleDistributionEntry;
struct Vertex;
struct VisibilityAction;
struct Waypoint;
struct Weather;
struct Wind;
struct WorldPosition;
// xs:group -> aliased to group definition
struct BrakeInput;
struct CatalogDefinition;
struct DeterministicMultiParameterDistributionType;
struct DeterministicParameterDistribution;
struct DeterministicSingleParameterDistributionType;
struct DistributionDefinition;
struct EntityObject;
struct Gear;
struct OpenScenarioCategory;
struct ParameterValueDistributionDefinition;
struct ScenarioDefinition;
struct SteadyState;
struct StochasticDistributionType;
//End Forward Declarations
struct  Action_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<GlobalAction>                 m_GlobalAction; //xs:element
    std::shared_ptr<UserDefinedAction>                 m_UserDefinedAction; //xs:element
    std::shared_ptr<PrivateAction>                 m_PrivateAction; //xs:element
public:
    Action_U(){};
    Action_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~Action_U(){};
};
struct  AnimationType_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<ComponentAnimation>                 m_ComponentAnimation; //xs:element
    std::shared_ptr<PedestrianAnimation>                 m_PedestrianAnimation; //xs:element
    std::shared_ptr<AnimationFile>                 m_AnimationFile; //xs:element
    std::shared_ptr<UserDefinedAnimation>                 m_UserDefinedAnimation; //xs:element
public:
    AnimationType_U(){};
    AnimationType_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~AnimationType_U(){};
};
struct  AssignControllerAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<Controller>                 m_Controller; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    AssignControllerAction_U(){};
    AssignControllerAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~AssignControllerAction_U(){};
};
struct  AssignRouteAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<Route>                 m_Route; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    AssignRouteAction_U(){};
    AssignRouteAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~AssignRouteAction_U(){};
};
struct  ByValueCondition_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<ParameterCondition>                 m_ParameterCondition; //xs:element
    std::shared_ptr<TimeOfDayCondition>                 m_TimeOfDayCondition; //xs:element
    std::shared_ptr<SimulationTimeCondition>                 m_SimulationTimeCondition; //xs:element
    std::shared_ptr<StoryboardElementStateCondition>                 m_StoryboardElementStateCondition; //xs:element
    std::shared_ptr<UserDefinedValueCondition>                 m_UserDefinedValueCondition; //xs:element
    std::shared_ptr<TrafficSignalCondition>                 m_TrafficSignalCondition; //xs:element
    std::shared_ptr<TrafficSignalControllerCondition>                 m_TrafficSignalControllerCondition; //xs:element
    std::shared_ptr<VariableCondition>                 m_VariableCondition; //xs:element
public:
    ByValueCondition_U(){};
    ByValueCondition_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~ByValueCondition_U(){};
};
struct  CollisionCondition_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<EntityRef>                 m_EntityRef; //xs:element
    std::shared_ptr<ByObjectType>                 m_ByType; //xs:element
public:
    CollisionCondition_U(){};
    CollisionCondition_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~CollisionCondition_U(){};
};
struct  Color_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<ColorRgb>                 m_ColorRgb; //xs:element
    std::shared_ptr<ColorCmyk>                 m_ColorCmyk; //xs:element
public:
    Color_U(){};
    Color_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~Color_U(){};
};
struct  Condition_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<ByEntityCondition>                 m_ByEntityCondition; //xs:element
    std::shared_ptr<ByValueCondition>                 m_ByValueCondition; //xs:element
public:
    Condition_U(){};
    Condition_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~Condition_U(){};
};
struct  ControllerDistributionEntry_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<Controller>                 m_Controller; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    ControllerDistributionEntry_U(){};
    ControllerDistributionEntry_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~ControllerDistributionEntry_U(){};
};
struct  EntityAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<AddEntityAction>                 m_AddEntityAction; //xs:element
    std::shared_ptr<DeleteEntityAction>                 m_DeleteEntityAction; //xs:element
public:
    EntityAction_U(){};
    EntityAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~EntityAction_U(){};
};
struct  EntityCondition_U	// TODO: >> Should be union - will have to handle properly 
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
    std::shared_ptr<RelativeClearanceCondition>                 m_RelativeClearanceCondition; //xs:element
public:
    EntityCondition_U(){};
    EntityCondition_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~EntityCondition_U(){};
};
struct  EnvironmentAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<Environment>                 m_Environment; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    EnvironmentAction_U(){};
    EnvironmentAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~EnvironmentAction_U(){};
};
struct  FinalSpeed_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<AbsoluteSpeed>                 m_AbsoluteSpeed; //xs:element
    std::shared_ptr<RelativeSpeedToMaster>                 m_RelativeSpeedToMaster; //xs:element
public:
    FinalSpeed_U(){};
    FinalSpeed_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~FinalSpeed_U(){};
};
struct  GlobalAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<EnvironmentAction>                 m_EnvironmentAction; //xs:element
    std::shared_ptr<EntityAction>                 m_EntityAction; //xs:element
    std::shared_ptr<ParameterAction>                 m_ParameterAction; //xs:element
    std::shared_ptr<InfrastructureAction>                 m_InfrastructureAction; //xs:element
    std::shared_ptr<TrafficAction>                 m_TrafficAction; //xs:element
    std::shared_ptr<VariableAction>                 m_VariableAction; //xs:element
public:
    GlobalAction_U(){};
    GlobalAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~GlobalAction_U(){};
};
struct  InRoutePosition_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<PositionOfCurrentEntity>                 m_FromCurrentEntity; //xs:element
    std::shared_ptr<PositionInRoadCoordinates>                 m_FromRoadCoordinates; //xs:element
    std::shared_ptr<PositionInLaneCoordinates>                 m_FromLaneCoordinates; //xs:element
public:
    InRoutePosition_U(){};
    InRoutePosition_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~InRoutePosition_U(){};
};
struct  LaneChangeTarget_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<RelativeTargetLane>                 m_RelativeTargetLane; //xs:element
    std::shared_ptr<AbsoluteTargetLane>                 m_AbsoluteTargetLane; //xs:element
public:
    LaneChangeTarget_U(){};
    LaneChangeTarget_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~LaneChangeTarget_U(){};
};
struct  LaneOffsetTarget_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<RelativeTargetLaneOffset>                 m_RelativeTargetLaneOffset; //xs:element
    std::shared_ptr<AbsoluteTargetLaneOffset>                 m_AbsoluteTargetLaneOffset; //xs:element
public:
    LaneOffsetTarget_U(){};
    LaneOffsetTarget_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~LaneOffsetTarget_U(){};
};
struct  LateralAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<LaneChangeAction>                 m_LaneChangeAction; //xs:element
    std::shared_ptr<LaneOffsetAction>                 m_LaneOffsetAction; //xs:element
    std::shared_ptr<LateralDistanceAction>                 m_LateralDistanceAction; //xs:element
public:
    LateralAction_U(){};
    LateralAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~LateralAction_U(){};
};
struct  LongitudinalAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<SpeedAction>                 m_SpeedAction; //xs:element
    std::shared_ptr<LongitudinalDistanceAction>                 m_LongitudinalDistanceAction; //xs:element
    std::shared_ptr<SpeedProfileAction>                 m_SpeedProfileAction; //xs:element
public:
    LongitudinalAction_U(){};
    LongitudinalAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~LongitudinalAction_U(){};
};
struct  ModifyRule_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<ParameterAddValueRule>                 m_AddValue; //xs:element
    std::shared_ptr<ParameterMultiplyByValueRule>                 m_MultiplyByValue; //xs:element
public:
    ModifyRule_U(){};
    ModifyRule_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~ModifyRule_U(){};
};
struct  ObjectController_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
    std::shared_ptr<Controller>                 m_Controller; //xs:element
public:
    ObjectController_U(){};
    ObjectController_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~ObjectController_U(){};
};
struct  ParameterAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<ParameterSetAction>                 m_SetAction; //xs:element
    std::shared_ptr<ParameterModifyAction>                 m_ModifyAction; //xs:element
public:
    ParameterAction_U(){};
    ParameterAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~ParameterAction_U(){};
};
struct  Position_U	// TODO: >> Should be union - will have to handle properly 
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
    std::shared_ptr<GeoPosition>                 m_GeoPosition; //xs:element
    std::shared_ptr<TrajectoryPosition>                 m_TrajectoryPosition; //xs:element
public:
    Position_U(){};
    Position_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~Position_U(){};
};
struct  PrivateAction_U	// TODO: >> Should be union - will have to handle properly 
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
    std::shared_ptr<AppearanceAction>                 m_AppearanceAction; //xs:element
public:
    PrivateAction_U(){};
    PrivateAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~PrivateAction_U(){};
};
struct  RouteRef_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<Route>                 m_Route; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    RouteRef_U(){};
    RouteRef_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~RouteRef_U(){};
};
struct  RoutingAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<AssignRouteAction>                 m_AssignRouteAction; //xs:element
    std::shared_ptr<FollowTrajectoryAction>                 m_FollowTrajectoryAction; //xs:element
    std::shared_ptr<AcquirePositionAction>                 m_AcquirePositionAction; //xs:element
public:
    RoutingAction_U(){};
    RoutingAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~RoutingAction_U(){};
};
struct  SelectedEntities_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::vector<std::shared_ptr<EntityRef>>                 m_EntityRefs; //xs:element
    std::vector<std::shared_ptr<ByType>>                 m_ByTypes; //xs:element
public:
    SelectedEntities_U(){};
    SelectedEntities_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~SelectedEntities_U(){};
};
struct  Shape_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<Polyline>                 m_Polyline; //xs:element
    std::shared_ptr<Clothoid>                 m_Clothoid; //xs:element
    std::shared_ptr<Nurbs>                 m_Nurbs; //xs:element
public:
    Shape_U(){};
    Shape_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~Shape_U(){};
};
struct  SpeedActionTarget_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<RelativeTargetSpeed>                 m_RelativeTargetSpeed; //xs:element
    std::shared_ptr<AbsoluteTargetSpeed>                 m_AbsoluteTargetSpeed; //xs:element
public:
    SpeedActionTarget_U(){};
    SpeedActionTarget_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~SpeedActionTarget_U(){};
};
struct  TimeReference_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<None>                 m_None; //xs:element
    std::shared_ptr<Timing>                 m_Timing; //xs:element
public:
    TimeReference_U(){};
    TimeReference_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~TimeReference_U(){};
};
struct  TimeToCollisionConditionTarget_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<Position>                 m_Position; //xs:element
    std::shared_ptr<EntityRef>                 m_EntityRef; //xs:element
public:
    TimeToCollisionConditionTarget_U(){};
    TimeToCollisionConditionTarget_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~TimeToCollisionConditionTarget_U(){};
};
struct  TrafficAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<TrafficSourceAction>                 m_TrafficSourceAction; //xs:element
    std::shared_ptr<TrafficSinkAction>                 m_TrafficSinkAction; //xs:element
    std::shared_ptr<TrafficSwarmAction>                 m_TrafficSwarmAction; //xs:element
    std::shared_ptr<TrafficStopAction>                 m_TrafficStopAction; //xs:element
public:
    TrafficAction_U(){};
    TrafficAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~TrafficAction_U(){};
};
struct  TrafficSignalAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<TrafficSignalControllerAction>                 m_TrafficSignalControllerAction; //xs:element
    std::shared_ptr<TrafficSignalStateAction>                 m_TrafficSignalStateAction; //xs:element
public:
    TrafficSignalAction_U(){};
    TrafficSignalAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~TrafficSignalAction_U(){};
};
struct  TrajectoryRef_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<Trajectory>                 m_Trajectory; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
public:
    TrajectoryRef_U(){};
    TrajectoryRef_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~TrajectoryRef_U(){};
};
struct  VariableAction_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<VariableSetAction>                 m_SetAction; //xs:element
    std::shared_ptr<VariableModifyAction>                 m_ModifyAction; //xs:element
public:
    VariableAction_U(){};
    VariableAction_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~VariableAction_U(){};
};
struct  VariableModifyRule_U	// TODO: >> Should be union - will have to handle properly 
{
public:
    std::shared_ptr<VariableAddValueRule>                 m_AddValue; //xs:element
    std::shared_ptr<VariableMultiplyByValueRule>                 m_MultiplyByValue; //xs:element
public:
    VariableModifyRule_U(){};
    VariableModifyRule_U(pugi::xml_node node);
    void save(pugi::xml_node node);
    ~VariableModifyRule_U(){};
};
struct  AbsoluteSpeed   
{
/**/
public:
    AbsoluteSpeed(){};
    AbsoluteSpeed(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AbsoluteSpeed(){};
public: 
    //
    Double	    value; //  required 
    std::shared_ptr<SteadyState>                 m_SteadyState; //xs:groupent
};
struct  AbsoluteTargetLane   
{
/**/
public:
    AbsoluteTargetLane(){};
    AbsoluteTargetLane(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AbsoluteTargetLane(){};
public: 
    //
    String	    value; //  required 
};
struct  AbsoluteTargetLaneOffset   
{
/**/
public:
    AbsoluteTargetLaneOffset(){};
    AbsoluteTargetLaneOffset(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AbsoluteTargetLaneOffset(){};
public: 
    //
    Double	    value; //  required 
};
struct  AbsoluteTargetSpeed   
{
/**/
public:
    AbsoluteTargetSpeed(){};
    AbsoluteTargetSpeed(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AbsoluteTargetSpeed(){};
public: 
    //
    Double	    value; //  required 
};
struct  AccelerationCondition   
{
/**/
public:
    AccelerationCondition(){};
    AccelerationCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AccelerationCondition(){};
public: 
    //
    Rule	    rule; //  required 
    //
    Double	    value; //  required 
    //
    DirectionalDimension	    direction; //   
};
struct  AcquirePositionAction   
{
/**/
public:
    AcquirePositionAction(){};
    AcquirePositionAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AcquirePositionAction(){};
public: 
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  Act   
{
/**/
public:
    Act(){};
    Act(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Act(){};
public: 
    //
    String	    name; //  required 
    std::vector<std::shared_ptr<ManeuverGroup>>                 m_ManeuverGroups; //xs:element
    std::shared_ptr<Trigger>                 m_StartTrigger; //xs:element
    std::shared_ptr<Trigger>                 m_StopTrigger; //xs:element
};
struct  Action   
{
/**/
public:
    Action(){};
    Action(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Action(){};
public: 
    //
    String	    name; //  required 
    std::shared_ptr<Action_U>                 m_Action; //xs:element
};
struct  ActivateControllerAction   
{
/**/
public:
    ActivateControllerAction(){};
    ActivateControllerAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ActivateControllerAction(){};
public: 
    //
    String	    controllerRef; //   
    //
    Boolean	    lateral; //   
    //
    Boolean	    longitudinal; //   
    //
    Boolean	    animation; //   
    //
    Boolean	    lighting; //   
};
struct  Actors   
{
/**/
public:
    Actors(){};
    Actors(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Actors(){};
public: 
    //
    Boolean	    selectTriggeringEntities; //  required 
    std::vector<std::shared_ptr<EntityRef>>                 m_EntityRefs; //xs:element
};
struct  AddEntityAction   
{
/**/
public:
    AddEntityAction(){};
    AddEntityAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AddEntityAction(){};
public: 
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  AnimationAction   
{
/**/
public:
    AnimationAction(){};
    AnimationAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AnimationAction(){};
public: 
    //
    Boolean	    loop; //   
    //
    Double	    animationDuration; //   
    std::shared_ptr<AnimationType>                 m_AnimationType; //xs:element
    std::shared_ptr<AnimationState>                 m_AnimationState; //xs:element
};
struct  AnimationFile   
{
/**/
public:
    AnimationFile(){};
    AnimationFile(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AnimationFile(){};
public: 
    //
    Double	    timeOffset; //   
    std::shared_ptr<File>                 m_File; //xs:element
};
struct  AnimationState   
{
/**/
public:
    AnimationState(){};
    AnimationState(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AnimationState(){};
public: 
    //
    Double	    state; //  required 
};
struct  AnimationType   
{
/**/
public:
    AnimationType(){};
    AnimationType(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AnimationType(){};
public: 
    std::shared_ptr<AnimationType_U>                 m_AnimationType; //xs:element
};
struct  AppearanceAction   
{
/**/
public:
    AppearanceAction(){};
    AppearanceAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AppearanceAction(){};
public: 
    std::shared_ptr<LightStateAction>                 m_LightStateAction; //xs:element
    std::shared_ptr<AnimationAction>                 m_AnimationAction; //xs:element
};
struct  AssignControllerAction   
{
/**/
public:
    AssignControllerAction(){};
    AssignControllerAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AssignControllerAction(){};
public: 
    //
    Boolean	    activateLateral; //   
    //
    Boolean	    activateLongitudinal; //   
    //
    Boolean	    activateAnimation; //   
    //
    Boolean	    activateLighting; //   
    std::shared_ptr<AssignControllerAction_U>                 m_AssignControllerAction; //xs:element
};
struct  AssignRouteAction   
{
/**/
public:
    AssignRouteAction(){};
    AssignRouteAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AssignRouteAction(){};
public: 
    std::shared_ptr<AssignRouteAction_U>                 m_AssignRouteAction; //xs:element
};
struct  AutomaticGear   
{
/**/
public:
    AutomaticGear(){};
    AutomaticGear(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~AutomaticGear(){};
public: 
    //
    AutomaticGearType	    gear; //  required 
};
struct  Axle   
{
/**/
public:
    Axle(){};
    Axle(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  Axles   
{
/**/
public:
    Axles(){};
    Axles(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Axles(){};
public: 
    std::shared_ptr<Axle>                 m_FrontAxle; //xs:element
    std::shared_ptr<Axle>                 m_RearAxle; //xs:element
    std::vector<std::shared_ptr<Axle>>                 m_AdditionalAxles; //xs:element
};
struct  BoundingBox   
{
/**/
public:
    BoundingBox(){};
    BoundingBox(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~BoundingBox(){};
public: 
    std::shared_ptr<Center>                 m_Center; //xs:element
    std::shared_ptr<Dimensions>                 m_Dimensions; //xs:element
};
struct  Brake   
{
/**/
public:
    Brake(){};
    Brake(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Brake(){};
public: 
    //
    Double	    value; //  required 
    //
    Double	    maxRate; //   
};
struct  ByEntityCondition   
{
/**/
public:
    ByEntityCondition(){};
    ByEntityCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ByEntityCondition(){};
public: 
    std::shared_ptr<TriggeringEntities>                 m_TriggeringEntities; //xs:element
    std::shared_ptr<EntityCondition>                 m_EntityCondition; //xs:element
};
struct  ByObjectType   
{
/**/
public:
    ByObjectType(){};
    ByObjectType(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ByObjectType(){};
public: 
    //
    ObjectType	    type; //  required 
};
struct  ByType   
{
/**/
public:
    ByType(){};
    ByType(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ByType(){};
public: 
    //
    ObjectType	    objectType; //  required 
};
struct  ByValueCondition   
{
/**/
public:
    ByValueCondition(){};
    ByValueCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ByValueCondition(){};
public: 
    std::shared_ptr<ByValueCondition_U>                 m_ByValueCondition; //xs:element
};
struct  Catalog   
{
/**/
public:
    Catalog(){};
    Catalog(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  CatalogLocations   
{
/**/
public:
    CatalogLocations(){};
    CatalogLocations(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  CatalogReference   
{
/**/
public:
    CatalogReference(){};
    CatalogReference(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~CatalogReference(){};
public: 
    //
    String	    catalogName; //  required 
    //
    String	    entryName; //  required 
    std::shared_ptr<ParameterAssignments>                 m_ParameterAssignments; //xs:element
};
struct  Center   
{
/**/
public:
    Center(){};
    Center(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Center(){};
public: 
    //
    Double	    x; //  required 
    //
    Double	    y; //  required 
    //
    Double	    z; //  required 
};
struct  CentralSwarmObject   
{
/**/
public:
    CentralSwarmObject(){};
    CentralSwarmObject(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~CentralSwarmObject(){};
public: 
    //
    String	    entityRef; //  required 
};
struct  Clothoid   
{
/**/
public:
    Clothoid(){};
    Clothoid(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Clothoid(){};
public: 
    //
    Double	    curvature; //  required 
    //
    Double	    curvatureDot; //   
    //
    Double	    length; //  required 
    //
    Double	    startTime; //   
    //
    Double	    stopTime; //   
    //
    Double	    curvaturePrime; //   
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  CollisionCondition   
{
/**/
public:
    CollisionCondition(){};
    CollisionCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~CollisionCondition(){};
public: 
    std::shared_ptr<CollisionCondition_U>                 m_CollisionCondition; //xs:element
};
struct  Color   
{
/**/
public:
    Color(){};
    Color(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Color(){};
public: 
    //
    ColorType	    colorType; //  required 
    std::shared_ptr<Color_U>                 m_Color; //xs:element
};
struct  ColorCmyk   
{
/**/
public:
    ColorCmyk(){};
    ColorCmyk(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ColorCmyk(){};
public: 
    //
    Double	    cyan; //  required 
    //
    Double	    magenta; //  required 
    //
    Double	    yellow; //  required 
    //
    Double	    key; //  required 
};
struct  ColorRgb   
{
/**/
public:
    ColorRgb(){};
    ColorRgb(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ColorRgb(){};
public: 
    //
    Double	    red; //  required 
    //
    Double	    green; //  required 
    //
    Double	    blue; //  required 
};
struct  ComponentAnimation   
{
/**/
public:
    ComponentAnimation(){};
    ComponentAnimation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ComponentAnimation(){};
public: 
    std::shared_ptr<VehicleComponent>                 m_VehicleComponent; //xs:element
    std::shared_ptr<UserDefinedComponent>                 m_UserDefinedComponent; //xs:element
};
struct  Condition   
{
/**/
public:
    Condition(){};
    Condition(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  ConditionGroup   
{
/**/
public:
    ConditionGroup(){};
    ConditionGroup(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ConditionGroup(){};
public: 
    std::vector<std::shared_ptr<Condition>>                 m_Conditions; //xs:element
};
struct  Controller   
{
/**/
public:
    Controller(){};
    Controller(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Controller(){};
public: 
    //
    String	    name; //  required 
    //
    ControllerType	    controllerType; //   
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct  ControllerAction   
{
/**/
public:
    ControllerAction(){};
    ControllerAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ControllerAction(){};
public: 
    std::shared_ptr<AssignControllerAction>                 m_AssignControllerAction; //xs:element
    std::shared_ptr<OverrideControllerValueAction>                 m_OverrideControllerValueAction; //xs:element
    std::shared_ptr<ActivateControllerAction>                 m_ActivateControllerAction; //xs:element
};
struct  ControllerCatalogLocation   
{
/**/
public:
    ControllerCatalogLocation(){};
    ControllerCatalogLocation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ControllerCatalogLocation(){};
public: 
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct  ControllerDistribution   
{
/**/
public:
    ControllerDistribution(){};
    ControllerDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ControllerDistribution(){};
public: 
    std::vector<std::shared_ptr<ControllerDistributionEntry>>                 m_ControllerDistributionEntrys; //xs:element
};
struct  ControllerDistributionEntry   
{
/**/
public:
    ControllerDistributionEntry(){};
    ControllerDistributionEntry(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ControllerDistributionEntry(){};
public: 
    //
    Double	    weight; //  required 
    std::shared_ptr<ControllerDistributionEntry_U>                 m_ControllerDistributionEntry; //xs:element
};
struct  ControlPoint   
{
/**/
public:
    ControlPoint(){};
    ControlPoint(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ControlPoint(){};
public: 
    //
    Double	    time; //   
    //
    Double	    weight; //   
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  CustomCommandAction   
{
/**/
public:
    CustomCommandAction(){};
    CustomCommandAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~CustomCommandAction(){};
public: 
    //
    String	    type; //  required 
};
struct  CustomContent   
{
/**/
public:
    CustomContent(){};
    CustomContent(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~CustomContent(){};
public: 
};
struct  DeleteEntityAction   
{
/**/
public:
    DeleteEntityAction(){};
    DeleteEntityAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DeleteEntityAction(){};
public: 
};
struct  Deterministic   
{
/**/
public:
    Deterministic(){};
    Deterministic(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Deterministic(){};
public: 
    std::shared_ptr<DeterministicParameterDistribution>                 m_DeterministicParameterDistribution; //xs:groupent
};
struct  DeterministicMultiParameterDistribution   
{
/**/
public:
    DeterministicMultiParameterDistribution(){};
    DeterministicMultiParameterDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DeterministicMultiParameterDistribution(){};
public: 
    std::shared_ptr<DeterministicMultiParameterDistributionType>                 m_DeterministicMultiParameterDistributionType; //xs:groupent
};
struct  DeterministicSingleParameterDistribution   
{
/**/
public:
    DeterministicSingleParameterDistribution(){};
    DeterministicSingleParameterDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DeterministicSingleParameterDistribution(){};
public: 
    //
    String	    parameterName; //  required 
    std::shared_ptr<DeterministicSingleParameterDistributionType>                 m_DeterministicSingleParameterDistributionType; //xs:groupent
};
struct  Dimensions   
{
/**/
public:
    Dimensions(){};
    Dimensions(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Dimensions(){};
public: 
    //
    Double	    height; //  required 
    //
    Double	    length; //  required 
    //
    Double	    width; //  required 
};
struct  DirectionOfTravelDistribution   
{
/**/
public:
    DirectionOfTravelDistribution(){};
    DirectionOfTravelDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DirectionOfTravelDistribution(){};
public: 
    //
    Double	    same; //  required 
    //
    Double	    opposite; //  required 
};
struct  Directory   
{
/**/
public:
    Directory(){};
    Directory(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Directory(){};
public: 
    //
    String	    path; //  required 
};
struct  DistanceCondition   
{
/**/
public:
    DistanceCondition(){};
    DistanceCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DistanceCondition(){};
public: 
    //
    Boolean	    alongRoute; //   
    //
    Boolean	    freespace; //  required 
    //
    Rule	    rule; //  required 
    //
    Double	    value; //  required 
    //
    CoordinateSystem	    coordinateSystem; //   
    //
    RelativeDistanceType	    relativeDistanceType; //   
    //
    RoutingAlgorithm	    routingAlgorithm; //   
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  DistributionRange   
{
/**/
public:
    DistributionRange(){};
    DistributionRange(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DistributionRange(){};
public: 
    //
    Double	    stepWidth; //  required 
    std::shared_ptr<Range>                 m_Range; //xs:element
};
struct  DistributionSet   
{
/**/
public:
    DistributionSet(){};
    DistributionSet(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DistributionSet(){};
public: 
    std::vector<std::shared_ptr<DistributionSetElement>>                 m_Elements; //xs:element
};
struct  DistributionSetElement   
{
/**/
public:
    DistributionSetElement(){};
    DistributionSetElement(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DistributionSetElement(){};
public: 
    //
    String	    value; //  required 
};
struct  DomeImage   
{
/**/
public:
    DomeImage(){};
    DomeImage(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DomeImage(){};
public: 
    //
    Double	    azimuthOffset; //   
    std::shared_ptr<File>                 m_DomeFile; //xs:element
};
struct  DynamicConstraints   
{
/**/
public:
    DynamicConstraints(){};
    DynamicConstraints(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DynamicConstraints(){};
public: 
    //
    Double	    maxAcceleration; //   
    //
    Double	    maxAccelerationRate; //   
    //
    Double	    maxDeceleration; //   
    //
    Double	    maxDecelerationRate; //   
    //
    Double	    maxSpeed; //   
};
struct  EndOfRoadCondition   
{
/**/
public:
    EndOfRoadCondition(){};
    EndOfRoadCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~EndOfRoadCondition(){};
public: 
    //
    Double	    duration; //  required 
};
struct  Entities   
{
/**/
public:
    Entities(){};
    Entities(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Entities(){};
public: 
    std::vector<std::shared_ptr<ScenarioObject>>                 m_ScenarioObjects; //xs:element
    std::vector<std::shared_ptr<EntitySelection>>                 m_EntitySelections; //xs:element
};
struct  EntityAction   
{
/**/
public:
    EntityAction(){};
    EntityAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~EntityAction(){};
public: 
    //
    String	    entityRef; //  required 
    std::shared_ptr<EntityAction_U>                 m_EntityAction; //xs:element
};
struct  EntityCondition   
{
/**/
public:
    EntityCondition(){};
    EntityCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~EntityCondition(){};
public: 
    std::shared_ptr<EntityCondition_U>                 m_EntityCondition; //xs:element
};
struct  EntityRef   
{
/**/
public:
    EntityRef(){};
    EntityRef(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~EntityRef(){};
public: 
    //
    String	    entityRef; //  required 
};
struct  EntitySelection   
{
/**/
public:
    EntitySelection(){};
    EntitySelection(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~EntitySelection(){};
public: 
    //
    String	    name; //  required 
    std::shared_ptr<SelectedEntities>                 m_Members; //xs:element
};
struct  Environment   
{
/**/
public:
    Environment(){};
    Environment(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Environment(){};
public: 
    //
    String	    name; //  required 
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<TimeOfDay>                 m_TimeOfDay; //xs:element
    std::shared_ptr<Weather>                 m_Weather; //xs:element
    std::shared_ptr<RoadCondition>                 m_RoadCondition; //xs:element
};
struct  EnvironmentAction   
{
/**/
public:
    EnvironmentAction(){};
    EnvironmentAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~EnvironmentAction(){};
public: 
    std::shared_ptr<EnvironmentAction_U>                 m_EnvironmentAction; //xs:element
};
struct  EnvironmentCatalogLocation   
{
/**/
public:
    EnvironmentCatalogLocation(){};
    EnvironmentCatalogLocation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~EnvironmentCatalogLocation(){};
public: 
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct  Event   
{
/**/
public:
    Event(){};
    Event(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  ExternalObjectReference   
{
/**/
public:
    ExternalObjectReference(){};
    ExternalObjectReference(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ExternalObjectReference(){};
public: 
    //
    String	    name; //  required 
};
struct  File   
{
/**/
public:
    File(){};
    File(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~File(){};
public: 
    //
    String	    filepath; //  required 
};
struct  FileHeader   
{
/**/
public:
    FileHeader(){};
    FileHeader(pugi::xml_node node);
    void save(pugi::xml_node node);
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
    std::shared_ptr<License>                 m_License; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct  FinalSpeed   
{
/**/
public:
    FinalSpeed(){};
    FinalSpeed(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~FinalSpeed(){};
public: 
    std::shared_ptr<FinalSpeed_U>                 m_FinalSpeed; //xs:element
};
struct  Fog   
{
/**/
public:
    Fog(){};
    Fog(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Fog(){};
public: 
    //
    Double	    visualRange; //  required 
    std::shared_ptr<BoundingBox>                 m_BoundingBox; //xs:element
};
struct  FollowTrajectoryAction   
{
/**/
public:
    FollowTrajectoryAction(){};
    FollowTrajectoryAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~FollowTrajectoryAction(){};
public: 
    //
    Double	    initialDistanceOffset; //   
    std::shared_ptr<Trajectory>                 m_Trajectory; //xs:element
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
    std::shared_ptr<TimeReference>                 m_TimeReference; //xs:element
    std::shared_ptr<TrajectoryFollowingMode>                 m_TrajectoryFollowingMode; //xs:element
    std::shared_ptr<TrajectoryRef>                 m_TrajectoryRef; //xs:element
};
struct  GeoPosition   
{
/**/
public:
    GeoPosition(){};
    GeoPosition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~GeoPosition(){};
public: 
    //
    Double	    latitude; //   
    //
    Double	    longitude; //   
    //
    Double	    height; //   
    //
    Double	    latitudeDeg; //   
    //
    Double	    longitudeDeg; //   
    //
    Double	    altitude; //   
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
};
struct  GlobalAction   
{
/**/
public:
    GlobalAction(){};
    GlobalAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~GlobalAction(){};
public: 
    std::shared_ptr<GlobalAction_U>                 m_GlobalAction; //xs:element
};
struct  Histogram   
{
/**/
public:
    Histogram(){};
    Histogram(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Histogram(){};
public: 
    std::vector<std::shared_ptr<HistogramBin>>                 m_Bins; //xs:element
};
struct  HistogramBin   
{
/**/
public:
    HistogramBin(){};
    HistogramBin(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~HistogramBin(){};
public: 
    //
    Double	    weight; //  required 
    std::shared_ptr<Range>                 m_Range; //xs:element
};
struct  InfrastructureAction   
{
/**/
public:
    InfrastructureAction(){};
    InfrastructureAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~InfrastructureAction(){};
public: 
    std::shared_ptr<TrafficSignalAction>                 m_TrafficSignalAction; //xs:element
};
struct  Init   
{
/**/
public:
    Init(){};
    Init(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Init(){};
public: 
    std::shared_ptr<InitActions>                 m_Actions; //xs:element
};
struct  InitActions   
{
/**/
public:
    InitActions(){};
    InitActions(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~InitActions(){};
public: 
    std::vector<std::shared_ptr<GlobalAction>>                 m_GlobalActions; //xs:element
    std::vector<std::shared_ptr<UserDefinedAction>>                 m_UserDefinedActions; //xs:element
    std::vector<std::shared_ptr<Private>>                 m_Privates; //xs:element
};
struct  InRoutePosition   
{
/**/
public:
    InRoutePosition(){};
    InRoutePosition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~InRoutePosition(){};
public: 
    std::shared_ptr<InRoutePosition_U>                 m_InRoutePosition; //xs:element
};
struct  Knot   
{
/**/
public:
    Knot(){};
    Knot(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Knot(){};
public: 
    //
    Double	    value; //  required 
};
struct  LaneChangeAction   
{
/**/
public:
    LaneChangeAction(){};
    LaneChangeAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LaneChangeAction(){};
public: 
    //
    Double	    targetLaneOffset; //   
    std::shared_ptr<TransitionDynamics>                 m_LaneChangeActionDynamics; //xs:element
    std::shared_ptr<LaneChangeTarget>                 m_LaneChangeTarget; //xs:element
};
struct  LaneChangeTarget   
{
/**/
public:
    LaneChangeTarget(){};
    LaneChangeTarget(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LaneChangeTarget(){};
public: 
    std::shared_ptr<LaneChangeTarget_U>                 m_LaneChangeTarget; //xs:element
};
struct  LaneOffsetAction   
{
/**/
public:
    LaneOffsetAction(){};
    LaneOffsetAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LaneOffsetAction(){};
public: 
    //
    Boolean	    continuous; //  required 
    std::shared_ptr<LaneOffsetActionDynamics>                 m_LaneOffsetActionDynamics; //xs:element
    std::shared_ptr<LaneOffsetTarget>                 m_LaneOffsetTarget; //xs:element
};
struct  LaneOffsetActionDynamics   
{
/**/
public:
    LaneOffsetActionDynamics(){};
    LaneOffsetActionDynamics(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LaneOffsetActionDynamics(){};
public: 
    //
    DynamicsShape	    dynamicsShape; //  required 
    //
    Double	    maxLateralAcc; //   
};
struct  LaneOffsetTarget   
{
/**/
public:
    LaneOffsetTarget(){};
    LaneOffsetTarget(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LaneOffsetTarget(){};
public: 
    std::shared_ptr<LaneOffsetTarget_U>                 m_LaneOffsetTarget; //xs:element
};
struct  LanePosition   
{
/**/
public:
    LanePosition(){};
    LanePosition(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  LateralAction   
{
/**/
public:
    LateralAction(){};
    LateralAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LateralAction(){};
public: 
    std::shared_ptr<LateralAction_U>                 m_LateralAction; //xs:element
};
struct  LateralDistanceAction   
{
/**/
public:
    LateralDistanceAction(){};
    LateralDistanceAction(pugi::xml_node node);
    void save(pugi::xml_node node);
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
    //
    LateralDisplacement	    displacement; //   
    //
    CoordinateSystem	    coordinateSystem; //   
    std::shared_ptr<DynamicConstraints>                 m_DynamicConstraints; //xs:element
};
struct  License   
{
/**/
public:
    License(){};
    License(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~License(){};
public: 
    //
    String	    name; //  required 
    //
    String	    resource; //   
    //
    String	    spdxId; //   
};
struct  LightState   
{
/**/
public:
    LightState(){};
    LightState(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LightState(){};
public: 
    //
    LightMode	    mode; //  required 
    //
    Double	    luminousIntensity; //   
    //
    Double	    flashingOnDuration; //   
    //
    Double	    flashingOffDuration; //   
    std::shared_ptr<Color>                 m_Color; //xs:element
};
struct  LightStateAction   
{
/**/
public:
    LightStateAction(){};
    LightStateAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LightStateAction(){};
public: 
    //
    Double	    transitionTime; //   
    std::shared_ptr<LightType>                 m_LightType; //xs:element
    std::shared_ptr<LightState>                 m_LightState; //xs:element
};
struct  LightType   
{
/**/
public:
    LightType(){};
    LightType(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LightType(){};
public: 
    std::shared_ptr<VehicleLight>                 m_VehicleLight; //xs:element
    std::shared_ptr<UserDefinedLight>                 m_UserDefinedLight; //xs:element
};
struct  LongitudinalAction   
{
/**/
public:
    LongitudinalAction(){};
    LongitudinalAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~LongitudinalAction(){};
public: 
    std::shared_ptr<LongitudinalAction_U>                 m_LongitudinalAction; //xs:element
};
struct  LongitudinalDistanceAction   
{
/**/
public:
    LongitudinalDistanceAction(){};
    LongitudinalDistanceAction(pugi::xml_node node);
    void save(pugi::xml_node node);
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
    //
    LongitudinalDisplacement	    displacement; //   
    //
    CoordinateSystem	    coordinateSystem; //   
    std::shared_ptr<DynamicConstraints>                 m_DynamicConstraints; //xs:element
};
struct  Maneuver   
{
/**/
public:
    Maneuver(){};
    Maneuver(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Maneuver(){};
public: 
    //
    String	    name; //  required 
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::vector<std::shared_ptr<Event>>                 m_Events; //xs:element
};
struct  ManeuverCatalogLocation   
{
/**/
public:
    ManeuverCatalogLocation(){};
    ManeuverCatalogLocation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ManeuverCatalogLocation(){};
public: 
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct  ManeuverGroup   
{
/**/
public:
    ManeuverGroup(){};
    ManeuverGroup(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  ManualGear   
{
/**/
public:
    ManualGear(){};
    ManualGear(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ManualGear(){};
public: 
    //
    Int	    number; //  required 
};
struct  MiscObject   
{
/**/
public:
    MiscObject(){};
    MiscObject(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~MiscObject(){};
public: 
    //
    Double	    mass; //  required 
    //
    MiscObjectCategory	    miscObjectCategory; //  required 
    //
    String	    name; //  required 
    //
    String	    model3d; //   
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<BoundingBox>                 m_BoundingBox; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct  MiscObjectCatalogLocation   
{
/**/
public:
    MiscObjectCatalogLocation(){};
    MiscObjectCatalogLocation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~MiscObjectCatalogLocation(){};
public: 
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct  ModifyRule   
{
/**/
public:
    ModifyRule(){};
    ModifyRule(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ModifyRule(){};
public: 
    std::shared_ptr<ModifyRule_U>                 m_ModifyRule; //xs:element
};
struct  None   
{
/**/
public:
    None(){};
    None(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~None(){};
public: 
};
struct  NormalDistribution   
{
/**/
public:
    NormalDistribution(){};
    NormalDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~NormalDistribution(){};
public: 
    //
    Double	    expectedValue; //  required 
    //
    Double	    variance; //  required 
    std::shared_ptr<Range>                 m_Range; //xs:element
};
struct  Nurbs   
{
/**/
public:
    Nurbs(){};
    Nurbs(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Nurbs(){};
public: 
    //
    UnsignedInt	    order; //  required 
    std::vector<std::shared_ptr<ControlPoint>>                 m_ControlPoints; //xs:element
    std::vector<std::shared_ptr<Knot>>                 m_Knots; //xs:element
};
struct  ObjectController   
{
/**/
public:
    ObjectController(){};
    ObjectController(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ObjectController(){};
public: 
    std::shared_ptr<ObjectController_U>                 m_ObjectController; //xs:element
};
struct  OffroadCondition   
{
/**/
public:
    OffroadCondition(){};
    OffroadCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OffroadCondition(){};
public: 
    //
    Double	    duration; //  required 
};
struct  OpenScenario   
{
/**/
public:
    OpenScenario(){};
    OpenScenario(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OpenScenario(){};
public: 
    std::shared_ptr<FileHeader>                 m_FileHeader; //xs:element
    std::shared_ptr<OpenScenarioCategory>                 m_OpenScenarioCategory; //xs:groupent
};
struct  Orientation   
{
/**/
public:
    Orientation(){};
    Orientation(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  OverrideBrakeAction   
{
/**/
public:
    OverrideBrakeAction(){};
    OverrideBrakeAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OverrideBrakeAction(){};
public: 
    //
    Boolean	    active; //  required 
    //
    Double	    value; //   
    std::shared_ptr<BrakeInput>                 m_BrakeInput; //xs:groupent
};
struct  OverrideClutchAction   
{
/**/
public:
    OverrideClutchAction(){};
    OverrideClutchAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OverrideClutchAction(){};
public: 
    //
    Boolean	    active; //  required 
    //
    Double	    value; //  required 
    //
    Double	    maxRate; //   
};
struct  OverrideControllerValueAction   
{
/**/
public:
    OverrideControllerValueAction(){};
    OverrideControllerValueAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OverrideControllerValueAction(){};
public: 
    std::shared_ptr<OverrideThrottleAction>                 m_Throttle; //xs:element
    std::shared_ptr<OverrideBrakeAction>                 m_Brake; //xs:element
    std::shared_ptr<OverrideClutchAction>                 m_Clutch; //xs:element
    std::shared_ptr<OverrideParkingBrakeAction>                 m_ParkingBrake; //xs:element
    std::shared_ptr<OverrideSteeringWheelAction>                 m_SteeringWheel; //xs:element
    std::shared_ptr<OverrideGearAction>                 m_Gear; //xs:element
};
struct  OverrideGearAction   
{
/**/
public:
    OverrideGearAction(){};
    OverrideGearAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OverrideGearAction(){};
public: 
    //
    Boolean	    active; //  required 
    //
    Double	    number; //   
    std::shared_ptr<Gear>                 m_Gear; //xs:groupent
};
struct  OverrideParkingBrakeAction   
{
/**/
public:
    OverrideParkingBrakeAction(){};
    OverrideParkingBrakeAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OverrideParkingBrakeAction(){};
public: 
    //
    Boolean	    active; //  required 
    //
    Double	    value; //   
    std::shared_ptr<BrakeInput>                 m_BrakeInput; //xs:groupent
};
struct  OverrideSteeringWheelAction   
{
/**/
public:
    OverrideSteeringWheelAction(){};
    OverrideSteeringWheelAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OverrideSteeringWheelAction(){};
public: 
    //
    Boolean	    active; //  required 
    //
    Double	    value; //  required 
    //
    Double	    maxRate; //   
    //
    Double	    maxTorque; //   
};
struct  OverrideThrottleAction   
{
/**/
public:
    OverrideThrottleAction(){};
    OverrideThrottleAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OverrideThrottleAction(){};
public: 
    //
    Boolean	    active; //  required 
    //
    Double	    value; //  required 
    //
    Double	    maxRate; //   
};
struct  ParameterAction   
{
/**/
public:
    ParameterAction(){};
    ParameterAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterAction(){};
public: 
    //
    String	    parameterRef; //  required 
    std::shared_ptr<ParameterAction_U>                 m_ParameterAction; //xs:element
};
struct  ParameterAddValueRule   
{
/**/
public:
    ParameterAddValueRule(){};
    ParameterAddValueRule(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterAddValueRule(){};
public: 
    //
    Double	    value; //  required 
};
struct  ParameterAssignment   
{
/**/
public:
    ParameterAssignment(){};
    ParameterAssignment(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterAssignment(){};
public: 
    //
    String	    parameterRef; //  required 
    //
    String	    value; //  required 
};
struct  ParameterAssignments   
{
/**/
public:
    ParameterAssignments(){};
    ParameterAssignments(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterAssignments(){};
public: 
    std::vector<std::shared_ptr<ParameterAssignment>>                 m_ParameterAssignments; //xs:element
};
struct  ParameterCondition   
{
/**/
public:
    ParameterCondition(){};
    ParameterCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterCondition(){};
public: 
    //
    String	    parameterRef; //  required 
    //
    Rule	    rule; //  required 
    //
    String	    value; //  required 
};
struct  ParameterDeclaration   
{
/**/
public:
    ParameterDeclaration(){};
    ParameterDeclaration(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterDeclaration(){};
public: 
    //
    String	    name; //  required 
    //
    ParameterType	    parameterType; //  required 
    //
    String	    value; //  required 
    std::vector<std::shared_ptr<ValueConstraintGroup>>                 m_ConstraintGroups; //xs:element
};
struct  ParameterDeclarations   
{
/**/
public:
    ParameterDeclarations(){};
    ParameterDeclarations(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterDeclarations(){};
public: 
    std::vector<std::shared_ptr<ParameterDeclaration>>                 m_ParameterDeclarations; //xs:element
};
struct  ParameterModifyAction   
{
/**/
public:
    ParameterModifyAction(){};
    ParameterModifyAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterModifyAction(){};
public: 
    std::shared_ptr<ModifyRule>                 m_Rule; //xs:element
};
struct  ParameterMultiplyByValueRule   
{
/**/
public:
    ParameterMultiplyByValueRule(){};
    ParameterMultiplyByValueRule(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterMultiplyByValueRule(){};
public: 
    //
    Double	    value; //  required 
};
struct  ParameterSetAction   
{
/**/
public:
    ParameterSetAction(){};
    ParameterSetAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterSetAction(){};
public: 
    //
    String	    value; //  required 
};
struct  ParameterValueDistribution   
{
/**/
public:
    ParameterValueDistribution(){};
    ParameterValueDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterValueDistribution(){};
public: 
    std::shared_ptr<File>                 m_ScenarioFile; //xs:element
    std::shared_ptr<DistributionDefinition>                 m_DistributionDefinition; //xs:groupent
};
struct  ParameterValueSet   
{
/**/
public:
    ParameterValueSet(){};
    ParameterValueSet(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterValueSet(){};
public: 
    std::vector<std::shared_ptr<ParameterAssignment>>                 m_ParameterAssignments; //xs:element
};
struct  Pedestrian   
{
/**/
public:
    Pedestrian(){};
    Pedestrian(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Pedestrian(){};
public: 
    //
    Double	    mass; //  required 
    //
    String	    model; //   
    //
    String	    name; //  required 
    //
    PedestrianCategory	    pedestrianCategory; //  required 
    //
    String	    model3d; //   
    //
    Role	    role; //   
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<BoundingBox>                 m_BoundingBox; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct  PedestrianAnimation   
{
/**/
public:
    PedestrianAnimation(){};
    PedestrianAnimation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~PedestrianAnimation(){};
public: 
    //
    PedestrianMotionType	    motion; //   
    //
    String	    userDefinedPedestrianAnimation; //   
    std::vector<std::shared_ptr<PedestrianGesture>>                 m_PedestrianGestures; //xs:element
};
struct  PedestrianCatalogLocation   
{
/**/
public:
    PedestrianCatalogLocation(){};
    PedestrianCatalogLocation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~PedestrianCatalogLocation(){};
public: 
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct  PedestrianGesture   
{
/**/
public:
    PedestrianGesture(){};
    PedestrianGesture(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~PedestrianGesture(){};
public: 
    //
    PedestrianGestureType	    gesture; //  required 
};
struct  Performance   
{
/**/
public:
    Performance(){};
    Performance(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Performance(){};
public: 
    //
    Double	    maxAcceleration; //  required 
    //
    Double	    maxAccelerationRate; //   
    //
    Double	    maxDeceleration; //  required 
    //
    Double	    maxDecelerationRate; //   
    //
    Double	    maxSpeed; //  required 
};
struct  Phase   
{
/**/
public:
    Phase(){};
    Phase(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Phase(){};
public: 
    //
    Double	    duration; //  required 
    //
    String	    name; //  required 
    std::vector<std::shared_ptr<TrafficSignalState>>                 m_TrafficSignalStates; //xs:element
    std::shared_ptr<TrafficSignalGroupState>                 m_TrafficeSignalGroupState; //xs:element
};
struct  PoissonDistribution   
{
/**/
public:
    PoissonDistribution(){};
    PoissonDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~PoissonDistribution(){};
public: 
    //
    Double	    expectedValue; //  required 
    std::shared_ptr<Range>                 m_Range; //xs:element
};
struct  Polyline   
{
/**/
public:
    Polyline(){};
    Polyline(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Polyline(){};
public: 
    std::vector<std::shared_ptr<Vertex>>                 m_Vertexs; //xs:element
};
struct  Position   
{
/**/
public:
    Position(){};
    Position(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Position(){};
public: 
    std::shared_ptr<Position_U>                 m_Position; //xs:element
};
struct  PositionInLaneCoordinates   
{
/**/
public:
    PositionInLaneCoordinates(){};
    PositionInLaneCoordinates(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~PositionInLaneCoordinates(){};
public: 
    //
    String	    laneId; //  required 
    //
    Double	    laneOffset; //   
    //
    Double	    pathS; //  required 
};
struct  PositionInRoadCoordinates   
{
/**/
public:
    PositionInRoadCoordinates(){};
    PositionInRoadCoordinates(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~PositionInRoadCoordinates(){};
public: 
    //
    Double	    pathS; //  required 
    //
    Double	    t; //  required 
};
struct  PositionOfCurrentEntity   
{
/**/
public:
    PositionOfCurrentEntity(){};
    PositionOfCurrentEntity(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~PositionOfCurrentEntity(){};
public: 
    //
    String	    entityRef; //  required 
};
struct  Precipitation   
{
/**/
public:
    Precipitation(){};
    Precipitation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Precipitation(){};
public: 
    //
    Double	    intensity; //   
    //
    PrecipitationType	    precipitationType; //  required 
    //
    Double	    precipitationIntensity; //   
};
struct  Private   
{
/**/
public:
    Private(){};
    Private(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Private(){};
public: 
    //
    String	    entityRef; //  required 
    std::vector<std::shared_ptr<PrivateAction>>                 m_PrivateActions; //xs:element
};
struct  PrivateAction   
{
/**/
public:
    PrivateAction(){};
    PrivateAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~PrivateAction(){};
public: 
    std::shared_ptr<PrivateAction_U>                 m_PrivateAction; //xs:element
};
struct  ProbabilityDistributionSet   
{
/**/
public:
    ProbabilityDistributionSet(){};
    ProbabilityDistributionSet(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ProbabilityDistributionSet(){};
public: 
    std::vector<std::shared_ptr<ProbabilityDistributionSetElement>>                 m_Elements; //xs:element
};
struct  ProbabilityDistributionSetElement   
{
/**/
public:
    ProbabilityDistributionSetElement(){};
    ProbabilityDistributionSetElement(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ProbabilityDistributionSetElement(){};
public: 
    //
    String	    value; //  required 
    //
    Double	    weight; //  required 
};
struct  Properties   
{
/**/
public:
    Properties(){};
    Properties(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Properties(){};
public: 
    std::vector<std::shared_ptr<Property>>                 m_Propertys; //xs:element
    std::vector<std::shared_ptr<File>>                 m_Files; //xs:element
    std::vector<std::shared_ptr<CustomContent>>                 m_CustomContents; //xs:element
};
struct  Property   
{
/**/
public:
    Property(){};
    Property(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Property(){};
public: 
    //
    String	    name; //  required 
    //
    String	    value; //  required 
};
struct  Range   
{
/**/
public:
    Range(){};
    Range(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Range(){};
public: 
    //
    Double	    lowerLimit; //  required 
    //
    Double	    upperLimit; //  required 
};
struct  ReachPositionCondition   
{
/**/
public:
    ReachPositionCondition(){};
    ReachPositionCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ReachPositionCondition(){};
public: 
    //
    Double	    tolerance; //  required 
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  RelativeClearanceCondition   
{
/**/
public:
    RelativeClearanceCondition(){};
    RelativeClearanceCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RelativeClearanceCondition(){};
public: 
    //
    Boolean	    oppositeLanes; //  required 
    //
    Double	    distanceForward; //   
    //
    Double	    distanceBackward; //   
    //
    Boolean	    freeSpace; //  required 
    std::vector<std::shared_ptr<RelativeLaneRange>>                 m_RelativeLaneRanges; //xs:element
    std::vector<std::shared_ptr<EntityRef>>                 m_EntityRefs; //xs:element
};
struct  RelativeDistanceCondition   
{
/**/
public:
    RelativeDistanceCondition(){};
    RelativeDistanceCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
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
    //
    CoordinateSystem	    coordinateSystem; //   
    //
    RoutingAlgorithm	    routingAlgorithm; //   
};
struct  RelativeLanePosition   
{
/**/
public:
    RelativeLanePosition(){};
    RelativeLanePosition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RelativeLanePosition(){};
public: 
    //
    String	    entityRef; //  required 
    //
    Int	    dLane; //  required 
    //
    Double	    ds; //   
    //
    Double	    offset; //   
    //
    Double	    dsLane; //   
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
};
struct  RelativeLaneRange   
{
/**/
public:
    RelativeLaneRange(){};
    RelativeLaneRange(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RelativeLaneRange(){};
public: 
    //
    Int	    from; //   
    //
    Int	    to; //   
};
struct  RelativeObjectPosition   
{
/**/
public:
    RelativeObjectPosition(){};
    RelativeObjectPosition(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  RelativeRoadPosition   
{
/**/
public:
    RelativeRoadPosition(){};
    RelativeRoadPosition(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  RelativeSpeedCondition   
{
/**/
public:
    RelativeSpeedCondition(){};
    RelativeSpeedCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RelativeSpeedCondition(){};
public: 
    //
    String	    entityRef; //  required 
    //
    Rule	    rule; //  required 
    //
    Double	    value; //  required 
    //
    DirectionalDimension	    direction; //   
};
struct  RelativeSpeedToMaster   
{
/**/
public:
    RelativeSpeedToMaster(){};
    RelativeSpeedToMaster(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RelativeSpeedToMaster(){};
public: 
    //
    SpeedTargetValueType	    speedTargetValueType; //  required 
    //
    Double	    value; //  required 
    std::shared_ptr<SteadyState>                 m_SteadyState; //xs:groupent
};
struct  RelativeTargetLane   
{
/**/
public:
    RelativeTargetLane(){};
    RelativeTargetLane(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RelativeTargetLane(){};
public: 
    //
    String	    entityRef; //  required 
    //
    Int	    value; //  required 
};
struct  RelativeTargetLaneOffset   
{
/**/
public:
    RelativeTargetLaneOffset(){};
    RelativeTargetLaneOffset(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RelativeTargetLaneOffset(){};
public: 
    //
    String	    entityRef; //  required 
    //
    Double	    value; //  required 
};
struct  RelativeTargetSpeed   
{
/**/
public:
    RelativeTargetSpeed(){};
    RelativeTargetSpeed(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  RelativeWorldPosition   
{
/**/
public:
    RelativeWorldPosition(){};
    RelativeWorldPosition(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  RoadCondition   
{
/**/
public:
    RoadCondition(){};
    RoadCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RoadCondition(){};
public: 
    //
    Double	    frictionScaleFactor; //  required 
    //
    Wetness	    wetness; //   
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct  RoadNetwork   
{
/**/
public:
    RoadNetwork(){};
    RoadNetwork(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RoadNetwork(){};
public: 
    std::shared_ptr<File>                 m_LogicFile; //xs:element
    std::shared_ptr<File>                 m_SceneGraphFile; //xs:element
    std::shared_ptr<TrafficSignals>                 m_TrafficSignals; //xs:element
    std::shared_ptr<UsedArea>                 m_UsedArea; //xs:element
};
struct  RoadPosition   
{
/**/
public:
    RoadPosition(){};
    RoadPosition(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  Route   
{
/**/
public:
    Route(){};
    Route(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Route(){};
public: 
    //
    Boolean	    closed; //  required 
    //
    String	    name; //  required 
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::vector<std::shared_ptr<Waypoint>>                 m_Waypoints; //xs:element
};
struct  RouteCatalogLocation   
{
/**/
public:
    RouteCatalogLocation(){};
    RouteCatalogLocation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RouteCatalogLocation(){};
public: 
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct  RoutePosition   
{
/**/
public:
    RoutePosition(){};
    RoutePosition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RoutePosition(){};
public: 
    std::shared_ptr<RouteRef>                 m_RouteRef; //xs:element
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
    std::shared_ptr<InRoutePosition>                 m_InRoutePosition; //xs:element
};
struct  RouteRef   
{
/**/
public:
    RouteRef(){};
    RouteRef(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RouteRef(){};
public: 
    std::shared_ptr<RouteRef_U>                 m_RouteRef; //xs:element
};
struct  RoutingAction   
{
/**/
public:
    RoutingAction(){};
    RoutingAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~RoutingAction(){};
public: 
    std::shared_ptr<RoutingAction_U>                 m_RoutingAction; //xs:element
};
struct  ScenarioObject   
{
/**/
public:
    ScenarioObject(){};
    ScenarioObject(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ScenarioObject(){};
public: 
    //
    String	    name; //  required 
    std::vector<std::shared_ptr<ObjectController>>                 m_ObjectControllers; //xs:element
    std::shared_ptr<EntityObject>                 m_EntityObject; //xs:groupent
};
struct  SelectedEntities   
{
/**/
public:
    SelectedEntities(){};
    SelectedEntities(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SelectedEntities(){};
public: 
    std::shared_ptr<SelectedEntities_U>                 m_SelectedEntities; //xs:element
};
struct  SensorReference   
{
/**/
public:
    SensorReference(){};
    SensorReference(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SensorReference(){};
public: 
    //
    String	    name; //  required 
};
struct  SensorReferenceSet   
{
/**/
public:
    SensorReferenceSet(){};
    SensorReferenceSet(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SensorReferenceSet(){};
public: 
    std::vector<std::shared_ptr<SensorReference>>                 m_SensorReferences; //xs:element
};
struct  Shape   
{
/**/
public:
    Shape(){};
    Shape(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Shape(){};
public: 
    std::shared_ptr<Shape_U>                 m_Shape; //xs:element
};
struct  SimulationTimeCondition   
{
/**/
public:
    SimulationTimeCondition(){};
    SimulationTimeCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SimulationTimeCondition(){};
public: 
    //
    Rule	    rule; //  required 
    //
    Double	    value; //  required 
};
struct  SpeedAction   
{
/**/
public:
    SpeedAction(){};
    SpeedAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SpeedAction(){};
public: 
    std::shared_ptr<TransitionDynamics>                 m_SpeedActionDynamics; //xs:element
    std::shared_ptr<SpeedActionTarget>                 m_SpeedActionTarget; //xs:element
};
struct  SpeedActionTarget   
{
/**/
public:
    SpeedActionTarget(){};
    SpeedActionTarget(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SpeedActionTarget(){};
public: 
    std::shared_ptr<SpeedActionTarget_U>                 m_SpeedActionTarget; //xs:element
};
struct  SpeedCondition   
{
/**/
public:
    SpeedCondition(){};
    SpeedCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SpeedCondition(){};
public: 
    //
    Rule	    rule; //  required 
    //
    Double	    value; //  required 
    //
    DirectionalDimension	    direction; //   
};
struct  SpeedProfileAction   
{
/**/
public:
    SpeedProfileAction(){};
    SpeedProfileAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SpeedProfileAction(){};
public: 
    //
    String	    entityRef; //   
    //
    FollowingMode	    followingMode; //  required 
    std::shared_ptr<DynamicConstraints>                 m_DynamicConstraints; //xs:element
    std::vector<std::shared_ptr<SpeedProfileEntry>>                 m_SpeedProfileEntrys; //xs:element
};
struct  SpeedProfileEntry   
{
/**/
public:
    SpeedProfileEntry(){};
    SpeedProfileEntry(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SpeedProfileEntry(){};
public: 
    //
    Double	    speed; //  required 
    //
    Double	    time; //   
};
struct  StandStillCondition   
{
/**/
public:
    StandStillCondition(){};
    StandStillCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~StandStillCondition(){};
public: 
    //
    Double	    duration; //  required 
};
struct  Stochastic   
{
/**/
public:
    Stochastic(){};
    Stochastic(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Stochastic(){};
public: 
    //
    UnsignedInt	    numberOfTestRuns; //  required 
    //
    Double	    randomSeed; //   
    std::vector<std::shared_ptr<StochasticDistribution>>                 m_StochasticDistributions; //xs:element
};
struct  StochasticDistribution   
{
/**/
public:
    StochasticDistribution(){};
    StochasticDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~StochasticDistribution(){};
public: 
    //
    String	    parameterName; //  required 
    std::shared_ptr<StochasticDistributionType>                 m_StochasticDistributionType; //xs:groupent
};
struct  Story   
{
/**/
public:
    Story(){};
    Story(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Story(){};
public: 
    //
    String	    name; //  required 
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::vector<std::shared_ptr<Act>>                 m_Acts; //xs:element
};
struct  Storyboard   
{
/**/
public:
    Storyboard(){};
    Storyboard(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Storyboard(){};
public: 
    std::shared_ptr<Init>                 m_Init; //xs:element
    std::vector<std::shared_ptr<Story>>                 m_Storys; //xs:element
    std::shared_ptr<Trigger>                 m_StopTrigger; //xs:element
};
struct  StoryboardElementStateCondition   
{
/**/
public:
    StoryboardElementStateCondition(){};
    StoryboardElementStateCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~StoryboardElementStateCondition(){};
public: 
    //
    String	    storyboardElementRef; //  required 
    //
    StoryboardElementState	    state; //  required 
    //
    StoryboardElementType	    storyboardElementType; //  required 
};
struct  Sun   
{
/**/
public:
    Sun(){};
    Sun(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Sun(){};
public: 
    //
    Double	    azimuth; //  required 
    //
    Double	    elevation; //  required 
    //
    Double	    intensity; //   
    //
    Double	    illuminance; //   
};
struct  SynchronizeAction   
{
/**/
public:
    SynchronizeAction(){};
    SynchronizeAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SynchronizeAction(){};
public: 
    //
    String	    masterEntityRef; //  required 
    //
    Double	    targetToleranceMaster; //   
    //
    Double	    targetTolerance; //   
    std::shared_ptr<Position>                 m_TargetPositionMaster; //xs:element
    std::shared_ptr<Position>                 m_TargetPosition; //xs:element
    std::shared_ptr<FinalSpeed>                 m_FinalSpeed; //xs:element
};
struct  TargetDistanceSteadyState   
{
/**/
public:
    TargetDistanceSteadyState(){};
    TargetDistanceSteadyState(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TargetDistanceSteadyState(){};
public: 
    //
    Double	    distance; //  required 
};
struct  TargetTimeSteadyState   
{
/**/
public:
    TargetTimeSteadyState(){};
    TargetTimeSteadyState(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TargetTimeSteadyState(){};
public: 
    //
    Double	    time; //  required 
};
struct  TeleportAction   
{
/**/
public:
    TeleportAction(){};
    TeleportAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TeleportAction(){};
public: 
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  TimeHeadwayCondition   
{
/**/
public:
    TimeHeadwayCondition(){};
    TimeHeadwayCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TimeHeadwayCondition(){};
public: 
    //
    String	    entityRef; //  required 
    //
    Boolean	    alongRoute; //   
    //
    Boolean	    freespace; //  required 
    //
    Rule	    rule; //  required 
    //
    Double	    value; //  required 
    //
    CoordinateSystem	    coordinateSystem; //   
    //
    RelativeDistanceType	    relativeDistanceType; //   
    //
    RoutingAlgorithm	    routingAlgorithm; //   
};
struct  TimeOfDay   
{
/**/
public:
    TimeOfDay(){};
    TimeOfDay(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TimeOfDay(){};
public: 
    //
    Boolean	    animation; //  required 
    //
    DateTime	    dateTime; //  required 
};
struct  TimeOfDayCondition   
{
/**/
public:
    TimeOfDayCondition(){};
    TimeOfDayCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TimeOfDayCondition(){};
public: 
    //
    DateTime	    dateTime; //  required 
    //
    Rule	    rule; //  required 
};
struct  TimeReference   
{
/**/
public:
    TimeReference(){};
    TimeReference(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TimeReference(){};
public: 
    std::shared_ptr<TimeReference_U>                 m_TimeReference; //xs:element
};
struct  TimeToCollisionCondition   
{
/**/
public:
    TimeToCollisionCondition(){};
    TimeToCollisionCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TimeToCollisionCondition(){};
public: 
    //
    Boolean	    alongRoute; //   
    //
    Boolean	    freespace; //  required 
    //
    Rule	    rule; //  required 
    //
    Double	    value; //  required 
    //
    RelativeDistanceType	    relativeDistanceType; //   
    //
    CoordinateSystem	    coordinateSystem; //   
    //
    RoutingAlgorithm	    routingAlgorithm; //   
    std::shared_ptr<TimeToCollisionConditionTarget>                 m_TimeToCollisionConditionTarget; //xs:element
};
struct  TimeToCollisionConditionTarget   
{
/**/
public:
    TimeToCollisionConditionTarget(){};
    TimeToCollisionConditionTarget(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TimeToCollisionConditionTarget(){};
public: 
    std::shared_ptr<TimeToCollisionConditionTarget_U>                 m_TimeToCollisionConditionTarget; //xs:element
};
struct  Timing   
{
/**/
public:
    Timing(){};
    Timing(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Timing(){};
public: 
    //
    ReferenceContext	    domainAbsoluteRelative; //  required 
    //
    Double	    offset; //  required 
    //
    Double	    scale; //  required 
};
struct  TrafficAction   
{
/**/
public:
    TrafficAction(){};
    TrafficAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficAction(){};
public: 
    //
    String	    trafficName; //   
    std::shared_ptr<TrafficAction_U>                 m_TrafficAction; //xs:element
};
struct  TrafficDefinition   
{
/**/
public:
    TrafficDefinition(){};
    TrafficDefinition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficDefinition(){};
public: 
    //
    String	    name; //  required 
    std::shared_ptr<VehicleCategoryDistribution>                 m_VehicleCategoryDistribution; //xs:element
    std::shared_ptr<VehicleRoleDistribution>                 m_VehicleRoleDistribution; //xs:element
    std::shared_ptr<ControllerDistribution>                 m_ControllerDistribution; //xs:element
};
struct  TrafficSignalAction   
{
/**/
public:
    TrafficSignalAction(){};
    TrafficSignalAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSignalAction(){};
public: 
    std::shared_ptr<TrafficSignalAction_U>                 m_TrafficSignalAction; //xs:element
};
struct  TrafficSignalCondition   
{
/**/
public:
    TrafficSignalCondition(){};
    TrafficSignalCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSignalCondition(){};
public: 
    //
    String	    name; //  required 
    //
    String	    state; //  required 
};
struct  TrafficSignalController   
{
/**/
public:
    TrafficSignalController(){};
    TrafficSignalController(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  TrafficSignals   
{
/**/
public:
    TrafficSignals(){};
    TrafficSignals(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSignals(){};
public: 
    std::vector<std::shared_ptr<TrafficSignalController>>                 m_TrafficSignalControllers; //xs:element
};
struct  TrafficSignalControllerAction   
{
/**/
public:
    TrafficSignalControllerAction(){};
    TrafficSignalControllerAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSignalControllerAction(){};
public: 
    //
    String	    trafficSignalControllerRef; //  required 
    //
    String	    phase; //  required 
};
struct  TrafficSignalControllerCondition   
{
/**/
public:
    TrafficSignalControllerCondition(){};
    TrafficSignalControllerCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSignalControllerCondition(){};
public: 
    //
    String	    trafficSignalControllerRef; //  required 
    //
    String	    phase; //  required 
};
struct  TrafficSignalGroupState   
{
/**/
public:
    TrafficSignalGroupState(){};
    TrafficSignalGroupState(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSignalGroupState(){};
public: 
    //
    String	    state; //  required 
};
struct  TrafficSignalState   
{
/**/
public:
    TrafficSignalState(){};
    TrafficSignalState(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSignalState(){};
public: 
    //
    String	    state; //  required 
    //
    String	    trafficSignalId; //  required 
};
struct  TrafficSignalStateAction   
{
/**/
public:
    TrafficSignalStateAction(){};
    TrafficSignalStateAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSignalStateAction(){};
public: 
    //
    String	    name; //  required 
    //
    String	    state; //  required 
};
struct  TrafficSinkAction   
{
/**/
public:
    TrafficSinkAction(){};
    TrafficSinkAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSinkAction(){};
public: 
    //
    Double	    radius; //  required 
    //
    Double	    rate; //   
    std::shared_ptr<Position>                 m_Position; //xs:element
    std::shared_ptr<TrafficDefinition>                 m_TrafficDefinition; //xs:element
};
struct  TrafficSourceAction   
{
/**/
public:
    TrafficSourceAction(){};
    TrafficSourceAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficSourceAction(){};
public: 
    //
    Double	    radius; //  required 
    //
    Double	    rate; //  required 
    //
    Double	    velocity; //   
    //
    Double	    speed; //   
    std::shared_ptr<Position>                 m_Position; //xs:element
    std::shared_ptr<TrafficDefinition>                 m_TrafficDefinition; //xs:element
};
struct  TrafficStopAction   
{
/**/
public:
    TrafficStopAction(){};
    TrafficStopAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrafficStopAction(){};
public: 
};
struct  TrafficSwarmAction   
{
/**/
public:
    TrafficSwarmAction(){};
    TrafficSwarmAction(pugi::xml_node node);
    void save(pugi::xml_node node);
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
    std::shared_ptr<Range>                 m_InitialSpeedRange; //xs:element
    std::shared_ptr<DirectionOfTravelDistribution>                 m_DirectionOfTravelDistribution; //xs:element
};
struct  Trajectory   
{
/**/
public:
    Trajectory(){};
    Trajectory(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Trajectory(){};
public: 
    //
    Boolean	    closed; //  required 
    //
    String	    name; //  required 
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<Shape>                 m_Shape; //xs:element
};
struct  TrajectoryCatalogLocation   
{
/**/
public:
    TrajectoryCatalogLocation(){};
    TrajectoryCatalogLocation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrajectoryCatalogLocation(){};
public: 
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct  TrajectoryFollowingMode   
{
/**/
public:
    TrajectoryFollowingMode(){};
    TrajectoryFollowingMode(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrajectoryFollowingMode(){};
public: 
    //
    FollowingMode	    followingMode; //  required 
};
struct  TrajectoryPosition   
{
/**/
public:
    TrajectoryPosition(){};
    TrajectoryPosition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrajectoryPosition(){};
public: 
    //
    Double	    s; //  required 
    //
    Double	    t; //   
    std::shared_ptr<Orientation>                 m_Orientation; //xs:element
    std::shared_ptr<TrajectoryRef>                 m_TrajectoryRef; //xs:element
};
struct  TrajectoryRef   
{
/**/
public:
    TrajectoryRef(){};
    TrajectoryRef(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TrajectoryRef(){};
public: 
    std::shared_ptr<TrajectoryRef_U>                 m_TrajectoryRef; //xs:element
};
struct  TransitionDynamics   
{
/**/
public:
    TransitionDynamics(){};
    TransitionDynamics(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TransitionDynamics(){};
public: 
    //
    DynamicsDimension	    dynamicsDimension; //  required 
    //
    DynamicsShape	    dynamicsShape; //  required 
    //
    FollowingMode	    followingMode; //   
    //
    Double	    value; //  required 
};
struct  TraveledDistanceCondition   
{
/**/
public:
    TraveledDistanceCondition(){};
    TraveledDistanceCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TraveledDistanceCondition(){};
public: 
    //
    Double	    value; //  required 
};
struct  Trigger   
{
/**/
public:
    Trigger(){};
    Trigger(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Trigger(){};
public: 
    std::vector<std::shared_ptr<ConditionGroup>>                 m_ConditionGroups; //xs:element
};
struct  TriggeringEntities   
{
/**/
public:
    TriggeringEntities(){};
    TriggeringEntities(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~TriggeringEntities(){};
public: 
    //
    TriggeringEntitiesRule	    triggeringEntitiesRule; //  required 
    std::vector<std::shared_ptr<EntityRef>>                 m_EntityRefs; //xs:element
};
struct  UniformDistribution   
{
/**/
public:
    UniformDistribution(){};
    UniformDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~UniformDistribution(){};
public: 
    std::shared_ptr<Range>                 m_Range; //xs:element
};
struct  UsedArea   
{
/**/
public:
    UsedArea(){};
    UsedArea(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~UsedArea(){};
public: 
    std::vector<std::shared_ptr<Position>>                 m_Positions; //xs:element
};
struct  UserDefinedAction   
{
/**/
public:
    UserDefinedAction(){};
    UserDefinedAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~UserDefinedAction(){};
public: 
    std::shared_ptr<CustomCommandAction>                 m_CustomCommandAction; //xs:element
};
struct  UserDefinedAnimation   
{
/**/
public:
    UserDefinedAnimation(){};
    UserDefinedAnimation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~UserDefinedAnimation(){};
public: 
    //
    String	    userDefinedAnimationType; //  required 
};
struct  UserDefinedComponent   
{
/**/
public:
    UserDefinedComponent(){};
    UserDefinedComponent(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~UserDefinedComponent(){};
public: 
    //
    String	    userDefinedComponentType; //  required 
};
struct  UserDefinedDistribution   
{
/**/
public:
    UserDefinedDistribution(){};
    UserDefinedDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~UserDefinedDistribution(){};
public: 
    //
    String	    type; //  required 
};
struct  UserDefinedLight   
{
/**/
public:
    UserDefinedLight(){};
    UserDefinedLight(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~UserDefinedLight(){};
public: 
    //
    String	    userDefinedLightType; //  required 
};
struct  UserDefinedValueCondition   
{
/**/
public:
    UserDefinedValueCondition(){};
    UserDefinedValueCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~UserDefinedValueCondition(){};
public: 
    //
    String	    name; //  required 
    //
    Rule	    rule; //  required 
    //
    String	    value; //  required 
};
struct  ValueConstraint   
{
/**/
public:
    ValueConstraint(){};
    ValueConstraint(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ValueConstraint(){};
public: 
    //
    Rule	    rule; //  required 
    //
    String	    value; //  required 
};
struct  ValueConstraintGroup   
{
/**/
public:
    ValueConstraintGroup(){};
    ValueConstraintGroup(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ValueConstraintGroup(){};
public: 
    std::vector<std::shared_ptr<ValueConstraint>>                 m_ValueConstraints; //xs:element
};
struct  ValueSetDistribution   
{
/**/
public:
    ValueSetDistribution(){};
    ValueSetDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ValueSetDistribution(){};
public: 
    std::vector<std::shared_ptr<ParameterValueSet>>                 m_ParameterValueSets; //xs:element
};
struct  VariableAction   
{
/**/
public:
    VariableAction(){};
    VariableAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableAction(){};
public: 
    //
    String	    variableRef; //  required 
    std::shared_ptr<VariableAction_U>                 m_VariableAction; //xs:element
};
struct  VariableAddValueRule   
{
/**/
public:
    VariableAddValueRule(){};
    VariableAddValueRule(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableAddValueRule(){};
public: 
    //
    Double	    value; //  required 
};
struct  VariableCondition   
{
/**/
public:
    VariableCondition(){};
    VariableCondition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableCondition(){};
public: 
    //
    String	    variableRef; //  required 
    //
    Rule	    rule; //  required 
    //
    String	    value; //  required 
};
struct  VariableDeclaration   
{
/**/
public:
    VariableDeclaration(){};
    VariableDeclaration(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableDeclaration(){};
public: 
    //
    String	    name; //  required 
    //
    ParameterType	    variableType; //  required 
    //
    String	    value; //  required 
};
struct  VariableDeclarations   
{
/**/
public:
    VariableDeclarations(){};
    VariableDeclarations(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableDeclarations(){};
public: 
    std::vector<std::shared_ptr<VariableDeclaration>>                 m_VariableDeclarations; //xs:element
};
struct  VariableModifyAction   
{
/**/
public:
    VariableModifyAction(){};
    VariableModifyAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableModifyAction(){};
public: 
    std::shared_ptr<VariableModifyRule>                 m_Rule; //xs:element
};
struct  VariableModifyRule   
{
/**/
public:
    VariableModifyRule(){};
    VariableModifyRule(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableModifyRule(){};
public: 
    std::shared_ptr<VariableModifyRule_U>                 m_VariableModifyRule; //xs:element
};
struct  VariableMultiplyByValueRule   
{
/**/
public:
    VariableMultiplyByValueRule(){};
    VariableMultiplyByValueRule(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableMultiplyByValueRule(){};
public: 
    //
    Double	    value; //  required 
};
struct  VariableSetAction   
{
/**/
public:
    VariableSetAction(){};
    VariableSetAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VariableSetAction(){};
public: 
    //
    String	    value; //  required 
};
struct  Vehicle   
{
/**/
public:
    Vehicle(){};
    Vehicle(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Vehicle(){};
public: 
    //
    String	    name; //  required 
    //
    VehicleCategory	    vehicleCategory; //  required 
    //
    Role	    role; //   
    //
    Double	    mass; //   
    //
    String	    model3d; //   
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<BoundingBox>                 m_BoundingBox; //xs:element
    std::shared_ptr<Performance>                 m_Performance; //xs:element
    std::shared_ptr<Axles>                 m_Axles; //xs:element
    std::shared_ptr<Properties>                 m_Properties; //xs:element
};
struct  VehicleCatalogLocation   
{
/**/
public:
    VehicleCatalogLocation(){};
    VehicleCatalogLocation(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VehicleCatalogLocation(){};
public: 
    std::shared_ptr<Directory>                 m_Directory; //xs:element
};
struct  VehicleCategoryDistribution   
{
/**/
public:
    VehicleCategoryDistribution(){};
    VehicleCategoryDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VehicleCategoryDistribution(){};
public: 
    std::vector<std::shared_ptr<VehicleCategoryDistributionEntry>>                 m_VehicleCategoryDistributionEntrys; //xs:element
};
struct  VehicleCategoryDistributionEntry   
{
/**/
public:
    VehicleCategoryDistributionEntry(){};
    VehicleCategoryDistributionEntry(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VehicleCategoryDistributionEntry(){};
public: 
    //
    VehicleCategory	    category; //  required 
    //
    Double	    weight; //  required 
};
struct  VehicleComponent   
{
/**/
public:
    VehicleComponent(){};
    VehicleComponent(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VehicleComponent(){};
public: 
    //
    VehicleComponentType	    vehicleComponentType; //  required 
};
struct  VehicleLight   
{
/**/
public:
    VehicleLight(){};
    VehicleLight(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VehicleLight(){};
public: 
    //
    VehicleLightType	    vehicleLightType; //  required 
};
struct  VehicleRoleDistribution   
{
/**/
public:
    VehicleRoleDistribution(){};
    VehicleRoleDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VehicleRoleDistribution(){};
public: 
    std::vector<std::shared_ptr<VehicleRoleDistributionEntry>>                 m_VehicleRoleDistributionEntrys; //xs:element
};
struct  VehicleRoleDistributionEntry   
{
/**/
public:
    VehicleRoleDistributionEntry(){};
    VehicleRoleDistributionEntry(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VehicleRoleDistributionEntry(){};
public: 
    //
    Role	    role; //  required 
    //
    Double	    weight; //  required 
};
struct  Vertex   
{
/**/
public:
    Vertex(){};
    Vertex(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Vertex(){};
public: 
    //
    Double	    time; //   
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  VisibilityAction   
{
/**/
public:
    VisibilityAction(){};
    VisibilityAction(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~VisibilityAction(){};
public: 
    //
    Boolean	    graphics; //  required 
    //
    Boolean	    sensors; //  required 
    //
    Boolean	    traffic; //  required 
    std::shared_ptr<SensorReferenceSet>                 m_SensorReferenceSet; //xs:element
};
struct  Waypoint   
{
/**/
public:
    Waypoint(){};
    Waypoint(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Waypoint(){};
public: 
    //
    RouteStrategy	    routeStrategy; //  required 
    std::shared_ptr<Position>                 m_Position; //xs:element
};
struct  Weather   
{
/**/
public:
    Weather(){};
    Weather(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Weather(){};
public: 
    //
    CloudState	    cloudState; //   
    //
    Double	    atmosphericPressure; //   
    //
    Double	    temperature; //   
    //
    FractionalCloudCover	    fractionalCloudCover; //   
    std::shared_ptr<Sun>                 m_Sun; //xs:element
    std::shared_ptr<Fog>                 m_Fog; //xs:element
    std::shared_ptr<Precipitation>                 m_Precipitation; //xs:element
    std::shared_ptr<Wind>                 m_Wind; //xs:element
    std::shared_ptr<DomeImage>                 m_DomeImage; //xs:element
};
struct  Wind   
{
/**/
public:
    Wind(){};
    Wind(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Wind(){};
public: 
    //
    Double	    direction; //  required 
    //
    Double	    speed; //  required 
};
struct  WorldPosition   
{
/**/
public:
    WorldPosition(){};
    WorldPosition(pugi::xml_node node);
    void save(pugi::xml_node node);
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
struct  BrakeInput
{
public:
    BrakeInput(){};
    BrakeInput(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~BrakeInput(){};
public:
    std::shared_ptr<Brake>                 m_BrakePercent; //xs:element
    std::shared_ptr<Brake>                 m_BrakeForce; //xs:element
};
// xs:group -> aliased to group definition
struct  CatalogDefinition
{
public:
    CatalogDefinition(){};
    CatalogDefinition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~CatalogDefinition(){};
public:
    std::shared_ptr<Catalog>                 m_Catalog; //xs:element
};
// xs:group -> aliased to group definition
struct  DeterministicMultiParameterDistributionType
{
public:
    DeterministicMultiParameterDistributionType(){};
    DeterministicMultiParameterDistributionType(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DeterministicMultiParameterDistributionType(){};
public:
    std::shared_ptr<ValueSetDistribution>                 m_ValueSetDistribution; //xs:element
};
// xs:group -> aliased to group definition
struct  DeterministicParameterDistribution
{
public:
    DeterministicParameterDistribution(){};
    DeterministicParameterDistribution(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DeterministicParameterDistribution(){};
public:
    std::shared_ptr<DeterministicMultiParameterDistribution>                 m_DeterministicMultiParameterDistribution; //xs:element
    std::shared_ptr<DeterministicSingleParameterDistribution>                 m_DeterministicSingleParameterDistribution; //xs:element
};
// xs:group -> aliased to group definition
struct  DeterministicSingleParameterDistributionType
{
public:
    DeterministicSingleParameterDistributionType(){};
    DeterministicSingleParameterDistributionType(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DeterministicSingleParameterDistributionType(){};
public:
    std::shared_ptr<DistributionSet>                 m_DistributionSet; //xs:element
    std::shared_ptr<DistributionRange>                 m_DistributionRange; //xs:element
    std::shared_ptr<UserDefinedDistribution>                 m_UserDefinedDistribution; //xs:element
};
// xs:group -> aliased to group definition
struct  DistributionDefinition
{
public:
    DistributionDefinition(){};
    DistributionDefinition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~DistributionDefinition(){};
public:
    std::shared_ptr<Deterministic>                 m_Deterministic; //xs:element
    std::shared_ptr<Stochastic>                 m_Stochastic; //xs:element
};
// xs:group -> aliased to group definition
struct  EntityObject
{
public:
    EntityObject(){};
    EntityObject(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~EntityObject(){};
public:
    std::shared_ptr<CatalogReference>                 m_CatalogReference; //xs:element
    std::shared_ptr<Vehicle>                 m_Vehicle; //xs:element
    std::shared_ptr<Pedestrian>                 m_Pedestrian; //xs:element
    std::shared_ptr<MiscObject>                 m_MiscObject; //xs:element
    std::shared_ptr<ExternalObjectReference>                 m_ExternalObjectReference; //xs:element
};
// xs:group -> aliased to group definition
struct  Gear
{
public:
    Gear(){};
    Gear(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~Gear(){};
public:
    std::shared_ptr<ManualGear>                 m_ManualGear; //xs:element
    std::shared_ptr<AutomaticGear>                 m_AutomaticGear; //xs:element
};
// xs:group -> aliased to group definition
struct  OpenScenarioCategory
{
public:
    OpenScenarioCategory(){};
    OpenScenarioCategory(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~OpenScenarioCategory(){};
public:
    std::shared_ptr<ScenarioDefinition>                 m_ScenarioDefinition; //xs:groupent
    std::shared_ptr<CatalogDefinition>                 m_CatalogDefinition; //xs:groupent
    std::shared_ptr<ParameterValueDistributionDefinition>                 m_ParameterValueDistributionDefinition; //xs:groupent
};
// xs:group -> aliased to group definition
struct  ParameterValueDistributionDefinition
{
public:
    ParameterValueDistributionDefinition(){};
    ParameterValueDistributionDefinition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ParameterValueDistributionDefinition(){};
public:
    std::shared_ptr<ParameterValueDistribution>                 m_ParameterValueDistribution; //xs:element
};
// xs:group -> aliased to group definition
struct  ScenarioDefinition
{
public:
    ScenarioDefinition(){};
    ScenarioDefinition(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~ScenarioDefinition(){};
public:
    std::shared_ptr<ParameterDeclarations>                 m_ParameterDeclarations; //xs:element
    std::shared_ptr<VariableDeclarations>                 m_VariableDeclarations; //xs:element
    std::shared_ptr<CatalogLocations>                 m_CatalogLocations; //xs:element
    std::shared_ptr<RoadNetwork>                 m_RoadNetwork; //xs:element
    std::shared_ptr<Entities>                 m_Entities; //xs:element
    std::shared_ptr<Storyboard>                 m_Storyboard; //xs:element
};
// xs:group -> aliased to group definition
struct  SteadyState
{
public:
    SteadyState(){};
    SteadyState(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~SteadyState(){};
public:
    std::shared_ptr<TargetDistanceSteadyState>                 m_TargetDistanceSteadyState; //xs:element
    std::shared_ptr<TargetTimeSteadyState>                 m_TargetTimeSteadyState; //xs:element
};
// xs:group -> aliased to group definition
struct  StochasticDistributionType
{
public:
    StochasticDistributionType(){};
    StochasticDistributionType(pugi::xml_node node);
    void save(pugi::xml_node node);
    virtual ~StochasticDistributionType(){};
public:
    std::shared_ptr<ProbabilityDistributionSet>                 m_ProbabilityDistributionSet; //xs:element
    std::shared_ptr<NormalDistribution>                 m_NormalDistribution; //xs:element
    std::shared_ptr<UniformDistribution>                 m_UniformDistribution; //xs:element
    std::shared_ptr<PoissonDistribution>                 m_PoissonDistribution; //xs:element
    std::shared_ptr<Histogram>                 m_Histogram; //xs:element
    std::shared_ptr<UserDefinedDistribution>                 m_UserDefinedDistribution; //xs:element
};
// xs:element -> main  as clazz definition
using OpenSCENARIO = OpenScenario; 
//
class  xosc
{
private:
    pugi::xml_document m_doc;
    pugi::xml_node m_root;
public:
    std::shared_ptr<OpenSCENARIO>    m_OpenSCENARIO;
public:
    void load(std::string xoscfilename);
    void parse();
    void save(std::string filename);
public:
    xosc();
    ~xosc();
};
#endif //_OPENSCENARIO_V1_2_H_

#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef VODAFONEV2X_SWIFT_H
#define VODAFONEV2X_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreLocation;
@import Foundation;
@import ObjectiveC;
#endif

#import <VodafoneV2X/VodafoneV2X.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="VodafoneV2X",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// Object created to keep default BTP properties.
SWIFT_CLASS("_TtC11VodafoneV2X12BTPConstants")
@interface BTPConstants : NSObject
/// Gets the default <code>destinationPort</code> for the selected <code>service</code>.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XDestPort destinationPort;)
+ (V2XDestPort)destinationPort SWIFT_WARN_UNUSED_RESULT;
/// Gets the <code>destinationPortInfo</code> for the selected <code>service</code>.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger destinationPortInfo;)
+ (NSInteger)destinationPortInfo SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger encodedLength;)
+ (NSInteger)encodedLength SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X23BasicContainerConstants")
@interface BasicContainerConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) StationKind stationType;)
+ (StationKind)stationType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDegrees latitude;)
+ (CLLocationDegrees)latitude SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDegrees longitude;)
+ (CLLocationDegrees)longitude SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger semiMajorConfidence;)
+ (NSUInteger)semiMajorConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger semiMinorConfidence;)
+ (NSUInteger)semiMinorConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XHeadingValue semiMajorOrientation;)
+ (V2XHeadingValue)semiMajorOrientation SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDistance altitudeValue;)
+ (CLLocationDistance)altitudeValue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XAltitudeConfidence altitudeConfidence;)
+ (V2XAltitudeConfidence)altitudeConfidence SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X20BasicHeaderConstants")
@interface BasicHeaderConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XTimeBase timeBase;)
+ (V2XTimeBase)timeBase SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger multiplier;)
+ (NSInteger)multiplier SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger headerVersion;)
+ (NSInteger)headerVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XNextHeader nextHeader;)
+ (V2XNextHeader)nextHeader SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger remaingHop;)
+ (NSInteger)remaingHop SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X12CAMConstants")
@interface CAMConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) ProtocolVersion protocolVersion;)
+ (ProtocolVersion)protocolVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) MessageID messageID;)
+ (MessageID)messageID SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger stationID;)
+ (NSUInteger)stationID SWIFT_WARN_UNUSED_RESULT;
/// CoopAwareness
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger deltaTime;)
+ (NSInteger)deltaTime SWIFT_WARN_UNUSED_RESULT;
/// CAM
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XCommonNextHeader nextHeader;)
+ (V2XCommonNextHeader)nextHeader SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XHeaderType headerType;)
+ (V2XHeaderType)headerType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL flagsAreMobile;)
+ (BOOL)flagsAreMobile SWIFT_WARN_UNUSED_RESULT;
/// GNAddress
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) StationKind stationType;)
+ (StationKind)stationType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XAddrConfig configuration;)
+ (V2XAddrConfig)configuration SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger mid;)
+ (NSUInteger)mid SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger vehicleWidth;)
+ (NSInteger)vehicleWidth SWIFT_WARN_UNUSED_RESULT;
+ (void)setVehicleWidth:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger vehicleLength;)
+ (NSInteger)vehicleLength SWIFT_WARN_UNUSED_RESULT;
+ (void)setVehicleLength:(NSInteger)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSDictionary<NSNumber *, NSArray<NSNumber *> *> * _Nonnull vehicleDefaults;)
+ (NSDictionary<NSNumber *, NSArray<NSNumber *> *> * _Nonnull)vehicleDefaults SWIFT_WARN_UNUSED_RESULT;
+ (void)setVehicleDefaults:(NSDictionary<NSNumber *, NSArray<NSNumber *> *> * _Nonnull)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


typedef SWIFT_ENUM(NSInteger, CodeUnits, open) {
  CodeUnitsKmperh = 0,
  CodeUnitsMilesperh = 1,
  CodeUnitsKilometre = 2,
  CodeUnitsMetre = 3,
  CodeUnitsDecimetre = 4,
  CodeUnitsCentimetre = 5,
  CodeUnitsMile = 6,
  CodeUnitsYard = 7,
  CodeUnitsFoot = 8,
  CodeUnitsMinutesOfTime = 9,
  CodeUnitsTonnes = 10,
  CodeUnitsHundredkg = 11,
  CodeUnitsPound = 12,
  CodeUnitsRateOfIncline = 13,
  CodeUnitsDurationinminutes = 14,
};


SWIFT_CLASS("_TtC11VodafoneV2X21CommonHeaderConstants")
@interface CommonHeaderConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger payloadLength;)
+ (NSUInteger)payloadLength SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger maxHopLimit;)
+ (NSUInteger)maxHopLimit SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XCommonNextHeader nextHeader;)
+ (V2XCommonNextHeader)nextHeader SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XHeaderType headerType;)
+ (V2XHeaderType)headerType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL scf;)
+ (BOOL)scf SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL channelOffload;)
+ (BOOL)channelOffload SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger tcid;)
+ (NSInteger)tcid SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL flagsAreMobile;)
+ (BOOL)flagsAreMobile SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class DrivenLineOffsetImpl;

SWIFT_PROTOCOL("_TtP11VodafoneV2X12ComputedLane_")
@protocol ComputedLane
@property (nonatomic, readonly) NSInteger referenceLaneId;
@property (nonatomic, readonly, strong) DrivenLineOffsetImpl * _Nonnull offsetXaxis;
@property (nonatomic, readonly, strong) DrivenLineOffsetImpl * _Nonnull offsetYaxis;
@end


SWIFT_CLASS("_TtC11VodafoneV2X16ComputedLaneImpl")
@interface ComputedLaneImpl : NSObject
@property (nonatomic) NSInteger referenceLaneId;
@property (nonatomic, strong) DrivenLineOffsetImpl * _Nonnull offsetXaxis;
@property (nonatomic, strong) DrivenLineOffsetImpl * _Nonnull offsetYaxis;
- (nonnull instancetype)initWithReferenceLaneId:(NSInteger)referenceLaneId offsetXaxis:(DrivenLineOffsetImpl * _Nonnull)offsetXaxis offsetYaxis:(DrivenLineOffsetImpl * _Nonnull)offsetYaxis rotateXY:(NSInteger)rotateXY scaleXaxis:(NSInteger)scaleXaxis scaleYaxis:(NSInteger)scaleYaxis OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSString;

SWIFT_PROTOCOL("_TtP11VodafoneV2X9TextLines_")
@protocol TextLines
@property (nonatomic, readonly, copy) NSString * _Nonnull textContent;
@property (nonatomic, readonly, copy) NSString * _Nonnull language;
@end


SWIFT_CLASS("_TtC11VodafoneV2X15ConstTextLines1")
@interface ConstTextLines1 : NSObject <TextLines>
@property (nonatomic, readonly, copy) NSString * _Nonnull textContent;
@property (nonatomic, readonly, copy) NSString * _Nonnull language;
- (nonnull instancetype)initWithTextContent:(NSString * _Nonnull)textContent language:(NSString * _Nonnull)language OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11VodafoneV2X13DENMConstants")
@interface DENMConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) ProtocolVersion protocolVersion;)
+ (ProtocolVersion)protocolVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) MessageID messageID;)
+ (MessageID)messageID SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger stationID;)
+ (NSUInteger)stationID SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X19DENMHeaderConstants")
@interface DENMHeaderConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XHeaderType headerType;)
+ (V2XHeaderType)headerType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSData;

/// Defines default configurations for a DENM object
SWIFT_CLASS("_TtC11VodafoneV2X8DENMType")
@interface DENMType : NSObject <NSCopying, UPEREncodable>
- (NSData * _Nullable)encoded SWIFT_WARN_UNUSED_RESULT;
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11VodafoneV2X20DrivenLineOffsetImpl")
@interface DrivenLineOffsetImpl : NSObject
- (nonnull instancetype)initWithPresent:(V2XDrivenLineOffset)present choice:(NSInteger)choice OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// Entity responsible to receive and expose (via binding property) the GPS coordinates received from CoreLocation framework
SWIFT_CLASS("_TtC11VodafoneV2X17GPSLocationSource")
@interface GPSLocationSource : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class CLLocationManager;
@class CLLocation;
@class CLHeading;

@interface GPSLocationSource (SWIFT_EXTENSION(VodafoneV2X)) <CLLocationManagerDelegate>
- (void)locationManagerDidChangeAuthorization:(CLLocationManager * _Nonnull)manager;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
@end


SWIFT_PROTOCOL("_TtP11VodafoneV2X11GenericLane_")
@protocol GenericLane
@property (nonatomic, readonly) NSInteger laneID;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@property (nonatomic, readonly) V2XLaneDirection laneDirection;
@property (nonatomic, readonly, copy) NSArray<NSValue *> * _Nonnull lanePath;
@property (nonatomic, readonly) V2XLaneType laneType;
@property (nonatomic, readonly) CLLocationCoordinate2D refPoint;
@property (nonatomic, readonly, copy) NSArray<NSNumber *> * _Nonnull connectingLaneIDs;
@property (nonatomic, readonly) NSInteger intersectionID;
@end

@protocol NodeOffset;
@class ManeuverImpl;

SWIFT_CLASS("_TtC11VodafoneV2X15GenericLaneImpl")
@interface GenericLaneImpl : NSObject
@property (nonatomic, readonly) NSInteger laneID;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@property (nonatomic, readonly) V2XLaneDirection laneDirection;
@property (nonatomic, readonly, copy) NSArray<NSValue *> * _Nonnull lanePath;
@property (nonatomic, readonly) V2XLaneType laneType;
@property (nonatomic, readonly) CLLocationCoordinate2D refPoint;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nonnull connectingLaneIDs;
@property (nonatomic) NSInteger intersectionID;
- (nonnull instancetype)initWithLaneID:(NSInteger)laneID name:(NSString * _Nullable)name laneDirection:(V2XLaneDirection)laneDirection nodeList:(NSArray<id <NodeOffset>> * _Nonnull)nodeList computedLane:(ComputedLaneImpl * _Nonnull)computedLane maneuvers:(NSArray<ManeuverImpl *> * _Nullable)maneuvers laneType:(V2XLaneType)laneType refPoint:(CLLocationCoordinate2D)refPoint connectingLaneIDs:(NSArray<NSNumber *> * _Nonnull)connectingLaneIDs intersectionID:(NSInteger)intersectionID intersectionRegion:(NSInteger)intersectionRegion OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11VodafoneV2X20HFContainerConstants")
@interface HFContainerConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDirection headingValue;)
+ (CLLocationDirection)headingValue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XHeadingConfidence headingConfidence;)
+ (V2XHeadingConfidence)headingConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationSpeed speedValue;)
+ (CLLocationSpeed)speedValue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XSpeedConfidence speedConfidence;)
+ (V2XSpeedConfidence)speedConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XDriveDirection driveDirection;)
+ (V2XDriveDirection)driveDirection SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger vehicleLength;)
+ (NSInteger)vehicleLength SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XVehicleLengthConfidenceIndication lengthConfidence;)
+ (V2XVehicleLengthConfidenceIndication)lengthConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger vehicleWidth;)
+ (NSInteger)vehicleWidth SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XCurvatureValue curvatureValue;)
+ (V2XCurvatureValue)curvatureValue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XCurvatureConfidence curvatureConfidence;)
+ (V2XCurvatureConfidence)curvatureConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XCurvatureCalculationMode curvatureCalculationMode;)
+ (V2XCurvatureCalculationMode)curvatureCalculationMode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XYawRateValue yawRateValue;)
+ (V2XYawRateValue)yawRateValue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XYawRateConfidence yawRateConfidence;)
+ (V2XYawRateConfidence)yawRateConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XLongitudinalAccelerationValue longitudinalAccelerationValue;)
+ (V2XLongitudinalAccelerationValue)longitudinalAccelerationValue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XLongitudinalAccelerationConfidence longitudinalAccelerationConfidence;)
+ (V2XLongitudinalAccelerationConfidence)longitudinalAccelerationConfidence SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X13IVIMConstants")
@interface IVIMConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) ProtocolVersion protocolVersion;)
+ (ProtocolVersion)protocolVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) MessageID messageID;)
+ (MessageID)messageID SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger stationID;)
+ (NSUInteger)stationID SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X31IVIManagementContainerConstants")
@interface IVIManagementContainerConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger countryCode;)
+ (NSUInteger)countryCode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger idNumber;)
+ (NSUInteger)idNumber SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger providerID;)
+ (NSUInteger)providerID SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) IVIStatus iviStatus;)
+ (IVIStatus)iviStatus SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP11VodafoneV2X20IntersectionGeometry_")
@protocol IntersectionGeometry
@property (nonatomic, readonly, copy) NSArray<id <GenericLane>> * _Nonnull laneSet;
@property (nonatomic, readonly) NSInteger intersectionID;
@end


SWIFT_CLASS("_TtC11VodafoneV2X24IntersectionGeometryImpl")
@interface IntersectionGeometryImpl : NSObject
@property (nonatomic, readonly, copy) NSArray<id <GenericLane>> * _Nonnull laneSet;
@property (nonatomic, readonly) NSInteger intersectionID;
- (nonnull instancetype)initWithLaneSet:(NSArray<GenericLaneImpl *> * _Nonnull)laneSet intersectionID:(NSInteger)intersectionID intersectionRegion:(NSInteger)intersectionRegion OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11VodafoneV2X20LFContainerConstants")
@interface LFContainerConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XVehicleRole vehicleRole;)
+ (V2XVehicleRole)vehicleRole SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDate;

SWIFT_CLASS("_TtC11VodafoneV2X12LPVConstants")
@interface LPVConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSDate * _Nonnull tst;)
+ (NSDate * _Nonnull)tst SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDegrees latitude;)
+ (CLLocationDegrees)latitude SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDegrees longitude;)
+ (CLLocationDegrees)longitude SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL accuracy;)
+ (BOOL)accuracy SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationSpeed speed;)
+ (CLLocationSpeed)speed SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDirection heading;)
+ (CLLocationDirection)heading SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) StationKind stationType;)
+ (StationKind)stationType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XAddrConfig configuration;)
+ (V2XAddrConfig)configuration SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger mid;)
+ (NSUInteger)mid SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X26LocationContainerConstants")
@interface LocationContainerConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XSpeedConfidence speedConfidence;)
+ (V2XSpeedConfidence)speedConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationSpeed speedValue;)
+ (CLLocationSpeed)speedValue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XHeadingConfidence headingConfidence;)
+ (V2XHeadingConfidence)headingConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDirection headingValue;)
+ (CLLocationDirection)headingValue SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X28ManagementContainerConstants")
@interface ManagementContainerConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger originStationID;)
+ (NSUInteger)originStationID SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger sequenceNumber;)
+ (NSInteger)sequenceNumber SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) RelevanceDistanceKind relevanceDistance;)
+ (RelevanceDistanceKind)relevanceDistance SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) RelevanceTrafficDirectionKind relevanceTrafficDirection;)
+ (RelevanceTrafficDirectionKind)relevanceTrafficDirection SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger validityDuration;)
+ (NSInteger)validityDuration SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger transmissionInterval;)
+ (NSInteger)transmissionInterval SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) StationKind stationType;)
+ (StationKind)stationType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger semiMajorConfidence;)
+ (NSUInteger)semiMajorConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger semiMinorConfidence;)
+ (NSUInteger)semiMinorConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XHeadingValue semiMajorOrientation;)
+ (V2XHeadingValue)semiMajorOrientation SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDistance altitudeValue;)
+ (CLLocationDistance)altitudeValue SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XAltitudeConfidence altitudeConfidence;)
+ (V2XAltitudeConfidence)altitudeConfidence SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDegrees latitude;)
+ (CLLocationDegrees)latitude SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CLLocationDegrees longitude;)
+ (CLLocationDegrees)longitude SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum V2XManeuver : NSInteger;

SWIFT_PROTOCOL("_TtP11VodafoneV2X8Maneuver_")
@protocol Maneuver
@property (nonatomic, readonly) enum V2XManeuver maneuverType;
@property (nonatomic, readonly) NSInteger lane;
@end


SWIFT_CLASS("_TtC11VodafoneV2X12ManeuverImpl")
@interface ManeuverImpl : NSObject
@property (nonatomic, readonly) enum V2XManeuver maneuverType;
@property (nonatomic, readonly) NSInteger lane;
- (nonnull instancetype)initWithManeuverType:(V2XAllowedManeuver)maneuverType signalGroup:(NSInteger)signalGroup lane:(NSInteger)lane connectionID:(NSInteger)connectionID OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface NSData (SWIFT_EXTENSION(VodafoneV2X))
@property (nonatomic, readonly, copy) NSData * _Nonnull reversed;
- (NSString * _Nonnull)hexEncoded SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSDate (SWIFT_EXTENSION(VodafoneV2X))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSDate * _Nonnull ntp;)
+ (NSDate * _Nonnull)ntp SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSTimeInterval ntpTimestamp;)
+ (NSTimeInterval)ntpTimestamp SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSTimeInterval ntpDelta;)
+ (NSTimeInterval)ntpDelta SWIFT_WARN_UNUSED_RESULT;
- (uint32_t)TSTTAIMOD32 SWIFT_WARN_UNUSED_RESULT;
+ (NSDate * _Nonnull)dateFromETSIReferenceWithMod32:(uint32_t)interval SWIFT_WARN_UNUSED_RESULT;
- (NSTimeInterval)computeTimestampITSms SWIFT_WARN_UNUSED_RESULT;
+ (NSDate * _Nonnull)computeDateFromTimestampITS:(NSTimeInterval)tsITSms SWIFT_WARN_UNUSED_RESULT;
@end



@interface NSString (SWIFT_EXTENSION(VodafoneV2X))
- (NSData * _Nullable)dataFromHexString SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)decToHexWithSeparator:(NSString * _Nonnull)separator SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP11VodafoneV2X10NodeOffset_")
@protocol NodeOffset
@property (nonatomic, readonly) CLLocationDistance deltaX;
@property (nonatomic, readonly) CLLocationDistance deltaY;
@end


SWIFT_CLASS("_TtC11VodafoneV2X14NodeOffsetImpl")
@interface NodeOffsetImpl : NSObject <NodeOffset>
@property (nonatomic, readonly) CLLocationDistance deltaX;
@property (nonatomic, readonly) CLLocationDistance deltaY;
- (nonnull instancetype)initWithDeltaX:(CLLocationDistance)deltaX deltaY:(CLLocationDistance)deltaY OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_PROTOCOL("_TtP11VodafoneV2X16RoadSignISO14823_")
@protocol RoadSignISO14823
@property (nonatomic, readonly) NSInteger nature;
@property (nonatomic, readonly) NSInteger serialNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable pictogram;
@end


SWIFT_CLASS("_TtC11VodafoneV2X12RoadSignImpl")
@interface RoadSignImpl : NSObject <RoadSignISO14823>
@property (nonatomic, readonly) NSInteger nature;
@property (nonatomic, readonly) NSInteger serialNumber;
@property (nonatomic, readonly, copy) NSString * _Nullable pictogram;
- (nonnull instancetype)initWithNature:(NSInteger)nature serialNumber:(NSInteger)serialNumber pictogram:(NSString * _Nullable)pictogram speedMax:(NSInteger)speedMax speedUnit:(NSInteger)speedUnit OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11VodafoneV2X27SituationContainerConstants")
@interface SituationContainerConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) InformationQualityKind informationQuality;)
+ (InformationQualityKind)informationQuality SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) CauseCodeKind eventCauseCode;)
+ (CauseCodeKind)eventCauseCode SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) NSInteger eventSubCauseCode;)
+ (NSInteger)eventSubCauseCode SWIFT_WARN_UNUSED_RESULT;
+ (void)setEventSubCauseCode:(NSInteger)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11VodafoneV2X11SwiftLogger")
@interface SwiftLogger : NSObject
+ (void)vdfObjcWithPrint:(NSString * _Nonnull)print filename:(NSString * _Nonnull)filename function:(NSString * _Nonnull)function line:(NSInteger)line;
+ (void)vdfObjcDebugWithPrint:(NSString * _Nonnull)print filename:(NSString * _Nonnull)filename function:(NSString * _Nonnull)function line:(NSInteger)line;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_PROTOCOL("_TtP11VodafoneV2X19TrafficLighMovement_")
@protocol TrafficLighMovement
@property (nonatomic, readonly) NSTimeInterval minTime;
@property (nonatomic, readonly) V2XTrafficLighState trafficLightState;
@end


SWIFT_CLASS("_TtC11VodafoneV2X23TrafficLighMovementImpl")
@interface TrafficLighMovementImpl : NSObject
@property (nonatomic, readonly) NSTimeInterval minTime;
@property (nonatomic, readonly) V2XTrafficLighState trafficLightState;
- (nonnull instancetype)initWithLikelyTime:(NSInteger)likelyTime minTime:(NSTimeInterval)minTime confidence:(NSInteger)confidence trafficLightState:(V2XTrafficLighState)trafficLightState OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP11VodafoneV2X18TrafficLightRecord_")
@protocol TrafficLightRecord
@property (nonatomic, readonly) NSInteger intersectionRegion;
@property (nonatomic, readonly) NSInteger intersectionID;
@property (nonatomic, readonly) NSInteger signalGroup;
@property (nonatomic, readonly, copy) NSArray<id <TrafficLighMovement>> * _Nonnull trafficLightMovements;
@end


SWIFT_CLASS("_TtC11VodafoneV2X22TrafficLightRecordImpl")
@interface TrafficLightRecordImpl : NSObject <TrafficLightRecord>
@property (nonatomic, readonly) NSInteger intersectionRegion;
@property (nonatomic, readonly) NSInteger intersectionID;
@property (nonatomic, readonly) NSInteger signalGroup;
@property (nonatomic, readonly, copy) NSArray<id <TrafficLighMovement>> * _Nonnull trafficLightMovements;
- (nonnull instancetype)initWithIntersectionRegion:(NSInteger)intersectionRegion intersectionID:(NSInteger)intersectionID signalGroup:(NSInteger)signalGroup trafficLightMovements:(NSArray<id <TrafficLighMovement>> * _Nonnull)trafficLightMovements OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, V2XManeuver, open) {
  V2XManeuverTurnLeft = 0,
  V2XManeuverTurnRight = 1,
  V2XManeuverStraight = 2,
};


SWIFT_CLASS("_TtC11VodafoneV2X12VAMConstants")
@interface VAMConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) ProtocolVersion protocolVersion;)
+ (ProtocolVersion)protocolVersion SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) MessageID messageID;)
+ (MessageID)messageID SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger stationID;)
+ (NSUInteger)stationID SWIFT_WARN_UNUSED_RESULT;
/// CoopAwareness
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger deltaTime;)
+ (NSInteger)deltaTime SWIFT_WARN_UNUSED_RESULT;
/// VAM
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XCommonNextHeader nextHeader;)
+ (V2XCommonNextHeader)nextHeader SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XHeaderType headerType;)
+ (V2XHeaderType)headerType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL flagsAreMobile;)
+ (BOOL)flagsAreMobile SWIFT_WARN_UNUSED_RESULT;
/// GNAddress
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) StationKind stationType;)
+ (StationKind)stationType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) V2XAddrConfig configuration;)
+ (V2XAddrConfig)configuration SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSUInteger mid;)
+ (NSUInteger)mid SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif

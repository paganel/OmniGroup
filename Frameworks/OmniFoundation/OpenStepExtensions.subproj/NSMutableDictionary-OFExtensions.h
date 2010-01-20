// Copyright 1997-2005, 2008-2010 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSDictionary.h>
#import <OmniFoundation/NSDictionary-OFExtensions.h>

@interface NSMutableDictionary (OFExtensions)
- (void)setObject:(id)anObject forKeys:(NSArray *)keys;

// These are nice for ease of use
- (void)setFloatValue:(float)value forKey:(NSString *)key;
- (void)setDoubleValue:(double)value forKey:(NSString *)key;
- (void)setIntValue:(int)value forKey:(NSString *)key;
- (void)setUnsignedIntValue:(unsigned int)value forKey:(NSString *)key;
- (void)setIntegerValue:(NSInteger)value forKey:(NSString *)key;
- (void)setUnsignedIntegerValue:(NSUInteger)value forKey:(NSString *)key;
- (void)setUnsignedLongLongValue:(unsigned long long)value forKey:(NSString *)key;
- (void)setBoolValue:(BOOL)value forKey:(NSString *)key;
#ifdef OmniFoundation_NSDictionary_NSGeometry_Extensions
- (void)setPointValue:(NSPoint)value forKey:(NSString *)key;
- (void)setSizeValue:(NSSize)value forKey:(NSString *)key;
- (void)setRectValue:(NSRect)value forKey:(NSString *)key;
#endif

// Setting with default values
- (void)setObject:(id)object forKey:(NSString *)key defaultObject:(id)defaultObject;
- (void)setFloatValue:(float)value forKey:(NSString *)key defaultValue:(float)defaultValue;
- (void)setDoubleValue:(double)value forKey:(NSString *)key defaultValue:(double)defaultValue;
- (void)setIntValue:(int)value forKey:(NSString *)key defaultValue:(int)defaultValue;
- (void)setUnsignedIntValue:(unsigned int)value forKey:(NSString *)key defaultValue:(unsigned int)defaultValue;
- (void)setIntegerValue:(NSInteger)value forKey:(NSString *)key defaultValue:(NSInteger)defaultValue;
- (void)setUnsignedIntegerValue:(NSUInteger)value forKey:(NSString *)key defaultValue:(NSUInteger)defaultValue;
- (void)setUnsignedLongLongValue:(unsigned long long)value forKey:(NSString *)key defaultValue:(unsigned long long)defaultValue;
- (void)setBoolValue:(BOOL)value forKey:(NSString *)key defaultValue:(BOOL)defaultValue;
#ifdef OmniFoundation_NSDictionary_NSGeometry_Extensions
- (void)setPointValue:(NSPoint)value forKey:(NSString *)key defaultValue:(NSPoint)defaultValue;
- (void)setSizeValue:(NSSize)value forKey:(NSString *)key defaultValue:(NSSize)defaultValue;
- (void)setRectValue:(NSRect)value forKey:(NSString *)key defaultValue:(NSRect)defaultValue;
#endif

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIAutomation/UIASyntheticEvents.h>

@class NSString;

@interface UIASyntheticStarkEvents : UIASyntheticEvents
{
    struct __CFDictionary *_starkDeviceProperties;
    struct __CFData *_starkDigitizerDescriptorData;
    struct __IOHIDUserDevice *_syntheticStarkDevice;
    NSString *_starkDisplayUUID;
}

+ (id)sharedEventGenerator;
@property(readonly) NSString *starkDisplayUUID; // @synthesize starkDisplayUUID=_starkDisplayUUID;
@property(readonly) struct __IOHIDUserDevice *syntheticStarkDevice; // @synthesize syntheticStarkDevice=_syntheticStarkDevice;
@property(readonly) struct __CFData *starkDigitizerDescriptorData; // @synthesize starkDigitizerDescriptorData=_starkDigitizerDescriptorData;
@property(readonly) struct __CFDictionary *starkDeviceProperties; // @synthesize starkDeviceProperties=_starkDeviceProperties;
- (void)dealloc;
- (int)_submitHIDReportAtLocation:(struct CGPoint)arg1 ofType:(int)arg2;
- (void)_moveLastTouchPoint:(struct CGPoint)arg1;
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned long long)arg2;
- (void)_updateTouchPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
- (_Bool)_enableStarkModeWithDisplayUUID:(id)arg1;
- (void)_initScreenProperties;
- (id)init;

@end


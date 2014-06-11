//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIAutomation/UIAElement.h>
#import <UIAutomation/UIAWindow.h>
#import <UIAutomation/UIAToolbar.h>
#import <UIAutomation/UIATabBar.h>
#import <UIAutomation/UIANavigationBar.h>
#import <UIAutomation/UIAScrollView.h>
#import <UIAutomation/UIAEditingMenu.h>
#import <UIAutomation/UIAStatusBar.h>
#import <UIAutomation/UIAActivityView.h>
#import <UIAutomation/UIAKeyboard.h>
#import <UIAutomation/UIAAlert.h>

#import <UIKit/UIApplication.h>

@class NSString, UIAElementArray;

@interface UIAApplication : UIAElement
{
    UIAElementArray *_windows;
    NSString *_name;
    NSString *_bundleID;
    NSString *_bundlePath;
    NSString *_axBundlePath;
    NSString *_version;
    NSString *_bundleVersion;
    const void *_privateRef;
}

+ (id)toManyRelationshipKeys;
+ (id)toOneRelationshipKeys;
+ (id)attributeKeys;
- (id)scriptingSynonymStrings;
- (UIAToolbar*)toolbar;
- (UIATabBar*)tabBar;
- (UIANavigationBar*)navigationBar;
- (UIAScrollView*)appIconScrollView;
- (UIAScrollView*)appItemScrollView;
- (id)_scrollViewWithElementType:(id)arg1;
- (UIAEditingMenu*)editingMenu;
- (UIAStatusBar*)statusBar;
- (UIAAlert*)alert;
- (UIAActivityView*)activityView;
- (UIAActionSheet*)actionSheet;
- (UIAKeyboard*)keyboard;
- (UIAWindow*)mainWindow;
- (id)_axMainWindow;
- (UIAWindow*)keyWindow;
- (UIAElementArray*)windows;
- (UIInterfaceOrientation)interfaceOrientation;
- (id)preferencesValueForKey:(id)arg1;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
- (id)isCameraIrisOpen;
- (id)isVisible;
- (id)stateDescription;
- (unsigned int)_state;
- (NSString*)bundleVersion;
- (NSString*)version;
- (id)localizedStringForKey:(id)arg1 withOptions:(id)arg2;
- (id)localizedStringForKey:(id)arg1;
- (id)_axBundle;
- (id)_axBundlePath;
- (NSBundle*)_bundle;
- (NSString*)bundlePath;
- (NSString*)_bundlePath;
- (NSString*)name;
- (NSString*)_name;
- (NSString*)bundleID;
- (NSString*)_bundleID;
- (void)_invalidate;
- (void)dealloc;
- (id)init;

@end

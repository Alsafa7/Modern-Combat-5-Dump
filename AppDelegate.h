/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import "UITextFieldDelegate.h"
#import "UIApplicationDelegate.h"
#import "UIAlertViewDelegate.h"
#import "NSURLConnectionDelegate.h"
#import </libobjc.A.h>

@class GenericGLView, Reachability, NSTimer, UIView, UITextField, UIWindow, EAGLContext;

@interface AppDelegate : NSObject <UIApplicationDelegate, UITextFieldDelegate, UIAlertViewDelegate, NSURLConnectionDelegate> {
	CreationSettings *mCreationSettings;	// 4 = 0x4
	UITextField *mTextField;	// 8 = 0x8
	UIWindow *mMainWindow;	// 12 = 0xc
	UIWindow *mSecondWindow;	// 16 = 0x10
	GenericGLView *mMainView;	// 20 = 0x14
	GenericGLView *mSecondView;	// 24 = 0x18
	EAGLContext *context;	// 28 = 0x1c
	BOOL animating;	// 32 = 0x20
	int mUpdateMode;	// 36 = 0x24
	BOOL mIsMultipleScreenSupported;	// 40 = 0x28
	Thread *mUpdateThread;	// 44 = 0x2c
	int animationFrameInterval;	// 48 = 0x30
	id displayLink;	// 52 = 0x34
	NSTimer *animationTimer;	// 56 = 0x38
	double animationInterval;	// 60 = 0x3c
	BOOL isForeground;	// 68 = 0x44
	BOOL useEventPump;	// 69 = 0x45
	UITextField *m_activeTF;	// 72 = 0x48
	bool m_skipKeyboardWillHideCallback;	// 76 = 0x4c
	bool m_skipKeyPressCallback;	// 77 = 0x4d
	Reachability *mWifiReach;	// 80 = 0x50
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > mLastSSID;	// 84 = 0x54
	int mDefaultTextID;	// 96 = 0x60
	vector<unsigned short, std::__1::allocator<unsigned short> > mDefaultText;	// 100 = 0x64
	int mLaunchReporterResponse;	// 112 = 0x70
	Atomic<bool> isShowingModal;	// 116 = 0x74
	CreationSettings *_mCreationSettings;	// 120 = 0x78
}
@property(readonly, assign, nonatomic, getter=isAnimating) BOOL animating;	// @synthesize
@property(assign, nonatomic) int animationFrameInterval;	// @dynamic
@property(assign) double animationInterval;	// @synthesize
@property(assign, nonatomic) NSTimer *animationTimer;	// @synthesize
@property(readonly, retain, nonatomic) EAGLContext *context;	// @synthesize
@property(readonly, assign) BOOL isForeground;	// @synthesize
@property(assign) Atomic<bool> isShowingModal;	// @synthesize
@property(assign) CreationSettings *mCreationSettings;	// @synthesize=_mCreationSettings
@property(retain, nonatomic) UIView *mMainView;	// @synthesize
@property(retain, nonatomic) UIWindow *mMainWindow;	// @synthesize
@property(retain, nonatomic) UIView *mSecondView;	// @synthesize
@property(retain, nonatomic) UIWindow *mSecondWindow;	// @synthesize
@property(retain, nonatomic) UITextField *mTextField;	// @synthesize
@property(assign) BOOL useEventPump;	// @synthesize
@property(retain, nonatomic) UIWindow *window;
+ (BOOL)ConnectDisplay:(int)display;
+ (BOOL)DisconnectDisplay:(int)display;
+ (int)GetDisplayStatus:(int)status;
+ (int)GetFrameBufferAtScreenIndex:(int)screenIndex;
+ (id)GetMainContext;
+ (void)GetWindowSizeAtScreenIndex:(int)screenIndex Width:(int *)width Height:(int *)height;
+ (void)InitView:(CreationSettings *)view infos:(PlatformInfo *)infos;
+ (BOOL)Prepare:(int)prepare;
+ (void)Present:(int)present;
+ (void)UpdateKeyboard:(BOOL)keyboard DefaultText:(const basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > *)text DefaultTextID:(int)anId;
+ (bool)WithViewController;
+ (id)alloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)ConnectDisplay:(int)display;
- (BOOL)DisconnectDisplay:(int)display;
- (int)GetDisplayStatus:(int)status;
- (int)GetFrameBufferAtScreenIndex:(int)screenIndex;
- (void)GetWindowSizeAtScreenIndex:(int)screenIndex Width:(int *)width Height:(int *)height;
- (void)InitView:(CreationSettings *)view infos:(PlatformInfo *)infos;
- (id)NewGLView:(BOOL)view;
- (BOOL)Prepare:(int)prepare;
- (void)Present:(int)present;
- (void)PumpEvents:(int)events AndDraw:(BOOL)draw;
- (void)UpdateKeyboard:(BOOL)keyboard DefaultText:(const basic_string<wchar_t, std::__1::char_traits<wchar_t>, std::__1::allocator<wchar_t> > *)text DefaultTextID:(int)anId;
- (void)addScreen:(id)screen;
// declared property getter: - (int)animationFrameInterval;
// declared property getter: - (double)animationInterval;
// declared property getter: - (id)animationTimer;
- (BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
- (void)applicationDidBecomeActive:(id)application;
- (void)applicationDidEnterBackground:(id)application;
- (void)applicationDidReceiveMemoryWarning:(id)application;
- (void)applicationWillEnterForeground:(id)application;
- (void)applicationWillResignActive:(id)application;
- (void)applicationWillTerminate:(id)application;
- (void)cocoaThread:(id)thread;
// declared property getter: - (id)context;
- (void)createGLContexts:(PlatformInfo *)contexts;
- (void)createMainWindow;
- (void)createSecondWindow:(id)window;
- (id)createUIViewController;
- (id)createViewForScreen:(id)screen;
- (void)dealloc;
- (void)didRotate:(id)rotate;
- (void)drawView:(id)view;
- (void)drawViewEventPump:(id)pump;
- (void)getThreadSnapshot:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *)snapshot;
- (void)handleScreenConnectNotification:(id)notification;
- (void)handleScreenDisconnectNotification:(id)notification;
- (void)iPadKeyboardWillHide;
// declared property getter: - (BOOL)isAnimating;
// declared property getter: - (BOOL)isForeground;
// declared property getter: - (Atomic<bool>)isShowingModal;
- (void)keyPressed:(id)pressed;
- (void)keyboardDidChangeFrame:(id)keyboard;
- (void)keyboardWillChangeFrame:(id)keyboard;
// declared property getter: - (CreationSettings *)mCreationSettings;
// declared property getter: - (id)mMainView;
// declared property getter: - (id)mMainWindow;
// declared property getter: - (id)mSecondView;
// declared property getter: - (id)mSecondWindow;
// declared property getter: - (id)mTextField;
- (void)reachabilityChanged:(id)changed;
- (void)removeScreen:(id)screen;
- (void)sendLog;
// declared property setter: - (void)setAnimationFrameInterval:(int)interval;
// declared property setter: - (void)setAnimationInterval:(double)interval;
// declared property setter: - (void)setAnimationTimer:(id)timer;
// declared property setter: - (void)setIsShowingModal:(Atomic<bool>)modal;
// declared property setter: - (void)setMCreationSettings:(CreationSettings *)settings;
// declared property setter: - (void)setMMainView:(id)view;
// declared property setter: - (void)setMMainWindow:(id)window;
// declared property setter: - (void)setMSecondView:(id)view;
// declared property setter: - (void)setMSecondWindow:(id)window;
// declared property setter: - (void)setMTextField:(id)field;
// declared property setter: - (void)setUseEventPump:(BOOL)pump;
- (void)startAnimation;
- (void)stopAnimation;
- (BOOL)textFieldShouldReturn:(id)textField;
// declared property getter: - (BOOL)useEventPump;
@end

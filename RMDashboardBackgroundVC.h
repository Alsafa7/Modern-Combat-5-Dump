/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>

@class RMViewController;

@interface RMDashboardBackgroundVC : UIViewController {
	RMViewController *realViewController;	// 160 = 0xa0
	BOOL bInited;	// 164 = 0xa4
}
@property(retain, nonatomic) UIViewController *realViewController;	// @synthesize
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
- (void)loadView;
// declared property getter: - (id)realViewController;
// declared property setter: - (void)setRealViewController:(id)controller;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
- (unsigned)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidDisappear:(BOOL)view;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

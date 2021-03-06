/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import <UIKit/UIView.h>
#import "UIWebViewDelegate.h"

@class UIButton, NSDictionary, UIWebView, UIActivityIndicatorView, NSString;
@protocol SinaWeiboAuthorizeViewDelegate;

@interface SinaWeiboAuthorizeView : UIView <UIWebViewDelegate> {
	UIWebView *webView;	// 52 = 0x34
	UIButton *closeButton;	// 56 = 0x38
	UIView *modalBackgroundView;	// 60 = 0x3c
	UIActivityIndicatorView *indicatorView;	// 64 = 0x40
	int previousOrientation;	// 68 = 0x44
	id<SinaWeiboAuthorizeViewDelegate> delegate;	// 72 = 0x48
	NSString *appRedirectURI;	// 76 = 0x4c
	NSDictionary *authParams;	// 80 = 0x50
}
@property(assign, nonatomic) id<SinaWeiboAuthorizeViewDelegate> delegate;	// @synthesize
- (id)init;
- (id)initWithAuthParams:(id)authParams delegate:(id)delegate;
- (void)_hide;
- (void)addObservers;
- (void)addRoundedRectToPath:(CGContextRef)path rect:(CGRect)rect radius:(float)radius;
- (void)bounce1AnimationStopped;
- (void)bounce2AnimationStopped;
- (void)cancel;
- (void)dealloc;
// declared property getter: - (id)delegate;
- (void)deviceOrientationDidChange:(id)deviceOrientation;
- (void)drawRect:(CGRect)rect;
- (void)drawRect:(CGRect)rect fill:(const float *)fill radius:(float)radius;
- (void)hide;
- (void)hideIndicator;
- (void)load;
- (void)removeObservers;
// declared property setter: - (void)setDelegate:(id)delegate;
- (BOOL)shouldRotateToOrientation:(int)orientation;
- (void)show;
- (void)showIndicator;
- (void)showWebView;
- (void)sizeToFitOrientation:(BOOL)fitOrientation;
- (void)strokeLines:(CGRect)lines stroke:(const float *)stroke;
- (CGAffineTransform)transformForOrientation;
- (void)updateWebOrientation;
- (void)webView:(id)view didFailLoadWithError:(id)error;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
- (void)webViewDidFinishLoad:(id)webView;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import <UIKit/UIView.h>


@interface RMRoundProgressView : UIView {
	float _progress;	// 52 = 0x34
	BOOL _annular;	// 56 = 0x38
}
@property(assign, nonatomic, getter=isAnnular) BOOL annular;
@property(assign, nonatomic) float progress;
- (id)init;
- (id)initWithFrame:(CGRect)frame;
- (void)drawRect:(CGRect)rect;
// declared property getter: - (BOOL)isAnnular;
// declared property getter: - (float)progress;
// declared property setter: - (void)setAnnular:(BOOL)annular;
// declared property setter: - (void)setProgress:(float)progress;
@end

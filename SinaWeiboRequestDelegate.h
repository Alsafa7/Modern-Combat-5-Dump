/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SinaWeiboRequestDelegate <NSObject>
@optional
- (void)request:(id)request didFailWithError:(id)error;
- (void)request:(id)request didFinishLoadingWithResult:(id)result;
- (void)request:(id)request didReceiveRawData:(id)data;
- (void)request:(id)request didReceiveResponse:(id)response;
@end

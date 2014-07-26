/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModernCombat5-Structs.h"
#import </libobjc.A.h>


@interface Reachability : NSObject {
	BOOL localWiFiRef;	// 4 = 0x4
	SCNetworkReachabilityRef reachabilityRef;	// 8 = 0x8
}
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const sockaddr_in *)address;
+ (id)reachabilityWithHostName:(id)hostName;
- (BOOL)connectionRequired;
- (int)currentReachabilityStatus;
- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned)flags;
- (int)networkStatusForFlags:(unsigned)flags;
- (BOOL)startNotifier;
- (void)stopNotifier;
@end

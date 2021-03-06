/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSURLResponse, NSURLConnection, NSMutableData;

@interface FBURLConnection : NSObject {
	BOOL _skipRoundtripIfCached;	// 4 = 0x4
	NSURLConnection *_connection;	// 8 = 0x8
	NSMutableData *_data;	// 12 = 0xc
	id _handler;	// 16 = 0x10
	unsigned _loggerSerialNumber;	// 20 = 0x14
	unsigned long _requestStartTime;	// 24 = 0x18
	NSURLResponse *_response;	// 28 = 0x1c
}
@property(retain, nonatomic) NSURLConnection *connection;	// @synthesize=_connection
@property(retain, nonatomic) NSMutableData *data;	// @synthesize=_data
@property(copy, nonatomic) id handler;	// @synthesize=_handler
@property(readonly, assign, nonatomic) unsigned loggerSerialNumber;	// @synthesize=_loggerSerialNumber
@property(assign, nonatomic) unsigned long requestStartTime;	// @synthesize=_requestStartTime
@property(retain, nonatomic) NSURLResponse *response;	// @synthesize=_response
@property(assign, nonatomic) BOOL skipRoundtripIfCached;	// @synthesize=_skipRoundtripIfCached
+ (void)initialize;
- (id)initWithRequest:(id)request skipRoundTripIfCached:(BOOL)cached completionHandler:(id)handler;
- (id)initWithURL:(id)url completionHandler:(id)handler;
- (void)cancel;
// declared property getter: - (id)connection;
- (void)connection:(id)connection didFailWithError:(id)error;
- (void)connection:(id)connection didReceiveData:(id)data;
- (void)connection:(id)connection didReceiveResponse:(id)response;
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
- (void)connectionDidFinishLoading:(id)connection;
// declared property getter: - (id)data;
- (void)dealloc;
- (id)getCache;
// declared property getter: - (id)handler;
- (void)invokeHandler:(id)handler error:(id)error response:(id)response responseData:(id)data;
- (BOOL)isCDNURL:(id)cdnurl;
- (void)logAndInvokeHandler:(id)handler cachedData:(id)data forURL:(id)url;
- (void)logAndInvokeHandler:(id)handler error:(id)error;
- (void)logAndInvokeHandler:(id)handler response:(id)response responseData:(id)data;
- (void)logMessage:(id)message;
// declared property getter: - (unsigned)loggerSerialNumber;
// declared property getter: - (unsigned long)requestStartTime;
// declared property getter: - (id)response;
// declared property setter: - (void)setConnection:(id)connection;
// declared property setter: - (void)setData:(id)data;
// declared property setter: - (void)setHandler:(id)handler;
// declared property setter: - (void)setRequestStartTime:(unsigned long)time;
// declared property setter: - (void)setResponse:(id)response;
// declared property setter: - (void)setSkipRoundtripIfCached:(BOOL)cached;
- (BOOL)shouldShortCircuitRedirectResponse:(id)response;
// declared property getter: - (BOOL)skipRoundtripIfCached;
@end


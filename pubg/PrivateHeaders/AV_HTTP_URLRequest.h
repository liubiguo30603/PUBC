//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSMutableURLRequest, NSOperationQueue, NSString, NSURLConnection;

@interface AV_HTTP_URLRequest : NSOperation
{
    void *_delegate;	// 24 = 0x18
    NSString *_getFilepath;	// 32 = 0x20
    NSString *_postFilepath;	// 40 = 0x28
    NSMutableURLRequest *_request;	// 48 = 0x30
    NSURLConnection *_conn;	// 56 = 0x38
    struct AVHttpResponse *_response;	// 64 = 0x40
    NSOperationQueue *_queue;	// 72 = 0x48
}

+ (id)requestWithURL:(id)arg1 timeout:(int)arg2;	// IMP=0x00000001011961f4
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) struct AVHttpResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLConnection *conn; // @synthesize conn=_conn;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *postFilepath; // @synthesize postFilepath=_postFilepath;
@property(retain, nonatomic) NSString *getFilepath; // @synthesize getFilepath=_getFilepath;
@property(nonatomic) void *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001011970a0
- (void)setBody:(id)arg1;	// IMP=0x0000000101196f30
- (void)addHead:(id)arg1 withValue:(id)arg2;	// IMP=0x0000000101196e7c
- (id)readFromFile:(id)arg1;	// IMP=0x0000000101196df4
- (_Bool)write2File:(id)arg1 data:(id)arg2;	// IMP=0x0000000101196d60
- (void)main;	// IMP=0x00000001011965cc
- (void)quit;	// IMP=0x00000001011965c0
- (void)sendRequest;	// IMP=0x0000000101196564
- (void)setMethod:(id)arg1;	// IMP=0x00000001011964d8
- (id)initWithURL:(id)arg1;	// IMP=0x000000010119633c

@end


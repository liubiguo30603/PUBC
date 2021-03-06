//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BeaconAppLogUploadHandler : NSObject
{
    _Bool _isUploading;	// 8 = 0x8
    _Bool _isRealtimeUploading;	// 9 = 0x9
    _Bool _isChecked;	// 10 = 0xa
    _Bool _appLogUploadUsable;	// 11 = 0xb
    _Bool _appLogRealTimeUpload;	// 12 = 0xc
    int _numOnceUpload;	// 16 = 0x10
    int _appLogDirPathType;	// 20 = 0x14
    unsigned int _appLogSizeLimit;	// 24 = 0x18
    unsigned int _appLogOutDay;	// 28 = 0x1c
    unsigned int _appLogRecordMax;	// 32 = 0x20
    unsigned int _appLogDailyConsumeLimit;	// 36 = 0x24
    unsigned int _appLogFileTotalMaxSize;	// 40 = 0x28
    CDUnknownBlockType _applogResult;	// 48 = 0x30
    NSString *_filePath;	// 56 = 0x38
    NSString *_dirPath;	// 64 = 0x40
    unsigned long long _dayFlow;	// 72 = 0x48
    NSString *_realtimeLog;	// 80 = 0x50
    NSString *_waitingLog;	// 88 = 0x58
    NSString *_userId;	// 96 = 0x60
    NSString *_docDirPath;	// 104 = 0x68
    NSString *_cacheDirPath;	// 112 = 0x70
}

+ (_Bool)onAppLogUploadAction:(id)arg1 isRealTime:(_Bool)arg2 isImmediately:(_Bool)arg3;	// IMP=0x00000001007e2414
+ (_Bool)onAppLogUploadAction:(id)arg1 isRealTime:(_Bool)arg2 savePath:(id)arg3;	// IMP=0x00000001007e22a8
+ (_Bool)onAppLogUploadAction:(id)arg1 isRealTime:(_Bool)arg2;	// IMP=0x00000001007e21f0
+ (_Bool)onAppLogUploadAction:(id)arg1;	// IMP=0x00000001007e21e0
+ (void)setAppLogUserId:(id)arg1;	// IMP=0x00000001007e2094
+ (void)doUploadAppLogRecordsWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000001007e1f10
+ (void)doUploadAppLogRecords;	// IMP=0x00000001007e1f00
+ (id)getDefaultHandler;	// IMP=0x00000001007e0e84
@property(nonatomic) unsigned int appLogFileTotalMaxSize; // @synthesize appLogFileTotalMaxSize=_appLogFileTotalMaxSize;
@property(nonatomic) unsigned int appLogDailyConsumeLimit; // @synthesize appLogDailyConsumeLimit=_appLogDailyConsumeLimit;
@property(nonatomic) unsigned int appLogRecordMax; // @synthesize appLogRecordMax=_appLogRecordMax;
@property(nonatomic) unsigned int appLogOutDay; // @synthesize appLogOutDay=_appLogOutDay;
@property(nonatomic) unsigned int appLogSizeLimit; // @synthesize appLogSizeLimit=_appLogSizeLimit;
@property(nonatomic) _Bool appLogRealTimeUpload; // @synthesize appLogRealTimeUpload=_appLogRealTimeUpload;
@property(nonatomic) _Bool appLogUploadUsable; // @synthesize appLogUploadUsable=_appLogUploadUsable;
@property(retain, nonatomic) NSString *cacheDirPath; // @synthesize cacheDirPath=_cacheDirPath;
@property(retain, nonatomic) NSString *docDirPath; // @synthesize docDirPath=_docDirPath;
@property(nonatomic) int appLogDirPathType; // @synthesize appLogDirPathType=_appLogDirPathType;
@property(nonatomic) int numOnceUpload; // @synthesize numOnceUpload=_numOnceUpload;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *waitingLog; // @synthesize waitingLog=_waitingLog;
@property(retain, nonatomic) NSString *realtimeLog; // @synthesize realtimeLog=_realtimeLog;
@property(nonatomic) unsigned long long dayFlow; // @synthesize dayFlow=_dayFlow;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
@property(nonatomic) _Bool isRealtimeUploading; // @synthesize isRealtimeUploading=_isRealtimeUploading;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) NSString *dirPath; // @synthesize dirPath=_dirPath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) CDUnknownBlockType applogResult; // @synthesize applogResult=_applogResult;
- (void).cxx_destruct;	// IMP=0x00000001007e6440
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;	// IMP=0x00000001007e5e4c
- (void)canceled:(id)arg1;	// IMP=0x00000001007e5bdc
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;	// IMP=0x00000001007e59cc
- (void)resetSomething;	// IMP=0x00000001007e597c
- (void)realtimeLogToFile;	// IMP=0x00000001007e5840
- (void)recordFileFlow:(unsigned long long)arg1;	// IMP=0x00000001007e560c
- (void)isFileSizeOverFlow;	// IMP=0x00000001007e5608
- (id)getUploadFilePath;	// IMP=0x00000001007e54e4
- (id)getSaveFilePath;	// IMP=0x00000001007e4b00
- (id)getCacheFilePath:(id)arg1;	// IMP=0x00000001007e4a60
- (id)getDocumentFilePath:(id)arg1;	// IMP=0x00000001007e49c0
- (void)deleteLogFile;	// IMP=0x00000001007e48cc
- (void)deleteAllLogFile;	// IMP=0x00000001007e4568
- (void)deletePastLogFile;	// IMP=0x00000001007e4190
- (void)checkLogFile;	// IMP=0x00000001007e4184
- (_Bool)checkFileSize:(id)arg1;	// IMP=0x00000001007e3e9c
- (_Bool)checkFileFlow;	// IMP=0x00000001007e3e58
- (void)fileListShow;	// IMP=0x00000001007e3ce4
- (_Bool)writeData:(id)arg1 toFileHandle:(id)arg2 error:(id *)arg3;	// IMP=0x00000001007e3b78
- (_Bool)appString:(id)arg1;	// IMP=0x00000001007e368c
- (id)getLogStr;	// IMP=0x00000001007e3580
- (void)realtimeUploadApplog:(id)arg1;	// IMP=0x00000001007e2d04
- (void)uploadApplog;	// IMP=0x00000001007e255c
- (void)cloudParamInit;	// IMP=0x00000001007e1ad4
- (id)init;	// IMP=0x00000001007e0f38

@end


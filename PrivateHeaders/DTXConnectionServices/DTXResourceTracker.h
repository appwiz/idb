/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@interface DTXResourceTracker : NSObject
{
    unsigned long long _total;
    unsigned long long _maxChunk;
    unsigned long long _used;
    unsigned int _waiting;
    unsigned int _acquireNum;
    int _suspendCount;
    dispatch_queue_t _queue;
    dispatch_semaphore_t _acqSem;
    DTXResourceTracker *_parentTracker;
    BOOL _log;
}

@property(nonatomic) BOOL log; // @synthesize log=_log;
- (void)resumeLimits;
- (void)suspendLimits;
- (void)releaseSize:(unsigned long long)arg1;
- (void)forceAcquireSize:(unsigned long long)arg1;
- (unsigned int)acquireSize:(unsigned long long)arg1;
@property(nonatomic) unsigned long long maxChunkSize;
@property(nonatomic) unsigned long long totalSize;
- (void)dealloc;
- (id)init;

@end


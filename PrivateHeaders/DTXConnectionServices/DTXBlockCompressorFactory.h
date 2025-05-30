/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@interface DTXBlockCompressorFactory : NSObject
{
}

+ (id)createLibCompressionBlockCompressor;
+ (id)createLibFastCompressionBlockCompressor;
+ (id)createBlockCompressor;

@end


//
//  MASSessionDataTaskOperation.h
//  MASFoundation
//
//  Copyright (c) 2017 CA. All rights reserved.
//
//  This software may be modified and distributed under the terms
//  of the MIT license. See the LICENSE file for details.
//

#import "MASSessionTaskOperation.h"

@interface MASSessionDataTaskOperation : MASSessionTaskOperation <NSURLSessionDataDelegate>

///--------------------------------------
/// @name Properties
///--------------------------------------

# pragma mark - Properties

@property (nonatomic, copy) MASNetworkDataTaskDidBecomeDownloadTaskBlock didBecomeDownloadTaskBlock;
@property (nonatomic, copy) MASNetworkDataTaskDidReceiveDataBlock didReceiveDataBlock;
@property (nonatomic, copy) MASNetworkDataTaskWillCacheResponseBlock willCacheResponseBlock;
@property (nonatomic, copy) MASNetworkDataTaskDidReceiveResponseBlock didReceiveResponseBlock;
@property (nonatomic,readonly) NSString* taskID;

- (instancetype)initWithSession:(NSURLSession *)session request:(NSURLRequest *)request progress:(MASFileRequestProgressBlock)progress;

@end

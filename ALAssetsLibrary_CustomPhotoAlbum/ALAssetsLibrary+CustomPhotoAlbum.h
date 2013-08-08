//
//  ALAssetsLibrary category to handle a custom photo album
//
//  Created by Zhao Yiqi on 12/26/12.
//  Copyright (c) 2012 Zhao Yiqi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>

typedef void(^SaveImageCompletion)(NSError* error);
typedef void(^SaveVideoCompletion)(NSError* error);

@interface ALAssetsLibrary(CustomPhotoAlbum)

-(void)saveVideoPath:(NSString*)path toAlbum:(NSString*)albumName withCompletionBlock:(SaveVideoCompletion)completionBlock;
-(void)saveImage:(UIImage*)image toAlbum:(NSString*)albumName withCompletionBlock:(SaveImageCompletion)completionBlock;
-(void)addAssetURL:(NSURL*)assetURL toAlbum:(NSString*)albumName withCompletionBlock:(SaveImageCompletion)completionBlock;

@end
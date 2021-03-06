/*
 * This is the source code of eVITA for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import <LegacyComponents/ASActor.h>

#import <LegacyComponents/LegacyComponents.h>

#import <LegacyComponents/ActionStage.h>

@interface TGImageDownloadActor : ASActor <ASWatcher>
@property (nonatomic, strong) ASHandle *actionHandle;

+ (NSString *)genericPath;

+ (NSOperationQueue *)operationQueue;

+ (void)addUrlRewrite:(NSString *)currentUrl newUrl:(NSString *)newUrl;

+ (NSDictionary *)serverMediaDataForAssetUrl:(NSString *)assetUrl;
+ (void)addServerMediaSataForAssetUrl:(NSString *)assetUrl attachment:(TGMediaAttachment *)attachment;

@end

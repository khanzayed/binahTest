//
//  bnh_hrv_sdk.h
//  health_monitor_sdk
//
//  Created by Konstantin Gedalin on 02/06/2019.
//  Copyright © 2019 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVCaptureOutput.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger,AspectRatio) {
    Aspect_ratio4x3,
    Aspect_ratio16x9
};

@interface bnh_hrv_sdk : NSObject<AVCaptureVideoDataOutputSampleBufferDelegate>
@property (strong, nonatomic) UIImageView *mPreview;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *previewLayer;
-(void) initWithDelegate:(id)delegate withPreview:(UIImageView*)preview withCamera:(AVCaptureDevicePosition) position aspectRatio:(AspectRatio) aspect;
-(void) get_HRV:(UIImage*) img withOrientation:(int) orientation withPosition:(AVCaptureDevicePosition)pos;
-(void) StartHRV:(BOOL) report withUserName:(nullable NSString *)username;
-(void) StopHRV;
-(bool) getHRVStatus:(int) i;
-(AVCaptureDeviceFormat *) configureCameraForBestMatchedFrameRate:(int) desiredFrameRate withHeight: (int)height  withWidth:(int)width;
-(void) ChangeCamera;
-(void)initWithDelegate:(id)delegate withPreview:(UIImageView*) preview aspectRatio:(AspectRatio) aspect;
-(void) StopMeasures;
-(BOOL) restart: (BOOL) report;
@end

NS_ASSUME_NONNULL_END

//
//  bnh_hrv_sdk_delegate.h
//  health_monitor_sdk
//
//  Created by Konstantin Gedalin on 02/06/2019.
//  Copyright © 2019 binah.ai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol run_sdk_delegate <NSObject>
-(void)didRecieveFace:(CGRect)img size:(CGSize)size rotation:(CGFloat)andle ;
-(void)didRecieveNoFace;
-(void)didRecieveHeartRate:(double)bpm;
-(void)didRecieveHeartTrace:(double)trace;
-(void)didRecieveHeartReport:(NSString *)info;
-(void)didRecieveReportName:(NSString *)name;
-(void)didRecieveStressCategory:(NSString *)category;
-(void)didRecievedProgress:(float)progress;
-(void)didRecievespo2Trace:(double)spo;
-(void)didRecievespo2:(double)spo;
-(void)didRecieveBreathValue:(double)val;
@end

NS_ASSUME_NONNULL_END

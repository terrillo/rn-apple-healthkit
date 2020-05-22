//
//  RCTAppleHealthKit+Methods_Hearing.h
//  RCTAppleHealthKit
//
//  Created by Greg Wilson on 2016-11-06.
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Hearing)

- (void)hearing_getHeadphoneAudioSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end

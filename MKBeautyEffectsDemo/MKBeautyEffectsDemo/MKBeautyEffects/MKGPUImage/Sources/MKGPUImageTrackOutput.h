//
//  MKGPUImageTrackOutput.h
//  MKBeautyEffectsDemo
//
//  Created by mkil on 2019/8/17.
//  Copyright © 2019 黎宁康. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MKGPUImageContext.h"

//NS_ASSUME_NONNULL_BEGIN

@interface MKGPUImageTrackOutput : NSObject<MKGPUImageInput>

- (instancetype)initWithContext:(MKGPUImageContext *)context;

@end

//NS_ASSUME_NONNULL_END

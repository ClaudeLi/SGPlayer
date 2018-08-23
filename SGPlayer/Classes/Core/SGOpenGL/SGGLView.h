//
//  SGGLView.h
//  SGPlayer
//
//  Created by Single on 2018/1/24.
//  Copyright © 2018年 single. All rights reserved.
//

#import "SGPLFGLView.h"
#import "SGGLDefines.h"

@class SGGLView;

@protocol SGGLViewDelegate <NSObject>

- (BOOL)glView:(SGGLView *)glView draw:(SGGLSize)size;

@end

@interface SGGLView : SGPLFGLView

@property (nonatomic, weak) id <SGGLViewDelegate> delegate;
@property (nonatomic, assign, readonly) SGGLSize displaySize;
@property (nonatomic, assign, readonly) BOOL rendered;

- (BOOL)display;
- (void)clear;

@end

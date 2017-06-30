//
//  EAGLView.h
//  Test
//
//  Created by spartawhy on 2017/6/30.
//  Copyright © 2017年 spartawhy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>


@interface EAGLView : UIView
{

@private
GLint backingWidth;
GLint backingHeight;

EAGLContext *context;
    
IBOutlet UISlider *slider;
    
IBOutlet UITabBar *tabBar;

GLuint viewRenderbuffer, viewFramebuffer;
}

@property (nonatomic, retain) UISlider *slider;
@property (nonatomic, retain) UITabBar *tabBar;

- (void)drawView;
@end

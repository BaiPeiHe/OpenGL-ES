//
//  AGLKContext.m
//  OpenGLES
//
//  Created by 白鹤 on 2016/12/26.
//  Copyright © 2016年 白鹤. All rights reserved.
//

#import "AGLKContext.h"

@implementation AGLKContext

-(void)setClearColor:(GLKVector4)clearColorRGBA{
    
    clearColor = clearColorRGBA;
    
    NSAssert(self == [[self class] currentContext], @"Receiving context required to be current context");
    
    glClearColor(clearColorRGBA.r,
                 clearColorRGBA.g,
                 clearColorRGBA.b,
                 clearColorRGBA.a);
}

- (GLKVector4)clearColor{
    return clearColor;
}

- (void)clear:(GLbitfield)mask{
    NSAssert(self == [[self class] currentContext], @"Receiving context required to be current context");
    
    glClear(mask);
}


@end

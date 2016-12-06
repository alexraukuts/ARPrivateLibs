//
//  EAGLView.h
//  office5
//
//  Created by rose on 12/6/12.
//  Copyright (c) 2012 soo. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>

@interface EAGLView : UIView
{
    EAGLContext* m_context;
}

- (BOOL) setContext:(BOOL)isSet;
- (BOOL) presentGL;

@end

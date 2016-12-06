//
//  GLRendererES1.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 25..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "GLRenderer.h"

@interface GLRendererES1 : GLRenderer
{
@private
    GLuint m_onscreen_colorRenderbuffer;
    GLuint m_onscreen_framebuffer;
    GLuint m_offscreen_colorRenderbuffer;
    GLuint m_offscreen_framebuffer;
    GLuint m_offscreen_texture;
}
@end

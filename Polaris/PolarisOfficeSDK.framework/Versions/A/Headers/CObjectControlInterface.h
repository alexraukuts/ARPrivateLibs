//
//  ObjectControlInterface.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 30..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#ifndef PolarisOffice_ObjectControlInterface_h
#define PolarisOffice_ObjectControlInterface_h

enum Object_Control_Layer_Type
{
    None,
    ObjectMove,
    ObjectResize,
    ObjectHorizontalResize,
    ObjectVerticalResize,
    ObjectRotate,
};

enum Object_Control_Layer_Position
{
    VerticalTopLeft = 0,
    VerticalTopCenter,
    VerticalTopRight,
    
    VerticalCenterLeft,
    VerticalCenterRight,
    
    VerticalBottomLeft,
    VerticalBottomCenter,
    VerticalBottomRight,
    
    Rotate
};

#endif

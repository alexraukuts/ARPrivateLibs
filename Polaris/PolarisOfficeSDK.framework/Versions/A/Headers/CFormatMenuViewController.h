//
//  CFormatMenuViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 29..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlcontainerViewController.h"
#import "CoreTextFacade.h"

typedef enum {
    FontEffect_Bold = 0,
    FontEffect_Italic,
    FontEffect_Underline,
    FontEffect_Outline,
    FontEffect_Cancelline = FontEffect_Outline,
} FontEffect;

typedef enum {
    CancleLineEffect_Single = 0,
    CancleLineEffect_Double,
    
} CancleLineEffect;

typedef enum {
    ScriptionEffect_Suppersicript = 0,
    ScriptionEffect_Subsicript,
    
} ScriptEffect;

typedef enum {
    EmbossEngraveEffect_Embossed = 0,
    EmbossEngraveEffect_Engraved,
    
} EmbossEngraveEffect;

typedef enum {
    UpperLower_ToLower = 0,
    UpperLower_ToUpper,
    
} UpperLower;

typedef enum {
    UnderlineType_Single = 0,		//단일선
    UnderlineType_Double,		//이중선
    UnderlineType_Thick,			//굵은선
    UnderlineType_Dotted,		//점선
    UnderlineType_Dash,			//파선
    UnderlineType_DotDash = 0,		//일점 쇄선
    UnderlineType_Wavy,			//물결선
    UnderlineType_WavyHeavy,		//물결선
    UnderlineType_WavyDouble,	//이중물결선
    
    
} UnderlineType;

@interface CFormatMenuViewController : CPropertyMenuControlContainerViewController

@property (strong, nonatomic) CoreTextFacade *coreTextFacade;

@property (weak, nonatomic) IBOutlet UISegmentedControl *underLineTypeSegmentFirst;
@property (weak, nonatomic) IBOutlet UISegmentedControl *underLineTypeSegmentSecond;
@property (weak, nonatomic) IBOutlet UIView *underLineView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *underLineViewHeight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *underLineViewHeightValue;

@end

//
//  CCellFormatViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 12..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CPropertyMenuControlContainerViewController.h"
#import "CMultiSelectSegmentedControl.h"
#import "CoreCellFacade.h"

@interface CCellFormatViewController : CPropertyMenuControlContainerViewController<CMultiSelectSegmentedControlDelegate>

@property (strong, nonatomic) CoreCellFacade *coreCellFacade;

@end

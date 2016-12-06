//
//  CCellStyleViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 12..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CPropertyMenuControlContainerViewController.h"

typedef enum {
    SheetCellStyleTableType_GoodBadAndNeutral,
    SheetCellStyleTableType_DataAndModel,
    SheetCellStyleTableType_TitlesAndHeadings,
    SheetCellStyleTableType_ThemedCellStyles
}SheetCellStyleTableType;

@interface CCellStyleViewController : CPropertyMenuControlContainerViewController

- (void)didSelectCellStyleAtIndex:(NSInteger)index tableType:(SheetCellStyleTableType)tableType;

@end

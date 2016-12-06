//
//  CCheckTableViewController.h
//  PolarisOffice
//
//  Created by ParkBeomsam on 2015. 5. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CCheckTableViewDelegate <NSObject>

@optional
- (void)tableView:(UITableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface CCheckTableViewController : UITableViewController

@property (strong, nonatomic) NSArray * datas;
@property (strong, nonatomic) id<CCheckTableViewDelegate> checkTableViewDelegate;

- (void)selectWithIndexPath:(NSIndexPath *)indexPath;
- (void)deselectWithIndexPath:(NSIndexPath *)indexPath;


@end

//
//  CGalleryViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2014. 11. 24..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    GalleryViewMediaType_DefaultByDocType,
    GalleryViewMediaType_Image,
    GalleryViewMediaType_Movie,
    GalleryViewMediaType_ImageMovie,
} GalleryViewMediaType;

@protocol CGalleryViewControllerDelegate <NSObject>

- (void)didSelectMediaWithInfo:(NSDictionary *)mediaInfo;

@end

@interface CGalleryViewController : UIViewController<UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (nonatomic) id<CGalleryViewControllerDelegate> galleryViewControllerDelegate;
@property (nonatomic) GalleryViewMediaType galleryViewMediaType;

- (void)presentCameraWithParentViewController:(UIViewController *)parentViewController;

@end

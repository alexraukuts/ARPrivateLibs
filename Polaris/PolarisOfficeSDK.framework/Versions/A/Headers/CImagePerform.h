//
//  CImagePerform.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 22..
//  Copyright (c) 2014년 infraware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CImagePerform : NSObject

+ (void)saveImage:(UIImage *)image;
+ (UIImage*) imageMerge: (CGSize)expectedSize firstImage:(UIImage*)firstImage firstFrame:(CGRect)firstFrame secondImage:(UIImage*)secondImage secondFrame:(CGRect)secondFrame;
+ (UIImage *) imageCrop: (UIImage *) image cropRect: (CGRect)cropRect;
+ (UIImage *) imageCropWithCGImageRef:(CGImageRef) imageRef cropRect:(CGRect)cropRect;
+ (UIImage*)imageFromScrollView:(UIScrollView *)scrollView WithRect:(CGRect)rect;

+ (unsigned char*) convertFromUIImage:(UIImage*)image;
+ (void) convertFromNSString:(NSString *)string textSize:(CGFloat)size textColor:(UIColor*)textColor returnBitmap:(void (^)(unsigned char* bitmap, CGSize size))returnBitmap;
@end

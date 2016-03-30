//
//  UIImage+WResize.h
//  Warp
//
//  Created by Lukáš Foldýna on 28.12.12.
//  Copyright (c) 2012 TwoManShow. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIImage (WResize)

- (UIImage *) croppedImage:(CGRect)bounds;
- (UIImage *) croppedImageWithOrientation:(CGRect)bounds;

- (UIImage *) resizedImage:(CGSize)newSize;
+ (UIImage *) resizedImageWithPath:(NSString *)path size:(CGSize)newSize;

+ (UIImage *) imageNamedWithoutScaling:(NSString *)name;
+ (UIImage *) imageImmediateLoadWithContentsOfFile:(NSString *)path;

@end


@interface WPhoto : NSObject

+ (id) photoWithFilePath:(NSString *)filePath;
- (id) initWithFilePath:(NSString *)filePath;
@property (nonatomic, strong, readwrite) NSString *filePath;

@property (nonatomic, assign, readonly) CGSize size;
- (UIImage *) resizedImageWithMaxSize:(CGFloat)size;

@end
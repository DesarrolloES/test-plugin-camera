//
//  UIImage-Extensions.h
//  FistAppCameraPreview
//
//  Created by Eduardo Gallegos on 04/04/16.
//
//

#ifndef UIImage_Extensions_h
#define UIImage_Extensions_h


#import <Foundation/Foundation.h>

@interface UIImage (CS_Extensions)
- (UIImage *)imageAtRect:(CGRect)rect;
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

@end;

#endif /* UIImage_Extensions_h */

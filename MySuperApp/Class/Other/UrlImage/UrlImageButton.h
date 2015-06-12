//
//  UrlImageButton.h
//  test image
//
//  Created by Xuyan Yang on 8/06/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SDWebImageCompat.h"
#import "SDWebImageManagerDelegate.h"
#import "MYMacro.h"

@interface UrlImageButton : UIButton <SDWebImageManagerDelegate> {	
    NSInteger iconIndex;

	CGSize scaleSize;
	BOOL    isScale;
	
	BOOL    _animated;
	BOOL    _isBackgroundImage;
    NSString* picUrl;
    CGRect frame_final;
    NSArray *sizeDestArray;
    NSArray *sizeArray;
}

@property (nonatomic, assign) NSInteger iconIndex;
@property (nonatomic, strong) NSString* picUrl;


@property (nonatomic, assign) NSInteger cellIndex;


-(UIImage*) getDefaultImage;

- (void) setImageFromUrl:(BOOL)animated withUrl:(NSString *)iconUrl;
- (void) setBackgroundImageFromUrl:(BOOL)animated withUrl:(NSString *)iconUrl;

- (void)setImageWithURL:(NSURL *)url;
- (void)setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholder;
- (void)cancelCurrentImageLoad;

@end
//
//  TTPhotosGridViewController.h
//  videoStudy_1
//
//  Created by 李曈 on 2017/2/24.
//  Copyright © 2017年 lt. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^TTSelectedImg)(NSArray * images);

@interface TTPhotosGridViewController : UIViewController

@property (strong, nonatomic)  id  fetchResult;

-(void)completeChooseImage:(TTSelectedImg)block;

@end

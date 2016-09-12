//
//  Config.h
//  StructureTest
//
//  Created by zhangqiang on 16/8/9.
//  Copyright © 2016年 jyfl. All rights reserved.
//

#ifndef Config_h
#define Config_h
#define KWidth  [UIScreen mainScreen].bounds.size.width
#define KHeight  [UIScreen mainScreen].bounds.size.height
#define ProportionWidth 1.0/375*KWidth
#define ProportionHeight 1.0/667*KHeight
#define colorref [UIColor colorWithRed:0 green:97.0/255 blue:167.0/255 alpha:1.0].CGColor

#define kPushPhotoBrowserNotifitationName @"PushPhotoBrowser"
#define kPresentVideoPlayerNotifitationName @"playCallBackVideo"

#define APPICONIMAGE [UIImage imageNamed:[[[[NSBundle mainBundle] infoDictionary] valueForKeyPath:@"CFBundleIcons.CFBundlePrimaryIcon.CFBundleIconFiles"] lastObject]]
#define APPNAME [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleDisplayName"]
#define Main_Color [UIColor colorWithRed:(3)/255.0 green:(160)/255.0 blue:(235)/255.0 alpha:1.0]
#define Main2_Color [UIColor colorWithRed:(135)/255.0 green:(202)/255.0 blue:(231)/255.0 alpha:1.0]
#define VTColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define Text_Color [UIColor colorWithRed:(51)/255.0 green:(71)/255.0 blue:(113)/255.0 alpha:1.0]
#define BackGround_Color [UIColor colorWithRed:(235)/255.0 green:(235)/255.0 blue:(241)/255.0 alpha:1.0]

#define Default_Person_Image [UIImage imageNamed:@"default_parents"]
#define Default_General_Image [UIImage imageNamed:@"default_general"]

#define MCColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
// 随机色
#define MCRandomColor MCColor(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))

#define sysDege (AppDelegate *)[[UIApplication sharedApplication] delegate]


#endif /* Config_h */

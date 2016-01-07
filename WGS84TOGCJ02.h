//
//  WGS84TOGCJ02.h
//
//  Created by lengmolehongyan on 15/12/4.
//  Copyright © 2015年 lengmolehongyan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface WGS84TOGCJ02 : NSObject

/** 判断是否已经超出中国范围 */
+ (BOOL)isLocationOutOfChina:(CLLocationCoordinate2D)location;

/** 将经纬度转成 GCJ02 */
+ (CLLocationCoordinate2D)transformFromWGSToGCJ:(CLLocationCoordinate2D)wgsLoc;
@end

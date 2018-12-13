//
//  CLLocation+TransformationCoordinates.h
//  GettingLocationWhenSuspended
//
//  Created by snow on 2018/12/13.
//  Copyright © 2018年 Rick. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

@interface CLLocation (TransformationCoordinates)

//从地图坐标转化到火星坐标
- (CLLocation*)locationMarsFromEarth;

//从火星坐标转化到百度坐标
- (CLLocation*)locationBaiduFromMars;

//从百度坐标到火星坐标
- (CLLocation*)locationMarsFromBaidu;

//从火星坐标到地图坐标
- (CLLocation*)locationEarthFromMars;

//从百度坐标到地图坐标
- (CLLocation*)locationEarthFromBaidu;


@end

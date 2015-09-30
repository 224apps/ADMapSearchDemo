
//
//  PlaceAnnotation.h
//  ADMapSearchDemo
//
//  Created by A's macAir on 9/29/15.
//  Copyright (c) 2015 Abdoulaye Diallo. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface PlaceAnnotation : NSObject <MKAnnotation>

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, retain) NSURL *url;

@end



//
//  MapViewController.h
//  ADMapSearchDemo
//
//  Created by A's macAir on 9/29/15.
//  Copyright (c) 2015 Abdoulaye Diallo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapViewController : UIViewController
@property (nonatomic,weak) IBOutlet MKMapView *map;
@property (nonatomic, strong) NSArray *itemList;
@property (nonatomic, assign) MKCoordinateRegion boundingRegion;
@end

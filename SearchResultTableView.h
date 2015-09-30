//
//  SearchResultTableView.h
//  ADMapSearchDemo
//
//  Created by A's macAir on 9/29/15.
//  Copyright (c) 2015 Abdoulaye Diallo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface SearchResultTableView : UITableViewController<UISearchBarDelegate,CLLocationManagerDelegate>
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *viewAll;
@property(nonatomic,strong) NSArray *places;



@end

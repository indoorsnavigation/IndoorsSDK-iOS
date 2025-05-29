//
//  ViewController.m
//  SPMExample
//
//  Created by Indoors on 29.05.2025.
//

#import "ViewController.h"

#import <IndoorsMapSDK/IndoorsMapSDK.h>

@interface ViewController ()
{
    INApplication *_inApplication;
}
@property (strong, nonatomic) INGlobalMapView *map;
@end


@implementation ViewController

- (INGlobalMapView *)map
{
    if (!_map)
        _map = [[INGlobalMapView alloc] initWithFrame:self.view.bounds];
    return _map;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [INCore initializeWithConfiguration:[INCoreConfiguration defaultConfiguration]];
    [self loadApplication];
    [self.view addSubview:self.map];
    
}

-(void)loadApplication
{
    [INCore.sharedInstance.service
     authorizeApplicationWithClientId:@"YOUR_APP_CLIENT_ID"
     andClientSecret:@"YOUR_APP_CLIENT_SECRET"
     withCompletionBlock:^(NSError * _Nonnull error)
     {
        [INCore.sharedInstance.service loadApplicationsWithCompletionBlock:^(NSMutableArray * _Nonnull applications, NSError * _Nonnull error)
         {
            self->_inApplication = applications.firstObject;
            [self loadBuildings];
        }];
    }];
}

-(void)loadBuildings
{
    [INCore.sharedInstance.service
     loadBuildingsOfApplication:_inApplication
     withCompletionBlock:^(NSMutableArray * _Nonnull buildings, NSError * _Nonnull error)
     {
        self.map.buildings = buildings;
        [self.map setCurrentBuilding:buildings[0]];
    }];
}

@end

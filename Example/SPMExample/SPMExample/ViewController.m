//
//  ViewController.m
//  SPMExample
//
//  Created by Indoors on 29.05.2025.
//

#import "ViewController.h"
#import <IndoorsCoreSDK/IndoorsCoreSDK.h>
#import <IndoorsMapSDK/IndoorsMapSDK.h>
#import <IndoorsModulesSDK/IndoorsModulesSDK.h>


@interface ViewController () <INNavigationDelegate>
{
    
    NSString *ClientId;
    NSString *ClientSecret;
}
@property (strong, nonatomic) INBuilding *building;
//
@property (strong, nonatomic) UIView *mapView;
@property (strong, nonatomic) INGlobalMapView *globalMapView;




@end

@implementation ViewController

-(UIView *)mapView
{
    if(!_mapView)
    {
        _mapView = [[UIView alloc] init];
        _mapView.backgroundColor = UIColor.clearColor;
        _mapView.translatesAutoresizingMaskIntoConstraints = false;
    }
    return _mapView;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.view addSubview:self.mapView];
    [self updateConstraints];

    [INCore initializeWithConfiguration:[INCoreConfiguration defaultConfiguration]];

    [self login];
}

- (void) login {
    
    ClientId = @"your ClientId";
    ClientSecret = @"your ClientSecret";
       
    [[[INCore sharedInstance] service] authorizeApplicationWithClientId:ClientId andClientSecret:ClientSecret withCompletionBlock:^(NSError * _Nullable error) {
        [self loadMap];
    }];
   
}

-(void) loadMap
{
    

        [[[INCore sharedInstance] service] loadApplicationsWithCompletionBlock:^(NSMutableArray *applications, NSError *error)
         {
            if (error != nil)
            {
                NSLog(@"error = %@", error);
                return;
            }

                
            [[[INCore sharedInstance] service] loadBuildingsOfApplication:applications[0]
                                                      withCompletionBlock:^(NSMutableArray *buildings, NSError *error)
             {
                
                dispatch_async(dispatch_get_main_queue(), ^{
                    
                    self->_globalMapView = [[INGlobalMapView alloc] initWithFrame:[self.mapView bounds]];
                    [self.mapView addSubview:self->_globalMapView];
                    [self->_globalMapView setBuildings:buildings];
                    //     [self->_globalMapView setCurrentBuilding:buildings[0]];
                    
                });

            }];
        }];


}

- (void)updateConstraints
{
    [super.view updateConstraints];
    
    [self.view addConstraint:[NSLayoutConstraint
                         constraintWithItem:self.mapView
                         attribute:NSLayoutAttributeTop
                         relatedBy:NSLayoutRelationEqual
                         toItem:self.view.safeAreaLayoutGuide
                         attribute:NSLayoutAttributeTop
                         multiplier:1.0
                         constant:0.0]];
    
    [self.view addConstraint:[NSLayoutConstraint
                         constraintWithItem:self.mapView
                         attribute:NSLayoutAttributeLeft
                         relatedBy:NSLayoutRelationEqual
                         toItem:self.view
                         attribute:NSLayoutAttributeLeft
                         multiplier:1.0
                         constant:0.0]];
    [self.view addConstraint:[NSLayoutConstraint
                         constraintWithItem:self.mapView
                         attribute:NSLayoutAttributeRight
                         relatedBy:NSLayoutRelationEqual
                         toItem:self.view
                         attribute:NSLayoutAttributeRight
                         multiplier:1.0
                         constant:0.0]];
    [self.view addConstraint:[NSLayoutConstraint
                         constraintWithItem:self.mapView
                              attribute:NSLayoutAttributeBottom
                         relatedBy:NSLayoutRelationEqual
                         toItem:self.view.safeAreaLayoutGuide
                         attribute:NSLayoutAttributeBottom
                         multiplier:1.0
                         constant:0.0]];
}


@end

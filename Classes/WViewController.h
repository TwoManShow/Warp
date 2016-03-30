//
//  WViewController.h
//  Warp
//
//  Created by Lukáš Foldýna on 13/04/15.
//  Copyright (c) 2015 TwoManShow. All rights reserved.
//

@import UIKit;


@class WViewDataSource, WErrorView;

@protocol WViewControllerProtocol <NSObject>

@property (nonatomic, strong) WViewDataSource *viewSource;

@property (nonatomic, strong) WErrorView *errorView;
- (void) displayError;
- (void) hideError;

@property (nonatomic, strong) UIActivityIndicatorView *loadingView;
- (void) displayLoading;
- (void) hideLoading;

- (CGRect) overlayerFrame;
- (void) hideOverlayer;

@property (nonatomic, readonly, strong) NSString *titleForState; // source-label.source-state.title
@property (nonatomic, readonly, strong) NSString *subtitleForState; // source-label.source-state.subtitle or error description
@property (nonatomic, readonly, strong) UIImage *imageForState; // source-label.source-state.image

@end


@interface UIViewController (WViewController)

@end


@interface WViewController : UIViewController <WViewControllerProtocol>

@end

@interface WTableViewController : UITableViewController <WViewControllerProtocol>

@end


@interface WCollectionViewController : UICollectionViewController <WViewControllerProtocol>

@end
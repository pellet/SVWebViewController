//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <MessageUI/MessageUI.h>

#import "SVModalWebViewController.h"

@class SVWebSettings;

@interface SVWebViewController : UIViewController <UISplitViewControllerDelegate, UIGestureRecognizerDelegate, UIWebViewDelegate, UIViewControllerRestoration>

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL*)URL;
- (id)initWithURL:(NSURL *)URL withSettings:(SVWebSettings *)settings;

- (void)loadURL:(NSURL*)URL;
- (void)loadAddress:(NSString*)address;

- (void)updateToolbarItems:(BOOL)isLoading;

@property (nonatomic, readwrite) SVWebViewControllerAvailableActions availableActions;
@property (strong, nonatomic) UIPopoverController *masterPopoverController;
@property (nonatomic, strong, readonly) NSURL *URL;
@property (nonatomic, strong, readonly) UIBarButtonItem *customBarButtonItem;

@property (readonly) BOOL isSecureHTTPinUse;
@property (readonly) BOOL isLoadingPage;
@property (readonly, strong) NSString *currentPageAddress;

@end

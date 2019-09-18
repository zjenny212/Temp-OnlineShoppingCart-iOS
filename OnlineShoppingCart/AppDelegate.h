//
//  AppDelegate.h
//  OnlineShoppingCart
//
//  Created by Zijie Liu on 9/18/19.
//  Copyright © 2019 Zijie Liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


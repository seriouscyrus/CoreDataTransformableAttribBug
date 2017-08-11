//
//  AppDelegate.h
//  CoreDataTransformableAttribBug
//
//  Created by George Brown on 11.08.17.
//  Copyright © 2017 Serious Cyrus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


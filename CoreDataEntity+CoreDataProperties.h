//
//  CoreDataEntity+CoreDataProperties.h
//  CoreDataTransformableAttribBug
//
//  Created by George Brown on 11.08.17.
//  Copyright © 2017 Serious Cyrus. All rights reserved.
//

#import "CoreDataEntity+CoreDataClass.h"
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface CoreDataEntity (CoreDataProperties)

+ (NSFetchRequest<CoreDataEntity *> *)fetchRequest;

@property (nullable, nonatomic, retain) UIColor *transformable;
@property (nullable, nonatomic, copy)   NSString *string;

@end

NS_ASSUME_NONNULL_END

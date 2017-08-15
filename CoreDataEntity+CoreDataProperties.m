//
//  CoreDataEntity+CoreDataProperties.m
//  CoreDataTransformableAttribBug
//
//  Created by George Brown on 11.08.17.
//  Copyright © 2017 Serious Cyrus. All rights reserved.
//

#import "CoreDataEntity+CoreDataProperties.h"

@implementation CoreDataEntity (CoreDataProperties)

+ (NSFetchRequest<CoreDataEntity *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"CoreDataEntity"];
}

@dynamic transformable;
@dynamic string;

@end

//
//  PhotosByTagCDTVC.h
//  SPoT_CoreData
//
//  Created by Ben Andrews on 15/07/2013.
//  Copyright (c) 2013 Ben Andrews. All rights reserved.
//

#import "PhotosCDTVC.h"
#import "Tag.h"

@interface PhotosByTagCDTVC : PhotosCDTVC // : CoreDataTableViewController

@property (nonatomic, strong) Tag *tag;

@end


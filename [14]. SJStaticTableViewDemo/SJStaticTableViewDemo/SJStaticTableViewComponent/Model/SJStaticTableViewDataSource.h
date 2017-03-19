//
//  SJStaticTableViewDataSource.h
//  SSJStaticTableViewDemo
//
//  Created by Sun Shijie on 2017/3/15.
//  Copyright © 2017年 Shijie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Factory.h"

@class SJStaticTableViewCell;
@class SJStaticTableviewCellViewModel;
@class SJStaticTableviewSectionViewModel;

@protocol SJStaticTableViewDataSource <UITableViewDataSource>

@optional

- (SJStaticTableviewSectionViewModel *)tableView:(UITableView *)tableView sectionViewModelInSection:(NSInteger )section;
- (SJStaticTableviewCellViewModel *)tableView:(UITableView *)tableview cellViewModelAtIndexPath:(NSIndexPath *)indexPath;

@end


typedef void(^SJStaticCellConfigureBlock)(SJStaticTableViewCell *cell, id viewModel);


@interface SJStaticTableViewDataSource : NSObject<SJStaticTableViewDataSource>

@property (nonatomic, strong) NSArray *viewModelsArray;

- (instancetype)initWithViewModelsArray:(NSArray *)viewModelsArray configureBlock:(SJStaticCellConfigureBlock)block;

@end
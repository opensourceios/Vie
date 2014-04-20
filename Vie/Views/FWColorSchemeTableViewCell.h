//
// Created by Fabien Warniez on 2014-04-12.
// Copyright (c) 2014 Fabien Warniez. All rights reserved.
//

@class FWGameBoardView;

@interface FWColorSchemeTableViewCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *colorNameLabel;

@property (nonatomic, strong) UIColor *cellPreviewFillColor;
@property (nonatomic, strong) UIColor *cellPreviewBorderColor;

@end
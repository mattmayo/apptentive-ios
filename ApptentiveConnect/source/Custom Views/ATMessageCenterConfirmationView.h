//
//  ATMessageCenterConfirmationView.h
//  ApptentiveConnect
//
//  Created by Frank Schmitt on 5/21/15.
//  Copyright (c) 2015 Apptentive, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ATMessageCenterConfirmationView : UIView

@property (nonatomic, weak) IBOutlet UILabel *confirmationLabel;
@property (nonatomic, weak) IBOutlet UILabel *statusLabel;
@property (nonatomic, weak) IBOutlet UIImageView *backgroundImageView;
@property (nonatomic, assign, getter=isConfirmationHidden) BOOL confirmationHidden;

@end

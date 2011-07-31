//
//  StarRatingView.h
//  StarRating
//
//  Created by Frank on 1/4/11.
//

#import <UIKit/UIKit.h>

#define kDefaultNumberOfStars 5

/*
 * Initialize the StarRartingButton *
 * TBStarRatingControl *star = [[TBStarRatingControl alloc] initWithFrame:CGRectMake(0, 230, 320, 230) andStars:5]; 
 *
 * Enable AutoresizingMaks *
 * star.autoresizingMask =  UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
 *
 * Set the Default Rating *
 * star.rating = 2;
 *
 * Set it Enabled *
 * star.enabled:YES ? NO;
 *
 * Add it to the view *
 * [self.view addSubview:star];
 */

@protocol TBStarRatingDelegate

- (void)newRating:(int)rating;

@end



@interface TBStarRatingControl : UIControl {
	int numberOfStars;
	int currentIdx;
	UIImage *star;
	UIImage *highlightedStar;
	IBOutlet id<TBStarRatingDelegate> delegate;
}

- (id)initWithFrame:(CGRect)frame;
- (id)initWithFrame:(CGRect)frame andStars:(int)_numberOfStars;

@property (retain,nonatomic) UIImage *star;
@property (retain,nonatomic) UIImage *highlightedStar;
@property (nonatomic) int rating;
@property (retain,nonatomic) id<TBStarRatingDelegate> delegate;

@end

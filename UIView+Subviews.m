//
//  UIView+Subviews.m
//  StarRating
//
//  Created by Frank on 1/4/11.
//

#import "UIView+Subviews.h"


@implementation UIView (Subviews)

- (UIView*)subViewWithTag:(int)tag {
	for (UIView *v in self.subviews) {
		if (v.tag == tag) {
			return v;
		}
	}
	return nil;
}

@end

//
//  UIView+HorizontalView.h
//
//  Created by David Martinez Lebron on 5/12/15.
//  Copyright (c) 2015 David Martinez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+Subviews.h"
#import "CalculationsUtils.h"
#import "UIView+Shadow.h"
#import "UILabel+Subview.h"

/**
 Horizontal distribution of subviews distribution in superview in the x axis
 */
typedef enum {
    /** Distributes subviews uniformally in superview */
    HorizontalDistributionFill,
    /** Distributes subviews with overlapping with the right on top of the left in superview */
    HorizontalDistributionOverlapped,
    /** Distributes subviews from left to right leaving 0 from subview to subview */
    HorizontalDistributionNormal
} HorizontalDistribution;

/**
 Vertical Location of subviews in superview in the y axis
 */
typedef enum {
    /** Top location in superview */
    VerticalLocationTop,
    /** Centered location in superview */
    VerticalLocationCentered,
    /** Bottom location in superview */
    VerticalLocationBottom
} VerticalLocation;

@interface UIView (HorizontalView)

/**
 This methods creates a horizontal view with subviews.
 
 @param viewsArray It receives an NSArray of UIViews (that can be any type of class that subclass from UIView) and a CGSize of the size of the view that will be added.
 @param horizontalDistribution HorizontalDistribution enum option.
 @param verticalLocation VerticalLocation enum option.
 */
-(void) horizontalViewWithViewsArray:(NSArray<UIView *> *) viewsArray withHorizontalDistribution:(HorizontalDistribution) horizontalDistribution andVerticalLocation:(VerticalLocation) verticalLocation;


/**
 This methods will distribute hozitontally only. And will use the subviews already on the view.
 
 @param horizontalDistribution HorizontalDistribution enum option.
 */
-(void) distributeWithHorizontalDistribution:(HorizontalDistribution) horizontalDistribution;


/**
 This method divides a UIView with a vertical line (divisor).
 @param objectsArray An array of UIView (or any UIView related class) to add in each segment.

 @returns Number of segments.
 
 */
//-(CGFloat) divideIntoSegmentsWithObjects:(NSArray<UIView *> *) objectsArray;


@end








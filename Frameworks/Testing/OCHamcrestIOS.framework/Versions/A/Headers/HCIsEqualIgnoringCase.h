//
//  OCHamcrest - HCIsEqualIgnoringCase.h
//  Copyright 2011 hamcrest.org. See LICENSE.txt
//
//  Created by: Jon Reid
//

    // Inherited
#import <OCHamcrestIOS/HCBaseMatcher.h>


/**
    Tests if a string is equal to another string, regardless of the case.
    @ingroup text_matchers
 */
@interface HCIsEqualIgnoringCase : HCBaseMatcher
{
    NSString *string;
}

+ (id)isEqualIgnoringCase:(NSString *)aString;
- (id)initWithString:(NSString *)aString;

@end

//--------------------------------------------------------------------------------------------------

/**
    Tests if a string is equal to another string, regardless of the case.

    @b Synonym: @ref equalToIgnoringCase
    @see HCIsEqualIgnoringCase
    @ingroup text_matchers
 */
OBJC_EXPORT id<HCMatcher> HC_equalToIgnoringCase(NSString *string);

/**
    equalToIgnoringCase(string) -
    Tests if a string is equal to another string, regardless of the case.

    Synonym for @ref HC_equalToIgnoringCase, available if @c HC_SHORTHAND is defined.
    @see HCIsEqualIgnoringCase
    @ingroup text_matchers
 */
#ifdef HC_SHORTHAND
    #define equalToIgnoringCase HC_equalToIgnoringCase
#endif

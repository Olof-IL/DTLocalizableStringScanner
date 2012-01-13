//
//  UnitTest.h
//  UnitTest
//
//  Created by Oliver Drobnik on 1/13/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>

NSString *testCaseNameFromURL(NSURL *URL);

@interface UnitTest : SenTestCase

- (void)internalTestCaseWithURL:(NSURL *)URL;

@end

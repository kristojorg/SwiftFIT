//  MIT License
//
//  Created on 02/01/2019 for ConnectStats
//
//  Copyright (c) 2019 Brice Rosenzweig
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

@import Foundation;

#include "fit_convert.h"

@interface RZFitDevDataParser : NSObject

+(nonnull RZFitDevDataParser*)devDataParser:(nonnull FIT_CONVERT_STATE  *) state knownUnits:(nonnull NSArray<NSString*>*)known;


-(void)initState:(nonnull FIT_CONVERT_STATE *)state;
-(void)recordDeveloperField:(nonnull const FIT_UINT8 *)mesg;

-(nullable NSDictionary<NSString*,NSNumber*>*)parseData;
-(nullable NSDictionary<NSString*,NSNumber*>*)nativeFields;
-(nullable NSDictionary<NSString*,NSString*>*)units;


@end

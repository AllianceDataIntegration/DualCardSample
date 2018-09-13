/*
 * Copyright 2012 ADSZXing authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

@class ADSZXModulusPoly;

/**
 * A field based on powers of a generator integer, modulo some modulus.
 */
@interface ADSZXModulusGF : NSObject

@property (nonatomic, strong, readonly) ADSZXModulusPoly *one;
@property (nonatomic, strong, readonly) ADSZXModulusPoly *zero;

+ (ADSZXModulusGF *)PDF417_GF;

- (id)initWithModulus:(int)modulus generator:(int)generator;

- (ADSZXModulusPoly *)buildMonomial:(int)degree coefficient:(int)coefficient;
- (int)add:(int)a b:(int)b;
- (int)subtract:(int)a b:(int)b;
- (int)exp:(int)a;
- (int)log:(int)a;
- (int)inverse:(int)a;
- (int)multiply:(int)a b:(int)b;
- (int)size;

@end

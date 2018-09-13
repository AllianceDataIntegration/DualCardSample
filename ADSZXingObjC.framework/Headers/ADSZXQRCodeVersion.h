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

@class ADSZXBitMatrix, ADSZXIntArray, ADSZXQRCodeECB, ADSZXQRCodeECBlocks, ADSZXQRCodeErrorCorrectionLevel;

/**
 * See ISO 18004:2006 Annex D
 */
@interface ADSZXQRCodeVersion : NSObject

@property (nonatomic, assign, readonly) int versionNumber;
@property (nonatomic, strong, readonly) ADSZXIntArray *alignmentPatternCenters;
@property (nonatomic, strong, readonly) NSArray *ecBlocks;
@property (nonatomic, assign, readonly) int totalCodewords;
@property (nonatomic, assign, readonly) int dimensionForVersion;

- (ADSZXQRCodeECBlocks *)ecBlocksForLevel:(ADSZXQRCodeErrorCorrectionLevel *)ecLevel;
+ (ADSZXQRCodeVersion *)provisionalVersionForDimension:(int)dimension;
+ (ADSZXQRCodeVersion *)versionForNumber:(int)versionNumber;
+ (ADSZXQRCodeVersion *)decodeVersionInformation:(int)versionBits;
- (ADSZXBitMatrix *)buildFunctionPattern;

@end

/**
 * Encapsulates a set of error-correction blocks in one symbol version. Most versions will
 * use blocks of differing sizes within one version, so, this encapsulates the parameters for
 * each set of blocks. It also holds the number of error-correction codewords per block since it
 * will be the same across all blocks within one version.
 */
@interface ADSZXQRCodeECBlocks : NSObject

@property (nonatomic, assign, readonly) int ecCodewordsPerBlock;
@property (nonatomic, assign, readonly) int numBlocks;
@property (nonatomic, assign, readonly) int totalECCodewords;
@property (nonatomic, strong, readonly) NSArray *ecBlocks;

- (id)initWithEcCodewordsPerBlock:(int)ecCodewordsPerBlock ecBlocks:(ADSZXQRCodeECB *)ecBlocks;
- (id)initWithEcCodewordsPerBlock:(int)ecCodewordsPerBlock ecBlocks1:(ADSZXQRCodeECB *)ecBlocks1 ecBlocks2:(ADSZXQRCodeECB *)ecBlocks2;
+ (ADSZXQRCodeECBlocks *)ecBlocksWithEcCodewordsPerBlock:(int)ecCodewordsPerBlock ecBlocks:(ADSZXQRCodeECB *)ecBlocks;
+ (ADSZXQRCodeECBlocks *)ecBlocksWithEcCodewordsPerBlock:(int)ecCodewordsPerBlock ecBlocks1:(ADSZXQRCodeECB *)ecBlocks1 ecBlocks2:(ADSZXQRCodeECB *)ecBlocks2;

@end

/**
 * Encapsualtes the parameters for one error-correction block in one symbol version.
 * This includes the number of data codewords, and the number of times a block with these
 * parameters is used consecutively in the QR code version's format.
 */
@interface ADSZXQRCodeECB : NSObject

@property (nonatomic, assign, readonly) int count;
@property (nonatomic, assign, readonly) int dataCodewords;

- (id)initWithCount:(int)count dataCodewords:(int)dataCodewords;
+ (ADSZXQRCodeECB *)ecbWithCount:(int)count dataCodewords:(int)dataCodewords;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKStrength : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCStrength=^^?If@?@BddffdBB@?qfffffffffBB} */
    struct SKCStrength { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; boolx7; double x8; double x9; float x10; float x11; double x12; boolx13; boolx14; id x15; void*x16; long long x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; boolx27; boolx28; } *_mycaction;

}

+ (id)strengthBy:(double)arg1 duration:(double)arg2;
+ (id)strengthTo:(double)arg1 duration:(double)arg2;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
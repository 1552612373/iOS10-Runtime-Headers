/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHasher : NSCoder  {
    struct CC_SHA1state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[16]; int x9; } *_sha1Context;
}

@property struct CC_SHA1state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[16]; int x9; }* sha1Context;

+ (id)hashObject:(id)arg1;

- (struct CC_SHA1state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[16]; int x9; }*)sha1Context;
- (void)setSha1Context:(struct CC_SHA1state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[16]; int x9; }*)arg1;
- (id)finishHashing;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodePropertyListForKey:(id)arg1;
- (id)init;
- (int)decodeInt32ForKey:(id)arg1;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (long long)decodeInt64ForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)dealloc;
- (float)decodeFloatForKey:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (int)decodeIntForKey:(id)arg1;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (id)decodeDataObject;
- (void)encodeDataObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (long long)versionForClassName:(id)arg1;

@end
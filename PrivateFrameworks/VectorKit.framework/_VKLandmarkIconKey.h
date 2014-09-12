/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface _VKLandmarkIconKey : NSObject  {
    struct { 
        long long iconStyle; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconBadgeColor; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconGradientColor[2]; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconBadgeLightColor; 
        int iconBadgeLightBlendMode; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconGlyphColor; 
        long long iconGlyphStyle; 
        int iconGlyphBlendMode; 
        float iconHaloSize; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconHaloColor; 
        struct CGSize { 
            double width; 
            double height; 
        } iconDropShadowOffset; 
        float iconDropShadowSize; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } iconDropShadowColor; 
        float iconCornerRadius; 
        float iconBrightness; 
        float iconBevelAmount; 
        unsigned int iconSourceStyleAttributeKey; 
        unsigned int iconSourceStyleMultipoiAttributeKey; 
    } _style;
    NSString *_name;
    long long _size;
}


- (id)initWithName:(id)arg1 style:(struct { long long x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; struct Matrix<float, 4, 1> { float x_3_1_1[4]; } x3[2]; struct Matrix<float, 4, 1> { float x_4_1_1[4]; } x4; int x5; struct Matrix<float, 4, 1> { float x_6_1_1[4]; } x6; long long x7; int x8; float x9; struct Matrix<float, 4, 1> { float x_10_1_1[4]; } x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; float x12; struct Matrix<float, 4, 1> { float x_13_1_1[4]; } x13; float x14; float x15; float x16; unsigned int x17; unsigned int x18; }*)arg2 size:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id).cxx_construct;

@end
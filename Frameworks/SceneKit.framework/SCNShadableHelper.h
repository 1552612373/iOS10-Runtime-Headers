/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSDictionary, SCNProgram, NSArray;

@interface SCNShadableHelper : NSObject <NSSecureCoding> {
    NSDictionary *_uniformNameToType;
    id _owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}

@property(copy) NSDictionary * shaderModifiers;
@property(retain) SCNProgram * program;
@property(readonly) id owner;
@property(readonly) NSArray * shaderModifiersUniformNames;

+ (bool)supportsSecureCoding;

- (void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (bool)_bindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_didDecodeSCNShadableHelper:(id)arg1;
- (void)_customDecodingOfSCNShadableHelper:(id)arg1;
- (void)_customEncodingOfSCNShadableHelper:(id)arg1;
- (void)_startObservingProgramUniforms:(id)arg1;
- (void)_setC3DProgramDelegate;
- (void)_updateAllC3DProgramInputs;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram { }*)arg1 forSymbol:(id)arg2;
- (struct __C3DFXGLSLProgram { }*)_programFromPassAtIndex:(long long)arg1;
- (struct __C3DFXGLSLProfile { }*)_GLSLProfile;
- (void)_updateC3DProgramInputForSymbol:(id)arg1;
- (void)_setUniform:(id)arg1 withC3DValue:(struct __C3DValue { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; short x2; short x3; char *x4; long long x5; }*)arg2;
- (void)_startObservingUniformsOfC3DShaderModifiers:(id)arg1;
- (void)_kvoUpdateUniformNamed:(id)arg1 ofType:(short)arg2 immediate:(bool)arg3;
- (void)_startObservingProgram;
- (void)_setC3DProgramAndStartObservingUniforms;
- (void)_programDidChange:(id)arg1;
- (void)commonDestroy;
- (void)_stopObservingProgram;
- (void)_stopObservingUniforms;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(id)arg2;
- (id)shaderModifiersUniformNames;
- (void)setShaderModifiers:(id)arg1;
- (id)shaderModifiers;
- (id)program;
- (void)setProgram:(id)arg1;
- (void)ownerWillDie;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id)arg2;
- (void*)__CFObject;
- (id)owner;
- (bool)isOpaque;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
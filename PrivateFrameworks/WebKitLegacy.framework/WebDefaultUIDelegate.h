/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDefaultUIDelegate : NSObject  {
}

+ (id)sharedUIDelegate;

- (void)webViewSupportedOrientationsUpdated:(id)arg1;
- (void)webView:(id)arg1 didScrollDocumentInFrameView:(id)arg2;
- (void)webView:(id)arg1 didDrawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })webViewFrame:(id)arg1;
- (void)webView:(id)arg1 setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)webViewIsResizable:(id)arg1;
- (void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
- (id)webViewStatusText:(id)arg1;
- (void)webViewClose:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 userGesture:(bool)arg3;
- (id)webView:(id)arg1 generateReplacementFile:(id)arg2;
- (bool)webView:(id)arg1 shouldReplaceUploadFile:(id)arg2 usingGeneratedFilename:(id*)arg3;
- (void)webView:(id)arg1 makeFirstResponder:(id)arg2;
- (id)webViewFirstResponder:(id)arg1;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)webView:(id)arg1 printFrameView:(id)arg2;
- (void)webView:(id)arg1 setStatusText:(id)arg2;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 setResizable:(bool)arg2;
- (bool)webViewIsStatusBarVisible:(id)arg1;
- (void)webView:(id)arg1 setStatusBarVisible:(bool)arg2;
- (bool)webViewAreToolbarsVisible:(id)arg1;
- (void)webView:(id)arg1 setToolbarsVisible:(bool)arg2;
- (void)webViewShow:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 windowFeatures:(id)arg3;
- (void)webViewUnfocus:(id)arg1;
- (void)webViewFocus:(id)arg1;

@end
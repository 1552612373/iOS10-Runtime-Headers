/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIExploreTemplateElement, CLLocationManager, NSArray, UINavigationController, UISplitViewController, NSString, SKUIContentInsetScrollView, SKUIStorePageSectionsViewController;

@interface SKUIExploreDocumentViewController : SKUIViewController <CLLocationManagerDelegate, SKUIStackedBarDelegate, UINavigationControllerDelegate, UISplitViewControllerDelegate, SKUIDocumentViewController> {
    NSArray *_contentOffsets;
    SKUIContentInsetScrollView *_contentScrollView;
    SKUIExploreTemplateElement *_exploreTemplate;
    UINavigationController *_leftVC;
    CLLocationManager *_locationManager;
    UINavigationController *_navigationController;
    bool_nearMeEnabled;
    SKUIStorePageSectionsViewController *_rightVC;
    UISplitViewController *_splitVC;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void)documentDidUpdate:(id)arg1;
- (id)_leftPageComponentsAtIndex:(long long)arg1;
- (void)selectGenreListComponent:(id)arg1;
- (void)stackedBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)_rightVCColorScheme;
- (id)_rightPageComponents;
- (id)_newSectionsViewControllerAtIndex:(long long)arg1;
- (id)_pageComponentsAtIndex:(long long)arg1;
- (void)_getPageComponents:(id*)arg1 title:(id*)arg2 forViewControllerAtIndex:(long long)arg3;
- (id)_rootNavigationTitle;
- (void)_reloadSelectionForViewController:(id)arg1;
- (void)_reloadRightViewController;
- (void)_reloadLeftViewControllers;
- (void)_contentInsetDidChange:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (id)impressionableViewElements;
- (void)setClientContext:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_reloadData;
- (bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (id)contentScrollView;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;

@end
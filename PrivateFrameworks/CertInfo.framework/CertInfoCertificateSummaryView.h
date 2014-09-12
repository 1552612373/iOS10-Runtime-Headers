/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CertInfoCertificateHeaderCell, NSString, CertInfoCertificateSummaryDescriptionCell, NSDate, UITableView;

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    NSString *_trustTitle;
    NSString *_trustSubtitle;
    NSString *_purpose;
    NSDate *_expirationDate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _moreDetailsSelectedBlock;

    CertInfoCertificateHeaderCell *_headerCell;
    CertInfoCertificateSummaryDescriptionCell *_descriptionCell;
}

@property(readonly) UITableView * tableView;
@property(retain) NSString * trustTitle;
@property(retain) NSString * trustSubtitle;
@property(retain) NSString * purpose;
@property(retain) NSDate * expirationDate;
@property(retain) CertInfoCertificateHeaderCell * headerCell;
@property(retain) CertInfoCertificateSummaryDescriptionCell * descriptionCell;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)descriptionCell;
- (id)headerCell;
- (void)_configureCell:(id)arg1;
- (id)_cellForReuseIdentifier:(id)arg1;
- (id)purpose;
- (void)setDescriptionCell:(id)arg1;
- (void)setHeaderCell:(id)arg1;
- (void)setMoreDetailsSelectedBlock:(id)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (id)trustSubtitle;
- (void)setTrustTitle:(id)arg1;
- (id)trustTitle;
- (void)setPurpose:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (id)expirationDate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
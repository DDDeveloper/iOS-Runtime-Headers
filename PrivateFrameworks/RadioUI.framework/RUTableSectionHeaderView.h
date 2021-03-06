/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSAttributedString, UILabel, _UIBackdropView;

@interface RUTableSectionHeaderView : UITableViewHeaderFooterView {
    float _backdropTransitionWeighting;
    _UIBackdropView *_backdropView;
    UILabel *_titleLabel;
}

@property(copy) NSAttributedString * attributedTitle;
@property float backdropTransitionWeighting;

- (void).cxx_destruct;
- (id)attributedTitle;
- (float)backdropTransitionWeighting;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackdropTransitionWeighting:(float)arg1;
- (void)setTableViewStyle:(int)arg1;

@end

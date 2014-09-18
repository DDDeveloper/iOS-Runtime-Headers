/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIView;

@interface CKTranscriptManagementView : UIView {
    UIView *_attachmentsCollectionView;
    UIView *_mapView;
    UIView *_nameField;
    double _navigationBarTopInset;
    double _scrollYOffset;
    bool_suppressMapMovement;
}

@property(retain) UIView * attachmentsCollectionView;
@property(retain) UIView * mapView;
@property(retain) UIView * nameField;
@property double navigationBarTopInset;
@property double scrollYOffset;
@property bool suppressMapMovement;

- (id)attachmentsCollectionView;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mapView;
- (id)nameField;
- (double)navigationBarTopInset;
- (double)scrollYOffset;
- (void)setAttachmentsCollectionView:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setNameField:(id)arg1;
- (void)setNavigationBarTopInset:(double)arg1;
- (void)setScrollYOffset:(double)arg1;
- (void)setSuppressMapMovement:(bool)arg1;
- (bool)suppressMapMovement;

@end
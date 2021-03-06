/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImage, UIImageView;

@interface SKUIIPhoneSlideshowCell : UICollectionViewCell {
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    UIImageView *_imageView;
    UIImageView *_playIcon;
}

@property(retain) UIImage * image;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageFrame;
@property struct CGSize { float x1; float x2; } imageSize;
@property(getter=isVideo) BOOL video;

- (void).cxx_destruct;
- (id)image;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrame;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isVideo;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVideo:(BOOL)arg1;

@end

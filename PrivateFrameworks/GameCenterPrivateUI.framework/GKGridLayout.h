/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKCollectionViewDataSource, GKCollectionViewLayoutAttributes, GKDataSourceMetrics, GKSectionMetrics, NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSMutableSet, NSPointerArray, NSSet;

@interface GKGridLayout : UICollectionViewLayout {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    GKCollectionViewLayoutAttributes *_clipViewAttributes;
    NSArray *_currentUpdateItems;
    GKCollectionViewDataSource *_dataSourceForUpdate;
    GKDataSourceMetrics *_dataSourceMetrics;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    BOOL _displayClipView;
    BOOL _displayingOverlay;
    float _hiddenSearchBarOffset;
    BOOL _hideAboveSegmentOnAppear;
    BOOL _hideSearchBarOnAppear;
    NSIndexPath *_indexPathOfTouchedShowMore;
    NSMutableDictionary *_indexPathToDecoration;
    NSMutableDictionary *_indexPathToItem;
    NSMutableDictionary *_indexPathToMetrics;
    NSMutableDictionary *_indexPathToSupplementary;
    unsigned long long _invalidationFlags;
    NSMutableDictionary *_keyToMetricData;
    NSMutableSet *_knownSupplementaryKinds;
    NSMutableArray *_laidOutAttributes;
    } _laidOutContentSize;
    NSMutableOrderedSet *_laidOutPinnableAttributes;
    unsigned int _landscapeInterleavedSectionsCount;
    float _leftLayoutGuideOffset;
    int _metricsInvalidationCount;
    } _minimumLaidOutContentSize;
    BOOL _movedItemsInUpdateCarrySections;
    BOOL _noMoreShowMore;
    NSMutableDictionary *_oldIndexPathToDecoration;
    NSMutableDictionary *_oldIndexPathToItem;
    NSMutableDictionary *_oldIndexPathToSupplementary;
    } _oldLaidOutContentSize;
    NSMutableDictionary *_oldSectionToMetricKeys;
    unsigned int _portraitInterleavedSectionsCount;
    NSMutableSet *_revealedIndexPaths;
    float _rightLayoutGuideOffset;
    NSPointerArray *_sectionToMetricData;
    NSPointerArray *_sectionToPresentationData;
    NSMutableIndexSet *_sectionsWithPinnedHeaders;
    float _segmentedBoxY;
    float _segmentedHeaderPinningOffset;
    BOOL _showPlaceholder;
    unsigned int _updateType;
    NSSet *_visibleIndexPathsFilter;
}

@property(retain) GKCollectionViewLayoutAttributes * clipViewAttributes;
@property(retain) NSArray * currentUpdateItems;
@property(retain) GKCollectionViewDataSource * dataSourceForUpdate;
@property(retain) GKDataSourceMetrics * dataSourceMetrics;
@property(retain) GKSectionMetrics * defaultSectionMetricsInternal;
@property BOOL displayClipView;
@property BOOL displayingOverlay;
@property float hiddenSearchBarOffset;
@property BOOL hideAboveSegmentOnAppear;
@property BOOL hideSearchBarOnAppear;
@property(retain) NSIndexPath * indexPathOfTouchedShowMore;
@property(retain) NSMutableDictionary * indexPathToDecoration;
@property(retain) NSMutableDictionary * indexPathToItem;
@property(retain) NSMutableDictionary * indexPathToMetrics;
@property(retain) NSMutableDictionary * indexPathToSupplementary;
@property unsigned long long invalidationFlags;
@property(retain) NSMutableDictionary * keyToMetricData;
@property(retain) NSMutableSet * knownSupplementaryKinds;
@property(retain) NSMutableArray * laidOutAttributes;
@property struct CGSize { float x1; float x2; } laidOutContentSize;
@property(retain) NSMutableOrderedSet * laidOutPinnableAttributes;
@property unsigned int landscapeInterleavedSectionsCount;
@property float leftLayoutGuideOffset;
@property int metricsInvalidationCount;
@property struct CGSize { float x1; float x2; } minimumLaidOutContentSize;
@property BOOL movedItemsInUpdateCarrySections;
@property BOOL noMoreShowMore;
@property(retain) NSMutableDictionary * oldIndexPathToDecoration;
@property(retain) NSMutableDictionary * oldIndexPathToItem;
@property(retain) NSMutableDictionary * oldIndexPathToSupplementary;
@property struct CGSize { float x1; float x2; } oldLaidOutContentSize;
@property(retain) NSMutableDictionary * oldSectionToMetricKeys;
@property unsigned int portraitInterleavedSectionsCount;
@property(retain) NSMutableSet * revealedIndexPaths;
@property float rightLayoutGuideOffset;
@property(retain) NSPointerArray * sectionToMetricData;
@property(retain) NSPointerArray * sectionToPresentationData;
@property(retain) NSMutableIndexSet * sectionsWithPinnedHeaders;
@property float segmentedBoxY;
@property float segmentedHeaderPinningOffset;
@property BOOL showPlaceholder;
@property unsigned int updateType;
@property NSSet * visibleIndexPathsFilter;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned int)arg3;
- (BOOL)_areWePortrait;
- (id)_existingPresentationDataForSection:(int)arg1;
- (void)_filterPinnedAttributes;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (unsigned int)_prepareItemLayoutForSection:(int)arg1;
- (int)_prepareOverlayLayoutForSection:(int)arg1 offset:(int)arg2;
- (void)_prepareSegmentedBoxLayoutWithOffset:(int)arg1;
- (int)_prepareSupplementaryLayoutForSection:(int)arg1 atLocation:(unsigned int)arg2 offset:(int)arg3 globalOffset:(int*)arg4;
- (void)_resetState;
- (struct CGSize { float x1; float x2; })_sizeAdjustedForTabBarSettingsBasedOnSize:(struct CGSize { float x1; float x2; })arg1;
- (float)applyBottomPinningToAttributes:(id)arg1 minY:(float)arg2 maxY:(float)arg3;
- (float)applyTopPinningToAttributes:(id)arg1 minY:(float)arg2 maxY:(float)arg3;
- (id)attributesForSupplementaryIndexPath:(id)arg1;
- (void)calculateCollectionViewContentSize;
- (float)calculatedBottomPaddingForSection:(int)arg1;
- (id)clipViewAttributes;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (unsigned int)currentMaxVisibleItemCountForSection:(int)arg1;
- (id)currentUpdateItems;
- (id)dataSourceForUpdate;
- (id)dataSourceMetrics;
- (void)dealloc;
- (id)defaultSectionMetricsInternal;
- (void)disableClipView;
- (BOOL)displayClipView;
- (BOOL)displayingOverlay;
- (void)enableClipView;
- (void)enumerateSectionsIndexesOverlappingYOffset:(float)arg1 block:(id)arg2;
- (unsigned int)filteredTotalItemCountForSection:(int)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForSlidingAwayItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeGlobalPresentationDataWithSectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)finalizePinnedAttributes:(id)arg1 forSection:(int)arg2 footer:(BOOL)arg3;
- (id)firstVisibleIndexAtOrAfterItem:(int)arg1 itemCount:(int)arg2 inSection:(int)arg3;
- (void)forceFullInvalidate;
- (void)fullyRebuildLayout;
- (float)hiddenSearchBarOffset;
- (BOOL)hideAboveSegmentOnAppear;
- (BOOL)hideSearchBarOnAppear;
- (int)indexOfSupplementaryMetricsOfKind:(id)arg1 inList:(id)arg2;
- (id)indexPathOfTouchedShowMore;
- (id)indexPathToDecoration;
- (id)indexPathToItem;
- (id)indexPathToMetrics;
- (id)indexPathToSupplementary;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForSlidingInItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned long long)invalidationFlags;
- (id)keyToMetricData;
- (id)knownSupplementaryKinds;
- (id)laidOutAttributes;
- (struct CGSize { float x1; float x2; })laidOutContentSize;
- (id)laidOutPinnableAttributes;
- (unsigned int)landscapeInterleavedSectionsCount;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (float)layoutBottomPinningAttributes:(id)arg1 minY:(float)arg2 maxY:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutBounds;
- (float)layoutTopPinningAttributes:(id)arg1 minY:(float)arg2 maxY:(float)arg3;
- (float)leftLayoutGuideOffset;
- (id)metricDataForKey:(id)arg1;
- (id)metricDataForSection:(int)arg1;
- (id)metricsForSection:(int)arg1;
- (int)metricsInvalidationCount;
- (struct CGSize { float x1; float x2; })minimumLaidOutContentSize;
- (BOOL)movedItemsInUpdateCarrySections;
- (BOOL)noMoreShowMore;
- (id)oldIndexPathToDecoration;
- (id)oldIndexPathToItem;
- (id)oldIndexPathToSupplementary;
- (struct CGSize { float x1; float x2; })oldLaidOutContentSize;
- (id)oldSectionToMetricKeys;
- (unsigned int)portraitInterleavedSectionsCount;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForMovingItemsCarryingSections;
- (void)prepareForUpdate:(unsigned int)arg1 inDataSource:(id)arg2;
- (void)prepareLayout;
- (id)presentationDataForSection:(int)arg1;
- (void)refreshMetrics;
- (id)revealMoreForSectionIndex:(int)arg1 revealCount:(unsigned int)arg2 andDeleteItemCount:(unsigned int)arg3;
- (id)revealMoreForSectionIndex:(int)arg1;
- (id)revealedIndexPaths;
- (float)rightLayoutGuideOffset;
- (float)scale;
- (int)searchResultsCount;
- (id)sectionToMetricData;
- (id)sectionToPresentationData;
- (unsigned int)sectionsPerRow;
- (id)sectionsWithPinnedHeaders;
- (float)segmentedBoxY;
- (float)segmentedHeaderPinningOffset;
- (void)setClipViewAttributes:(id)arg1;
- (void)setCurrentUpdateItems:(id)arg1;
- (void)setDataSourceForUpdate:(id)arg1;
- (void)setDataSourceMetrics:(id)arg1;
- (void)setDefaultSectionMetricsInternal:(id)arg1;
- (void)setDisplayClipView:(BOOL)arg1;
- (void)setDisplayingOverlay:(BOOL)arg1;
- (void)setHiddenSearchBarOffset:(float)arg1;
- (void)setHideAboveSegmentOnAppear:(BOOL)arg1;
- (void)setHideSearchBarOnAppear:(BOOL)arg1;
- (void)setIndexPathOfTouchedShowMore:(id)arg1;
- (void)setIndexPathToDecoration:(id)arg1;
- (void)setIndexPathToItem:(id)arg1;
- (void)setIndexPathToMetrics:(id)arg1;
- (void)setIndexPathToSupplementary:(id)arg1;
- (void)setInvalidationFlags:(unsigned long long)arg1;
- (void)setKeyToMetricData:(id)arg1;
- (void)setKnownSupplementaryKinds:(id)arg1;
- (void)setLaidOutAttributes:(id)arg1;
- (void)setLaidOutContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLaidOutPinnableAttributes:(id)arg1;
- (void)setLandscapeInterleavedSectionsCount:(unsigned int)arg1;
- (void)setLeftLayoutGuideOffset:(float)arg1;
- (void)setMetricData:(id)arg1 forSection:(int)arg2;
- (void)setMetricsInvalidationCount:(int)arg1;
- (void)setMinimumLaidOutContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMovedItemsInUpdateCarrySections:(BOOL)arg1;
- (void)setNoMoreShowMore:(BOOL)arg1;
- (void)setOldIndexPathToDecoration:(id)arg1;
- (void)setOldIndexPathToItem:(id)arg1;
- (void)setOldIndexPathToSupplementary:(id)arg1;
- (void)setOldLaidOutContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOldSectionToMetricKeys:(id)arg1;
- (void)setPortraitInterleavedSectionsCount:(unsigned int)arg1;
- (void)setRevealedIndexPaths:(id)arg1;
- (void)setRightLayoutGuideOffset:(float)arg1;
- (void)setSectionToMetricData:(id)arg1;
- (void)setSectionToPresentationData:(id)arg1;
- (void)setSectionsWithPinnedHeaders:(id)arg1;
- (void)setSegmentedBoxY:(float)arg1;
- (void)setSegmentedHeaderPinningOffset:(float)arg1;
- (void)setShowPlaceholder:(BOOL)arg1;
- (void)setUpdateType:(unsigned int)arg1;
- (void)setVisibleIndexPathsFilter:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldSlideInSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)shouldSlideOutSupplementaryElementOfKind:(id)arg1 forUpdateItem:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;
- (BOOL)showPlaceholder;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1 withScrollingVelocity:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinnableAreas;
- (void)updatePlaceholderVisibility;
- (void)updatePresentationDataForLastInterleavedSections;
- (void)updatePresentationDataInSection:(int)arg1 withAttributes:(id)arg2 supplementaryLocation:(unsigned int)arg3;
- (unsigned int)updateType;
- (id)visibleIndexPathsFilter;
- (float)yOffsetForSection:(int)arg1;
- (float)yOffsetForSlidingUpdate;

@end

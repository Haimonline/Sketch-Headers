//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSLayer, NSArray;
@protocol _TtP6Sketch27MSLayerMeasurementPresenter_;

@interface _TtC6Sketch27MSLayerMeasurementViewModel : NSObject
{
    // Error parsing type: , name: presenter
    // Error parsing type: , name: wantMeasurements
    // Error parsing type: , name: usingTool
    // Error parsing type: , name: selectedLayers
    // Error parsing type: , name: hoveredLayer
    // Error parsing type: , name: hoveredGuides
    // Error parsing type: , name: measurementOptions
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSArray *targetLines;
@property(nonatomic, readonly) NSArray *targetLayers;
@property(nonatomic, readonly) struct CGRect sourceRect;
@property(nonatomic, readonly) NSArray *sourceLayers;
@property(nonatomic, readonly) BOOL scenarioIsValid;
- (void)refreshIfNecessary:(id)arg1;
- (void)clear;
@property(nonatomic) unsigned long long measurementOptions; // @synthesize measurementOptions;
@property(nonatomic, copy) NSArray *hoveredGuides; // @synthesize hoveredGuides;
@property(nonatomic, retain) MSLayer *hoveredLayer; // @synthesize hoveredLayer;
@property(nonatomic, retain) id selectedLayers; // @synthesize selectedLayers;
@property(nonatomic) BOOL usingTool; // @synthesize usingTool;
@property(nonatomic) BOOL wantMeasurements; // @synthesize wantMeasurements;
@property(nonatomic) __weak id <_TtP6Sketch27MSLayerMeasurementPresenter_> presenter; // @synthesize presenter;

@end


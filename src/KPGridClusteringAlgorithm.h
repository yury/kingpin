//
// Copyright 2012 Bryan Bonczek
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import "KPClusteringAlgorithm.h"

@class KPAnnotation,
       KPAnnotationTree;


typedef enum {
    KPGridClusteringAlgorithmStrategyBasic = 0,
    KPGridClusteringAlgorithmStrategyTwoPhase,
} KPGridClusteringAlgorithmStrategy;


@interface KPGridClusteringAlgorithm : NSObject <KPClusteringAlgorithm>

@property (assign, nonatomic) CGSize gridSize;
@property (assign, nonatomic) KPGridClusteringAlgorithmStrategy clusteringStrategy;

// only used when using KPGridClusteringAlgorithmStrategyTwoPhase
@property (assign, nonatomic) CGSize annotationSize;
@property (assign, nonatomic) CGPoint annotationCenterOffset;

- (MKMapSize)mapCellSizeForGridSize:(CGSize)gridSize inMapView:(MKMapView *)mapView;

@end

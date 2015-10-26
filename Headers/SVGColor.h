#import "NSObject.h"

@interface SVGColor : NSObject
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

+ (id)colorWithSVGString:(id)arg1;
+ (id)namedColor:(id)arg1;
+ (id)rgbColorRed:(long long)arg1 green:(long long)arg2 blue:(long long)arg3;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithNSColor:(id)arg1;
+ (id)availableRGBColorSpaces;
+ (id)staticColorDictionary;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double red; // @synthesize red=_red;
- (id)stringValueWithAlpha:(BOOL)arg1 alphaMultiplication:(double)arg2;
- (id)stringValueWithAlpha:(BOOL)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)svgRepresentation;
- (id)hexValue;

@end

#import <Cocoa/Cocoa.h>

@class Tire;
@class Engine;

@interface Car : NSObject
{
    Tire *tires[4];
    Engine *engine;
}

- (void) setEngine: (Engine *) newEngine;

- (Engine *) engine;


- (void) setTire: (Tire *) tire
         atIndex: (int) index;

- (Tire *) tireAtIndex: (int) index;

- (void) print;

@end // Car

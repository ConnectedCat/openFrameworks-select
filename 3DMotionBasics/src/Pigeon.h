//
//  Pigeon.hpp
//  3DTransparency
//
//  Created by Maxim Safioulline on 3/5/16.
//
//

#ifndef Pigeon_h
#define Pigeon_h

#include "ofMain.h"

class Pigeon {
public:
    void setup(float _radius, ofColor _color, ofVec3f _pos);
    void update();
    void display();
    
    void fly();
    void walk();
    void setState();
    
    float radius;
    float speed;
    ofColor color;
    
    ofVec3f position;
    ofVec3f velocity;
    
    ofIcoSpherePrimitive icoSphere;
    
    string state = "walking";
    
    Pigeon();

private:
};

#endif /* Pigeon_h */

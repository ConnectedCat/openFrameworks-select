//
//  Pigeon.hpp
//  pigeonsAnimated
//
//  Created by Maxim Safioulline on 3/8/16.
//
//

#ifndef Pigeon_hpp
#define Pigeon_hpp

#include "ofMain.h"
#include "Animation.hpp"

class Pigeon {
public:
    void setup(ofVec3f _pos);
    void update();
    void display();
    
    void fly();
    void walk();
    void setState();
    
    float speed = ofRandom(2.0, 10.0);
    
    ofVec3f position;
    ofVec3f velocity;
    
    Animation animation;
    
    string state = "walking";
    
    Pigeon();
    
private:
};


#endif /* Pigeon_hpp */

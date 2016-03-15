//
//  Pigeon.cpp
//  pigeonsAnimated
//
//  Created by Maxim Safioulline on 3/8/16.
//
//

#include "Pigeon.hpp"

Pigeon::Pigeon(){
}

void Pigeon::setup(ofVec3f _pos){
    position = _pos;
    speed = ofRandom(2.0, 10.0);
    velocity.set(speed, 0, 0);
    
    animation.setup("images/stand/pigeonstand_", "png", 125);
}

void Pigeon::display(){
    if(velocity.x > 0){
        animation.display(position.x, position.y, position.z, false);
    }
    else{
        animation.display(position.x, position.y, position.z, true);
    }
}

void Pigeon::update(){
    if(position.x < animation.getWidth()/2 || position.x > ofGetWidth()-animation.getWidth()/2){
        velocity.x *= -1;
    }
    if(position.y < animation.getHeight()/2){
        velocity.y *= -1;
    }
    if(position.y > ofGetHeight()-animation.getHeight()/2){
        walk();
    }
    if(position.z > 0 || position.z < -1000){
        velocity.z *= -1;
    }
    
    position += velocity;
    
    cout << "Velocity Y: " << velocity.y << endl;
}

void Pigeon::fly(){
    velocity.set(speed, -speed-10, -speed);
    animation.setup("images/fly/pigeon-flap_", "jpg", 14);
}

void Pigeon::walk(){
    velocity.set(speed, 0, 0);
    animation.setup("images/stand/pigeonstand_", "png", 125);
}

void Pigeon::setState(){
}
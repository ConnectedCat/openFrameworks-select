//
//  Pigeon.cpp
//  3DTransparency
//
//  Created by Maxim Safioulline on 3/5/16.
//
//

#include "Pigeon.h"

Pigeon::Pigeon(){
}

void Pigeon::setup(float _radius, ofColor _color, ofVec3f _pos){
    radius = _radius;
    color = _color;
    position = _pos;
    
    icoSphere.setRadius(radius);
    
    speed = ofRandom(2.0, 15.0);
    velocity.set(speed, 0, -speed);
}

void Pigeon::display(){
    ofSetColor(color);
    ofFill();
    icoSphere.draw();
    ofNoFill();
    ofSetColor(0, 0, 0);
    icoSphere.setScale(1.01f);
    icoSphere.drawWireframe();
    icoSphere.setScale(1.f);
}

void Pigeon::update(){
    if(position.x <= radius || position.x >= ofGetWidth()-radius){
        velocity.x *= -1;
    }
    if(position.y <= radius || position.y >= ofGetHeight()-radius){
        velocity.y *= -1;
    }
    if(position.z >= -radius || position.z <= radius-1000){
        velocity.z *= -1;
    }

    position += velocity;
    icoSphere.setPosition(position.x, position.y, position.z);
}

void Pigeon::fly(){
    velocity.set(speed, speed, -speed);
}

void Pigeon::walk(){
    velocity.set(speed, 0, -speed);
}

void Pigeon::setState(){
}
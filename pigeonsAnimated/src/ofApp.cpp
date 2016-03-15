#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(20);
    for(int i=0; i<PNUM; i++){
        positions[i].set(ofRandom(200, ofGetWidth()-200), ofGetHeight()-63, ofRandom(-900, -100));
        myPigeons[i].setup(positions[i]);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(155);
    for(int i=0; i<PNUM; i++){
        myPigeons[i].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    ofDrawLine(0, 0, 0, 0, 0, -10000);
    ofDrawLine(ofGetWidth(), 0, 0, ofGetWidth(), 0, -10000);
    ofDrawLine(ofGetWidth(), ofGetHeight(), 0, ofGetWidth(), ofGetHeight(), -10000);
    ofDrawLine(0, ofGetHeight(), 0, 0, ofGetHeight(), -10000);
    ofSetColor(126, 95, 95);
    //ofFill();
    //ofDrawRectangle(0, 0, -1000, ofGetWidth(), ofGetHeight());
    //ofNoFill();
    
    for(int i=0; i<PNUM; i++){
        myPigeons[i].display();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == 'f'){
        for(int i=0; i<PNUM; i++){
            myPigeons[i].fly();
        }
    }
    else if(key == 'w'){
        for(int i=0; i<PNUM; i++){
            myPigeons[i].walk();
        }
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

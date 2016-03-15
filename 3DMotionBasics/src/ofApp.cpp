#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i=0; i<PNUM; i++){
        myPositions[i].set(ofRandom(rad*2, ofGetWidth()-rad*2), ofGetHeight()-rad, ofRandom(-900, -100));
        myPigeons[i].setup(rad, ofColor(ofRandom(255), ofRandom(255), ofRandom(255)), myPositions[i]);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<PNUM; i++){
        myPigeons[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    ofSetColor(0, 0, 0);
    ofDrawLine(0, 0, 0, 0, 0, -1000);
    ofDrawLine(ofGetWidth(), 0, 0, ofGetWidth(), 0, -1000);
    ofDrawLine(ofGetWidth(), ofGetHeight(), 0, ofGetWidth(), ofGetHeight(), -1000);
    ofDrawLine(0, ofGetHeight(), 0, 0, ofGetHeight(), -1000);
    ofSetColor(126);
    ofFill();
    ofDrawRectangle(0, 0, -1000, ofGetWidth(), ofGetHeight());
    
    
    for(int i=0; i<PNUM; i++){
        myPigeons[i].display();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case '1':
            myPigeons[int(ofRandom(0, PNUM))].fly();
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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

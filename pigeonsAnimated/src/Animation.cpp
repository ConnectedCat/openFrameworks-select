//
//  Animation.cpp
//  pigeonsAnimated
//
//  Created by Maxim Safioulline on 3/8/16.
//
//

#include "Animation.hpp"

Animation::Animation(){
}

void Animation::setup(string _imagePrefix, string _imageType, int _count){
    imageCount = _count;
    images.clear();
    for(int i=0; i < imageCount; i++){
        string filename = _imagePrefix + padded(ofToString(i), 4) + "."+_imageType;
        ofImage tempImage;
        tempImage.load(filename);
        tempImage.setImageType(OF_IMAGE_COLOR_ALPHA);
        images.push_back(tempImage);
    }
}

void Animation::update(){
}

void Animation::display(float _xpos, float _ypos, float _zpos, bool _orientaton){
    frame = (frame+1)%imageCount;
    images[frame].setAnchorPercent(0.5, 0.5);
    if(_orientaton){
        images[frame].mirror(false, _orientaton);
    }
    images[frame].draw(_xpos, _ypos, _zpos);
}

int Animation::getWidth(){
    return images[0].getWidth();
}

int Animation::getHeight(){
    return images[0].getHeight();
}


//private methods
string Animation::padded(string _original, int _spacesTotal){
    string result = _original;
    int addThose = _spacesTotal - result.length();
    for (int i=0; i<addThose; i++) {
        result = "0"+result;
    }
    return result;
}
//
//  Animation.cpp
//  gifAnimation
//
//  Created by Maxim Safioulline on 3/6/16.
//
//

#include "Animation.hpp"

Animation::Animation(){
}

void Animation::setup(string _imagePrefix, string _imageType, int _count){
    imageCount = _count;
    for(int i=0; i < imageCount; i++){
        string filename = _imagePrefix + padded(ofToString(i), 4) + "."+_imageType;
        cout << filename << endl;
        ofImage tempImage;
        tempImage.load(filename);
        tempImage.setImageType(OF_IMAGE_COLOR_ALPHA);
        images.push_back(tempImage);
    }
}

void Animation::update(){
}

void Animation::display(float _xpos, float _ypos){
    frame = (frame+1)%imageCount;
    images[frame].draw(_xpos, _ypos);
}

int Animation::getWidth(){
    return images[0].getWidth();
}

string Animation::padded(string _original, int _spacesTotal){
    string result = _original;
    int addThose = _spacesTotal - result.length();
    for (int i=0; i<addThose; i++) {
        result = "0"+result;
    }
    return result;
}
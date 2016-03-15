//
//  Animation.hpp
//  gifAnimation
//
//  Created by Maxim Safioulline on 3/6/16.
//
//

#ifndef Animation_hpp
#define Animation_hpp

#include "ofMain.h"

class Animation{
public:
    void setup(string _imagePrefix, string _imageType, int _count);
    void update();
    void display(float _xpos, float _ypos);
    int getWidth();
    
    vector <ofImage> images;
    int frameRate;
    
    Animation();
    
private:
    int imageCount;
    int frame;
    
    string padded(string _original, int _spacesTotal);
};

#endif /* Animation_hpp */

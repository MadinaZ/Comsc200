//
//  LandTractClass.h
//  AS06
//
//  Created by Madina Sadirmekova on 3/16/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef LandTractClass_h
#define LandTractClass_h
#include <iostream>
#include "FeetInches.h"

class FeetInches;

class LandTract{
private:
    FeetInches length;
    FeetInches width;
    FeetInches area;
public:

    void setLength(){
        cin >> length;
    }

    void setWidth(){
        cin >> width;
    }

    void getLength() const{
        cout << length;
    }

    void getWidth() const{
        cout << width;
    }

    //get calculated area function
    FeetInches getArea()
    {
         area = double(length.multiply( width));
        return area;
    }
    
};
#endif

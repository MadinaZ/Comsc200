//
//  main.cpp
//  1C
//
//  Created by Madina Sadirmekova on 2/2/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
    double wid, len;
    Rectangle box;
    
    cout<<"This program will calculate the area of a rectangle\n";
    cout<<"What is the length? ";
    cin>>len;
    cout<<"What is its width? ";
    cin>>wid;
    
    box.setWidth(wid);
    box.setLength(len);
    
    cout<<"Here is the rectangle's data:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
    return 0;
}

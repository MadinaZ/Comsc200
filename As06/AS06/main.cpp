//
//  main.cpp
//  AS06
//
//  Created by Madina Sadirmekova on 3/15/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
using namespace std;
#include"FeetInches.h"
#include"LandTractClass.h"

int main() {
    char ch;
    LandTract tract1, tract2;

    while(ch != 'q')
    {
        cout<<"----LandTract Class Test Menu----\n";
        cout<<"     m - menu\n";
        cout<<"     n - new LandTract\n";
        cout<<"     d - display the LandTract attributes\n";
        cout<<"     q - Quit\n";
        cout<<"     Enter your choice: ";
        cin>>ch;
        if(ch == 'm')
        {
            cout<<"     m - menu\n";
            cout<<"     n - new LandTract\n";
            cout<<"     d - display the LandTract attributes\n";
            cout<<"     q - Quit\n";
        }
        else if(ch == 'n')
        {
            cout<<"Enter Tract Width in Feet, then Inches: \n";
            tract1.setWidth();
            cout<<"Enter Tract Length in Feet, then Inches: \n";
            tract1.setLength();
            cout<<endl;
            cout<<"Enter Tract Width in Feet, then Inches: \n";
            tract2.setWidth();
            cout<<"Enter Tract Length in Feet, then Inches: \n";
            tract2.setLength();
        }
        else if(ch == 'd')
        {
            cout<<"Tract1\n";
            cout<<"the width is ";
            tract1.getWidth();
            cout<<"\nthe length is ";
            tract1.getLength();
            cout<<"\n\nTract2\n";
            cout<<"the width is ";
            tract2.getWidth();
            cout<<"\nthe length is ";
            tract2.getLength();
            cout<<"\nthe area for tract1: "<<tract1.getArea()<<endl;
            cout<<"the area for tract2: "<<tract2.getArea()<<endl;
            if(tract1.getArea() == tract2.getArea())
                cout<<"The area of tract1 and tract2 is the same\n";
        }
        else
            break;
    }
    return 0;
}


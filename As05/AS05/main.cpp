//
//  main.cpp
//  AS05
//
//  Created by Madina Sadirmekova on 3/7/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

class BasicShape
{
private:
    double area;
public:

    double getArea()
    {
        return calcArea();
    }
    virtual double calcArea() const = 0;
};

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
    long x, y, length, width;
    double rad;

    cout << "Demonstrating a Circle"
         << "\nEnter the Circle's x, y center coord: ";
    cin >> x >> y;
    
    cout << "Enter the radius: ";
    cin >> rad;

    Circle c(x,y,rad);
    cout << "The center is center at ( " << x << ", " << y << " ) with the radius of " << rad
         << "\nThe area of the circle is " << c.getArea() << ".";

    cout << "\n\nDemonstrating a Rectangle"
         << "\nEnter the Rectangle's width and length: ";
    cin >> width >> length;

    Rectangle r(width, length);
    cout << "The width is " << width << " and the length is " << length
         << "\nThe area of the rectangle is " << r.getArea() << ".\n";
}


//
//  Circle.h
//  AS05
//
//  Created by Madina Sadirmekova on 3/7/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Circle_h
#define Circle_h

class Circle : public BasicShape
{
private:
    long int centerX, centerY;
    double radius;
public:
    Circle(long int x, long int y, double rad) : BasicShape()//constructor
    {
        centerX = x;
        centerY = y;
        radius = rad;
    }
    long int getCenterX()
    {
        return centerX;
    }
    
    long int getCenterY()
    {
        return centerY;

    }
    
    virtual double calcArea() const
    {
        double area = 3.14159*radius*radius;
        return area;
    }
};
#endif /* Circle_h */

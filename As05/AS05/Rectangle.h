//
//  Rectangle.h
//  AS05
//
//  Created by Madina Sadirmekova on 3/7/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

class Rectangle : public BasicShape
{
private:
    long int width, length;
public:
    Rectangle(long int wid, long int len) : BasicShape()//constructor
    {
        width = wid;
        length = len;
    }
    
    long int getWidth()
    {
        return width;
    }
    
    long int getLength()
    {
        return length;
    }
    
    virtual double calcArea() const
    {
        double area = length * width;
        return area;
    }

};

#endif /* Rectangle_h */

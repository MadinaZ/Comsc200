//
//  Essay.h
//  As04
//
//  Created by Madina Sadirmekova on 3/2/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Essay_h
#define Essay_h
#include "GradedActivity.h"

class Essay : public GradedActivity //Derived Class
{
private:
    int grammar;
    int spelling;
    int length;
    int content;

public:
    Essay() //Default constructor
    {
        grammar = 0;
        spelling  = 0;
        length = 0;
        content = 0;
    }
    
    Essay(int grammar_, int spelling_, int length_, int content_)
    {
        grammar = grammar_;
        spelling = spelling_;
        length = length_;
        content = content_;
    }
    
    void set(int grammar_, int spelling_, int length_, int content_)
    {
        grammar = grammar_;
        spelling = spelling_;
        length = length_;
        content = content_;
        int total;
        total = grammar + spelling + length + content;
        setScore(total);
    }
    
    int getGrammar() const
    { return grammar;}
    int getSpelling() const
    { return spelling;}
    int getLength() const
    { return length;}
    int getContent() const
    { return content;}
    
};


#endif /* Essay_h */

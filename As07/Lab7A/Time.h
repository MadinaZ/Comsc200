//
//  Time.h
//  As07
//
//  Created by Madina Sadirmekova on 3/23/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Time_h
#define Time_h

class Time
{
protected:
    int hour;
    int min;
    int sec;
public:
    Time(int h, int m, int s)
        { hour = h; min = m; sec = s; }

    int getHour()
        { return hour; }

    int getMin()
        { return min; }

    int getSec()
        { return sec; }
};

#endif /* Time_h */

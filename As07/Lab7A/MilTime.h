//
//  MillTime.h
//  As07
//
//  Created by Madina Sadirmekova on 3/23/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef MillTime_h
#define MillTime_h
#include "Time.h"

// Declaration of the MilTime class

class MilTime : public Time
{
private:
    int milHours;
    int milSeconds;
public:
    class BadHour
    {
    private:
        int hour;
    public:
        BadHour(){hour = 0;}
        BadHour(int num){hour = num;}
        void get(){
            std::cout<<"Error: "<<hour<<" is an invalid value for the MilTime's Hours.\n";
        }
    };

    class BadSeconds
    {
    private:
        int sec;
    public:
        BadSeconds(){sec = 0;}
        BadSeconds(int num){sec = num;}
        void get(){
            std::cout<<"Error: "<<sec<<" is an invalid value for the MilTime's Seconds.\n";
        }
    };

    MilTime(int h = 0, int s = 0) : Time(0, 0, s)
    {
        if (h < 0 || h > 2359)
        {
            std::cout << "Hours must be in the range 0 - 2359.\n";
            milHours = 0;
            milSeconds = 0;
        }
        else if (s < 0 || s > 59)
        {
            std::cout << "Seconds must be in the range 0 - 59.\n";
            milSeconds = 0;
        }
        else
        {
            milHours = h;
               milSeconds = s;
        }
        convert();
    }
    void convert();

    void setTime(int, int);

    int getHour()
        { return milHours; }

    int getStandHr()
        { return hour; }
};

//***********************************************
// convert member function                      *
//***********************************************

void MilTime::convert()
{
    double temp;

    if (milHours > 1200)
        hour = milHours - 1200;
    else
        hour = milHours;

    hour /= 100;
    temp = (milHours - 1200) / 100.0;
    min = static_cast<int>(((temp - static_cast<int>(temp)) * 100));
}

//***********************************************
// setTime member function                      *
//***********************************************

void MilTime::setTime(int h, int s)
{
    if(h < 0 || h > 2359)
        throw BadHour(h);
    else
        milHours = h;
    if(s < 0 || s > 59)
        throw BadSeconds(s);
    else
        milSeconds = s;
    convert();
}

#endif /* MillTime_h */


//
//  main.cpp
//  Lab7A
//
//  Created by Madina Sadirmekova on 3/23/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
#include "MilTime.h"
using namespace std;

int main()
{
   // Create a MilTime object for 1445 hours, 27 seconds.
   MilTime timeObj(1445, 27);

   // Display the hours, minutes, and seconds.
   cout << "The hour in military format is "
        << timeObj.getHour() << endl;
   cout << "The hour in standard format is "
        << timeObj.getStandHr() << endl;
   cout << "The minutes are "
        << timeObj.getMin() << endl;
   cout << "The seconds are "
        << timeObj.getSec() << endl;
    
    //These will work without errors
    try
    {
        timeObj.setTime(2358, 58);
    }
    catch(MilTime::BadHour hour)
    {
        hour.get();
    }
    catch(MilTime::BadSeconds sec)
    {
        sec.get();
    }
    
    // The next function call will trap a BadSeconds exception.
    try
    {
        timeObj.setTime(2359, 60);
    }
    catch(MilTime::BadHour hour)
    {
        hour.get();
    }
    catch(MilTime::BadSeconds sec)
    {
        sec.get();
    }
    
    // The next function call will trap a BadHour exception.
    try
    {
        timeObj.setTime(2360, 59);
    }
    catch(MilTime::BadHour hour)
    {
        hour.get();
    }
    catch(MilTime::BadSeconds sec)
    {
        sec.get();
    }
   return 0;
}

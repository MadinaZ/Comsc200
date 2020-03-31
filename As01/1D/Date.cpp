//
//  main.cpp
//  1D
//
//  Created by Madina Sadirmekova on 2/2/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Date.h"

int main()
{
    Date today(12, 25, 2012);
    
    today.showDate1();
    
    today.setMonth(8);
    today.setDay(16);
    today.setYear(2012);
    
    today.showDate2();
    
    today.showDate3();
    
    Date someday(12, 32, 2012);
    
    someday.showDate2();
    
    return 0;
}

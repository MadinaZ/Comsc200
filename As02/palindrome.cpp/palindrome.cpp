//
//  main.cpp
//  palindrome.cpp
//
//  Created by Madina Sadirmekova on 2/13/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

bool func(string str, int beg, int last)
{
    
    if(beg < last)
    {
        return func(str, beg + 1, last - 1);
    }
    
    if(str[beg] != str[last])
        return false;

    return true;
}

int main()
{
    string testStrings[6] = { "ABLE WAS I ERE I SAW ELBA",
    "FOUR SCORE AND SEVEN YEARS AGO",
    "NOW IS THE TIME FOR ALL GOOD MEN",
    "DESSERTS I STRESSED",
    "ASK NOT WHAT YOUR COUNTRY CAN DO FOR YOU",
    "KAYAK" };
    //to check
    int j = 0;
    for(int i = 0; i < 6; i++)
    {
        int siz = testStrings[i].length();
        if(func(testStrings[i], j, siz - 1))
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
    }

    return 0;
}


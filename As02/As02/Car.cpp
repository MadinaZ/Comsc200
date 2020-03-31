//
//  main.cpp
//  As02
//
//  Created by Madina Sadirmekova on 2/3/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#include "Car.h"

int main()
{
    Car mer(2019, "Mercedes-Benz");
    cout << mer.getMake() << endl;
    cout << mer.getYear() << endl;
    cout<<"Current Speed: "<<mer.getSpeed()<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Accelerating... \n";
        mer.accelerate();
        cout<<"Current Speed: "<<mer.getSpeed()<<endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"Breaking... \n";
        mer.breaking();
        cout<<"Current Speed: "<<mer.getSpeed()<<endl;
    }
    
    return 0;
}

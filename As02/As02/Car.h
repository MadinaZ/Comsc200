//
//  Car.h
//  As02
//
//  Created by Madina Sadirmekova on 2/3/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Car_h
#define Car_h

class Car
{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int, string);
    int getYear() ;
    string getMake() ;
    int getSpeed() ;
    int accelerate();
    int  breaking();
};

Car::Car(int y, string m)
{
    yearModel = y;
    make = m;
    speed = 0;
}

int Car::getYear()
{
    return yearModel;
}

string Car::getMake()
{
    return make;
}

int Car::getSpeed()
{
    return speed;
}
int Car::accelerate()
{
    return speed += 5;
}
int Car::breaking()
{
    return speed -= 5;
}
#endif /* Car_h */

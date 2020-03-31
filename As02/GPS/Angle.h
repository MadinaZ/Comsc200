//
//  Angle.h
//  As02
//
//  Created by Madina Sadirmekova on 2/12/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Angle_h
#define Angle_h
class Angle
{
private:
    int degrees, minutes;
    float seconds;
    char letter;
public:
    Angle();
    Angle(int, int, float, char);
    Angle(double val);
    Angle (double, bool); //for digital degree
    string toString()
    {
        stringstream ss;
        ss << degrees << " " << minutes << "' " << setprecision(2) << fixed << seconds << "\" " << letter<<"  ";
        return ss.str();
    }
};

Angle::Angle()
{
    degrees = 0;
    minutes = 0;
    seconds = 0;
    letter = 'N';

}

Angle::Angle(int deg, int min, float sec, char direction)
{
    degrees = deg;
    minutes = min;
    seconds = sec;
    letter = direction;
}

Angle::Angle(double val)
{
    degrees = fabs(val);
    minutes = ((fabs(val) - degrees) * 60);
    seconds = (((fabs(val) - (int)degrees) * 60) - minutes) * 60;
}

Angle::Angle(double val, bool lon)
{
    degrees = fabs(val);
    minutes = ((fabs(val) - degrees) * 60);
    seconds = (((fabs(val) - (int)degrees) * 60) - minutes) * 60;
    letter = (!lon) ? ((fabs(val) == val) ? 'N' : 'S') : ((fabs(val) == val) ? 'E' : 'W');
}

#endif /* Angle_h */

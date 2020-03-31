//
//  FeetInches.h
//  AS06
//
//  Created by Madina Sadirmekova on 3/16/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//
//
#ifndef FeetInches_h
#define FeetInches_h
#include <iostream>
#include <sstream>

using namespace std;

// (Friend step 1) Forward Declaration
class FeetInches;

// (Friend step 2) Forward Declaration of Friend Function
ostream &operator << (ostream &, const FeetInches &);
istream &operator >> (istream &, FeetInches &);

class FeetInches {
    double feet;        // To hold a number of feet
    double inches;         // To hold a number of inches
    void simplify();// header only Definition below
public:
    // argument constructor
    FeetInches(double f = 0.0, double i = 0.0)
        { feet = f; inches = i; }

// Added definition outside
    FeetInches(string s);
    // copy constructor - must 1. pass ref var.
    FeetInches (const FeetInches &fi)
        { feet = fi.feet; inches = fi.inches; }

    // Mutator
    void setFeet(double f) { feet = f; }

    void setInches(double i) { inches = i; }
    // Accessor
    double getFeet() const { return feet; }
    double getInches() const { return inches; }

    // Overloaded operator functions
    FeetInches operator + (const FeetInches &);    // Overloaded +
    FeetInches operator - (const FeetInches &);    // Overloaded -
    FeetInches operator ++ ();                    // Prefix ++
    bool operator > (const FeetInches &);        // Overloaded >
    bool operator < (const FeetInches &);        // Overloaded <
    bool operator == (const FeetInches &);        // Overloaded ==

    // Object Type Converter declaration
    operator double()
    {
        double temp = feet;
        temp += (inches / 12.0);
        return temp;

    }
    FeetInches multiply(const FeetInches &);
    // (Friends Step 3) Friend Function Declaration
    friend ostream &operator << (ostream &, const FeetInches &);
    friend istream &operator >> (istream &, FeetInches &);
};

FeetInches FeetInches::operator + (const FeetInches &right) {
    FeetInches temp;
    temp.inches = inches + right.inches;
    temp.feet = feet + right.feet;
    return temp;

}

FeetInches FeetInches::multiply(const FeetInches &right)
{
    FeetInches temp;
    temp.feet = feet * right.feet;
    temp.inches = inches * right.inches;
    return temp;
}

ostream &operator << (ostream &strm, const FeetInches &rhs) {
    strm << rhs.feet << " feet, " << rhs.inches << " inches ";
    return strm;
}

istream &operator >> (istream &strm, FeetInches &rhs) {
    cout<<"Enter Feet: ";
    strm >> rhs.feet;
    cout<<"Enter Inches: ";
    strm >> rhs.inches;
//    rhs.simplify();
    return strm;
}

bool FeetInches::operator == (const FeetInches &right)
{
    bool status;

    if (feet == right.feet && inches == right.inches)
        status = true;
    else
        status = false;

    return status;
}

// string argument Constructor
FeetInches::FeetInches(string s) {
    stringstream ss(s);
    ss >> feet;
    char peekchar = ss.peek();
    if( ss && peekchar == '\'' ) {
        ss.get();
        ss >> inches;
    }
}
#endif

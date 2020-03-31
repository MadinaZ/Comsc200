////
////  main.cpp
////  As03
////
////  Created by Madina Sadirmekova on 2/22/20.
////  Copyright © 2020 Madina Sadirmekova. All rights reserved.
////
//#include <iostream>
//#include <vector>
//#include <sstream> // stringstream
//
//using namespace std;
//
//// Some compilers require you to prototype the >> and << operator functions
//// outside the class. For this reason, we have added the following statements to the
//// FeetInches.h class specification file.
//class Frac; //Forward Declaration
//ostream &operator<< (ostream &stm, Frac const &rhs);
//
//class Frac {
//    long num;//numerator
//    long den;//denominator
//public:
//    // Frac() { num=0; den=1; }
//    Frac() : num(0), den(1) {}
//    Frac(long n)
//    {num = n;}
//    Frac(long n, long d) {num=n; den=d;}
//    Frac(const Frac &obj) {*this = obj;}
//    void operator=(const Frac &rhs) {
//        num = rhs.num;  den = rhs.den;
//    }   // Frac a = b;
//
//    // string constructor is challenging, worth 2 pts, try your best!
//    Frac(string s)
//    {
//        stringstream ss;
//        ss<<s;
//        ss>>num;
//        char ch;
//        ss>>ch;
//        ss>>den;
//    }
//
//    void getSetTest(long numerator, long denominator)
//    {
//        num = numerator;
//        den = denominator;
//    }
//
//    long getNum() const
//    {
//        return num;
//    }
//
//    long getDen() const
//    {
//        return den;
//    }
//    // math operators
//    Frac operator+(const Frac &rhs)
//    {
//        Frac temp;
//        temp.num = num*rhs.den + rhs.num*den;
//        temp.den = den*rhs.den;
//        // need to apply lower term by / gcd here
//        return temp;
//    }
//
//    Frac operator-(const Frac &rhs)
//    {
//        Frac temp;
//        temp.num = num*rhs.den - rhs.num*den;
//        temp.den = den*rhs.den;
//        // need to apply lower term by / gcd here
//        return temp;
//    }
//
//    Frac operator*(const Frac &rhs)
//    {
//        Frac temp;
//        temp.num = num*rhs.num;
//        temp.den = den*rhs.den;
//        // need to apply lower term by / gcd here
//        return temp;
//    }
//
//    Frac operator/(const Frac &rhs)
//    {
//        Frac temp;
//        temp.num = num*rhs.den;
//        temp.den = den*rhs.num;
//        // need to apply lower term by / gcd here
//        return temp;
//    }
//
//    // postfix increment operator ++ --
//    Frac operator++()
//    {
//        num += den;
//        // lowterms(*this);
//        return *this;
//    }
//
//    Frac operator++(int n)
//    {
//        Frac *temp = new Frac(this->num, this->den);
//        this->num += this->den;
//        // lowterms(*this);
//        return *temp;
//    }
//
//    Frac operator--()
//    {
//        num -= den;
//        // lowterms(*this);
//        return *this;
//
//    }
//
//    Frac operator--(int n)
//    {
//        Frac *temp = new Frac(this->num, this->den);
//        this->num += this->den;
//        // lowterms(*this);
//        return *temp;
//    }
//
//    // comparators
//    bool operator == (Frac &f2)
//    {
//        if(num == f2.num && den == f2.den)
//            return true;
//
//        return false;
//    }
//
//
//    bool operator != (Frac &f2)
//    {
//        if(num != f2.num && den != f2.den)
//            return true;
//
//        return false;
//    }
//
//    bool operator < (Frac &f2)
//    {
//        bool status;
//
//        if (num < f2.num)
//            status = true;
//        else if (num == f2.num && den < f2.den)
//            status = true;
//        else
//            status = false;
//        return status;
//    }
//
//    bool operator > (Frac &rhs)
//    {
//        bool status;
//
//        if (num > rhs.num)
//            status = true;
//        else if (num == rhs.num && den > rhs.den)
//            status = true;
//        else
//            status = false;
//        return status;
//    }
//
//    bool operator <= (Frac &f2)
//    {
//        bool status;
//
//        if (num <= f2.num)
//            status = true;
//        else if (num == f2.num && den <= f2.den)
//            status = true;
//        else
//            status = false;
//        return status;
//    }
//    bool operator >= (Frac &f2)
//    {
//        bool status;
//
//        if (num >= f2.num)
//            status = true;
//        else if (num == f2.num && den >= f2.den)
//            status = true;
//        else
//            status = false;
//        return status;
//    }
//
//   operator int()
//   {
//       return (num) / den;
//   }
//
//   operator float()
//   {
//       float temp;
//       temp = static_cast<float>(num) / static_cast<float>(den);
//       return temp;
//   }
//
//    //    overload ostream insertion operator<<
//    friend ostream &operator<< (ostream &stm, Frac const &rhs)
//    {
//        stm << rhs.num << "/" << rhs.den;
//        return stm;
//    }
//
//    friend istream &operator >> (istream &stm, Frac &obj)
//    {
//        stm >> obj.num;
//        stm >> obj.den;
//        return stm;
//    }
//};
//
//    int main() {
//        Frac x(3,4);
//        Frac y(1,2);
//        cout<<"Part-1.1 Constructors"<<endl;
//        cout << "\nCreated Frac x(3,4) as " << x;
//        cout << "\nCreated Frac y(1,2) as " << y;
//
//
//        // Turn on this one when you completed the definition of string constructor
//        Frac s("6/7"); // passing a Frac number as a string.
//        cout << "\nString constructed: s: " << s;
//
//
//        Frac z(x);
//        cout << "\nCopy constructed z as x: " << z<<endl;
//
//        Frac w(2, 5);
//        cout<<"w = "<<w<<endl;
//        w = x;
//        cout<<"Assigned 'w' as x: "<<w<<endl;
//
//
//        cout<<"\nPart-1.2 Getters and Setters \n";
//        cout<<"\ngetSetTest is initialized to: "<<w<<endl;
//        cout<<"setting getSetTest.num to 3"<<endl;
//        w.getSetTest(3, 4);
//        cout<<"Its num is now: "<<w.getNum()<<endl;
//        cout<<"setting getSetTest.den to 3"<<endl;
//        cout<<"Its den is now: "<<w.getDen()<<endl;
//
//
//        cout<<"\nPart-1.3 operators \n";
//        Frac v = x + y;
//        cout << "\nx + y is: " << v;
//        Frac m = x - y;
//        cout<<"\nx - y is: "<<m;
//        Frac n = x*y;
//        cout<<"\nx * y is: "<<n;
//        Frac p = x/y;
//        cout<<"\nx / y is: "<<p<<endl;
//
//        cout<<"pre and postfix ++ and -- (4 different types) \n";
//        cout << "\nPlease observe the outputs of identical commands\n"
//        << " executed in one statement v. separated statements. \n";
//        Frac f(5,6);
//        cout << f << " "     // start
//        << --f << " "
//        << f << " "
//        << ++f << " "
//        << --f << " "
//        << ++f << endl; // end of one statement
//
//        cout << f << " " ;
//        cout << --f << " " ;
//        cout << f << " " ;
//        cout << ++f << " " ;
//        cout << --f << " " ;
//        cout << ++f;
//
//        cout << "\nWhy the above output values are not the same?\n\n";
//        cout<<"We are using pre-decrement/increment operators, thus, we modify the variable before the value passed to the remaining expression\n";
//        cout<<"Since the upper most statement doesn't have semi-colons,";
//        cout<<"it is considered as a one line statement and is read from right to left \n";
//        cout<<"While the lower statements are separated by semicolon, and each time, the value of f becomes modified according to its expression.\n";
//
//        cout<<"Testing postfix operators \n";
//        cout<<"f++: "<<f++;
//        cout<<"\nf--: "<<f--<<endl;
//        cout<<"comparators: <, >, <=, >=, !=, ==\n";
//        cout<<"\nNow we are comparing the values of x and y \n";
//        cout<<"x = "<<x<<", "<<"y = "<<y<<endl;
//        if(x > y)
//        cout<<"(x > y) - False\n";
//
//        if(x < y)
//        cout<<"False\n";
//        else
//        cout<<"(x < y) - True"<<endl;
//
//        if(x >= y)
//        cout<<"(x >= y) False\n";
//        else
//        cout<<"True";
//
//        if(x <= y)
//        cout<<"False\n";
//        else
//        cout<<"(x <= y) - True"<<endl;
//
//        if(x == y)
//        cout<<"True\n";
//        else
//        cout<<"(x == y) - False"<<endl;
//
//        if(x != y)
//        cout<<"(x != y) True\n"<<endl;
//
//        Frac f1(6, 3);
//        Frac f2(5, 2);
//
//        cout<<"Part-1.4. Type conversion operators";
//         cout << "\nFirst Frac f1: " << f1  << "\nSecond Frac f2: " << f2;
//        cout << "\n1st fi as Integer: " << int(f1);
//        cout << "\n2nd fi as Double: " << double(f2);
//
//        cout<<"\n\nPart-1.5 overload friend iostream insertion <<, and extraction >> \n";
//        cout<<"Enter a fraction to test iostream operators: ";
//        string check;
//        cin>>check;
//        cout<<"You have entered: "<<check<<endl;
//    }
#include <iostream>
#include <iomanip>
 using namespace std;

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

 // Function prototype
 void displayDayName(Day);

 int main()
 {
 const int months = 12; // The number of days
 double sales[months]; // To hold sales for each day
 double total = 0.0; // Accumulator
 Day workDay; // Loop counter

 // Get the sales for each day.
 for (workDay = MONDAY; workDay <= FRIDAY;
 workDay = static_cast<Day>(workDay + 1))
 {
 cout << "Enter the hours for month: ";
 displayDayName(workDay);
 cout << ": ";
 cin >> sales[workDay];
 }

 // Calculate the total sales.
 for (workDay = MONDAY; workDay <= FRIDAY;
 workDay = static_cast<Day>(workDay + 1))
 total += sales[workDay];

 cout << "The total sales are $" << setprecision(2)
 << fixed << total << endl;

 return 0;
 }
void displayDayName(Day d)
 {
 switch(d)
 {
 case MONDAY : cout << "Monday";
 break;
 case TUESDAY : cout << "Tuesday";
 break;
 case WEDNESDAY : cout << "Wednesday";
 break;
 case THURSDAY : cout << "Thursday";
 break;
 case FRIDAY : cout << "Friday";
 }
 }


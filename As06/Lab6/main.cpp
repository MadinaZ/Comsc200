//
//  main.cpp
//  Lab6
//
//  Created by Madina Sadirmekova on 3/16/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;


//Inheritance
//class Employee
//{
//private:
//    string empName;
//    int empNumber;
//    string hire_date;
//public:
//    Employee()//Default Constructor
//    {
//        empName = "";
//        empNumber = 0;
//        hire_date = "";
//    }
//    Employee(string empNam, int empNumb, string hire_dat)
//    {
//        empName = empNam;
//        empNumber = empNumb;
//        hire_date = hire_dat;
//    }
//
//    string getName() const
//    {
//        return empName;
//    }
//
//    int getNumber() const
//    {
//        return empNumber;
//    }
//
//    string getDate() const
//    {
//        return hire_date;
//    }
//    void printEmployeeInfo()
//    {
//        cout<<"Employee name: "<<getName()<<endl;
//        cout<<"Employee number: "<<getNumber()<<endl;
//        cout<<"Employee hire date: "<<getDate()<<endl;
//    }
//};
//
//
//class TeamLeader : public Employee
//{
//private:
//    int bonus;
//    int train_hours;
//    int attended_hours;
//public:
//    TeamLeader()
//    {
//        bonus = 0;
//        train_hours = 0;
//        attended_hours = 0;
//    }
//    TeamLeader(string empNam, int empNumb, string hire_dat, int bon, int train, int attend):
//    Employee(empNam,empNumb,hire_dat)
//    {
//        bonus = bon;
//        train_hours = train;
//        attended_hours = attend;
//    }
//
//    void printAll()
//    {
//        Employee::printEmployeeInfo();
//        cout<<"Bonus eanred: "<<bonus<<endl;
//        cout<<"Train hours: "<<train_hours<<endl;
//        cout<<"Attended hours: "<<attended_hours<<endl;
//    }
//};
//
//int main()
//
//{
//    TeamLeader Aa("Ann", 5668, "12/02/2019",10, 5, 3);
//    Aa.printAll();
//    return 0;
//}




//Composition
//Sub class is created and destroyed with the class

class X
{
private:
    int x_val;
public:
    X(){x_val = 0;}
    X(int num)
    {
        x_val = num;
    }
    void set(int x)
    {
        x_val = x;
    }
    int get() const
    {
        return x_val;
    }
};

class Y
{
private:
    int y_val;
public:
    X x; //Composition
    Y(int num)
    {
        y_val = num;
    }
    void set(int y)
    {
        y_val = y;
    }
    int get() const
    {
        return y_val;
    }
};

int main()
{
    Y y(42);
    cout<<"Y: ";
    cout<<y.get()<<endl;
    y.x.set(52);
    cout<<"X: ";
    cout<<y.x.get()<<endl;
}




//Aggregation
//
//class X
//{
//private:
//    int x_val;
//public:
//    X(){x_val = 0;}
//    X(int num)
//    {
//        x_val = num;
//    }
//    void set(int x)
//    {
//        x_val = x;
//    }
//    int get() const
//    {
//        return x_val;
//    }
//
//};
//
//
//class Y//library
//{
//private:
//    int y_val;
//    X *x;
//public:
//    Y()
//    {
//        y_val = 0;
//    }
//    Y(int num)
//       {
//           y_val = num;
//           x = new X(6);
//       }
//       void set(int y)
//       {
//           y_val = y;
//       }
//       void get() const
//       {
//           cout<<"X value: "<<x->get()<<endl;
//           cout<<"Y value: "<<y_val<<endl;
//       }
//    ~Y()
//    {
//        delete x;
//    }
//};
//
//
//int main()
//{
//    Y obj(7);
//    obj.get();
//}

//Reflexive Association
//class AirlineStaff
//{
//private:
//    string position;
//    double pay_rate;
//public:
//    AirlineStaff()
//    {
//        position = "";
//        pay_rate = 0;
//    }
//    AirlineStaff(string pos, double pay)
//    {
//        position = pos;
//        pay_rate = pay;
//    }
//    string getPos() const
//    {
//        return position;
//    }
//
//    double getPay() const
//    {
//        return pay_rate;
//    }
//};
//
//int main()
//{
//    const int staffNum = 3;
//    AirlineStaff *MemberResponsibilty[staffNum] = {nullptr};
//    MemberResponsibilty[0] = new AirlineStaff("pilot", 1000);
//    MemberResponsibilty[1] = new AirlineStaff("aviation engineer", 2000);
//    MemberResponsibilty[2] = new AirlineStaff("ticket dispatcher", 3000);
//
//    for(int i = 0; i < staffNum; i++)
//    {
//        cout<<"Position of "<<i<<" "<<MemberResponsibilty[i]->getPos()<<endl;
//        cout<<"Pay Rate of "<<i<<" "<<MemberResponsibilty[i]->getPay()<<"$"<<endl;
//    }
//}

//
//  main.cpp
//  As07
//
//  Created by Madina Sadirmekova on 3/23/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;
class Employee
{
private:
    string empName;
    string empNumber;
    string hire_date;
public:
    class InvalidEmployeeNumber
    {};
    
    Employee()//Default Constructor
    {
        empName = "";
        empNumber = "";
        hire_date = "";
    }
    Employee(string empNam, string empNumb, string hire_dat)
    {
        empName = empNam;
        hire_date = hire_dat;
        int num = stoi(empNumb);
         if(num > 0 && num < 9999)
             empNumber = num;
         else
             throw InvalidEmployeeNumber();
    }
    
    void setEmpName(string name)
    {
        empName = name;
    }
    string getName() const
    {
        return empName;
    }
    
    void setEmpNumber(string str)
    {
        int num = stoi(str);
        if(num > 0 && num < 9999)
            empNumber = num;
        else
            throw InvalidEmployeeNumber();
    }
    string getNumber() const
    {
        return empNumber;
    }
    void setDate(string date)
    {
        hire_date = date;
    }
    
    string getDate() const
    {
        return hire_date;
    }
    void printEmployeeInfo()
    {
        cout<<"Employee name: "<<getName()<<endl;
        cout<<"Employee number: "<<getNumber()<<endl;
        cout<<"Employee hire date: "<<getDate()<<endl;
    }
};


class ProductionWorker : public Employee
{
private:
    double pay_rate;
    int shift_num;
public:
    
    class InvalidShift
    {};
    
    class InvalidPayRate
    {};
    
    ProductionWorker()
    {
        pay_rate = 0.0;
        shift_num = 0;
    }
    
    ProductionWorker(string empNam, string empNumb, string hire_dat, int sh, double pay):
    Employee(empNam,empNumb,hire_dat)
    {
        if(pay > 0)
            pay_rate = pay;
        else
            throw InvalidPayRate();
        
        if(sh < 3 && sh > 0)
            shift_num = sh;
        else
            throw InvalidShift();
    }
    
    void setPayRate(double pay)
    {
        if(pay > 0)
            pay_rate = pay;
        else
            throw InvalidPayRate();
    }
    
    void setShift(int num)
    {
        if(num < 3 && num > 0)
            shift_num = num;
        else
            throw InvalidShift();
    }
    
    int getShift() const
    {
        return shift_num;
    }
    
    double getPayRate() const
    {
        return pay_rate;
    }
    
    void printProductionWorker()
    {
        Employee::printEmployeeInfo();
        cout<<"Employee's shift: "<<getShift()<<endl;
        cout<<"Employee's pay rate: "<<getPayRate()<<endl;
    }
};

int main()

{
    string name;
    string Empnumber;
    string DateHire;
    int shift;
    string shift_str;
    double payrate;
    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Employee number: ";
    cin>>Empnumber;
    cout<<"Date hired: ";
    cin>>DateHire;
    cout<<"Shift: ";
    cin>>shift_str;
    cout<<"Shift: ";
    cin>>shift;
    cout<<"Pay Rate: ";
    cin>>payrate;
    
    ProductionWorker P;
    try
    {
        P.setEmpNumber(Empnumber);
    }
    catch (ProductionWorker::InvalidEmployeeNumber)
    {
        cout<<"Error: Invalid employee number.\n";
    }
    try
    {
        P.setShift(shift);
    }
    catch (ProductionWorker::InvalidShift)
    {
        cout<<"Error: Invalid shift number.\n";
    }
    try
    {
        P.setPayRate(payrate);
    }
    catch (ProductionWorker::InvalidPayRate)
    {
        cout<<"Error: Invalid pay rate.\n";
    }
    
    
//    ProductionWorker test("John Jones", "123", "1/1/2006", 2, 18.00);

    try
    {
        ProductionWorker test("John Jones", "99999", "1/1/2006", 2, 18.00);
    }
    catch(ProductionWorker::InvalidEmployeeNumber)
    {
        cout<<"Error: Invalid employee number.\n";
    }
    catch (ProductionWorker::InvalidShift)
    {
        cout<<"Error: Invalid shift number.\n";

    }
    catch (ProductionWorker::InvalidPayRate)
    {
        cout<<"Error: Invalid pay rate.\n";
    }
    
    try
     {
         ProductionWorker test("John Jones", "123", "1/1/2006", 0, 18.00);
     }
     catch(ProductionWorker::InvalidEmployeeNumber)
     {
         cout<<"Error: Invalid employee number.\n";
     }
     catch (ProductionWorker::InvalidShift)
     {
         cout<<"Error: Invalid shift number.\n";

     }
     catch (ProductionWorker::InvalidPayRate)
     {
         cout<<"Error: Invalid pay rate.\n";
     }
    
    try
     {
         ProductionWorker test("John Jones", "123", "1/1/2006", 2, -99);
     }
     catch(ProductionWorker::InvalidEmployeeNumber)
     {
         cout<<"Error: Invalid employee number.\n";
     }
     catch (ProductionWorker::InvalidShift)
     {
         cout<<"Error: Invalid shift number.\n";

     }
     catch (ProductionWorker::InvalidPayRate)
     {
         cout<<"Error: Invalid pay rate.\n";
     }
    return 0;
    
}

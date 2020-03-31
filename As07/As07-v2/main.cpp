//
//  main.cpp
//  As07-v2
//
//  Created by Madina Sadirmekova on 3/23/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.

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
    {
    private:
        string name;
    public:
        InvalidEmployeeNumber(string n){name = n;}
        string get() const
        {
            return name;
        }
    };

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
             empNumber = empNumb;
         else
             throw InvalidEmployeeNumber(empNumb);
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
        if(num > 0 || num < 9999)
            empNumber = str;
        else
            throw InvalidEmployeeNumber(empNumber);
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
    {
    private:
        int shift ;
    public:
        InvalidShift(int n){shift = n;}
        int get() const
        {
            return shift;
        }
    };

    class InvalidPayRate
    {
        private:
            double pay;
        public:
            InvalidPayRate(double n){pay = n;}
            double get() const
            {
                return pay;
            }
    };

    ProductionWorker() : Employee()
    {
        pay_rate = 0.0;
        shift_num = 0;
    }

    ProductionWorker(string empNam, string empNumb, string hire_dat, int sh, double pay):
    Employee(empNam,empNumb,hire_dat)
    {
        if(pay <= 0)
            throw InvalidPayRate(pay);
        else
            pay_rate = pay;


        
        if(sh <= 0 || sh > 2)
            throw InvalidShift(sh);
        else
            shift_num = sh;
    }

    void setPayRate(double pay)
    {
        if(pay > 0)
            pay_rate = pay;
        else
            throw InvalidPayRate(pay_rate);
    }

    void setShift(int num)
    {
        if(num == 1 || num == 2)
            shift_num = num;
        else
            throw InvalidShift(shift_num);
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
    string DateHire, shift_str;
    int shift;
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

    try
    {
        ProductionWorker P(name, Empnumber, DateHire, shift, payrate);
    }
    catch (ProductionWorker::InvalidEmployeeNumber E)
    {
        cout<<"Error: Invalid employee number: "<<E.get()<<endl;
    }
    catch (ProductionWorker::InvalidShift E)
    {
        cout<<"Error: Invalid shift number: "<<E.get()<<endl;
    }
    catch (ProductionWorker::InvalidPayRate E)
    {
        cout<<"Error: Invalid pay rate: "<<E.get()<<endl;
    }


    cout<<"Creating: ==> John Jones, 99999, 1/1/2006, 2, 18.00 \n";
    try
    {
        ProductionWorker test("John Jones", "99999", "1/1/2006", 2, 18.00);
    }
    catch(ProductionWorker::InvalidEmployeeNumber E)
    {
        cout<<"Error: Invalid employee number: "<<E.get()<<endl;
    }
    catch (ProductionWorker::InvalidShift E)
    {
        cout<<"Error: Invalid shift number: "<<E.get()<<endl;

    }
    catch (ProductionWorker::InvalidPayRate E)
    {
        cout<<"Error: Invalid pay rate: "<<E.get()<<endl;
    }

    cout<<"Creating: ==> John Jones, 123, 1/1/2006, 0, 18.00 \n";
    try
     {
         ProductionWorker test2("John Jones", "123", "1/1/2006", 0, 18.00);
     }
     catch(ProductionWorker::InvalidEmployeeNumber E)
     {
         cout<<"Error: Invalid employee number: "<<E.get()<<endl;
     }
     catch (ProductionWorker::InvalidShift E)
     {
         cout<<"Error: Invalid shift number: "<<E.get()<<endl;

     }
     catch (ProductionWorker::InvalidPayRate E)
     {
         cout<<"Error: Invalid pay rate: "<<E.get()<<endl;
     }

    cout<<"Creating: ==> John Jones, 123, 1/1/2006, 2, -99 \n";
    try
     {
         ProductionWorker test3("John Jones", "123", "1/1/2006", 2, -99);
     }
     catch(ProductionWorker::InvalidEmployeeNumber E)
     {
         cout<<"Error: Invalid employee number: "<<E.get()<<endl;
     }
     catch (ProductionWorker::InvalidShift E)
     {
         cout<<"Error: Invalid shift number: "<<E.get()<<endl;

     }
     catch (ProductionWorker::InvalidPayRate E)
     {
         cout<<"Error: Invalid pay rate: "<<E.get()<<endl;
     }
    return 0;

}



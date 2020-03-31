//
//  Employee.h
//  As01
//
//  Created by Madina Sadirmekova on 1/28/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Employee_h
#define Employee_h

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee();
    ~Employee();
    Employee(string, int);
    Employee(string, int, string, string);
    void setter(string, int, string, string);
    string getName() const;
    string getDep() const;
    string getPos() const;
    int getId() const;
};

//Default constructor
Employee::Employee()
{
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}
//Constructor
Employee::Employee(string EmpName, int Id)
{
    name = EmpName;
    idNumber = Id;
    department = "";
    position = "";
}
//Constructor
Employee::Employee(string EmpName, int Id, string dep, string pos)
{
    name = EmpName;
    idNumber = Id;
    department = dep;
    position = pos;
}

//Mutator/Setter function
void Employee::setter(string EmpName, int Id, string dep, string pos)
{
    name = EmpName;
    idNumber = Id;
    department = dep;
    position = pos;
}

string Employee::getName() const
{
    return name;
}

string Employee::getDep() const
{
    return department;
}

string Employee::getPos() const
{
    return position;
}

int  Employee::getId() const
{
    return idNumber;
}
#endif /* Employee_h */

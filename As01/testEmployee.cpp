//
//  main.cpp
//  As01
//
//  Created by Madina Sadirmekova on 1/28/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Employee.h"

int main()
{
    const int size = 3;
    Employee *emp[size] = {nullptr};
    emp[0] = new Employee("Susan Meyers", 47899, "Accounting", "Vice President");
    emp[1] = new Employee("Mark Jones", 39119, "IT", "Programmer");
    emp[2] = new Employee("Joy Rogers", 81774, "Manufacturing", "Engineer");
    cout<<"Name: "<<emp[0]->getName()<<endl;
    cout<<"ID Number: "<<emp[0]->getId()<<endl;
    cout<<"Department: "<<emp[0]->getDep()<<endl;
    cout<<"Position: "<<emp[0]->getPos()<<endl;
    cout<<endl<<endl;
    cout<<"Name: "<<emp[1]->getName()<<endl;
    cout<<"ID Number: "<<emp[1]->getId()<<endl;
    cout<<"Department: "<<emp[1]->getDep()<<endl;
    cout<<"Position: "<<emp[1]->getPos()<<endl;
    cout<<endl<<endl;
    cout<<"Name: "<<emp[2]->getName()<<endl;
    cout<<"ID Number: "<<emp[2]->getId()<<endl;
    cout<<"Department: "<<emp[2]->getDep()<<endl;
    cout<<"Position: "<<emp[2]->getPos()<<endl;
    
    return 0;
}

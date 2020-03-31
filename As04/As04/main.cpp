//
//  main.cpp
//  As04
//
//  Created by Madina Sadirmekova on 3/2/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Essay.h"
int main()
{
    int grammar, spelling, length, content;
    cout<<"How many grammar points did the student earn? (0 - 30): ";
    cin>>grammar;
    cout<<"How many spelling points did the student earn?  (0 - 20): ";
    cin>>spelling;
    cout<<"How many points for length did the student earn?  (0 - 20): ";
    cin>>length;
    cout<<"How many points for content did the student earn?  (0 - 30): ";
    cin>>content;
    
    Essay grade(grammar, spelling, length, content);
    
    cout<<"\nTest 1 - Four arguments Derived Class";
    cout<<"\nGrammar Points: "<<grade.getGrammar();
    cout<<"\nSpelling Points: "<<grade.getSpelling();
    cout<<"\nLength Points: "<<grade.getLength();
    cout<<"\nContent Points: "<<grade.getContent();
    grade.set(grammar, spelling, length, content);
    cout<<"\nOverall Score: "<<grade.getScore();
    cout<<"\nLetter Grade: "<<grade.getLetterGrade()<<endl;
    cout<<"*Essay grading policy: A >= 85 > B >= 70 > C >= 0\n";
    
    cout<<"\nTest 2 - One argument Base Class\n";
    GradedActivity grade2(75);
    cout<<"Graded Score: "<<grade2.getScore()<<", Grade: "<<grade2.getLetterGrade()<<endl;
    cout<<"*Essay grading policy: A >= 85 > B >= 70 > C >= 0\n";

    
    return 0;
}

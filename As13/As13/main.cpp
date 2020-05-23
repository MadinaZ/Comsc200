//
//  main.cpp
//  As13
//
//  Created by Madina Sadirmekova on 5/14/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//
//#include<iostream>
//#include<iomanip>
//#include<vector>
//
//using namespace std;
//
//void pattern(int left, int length)
//{
//    if (length == 0) return;
//
//    pattern(left, length / 2);
//
//    if(left * 2)
//    {
//        cout << "* ";
//        for (int i = 0; i < left * 2 - 1; i++) cout << " ";
//    }
//
//    else
//    {
//        for (int i = 0; i < left * 2; i++) cout << " ";
//    }
//
//    for (int i = 0; i < length; i++ ) cout << "* ";
//    for (int i = 0; i < left * 2; i++) cout << " ";
//
//    if(left * 2) cout << "*" << endl;
//    else cout << " *" << endl;
//
//    pattern(left + length / 2, length / 2);
//}

#include<iostream>
#include<iomanip>

using namespace std;

void pattern(int left, int length)
{
if (length == 0) return;

pattern(left, length / 2);

    if(left * 2)
    {
        cout<<"*";
        for (int i = 0; i < left * 2 - 1; i++)
            cout<<" ";
    }
    else
        cout<<"";
  

for (int i = 0; i < length; i++)
cout << "* ";
for (int i = 0; i < left * 2; i++)
cout << " ";

cout<<"*"<<endl;

pattern(left + length / 2, length / 2);
}


int main()
{
pattern(0, 16);
}

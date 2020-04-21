//
//  main.cpp
//  As08
//
//  Created by Madina Sadirmekova on 3/31/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include<stack>
#include<queue>
#include<string>
#include<cstring>

using namespace std;


int calc(char op, int num1, int num2)
{
    int result;
    switch(op)
    {
        case '*':
            result = num1 * num2;
            cout<<"="<<num1<<"*"<<num2<<endl;
            break;
        case'/':
            result = num2 / num1;
            cout<<"="<<num1<<"/"<<num2<<endl;
            break;
        case '+':
            result = num1 + num2;
            cout<<"="<<num1<<"+"<<num2<<endl;
            break;
        case'-':
            result = num2 - num1;
            cout<<"="<<num2<<"-"<<num1<<endl;
            break;
    }
    return result;
}

void displayOne(stack <int> st, queue<char> qu)
{
      string str = "";

    while (!st.empty())
    {
        str += to_string(st.top());
        st.pop();
        
        if(!st.empty()) str += ", ";
    }
    cout << setw(20) << right << str;

}

void displayTwo(queue<char> qu)
{
    string str2 = "";

    while (!qu.empty()) {

         str2 += qu.front();

         qu.pop();

         if(!qu.empty()) str2 += ", ";

     }
       cout << setw(30) << right << str2 << endl;
}

void displayAll(stack <int> stack, queue<char> queue)
{
    displayOne(stack, queue);
    displayTwo(queue);
}
int main()
{
    stack<int> s;
    queue<char> q;
    int op1, op2;

    string postfix;
    while(postfix != "q")
    {
        cout<<"Enter a postfix expression, q/Q to quit: ";
        getline(cin, postfix);
        
        if(postfix == "q" || postfix == "Q")
            break;

        cout<<setw(20)<<right<<"Operand Stack";
        cout<<setw(30)<<right<<"Postfix Queue\n";
        
        for(int i = 0; i != postfix.size(); i++)
        {
            q.push(postfix[i]);
        }

        for(int i = 0; i != postfix.size(); i++)
        {
            if(postfix[i] >= 48 && postfix[i] <= 57)
            {
                s.push(postfix[i] - '0');
            }
            else
            {
                op1 = s.top();
                s.pop();
                op2 = s.top();
                s.pop();
                s.push(calc(q.front(), op1, op2));
            }

            displayAll(s, q);
            q.pop();

        }
    }
    return 0;
}


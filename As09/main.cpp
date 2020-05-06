//
//  main.cpp
//  As09
//
//  Created by Madina Sadirmekova on 4/26/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

class SubsError{
    int number;
public: SubsError(int var):number(var){}
    int getValue(){ return number; }
};


class IntLinkedQueue {
private:
    struct Node {
        int data;
        Node *next;
    };
    Node *front; //
    Node *rear; //
    Node *p; //traversial position
    Node *pp; //decalred to store the adress of the pointer //previous position
    int size; //
    
public:
    // Default Constructor
    IntLinkedQueue() : front(nullptr), rear(nullptr), size(0) {}
    // Destructor; // return all dynamically allocated nodes
    ~IntLinkedQueue()
    {
        p = front;
        while (p != NULL)
        {
            pp = p->next;
            p = pp;
        }
    }
    
    bool isEmpty() const
    {
        if(front == NULL && rear == NULL)
            return true;
        return false;
    }
    
    int getSize() const
    {
        return size;
    }
    
    void clear()
    {
        p = front;
        while(p != nullptr)
        {
            pp = p->next;
            delete p;
            p = pp;
        }
        front = NULL;
        rear = NULL;
        p = NULL;
        pp = NULL;
        size = 0;
    }
    
    void append(int &n)// Rear append
    {
        p = new Node;
        p->next = nullptr;
        p->data = n;
        (front) ? rear = rear->next = p : front = rear = p;
        size++;
    }
    
    void fremove(int &n)
    {
        if(front)
            cout<<front->data;
        if(isEmpty())
        {
            cout<<"Queue is empty\n";
            return;
        }
        else
        {
            n = front->data;
            p = front; //eto tipa head
            front = front->next; //a eto sam elm
            delete p;
            size--;
        }
    }
 
    string toString()
    {
        string str = "";
        p = front;
        while(p != nullptr)
        {
            str += to_string(p->data);
            str += ", ";
            p = p->next;
        }
        return str;
    }
};


string del = ","; // default delimiter

void menu()
{
    cout << "\n--- AS9 LinkedQueue Test Menu ---\n"
    << " N - to bulk create New Queue\n"
    << " D - to Display\n"
    << " E - is Empty?\n"
    << " A - to Add ~ push front\n"
    << " a - to append ~ push back\n"
    << " R - to Remove ~ pop front\n"
    << " r - to Remove ~ pop back\n"
    << " L - Length of Queue?\n"
    << " C - to Clear\n"
    << " Q - to Q this program\n"
    << " H - this menu\n";
}

int main()
{
    bool stay = true;
    int n;

    // create one instance for each of the test classes
    cout << "\nInstanciate an object of Queue\n";
    string catchVar; // To hold values popped off the Queue
    IntLinkedQueue q;
    
    cout << "\nFirst, test with hard-wired data sets!\n"
    << "For example, \nyou may use one set of tokens for all test classes: \n";
    string choice; // user input for choices
    string str; // user input for list, delimiter, ...
    int s[] = {1, 3, 5, 7, 9};
    vector<int> input(s, end(s));
    
    // show the initial item list
    int input_size = input.size();
    for (auto item : input ) {
        cout << item << ((input_size <= 1) ? " " : ", ");
        input_size--;
    }
    cout << endl;
    
    // initialize the Queue class instances
    for (auto i: input) q.append( i );
    cout << "\nUse menu to test a Queue class instance.\n";
    menu();
    // main menu while
    while(stay)
    {  // main menu while starts
        cout << "\n    Enter your command: ";
        stay = true;
        cin >> choice;
        cin.ignore();
        int pos;
        string input;
        string token;
        int item;
        stringstream sst;
        stringstream ss;
        int Queue_size;
        
        if(choice.size() == 1)
        {
            char ch = choice[0];
            vector<int> dump;
            string value;
            switch(ch) {  // main menu switch starts
                case 'N':
                case 'n':
                {
                    if(!q.isEmpty()) q.clear();
                    cout << "Enter a line of comma (,) delmited data set: ";
                    getline (cin, input);              // user input -> string
                    ss << input;            // string -> stream
                    while ( getline(ss, token, ',') ) {    // stream -> string token
                        stringstream sst(token);
                        sst >> item;
                        q.append(item);
                    }
                    
                    break;
                    
                case 'a':
                case 'A':
                    cout<<"Enter a number to append: ";
                    cin>>n;
                    cout<<"You have entered: "<<n<<endl;
                    q.append(n);
                    cout<<"\n"<<q.toString();
                    break;
                case 'd':
                case 'D':
                    cout<<q.toString();
                    break;
                case 'E':
                case 'e':
                    if(q.isEmpty())
                        cout<<"The queue is empty\n";
                    else
                        cout<<"The queue is not empty\n";
                    break;
                case 'R':
                case 'r':
                    cout<<"removed: ";
                    q.fremove(n);
                    cout<<"\n"<<"Queue: "<<q.toString()<<endl;
                    break;
                case 'q': // exit Queue sub-menu
                case 'Q':
                    stay = false;
                    break;
                case 'L':
                    cout<<"Numbers of Entries in Queue: "<<q.getSize();
                    break;
                case 'C':
                case'c':
                    q.clear();
                    cout<<"Queue is cleared\n";
                    break;
                case 'h': // help - display menu
                case 'H':
                case '?':
                    menu();
                    break;
                    
                default:
                    cout << "\nInvalid Selection!\nTry again!\n\n";
                    
                } // end of menu switch
            } // only process single character
        } // end of main menu while
    } // end of main
    cout << "Program exit!\n";
}

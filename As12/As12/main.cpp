//
//  main.cpp
//  As12
//
//  Created by Madina Sadirmekova on 5/12/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//
//
#include <iostream>
#include<vector>
using namespace std;
//
//void display(int n, vector<int> &A, vector<int> &B, vector<int> &C)
//{
//    cout<<"src: ";
//    for(vector<int>::iterator ptr = A.begin(); ptr < A.end(); ptr++)
//        cout<<*ptr<<" ";
//
//    cout<<" | dest: ";
//    for(vector<int>::iterator ptr = C.begin(); ptr < C.end(); ptr++)
//        cout<<*ptr<<" ";
//
//    cout<<" | temp: ";
//    for(vector<int>::iterator ptr = B.begin(); ptr < B.end(); ptr++)
//        cout<<*ptr<<" ";
//    cout<<endl;
//}
//void calc(int n, vector<int> &A, vector<int> &B, vector<int> &C)
//{
//    if(n > 0)
//    {
//        calc(n-1, A, C, B);
//
//        C.push_back(A.back());
//        A.pop_back();
//        display(n, A, B, C);
//        calc(n-1, B, A, C);
//    }
//}
//
//int main() {
//
//    vector<int> A, B, C;
//
//    int n;
//
//    cout<<"Enter Hanoi Tower Height: ";
//    cin>>n;
//    int count = n;
//
//    for(int i = 1; i <= n; i++)
//    {
//        A.push_back(count);
//        count--;
//
//    }
//    display(n, A, B, C);
//    calc(n, A, B, C);
//
//    cout<<"--- exit!\n";
//    return 0;
//}

//int &f()
//{static int x = 10;
//    return x;
//}
//int main()
//{
//    f() = 30;
//    cout<<f();
//}


//class Base{
//    public : virtual void show() {cout<<"In base" ;}};
//class Derived: public Base{
//    public :void show() {cout<<"in derived"; }};
//int main()
//{
//    Base *bp = new Derived;
//    bp->show();
//    Base &br = *bp;
//    br.show();
//}

//class Thing{
//    int mi;
//    double md;
//    string ms;
//public:
//    Thing(string arg = "here"):mi(1), md(2.2) {ms = arg;}
//    void print() {cout<<mi<<", "<<md<<", "<<ms;}
//};
//int main()
//{
//    Thing t("there");
//    t.print();
//}


//class Empty{};
//int main()
//{
//    cout<<sizeof(Empty);
//}

//class Base{
//public:
//    virtual void show() = 0;
//
//};
//
//int main()
//{
//    Base b;
//    Base *bp;
//}

//template<class T> class Test{
//    T data;
//public:
//    static int cnt;
//    Test() {cnt++;}
//};
//
//template<class T> int Test<T>::cnt=0;
//
//int main()
//{
//    Test<int> a, b;
//    Test<double> c;
//    cout<<Test<int>::cnt<<", "<<Test<double>::cnt;
//
//}


//class Base { public: int m_private; };
//class Pub: public Base { public: Pub() { m_private = 2; }  };
//int main() { Base base;  base.m_private = 2;  }
//succefully compiled

//int main()
//{
//    int val = 10;
//    int &ref = val;
//    ref = 20;
//    cout<<"val = "<<val;
//    val = 30;
//    cout<<"ref : "<<ref <<endl;
//}


//void f(string &in, string &out)
//{
//    if(!in.size()) return;
//    out.push_back(in.back());
//    in.pop_back();
//    f(in, out);
//}
//
//int main()
//{
//    string in("abcde"), out;
//    f(in, out);
//    cout<<out;
//}

//int main()
//{
//    try {throw 'a';}
//    catch(int param) {cout<<"int ";}
//    catch(...) {cout<<"def";}
//    cout<<"after";
//}

//class Base { public: int m_protected; };
//class Pub: public Base { public: Pub() { m_protected = 3; }  };
//int main() { Base base;  base.m_protected = 3;  }

//int main()
//{
//    int x = -1;
//    try {
//        {
//            cout<<"in";
//            if(x<0)
//                throw x;
//            cout<<"after";
//        }}
//    catch(int x)
//    {
//        cout<<"caught";
//    }
//    cout<<"after catch";
//}

//class Base { public: int m_public; };
//class Pub: public Base { public: Pub() { m_public = 1; }  };
//int main() { Base base;  base.m_public = 1;  }


//class Test
//{
//    static int x;
//    int *ptr;
//    int y;
//};
//
//int main()
//{
//    Test t;
//    cout<<sizeof(t)<<" ";
//    cout<<sizeof(Test *);
//}

//class Base { public: int m_protected; };
//class Pub: public Base { public: Pub() { m_protected = 3; }  };
//int main() { Base base;  base.m_protected = 3;  }


//class A{public : void show() {cout<<"A ";} };
//class B : public A
//{public: void show() {cout<<"B "; }};
//class C: public B{};
//
//int main()
//{
//    C c;
//    c.show();
//}

//int main()
//{
//    int x = -1;
//    try{
//        cout<<"Inside ";
//        if(x < 0)
//        {
//            throw x;
//            cout<<"After throw ";
//        }
//    }
//    catch(int x)
//    {
//        cout<<"Caught ";
//    }
//    cout<<"After-catch";
//}

//class Base{};
//class Derived: public Base{};
//int main()
//{
//    Derived d;
//    try{throw d;}
//    catch(Base b){cout<<"Caught Base";}
//    catch(Derived d){cout<<"Caught Derived ";}
//}

//class Base { public: int m_private; };
//class Pub: public Base { public: Pub() { m_private = 2; }  };
//int main() { Base base;  base.m_private = 2;  }

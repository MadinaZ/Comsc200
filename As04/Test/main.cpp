
 #include <iostream>
 #include<string>
 using namespace std;
 class Employee
 {
 private:
     string empName;
     int empNumber;
     string hire_date;
 public:
     Employee()//Default Constructor
     {
         empName = "";
         empNumber = 0;
         hire_date = "";
     }
     Employee(string empNam, int empNumb, string hire_dat)
     {
         empName = empNam;
         empNumber = empNumb;
         hire_date = hire_dat;
     }
     
     void setEmpName(string name)
     {
         empName = name;
     }
     string getName() const
     {
         return empName;
     }
     
     void setEmpNumber(int num)
     {
         empNumber = num;
     }
     int getNumber() const
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
     int shift;
     double pay_rate;
 public:
     ProductionWorker()
     {
         shift = 0;
         pay_rate = 0.0;
     }
     
     ProductionWorker(string empNam, int empNumb, string hire_dat, int sh, double pay):
     Employee(empNam,empNumb,hire_dat)
     {
         shift = sh;
         pay_rate = pay;
     }
     
     
     void setShift(string str)
     {
         if(str == "day")
             shift = 1;
         else if(str == "night")
             shift = 2;
         else
             shift = 0;
     }
     
     void setPayRate(double pay)
     {
         pay_rate = pay;
     }
     
     int getShift() const
     {
         return shift;
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
 class TeamLeader : public Employee
 {
 private:
     int bonus;
     int train_hours;
     int attended_hours;
 public:
     TeamLeader()
     {
         bonus = 0;
         train_hours = 0;
         attended_hours = 0;
     }
     TeamLeader(string empNam, int empNumb, string hire_dat, int bon, int train, int attend):
     Employee(empNam,empNumb,hire_dat)
     {
         bonus = bon;
         train_hours = train;
         attended_hours = attend;
     }
     
     void printAll()
     {
         Employee::printEmployeeInfo();
         cout<<"Bonus eanred: "<<bonus<<endl;
         cout<<"Train hours: "<<train_hours<<endl;
         cout<<"Attended hours: "<<attended_hours<<endl;
     }
     
 };

 int main()

 {
     
     string name;
     int Empnumber;
     string DateHire;
     cout<<"Enter employee name: ";
     cin>>name;
     cout<<"Employee number: ";
     cin>>Empnumber;
     cout<<"Date hired: ";
     cin>>DateHire;
     Employee A(name, Empnumber, DateHire);
     TeamLeader Aa(name, Empnumber, DateHire,10, 5, 3);
     Aa.printAll();
     return 0;
     
 }



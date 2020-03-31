//
//  Date.h
//  As01
//
//  Created by Madina Sadirmekova on 2/2/20.
//  Copyright © 2020 Madina Sadirmekova. All rights reserved.
//

#ifndef Date_h
#define Date_h

class Date
{
private:
    int day, month, year;
public:
    Date(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    void showDate1();
    void showDate2();
    void showDate3();
};

Date::Date(int m, int d, int y)
{
    if(m > 0 && m <= 12)
       month = m;
    else
    {
        cout<<d<<" is not valid value for the day"<<endl;
        exit(EXIT_FAILURE);
    }
       
    if(d > 0 && d <= 31)
       day = d;
    else
    {
        cout<<d<<" is not valid value for the day"<<endl;
        exit(EXIT_FAILURE);
    }
    
    if(y > 0)
        year = y;
    else
    {
        cout<<y<<" is not valid value for the year"<<endl;
        exit(EXIT_FAILURE);
    }
    
}

void Date::setMonth(int m)
{
    if(m > 0 && m <= 12)
        month = m;
    else
    {
        cout<<m<<" is not valid value for the month \n";
        exit(EXIT_FAILURE);
    }
}

void Date::setDay(int d)
{
    if(d > 0 && d <= 31)
        day = d;
    else
    {
        cout<<d<<" is not valid value for the day"<<endl;
        exit(EXIT_FAILURE);
    }
}

void Date::setYear(int y)
{
    if(y > 0)
        year = y;
    else
    {
        cout<<y<<" is not valid value for the year"<<endl;
        exit(EXIT_FAILURE);
    }
}

void Date::showDate1()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

void Date::showDate2()
{
    string mo;
    if(month == 1)
        mo = "January";
    else if(month == 2)
        mo = "February";
    else if(month == 3)
        mo = "March";
    else if(month == 4)
        mo = "April";
    else if(month == 5)
        mo = "May";
    else if(month == 6)
        mo = "June";
    else if(month == 7)
        mo = "July";
    else if(month == 8)
        mo = "August";
    else if(month == 9)
        mo = "September";
    else if(month == 10)
        mo = "October";
    else if(month == 11)
        mo = "November";
    else
        mo = "December";
    
    cout<<mo<<" "<<day<<", "<<year<<endl;
}

void Date::showDate3()
{
    string mo;
    if(month == 1)
        mo = "January";
    else if(month == 2)
        mo = "February";
    else if(month == 3)
        mo = "March";
    else if(month == 4)
        mo = "April";
    else if(month == 5)
        mo = "May";
    else if(month == 6)
        mo = "June";
    else if(month == 7)
        mo = "July";
    else if(month == 8)
        mo = "August";
    else if(month == 9)
        mo = "September";
    else if(month == 10)
        mo = "October";
    else if(month == 11)
        mo = "November";
    else
        mo = "December";
    
    cout<<day<<" "<<mo<<" "<<year<<endl;
}
#endif /* Date_h */

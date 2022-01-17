// By Ashwani Kumar Rai
// Program to count the number of days in a given month of a year

#include<iostream>
using namespace std;

void leap(int year)
{
    if((year%400 == 0)||((year%4==0)&&(year%100 !=0)))
    cout<<"29 days ";
    else
    cout<<"28 days ";
}

int main()
{   
    int month,year;
    cout<<"\n Enter the month : \n";
    cin>>month;
    cout<<"\n Enter the year : \n";
    cin>>year;
    if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10)|| (month == 12) )
    cout<<"\n 31 days \n ";
    else if((month == 4) || (month == 6) || (month == 9) || (month == 11) )
    cout<<"\n 30 days \n ";
    else
    leap(year);
    return 0;
}

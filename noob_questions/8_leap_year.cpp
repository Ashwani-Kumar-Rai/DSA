// A year is defined as time taken by earth to make a rotaion around sun
// Year = 365 days + 6 hrs
/* So it was important to make adjustment otherwise loss of 6 hrs every year
   will be a big loss over 100's of years . otherwise after 100 years winter will be summer.

   To handle this situation some adjustments were made by callender makes
    1> Every 4th year is a leap year (6*4 = 24 hrs)
    2> every 100 th year is NOT A LEAP YEAR
    3> every 400 th year is a leap year
*/

/*
Enter Year: 
1679
1679 is not a Leap Year
*/

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"\n Enter Year : ";
    cin>>year;

    if((year%400==0)||((year%4==0)&&(year%100!=0)))
    cout<<year<<" is a Leap Year \n";

    else
    cout<<year<<" is not a Leap Year \n";

    return 0;
}


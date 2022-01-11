// In a normal year we have 365 days
// Leap year is a year having 366 days
// The extra day is 29th feburuary
// Leap year arives after every 4 years
/*
Every Year that is exactly divisible by 4 is a leap year ,
except the centurial year that is exactly divisible by 100 .
but these centurial years are leap years if they are exactly divisible by 400 
*/
//  if(year % 400 == 0 || (year % 4 == 0  && year % 100 != 0))

#include<iostream>
using namespace std;
int main(){
    
    int year;
    
    cout<<"Enter the year \n";
    cin>>year;

    if(year % 400 == 0)
        cout << year << " is a Leap Year";
        
    else if(year % 4 == 0  && year % 100 != 0)
        cout << year << " is a Leap Year";
        
    else
        cout << year << " is not a Leap Year";

    

    return 0;
}
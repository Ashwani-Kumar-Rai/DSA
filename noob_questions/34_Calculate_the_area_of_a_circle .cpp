// By Ashwani Kumar Rai
// Program to calculate the area of a circle

#include<iostream>
using namespace std;
# define  pi 3.14

int main()
{   float radius,area;
    cout<<"Enter the radius \n";
    cin>>radius;
    area=pi*radius*radius;
    cout<<area<<endl;
    return 0;
}
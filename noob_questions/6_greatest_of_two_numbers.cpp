//  By Ashwani Kumar Rai
// Program to find Greatest of Two numbers

#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter two numbers \n";
    cin>>num1>>num2;

    if(num1==num2)
     cout<<" Both the numbers are equal \n"<<endl;

    else if(num1>num2)
    cout<<num1<<" is greater \n"<<endl;

    else
    cout<<num2<<" is greater \n"<<endl;

    return 0;
}

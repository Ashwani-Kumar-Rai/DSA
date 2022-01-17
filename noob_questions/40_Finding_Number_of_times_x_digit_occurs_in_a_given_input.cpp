// By Ashwani Kumar Rai
// Program to find number of times x digit occurs in a given input

#include<iostream>
using namespace std;

int main()
{   int num,temp,rem,x,flag=0;
    cout<<"Enter number : \n";
    cin>>num;
    cout<<"Enter the input x : \n";
    cin>>x;
    ;
    while(num>0)
    {
        rem=num%10;
        if(rem==x)
        flag=flag+1;
        num=num/10;
    }

    cout<<x<<" occured in the integer "<<flag<<"  times \n";

    return 0;
}
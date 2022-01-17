// By Ashwani Kumar Rai
// Program to calculate number of digits in an integer

#include<iostream>
using namespace std;

int main()
{   int flag=0,num;
    cout<<"Enter the number \n";
    cin>>num;

    while(num>0)
    {
        flag=flag+1;
        num=num/10;
    }
    cout<<"No of digits are : "<<flag<<endl;
    return 0;
}
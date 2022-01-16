//  By Ashwani Kumar Rai
// Program to find Greatest of Three numbers

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter three numbers \n";
    cin>>num1>>num2>>num3;

    if((num1==num2)&&(num1==num3))
    cout<<"All three numbers are equal \n";

    else if((num1>=num2)&&(num1>=num3))
    cout<<num1<<" is the Greatest";
    

    else if((num2>=num1)&&(num2>=num3))
    cout<<num2<<" is the Greatest";

    else 
    cout<<num3<<" is the Greatest";


    return 0;
}
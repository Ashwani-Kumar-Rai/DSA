// By Ashwani Kumar Rai
// Program to find the LCM of two numbers

#include<iostream>
using namespace std;

int main()
{   int num1,num2,higher,lower;

    cout<<"Enter two numbers \n";
    cin>>num1>>num2;

    if(num1>num2)
    {
        higher=num1;
        lower=num2;
    }    
    else
    {
        higher=num2;
        lower=num1;
    }
    
    for(int i=higher ; i<=higher*lower ; i++)
    {
        if(higher%lower==0)
        {
            cout<<"LCM is "<<i<<endl;
            break;
        }
        
    }
 
    return 0;
}
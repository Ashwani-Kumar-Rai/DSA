// By Ashwani Kumar Rai
// Program to find all prime numbers between 1 to 100

#include<iostream>
#include<cmath>
using namespace std;

void prime(int num)
{
    int flag=0;
    if(num==1)
    {
        cout<<endl;
    }
    else
    {

    for(int i=1;i<=sqrt(num);i++)
    {   
        if(num%i==0)
        {
            flag=flag+1;
        }
    }
    
    if(flag==1)
    cout<<num<<"\n";
    }
}




int main()
{
    

    for(int i=1;i<100;i++)
    {
        prime(i);
    }

    return 0;
}
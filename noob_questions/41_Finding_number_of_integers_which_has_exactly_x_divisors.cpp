// By Ashwani Kumar Rai
// Program to find number of integers which has exactly x divisors

#include<iostream>
using namespace std;

int main()
{   int n,size,flag=0;
    cout<<"Enter the range of numbers : \n";
    cin>>size;
    cout<<"Enter exact number of divisors \n";
    cin>>n;

    cout<<"Numbers are : \n";
    for(int i=1;i<=size;i++)
    {   
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                
                flag=flag+1;
                if(flag==n)
                {
                    
                }
            }
        }
        if(flag==3)
        cout<<i<<endl;
        flag=0;
    
    }
    return 0;
}
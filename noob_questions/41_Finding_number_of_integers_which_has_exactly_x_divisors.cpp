// By Ashwani Kumar Rai
// Program to find number of integers which has exactly x divisors

#include<iostream>
using namespace std;

int main()
{   int size,flag=0;
    cout<<"Enter the range of numbers : \n";
    cin>>size;

    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<size;i++)
        {
            if(i%j==0)
            {
                cout<<j;
                flag=flag+1;
            }
        }
    }
    cout<<flag;
    return 0;
}
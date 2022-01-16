//  By Ashwani Kumar Rai
//  Program to find the Sum of Numbers in a given range

/*
Enter the lower limit: 5
Enter the upper limit: 7

The Sum of Natural Numbers from 5 to 7 is 18
*/

#include<iostream>
using namespace std;

int main()
{
    int upper,lower,sum=0;
    cout<<"Enter the lower Limit \n";
    cin>>lower;
    cout<<"Enter the upper Limit \n";
    cin>>upper;

    if(upper<lower)
    cout<<"Upper Number should be higher than lower \n";

    for(int i=lower;i<=upper;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of numbers of the given range is : "<<sum<<endl;
    

    return 0;
}

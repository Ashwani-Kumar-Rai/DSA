// By Ashwani Kumar Rai
// Program to find greates common divisor

// HCF and GCD are same

// By Ashwani Kumar Rai
// Program to Highest Common Factor of two numbers
//     GCD of 20 and 25 is 5

#include<iostream>
using namespace std;
int main()
{   int num1,num2,high,low;
    cout<<"Enter two numbers \n";
    cin>>num1>>num2;
    
    if(num1>=num2)
    {
        high=num1;
        low=num2;
    }    
    else
    {
        high=num2;
        low=num1;
    }    

    int gcd=0;
    for(int i=1;i<=high;i++)
    {
        if((num1%i==0)&&(num2%i==0))
        {
            if(i>=gcd)
            gcd=i;
        }
    }
    cout<<"GCD is : "<<gcd<<endl;
    return 0;
}
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

    int hcf=0;
    for(int i=1;i<=high;i++)
    {
        if((num1%i==0)&&(num2%i==0))
        {
            if(i>=hcf)
            hcf=i;
        }
    }
    cout<<"HCF is : "<<hcf<<endl;
    return 0;
}
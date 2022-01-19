// By Ashwani Kumar Rai
// Program to find the LCM of two numbers

// LCM (a , b) = (a*b) / hcf(a,b)

#include<iostream>
using namespace std;

int hcf(int num1 , int num2)
{   int high,low;

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
    return hcf;
 

}

int main()
{   int lcm=0,num1,num2,high,low,final_hcf;

    cout<<"Enter two numbers \n";
    cin>>num1>>num2;

    final_hcf=hcf(num1,num2);

    lcm=(num1*num2)/final_hcf;
    cout<<"LCM is : "<<lcm<<endl;

    return 0;

}

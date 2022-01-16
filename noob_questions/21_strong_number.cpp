// By Ashwani Kumar Rai
// Program to check whether a number is a Strong Number or not

/*
For Example:145

Sum of factorial of digits of number   = 1! + 4! + 5!=  145

Input: 145    Output :   145 is a Strong Number

*/
#include<iostream>
using namespace std;

int factorial(int rem)
{   int fact=1;
      for(int i=rem;i>0;i--)
    {
        fact=fact*i;
    }
    
    return fact;

}

int main()
{   int num,rem,fact,result=0;

    cout<<"Enter number : \n";
    cin>>num;
    int temp=num;
    while(num>0)
    {
        rem=num%10;
        fact=factorial(rem);
        result=result+fact;
        num=num/10;
    }
   
    if(temp==result)
    cout<<"Strong Number \n";
    else
    cout<<"Not a Strong Number \n";

    return 0;
}






/*

#include<iostream>
using namespace std;
int main(){

     int ip,sum=0;
        cout<<"Enter number to check: ";
            //user input
        cin>>ip;
        int save=ip;
        //logic to check for Strong Number starts
        while(ip)
        {
            int num=ip%10;
            int fact = 1;
            //finding factorial of each digit of input
            for(int i=num;i>0;i--)
            {
                fact=fact*i;
            }
            sum+=fact;
            ip/=10;
        }
        //checking for Strong Nunber
        if(sum==save)
        {
            cout<<save<<" is a Strong Number";
        }
        else
        {
            cout<<save<<" is not a Strong Number";
        }
    
    return 0;
}

*/
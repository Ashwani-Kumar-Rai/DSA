/*
For Example:145

Sum of factorial of digits of number   = 1! x 4! x 5!=  145
*/
// Input: 145    Output :   145 is a Strong Number

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
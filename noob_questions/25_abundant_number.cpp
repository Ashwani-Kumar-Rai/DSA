// By Ashwani Kumar Rai
// Program to check whether a number is a abundant Number or not

/*
is 12 an abundant number ?

    1*12=12
    2*6 =12
    2*4 =12
    divisors are :1,2,3,4
    1+2+3+4+6=16
    16>12
    12 is an Abundant number
*/
 
 //   Enter the number to check : 24
 //   24 is an Abundant number.

 #include<iostream>
 using namespace std;
 int main()
 {
     int num,sum=0;
     cout<<"Enter Number \n";
     cin>>num;
     int temp=num;
     for(int i=1;i<num;i++)
     {
         if(num%i==0)
         sum=sum+i;
     }

     if(sum>temp)
     cout<<"\nAbundant Number \n";

     else
     cout<<"\nNot an Abundant Number \n";
 }



























/*
#include<iostream>
using namespace std;
int main(){

       int  div, num, sum=0;
        cout << "Enter the number to check : ";
        //user input
        cin >> num;
        //loop to find the sum of divisors
        for (int i=1; i < num; i++)
        {
        div = num % i;
            if (div == 0)
            sum += i;
        }
        //checking for Abundant number
        if (sum > num)
            cout<< num <<" is an Abundant number.";
        else
            cout<< num <<" is not an Abundant number.";
    
    return 0;
}

*/
// By Ashwani Kumar Rai
// Program to check whether a number is a Harshad Number or not

/*
Eg 1 : 153

Sum of digits = 1 + 5 + 3= 9

153 is divisible by 9 so 153 is a Harshad Number.

*/
//Eg 2 : 41
// 71 is not a harshad number

#include<iostream>
using namespace std;
int main()
{   int num,rem,sum=0;
    cout<<"Enter number : ";
    cin>>num;
    
    int temp=num;
    
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    

    if(temp%sum==0)
    cout<<"Harshad Number\n";
    
    else
    cout<<"Not a Harshad Number\n";


    return 0;
}

























/*

#include<iostream>
using namespace std;
int main(){

      int num, sum = 0;
   cout << "Enter number: ";
   //user input
   cin >> num;

   int n = num;
   //loop to calculate the sum of digits

   while (num > 0)
   {
       int rem = num % 10;
       sum = sum + rem;
       num = num / 10;
   }
  //checking for harshad number
  if (n % sum == 0)
  {
       cout << n << " is a harshad number";
  }

  else
  {
      cout << n << " is not a harshad number";
  }
    
    return 0;
}

*/
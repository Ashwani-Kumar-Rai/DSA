/*
Eg: number =12345
Sum of digit of number=1+2+3+4+5
Ans= 15


*/

#include<iostream>
using namespace std;
int main(){
    int num,r=0,sum=0;
    cout<<"Enter the number\n";
    cin>>num;
    
    while(num>0)
    {
        r=num%10;  // % 10 gives remainder -> gives last digit 
        sum=sum+r; //this sum is storing the sum of last digit 
        num=num/10; //this eliminates the last digit ,coz int does not stores last digit
    }
    cout<<sum<<endl;
  


    
    return 0;
}
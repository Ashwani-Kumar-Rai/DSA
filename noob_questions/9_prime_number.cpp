//  By Ashwani Kumar Rai
// Program to find whether a number is prime or not

#include<iostream>
using namespace std;
int main(){
    int num,count=0;

    cout<<"Enter the number \n ";
    cin>>num;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        count++;
    }}

    if(count==0)
    cout<<"The number is Prime \n ";
    else
    cout<<"The number is not prime \n";

    
    return 0;
}

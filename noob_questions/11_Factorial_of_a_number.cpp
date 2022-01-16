//  By Ashwani Kumar Rai
// Program to find factorial of a number
/*
 Eg : 5!=5 x 4 x 3 x 2 x 1  =120
*/


#include<iostream>
using namespace std;

int main(){

    int num,fact=1;
    cout<<"Enter the number whose factorial you want \n";
    cin>>num;

    for(int i=num;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<" is :"<<fact<<endl;
    return 0;
}
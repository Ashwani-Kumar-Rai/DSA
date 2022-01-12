// PROGRAM TO FIND THE LARGEST AMOUNG THREE NUMBERS
// THIS CODE IS WRITTEN BY ASHWANI KUMAR RAI

#include<iostream>
using namespace std;

int main(){
    int n1 , n2 , n3 ;
    cout <<"ENTER THE THREE NUMBERS \n";
    cin>>n1>>n2>>n3;

    if(n1>n2 && n1>n3)
    {
        cout<<n1<<" IS THE LARGEST \n";
    }

    else if(n2>n1 && n2>n3)
    {
         cout<<n2<<" IS THE LARGEST \n";
    }

    else
    cout<<n3<<" IS THE LARGEST \n";

    return 0;


}
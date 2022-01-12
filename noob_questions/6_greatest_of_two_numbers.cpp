#include<iostream>
using namespace std;
int main(){
    
    int num1,num2;

    cout<<"Enter the two numbers :\n";
    cin>>num1>>num2;

    if(num1==num2)
    cout<<"Both are equal \n";

    else if(num1>num2)
    cout<<num1<<" is greater \n";

    else
    cout<<num2<<" is greater \n";
     
    return 0;
}
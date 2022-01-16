/*
5!=5 x 4 x 3 x 2 x 1

    =120
*/

#include<iostream>
using namespace std;
int main(){
    int i,num,sum=1;
    cout<<"Enter the number \n";
    cin>>num;

    while(num>0)
    {
        sum=sum*num;
        num--;
    }
    cout<<"factorial of given number is : "<<sum<<endl;
    
    return 0;
}
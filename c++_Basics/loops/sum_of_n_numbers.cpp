// PROGRAM TO FIND SUM OF N NUMBERS
// THIS CODE IS WRITTEN BY ASHWANI KUMAR RAI

#include<iostream>
using namespace std;
int main(){
    int sum,n,i;
    sum=0;

    cout<<"ENTER THE NUMBER TILL THE SUM YOU WANT TO FIND \n";
    cin>>n;

    for(i=1;i<=n;i++)
    sum=sum+i;

    cout<<"THE SUM OF "<<" 1 to "<<n<<" is  : "<<sum<<endl;
    return 0;
}
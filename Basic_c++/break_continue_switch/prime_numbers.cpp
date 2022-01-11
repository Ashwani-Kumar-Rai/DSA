#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the number \n";
    cin>>n;
    int flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag=1;
        break;
    }
    if(flag!=1)
    cout<<n<<" is a prime number \n";
    else 
    cout<<n<<" is a not prime number \n";

    return 0;
}
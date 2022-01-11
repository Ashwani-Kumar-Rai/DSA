#include<iostream>
using namespace std;
int main(){
    int ul,ll,sum=0;
    
    cout<<"Enter the lower limit \n";
    cin>>ll;

    cout<<"Enter the upper limit \n";
    cin>>ul;

    for(int i=ll;i<=ul;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum of number from "<<ll<<" to "<<ul<<" is  : "<<sum<<endl;

    
    
    return 0;
}
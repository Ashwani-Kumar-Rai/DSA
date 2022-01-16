// By Ashwani Kumar Rai
// Program to find the result of exponent
// 2^3=8 Base=2 Exponent=3 Result=8
#include<iostream>
using namespace std;
int main()
{
    int base,exp ,result=1;
    
    cout<<"Enter Base and exponent \n";
    cin>>base>>exp;
    
    for(int i=1;i<=exp;i++)
    {
        result=result*base;
    }
    cout<<result<<endl;
}




/*
int main(){
    int sum=1,base,exp;
    cout<<"Enter base and exponent";
    cin>>base>>exp;
    
    for(int i=1;i<=exp;i++)
    {
        sum=sum*base;
    }
    cout<<"Result is "<<sum<<endl;

    return 0;
}

*/
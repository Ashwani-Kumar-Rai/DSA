#include<iostream>
using namespace std;
int main(){
    int num;
    
    cout<<"Enter the number \n";
    cin>>num;

    if(num%2==0)
    {
        cout<<num<<" : Even "<<endl;
    }

    else
    {
        cout<<num<<" : Odd "<<endl;
    }    
    
    return 0;
}
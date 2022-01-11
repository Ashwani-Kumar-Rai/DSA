#include<iostream>
using namespace std;
int main(){
    int num;
    
    cout<<"Enter the number \n";
    cin>>num;

    if(num==0)
    {
        cout<<num<<" : zero "<<endl;
    }

    else if(num>0)
    {
        cout<<num<<" : positive "<<endl;
    }

    else
    {
        cout<<num<<" : Negative "<<endl;
    }    
    return 0;
}
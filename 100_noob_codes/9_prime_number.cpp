#include<iostream>
using namespace std;
int main(){
    int num,count=0;

    cout<<"Enter the number \n ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }    
    }

    if(count==2){
        cout<<num<<" is a prime number \n";
    }
    
    else{
        cout<<"\n Not a Prime number \n";
    }
    return 0;
}

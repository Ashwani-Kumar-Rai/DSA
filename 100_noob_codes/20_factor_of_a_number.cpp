/*
For Example: 21

Factors are: 1, 3, 7, 21
*/

#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the number whose factor you want :";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<endl;
        }   
    }
   
    
    
    return 0;
}
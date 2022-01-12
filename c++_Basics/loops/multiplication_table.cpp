// PROGRAM TO FIND MULTIPLICATION TABLE OF A GIVEN NUMBERS
// THIS CODE IS WRITTEN BY ASHWANI KUMAR RAI

#include<iostream>
using namespace std;

int main(){

    int i=1 ,number,result;
    cout<<"ENTER THE NUMBER WHOSE MULTIPLICATION TABLE YOU WANT \n";
    cin>>number;
    cout<<endl<<endl;

    while(i<=10)
    {
        cout<<number<<"  X  "<<i<<" = "<<i*number;
        cout<<endl;
        i++;
    }

    return 0;
}
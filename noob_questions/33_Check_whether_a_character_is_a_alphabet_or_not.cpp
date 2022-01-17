// By Ashwani Kumar Rai
// Program to check whether a character is alphabet or Not
// ASCII Value of a	= 97  ,  z = 122
// ASCII Value of A = 65  ,  Z = 90
#include<iostream>
using namespace std;

int main()
{   char ch;
    cout<<"Enter a character \n";
     cin>>ch;
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        cout<<" Alphabet\n";
    }
    else
    {
        cout<<"Not an Alphabet\n";
    }
    return 0;
}
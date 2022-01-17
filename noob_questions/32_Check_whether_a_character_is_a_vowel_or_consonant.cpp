// By Ashwani Kumar Rai
// Program to check whether a character is vowel or consonant

#include<iostream>
using namespace std;

int main()
{   char c;
    cout<<"Enter a character \n";
    cin>>c;

    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    cout<<"Vowel\n";
    else
    cout<<"Consonant\n";
    return 0;
}
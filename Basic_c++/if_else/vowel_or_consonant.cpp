// PROGRAM TO FIND WHETHER AN ALPHABET IS VOWEL OR CONSONANT
// THIS CODE IS WRITTEN BY ASHWANI KUMAR RAI

#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"ENTER THE ALPHABET \n";
    cin>>n;

    if((n == 'A') || (n == 'E') || (n == 'I') || (n == 'O') || (n == 'U') || (n == 'a') || (n == 'e') || (n == 'i') || (n == 'o') || (n == 'u') )
    cout<<"THIS IS A VOWEL \n";

    else 
    cout<<"THIS IS A CONSONANT \n";

    return 0;
}
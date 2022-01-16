//  By Ashwani Kumar Rai
// Program to check palindrome or not
// 121 on reversing we get 121 so it is a palindrome


#include<iostream>
using namespace std;
int main()
{
    int num,store,reverse=0,rem;
    cout<<"Enter the number : ";
    cin>>num;
    store=num;

    while(num>0)
    {
        rem=num%10; //to get the last digit
        reverse=(reverse*10)+rem; // to construct each digit of reverse
        num=num/10; // to eliminate last digit
    }
    if(store==reverse)
    cout<<"The number is Palindrome "<<endl;
    else
    cout<<"The number is Not a Palindrome "<<endl;

    return 0;
}














/*
#include<iostream>
using namespace std;
int main(){

    int num,rem=0,sum=0,store;
    cout<<"Enter the number\n";
    cin>>num;
    store=num;
    
    while(num>0)
    {
        rem=num%10;      // % 10 gives remainder -> gives last digit 
        sum=sum*10+rem; //remainder constructs the reverse
        num=num/10;    //this eliminates the last digit ,coz int does not stores last digit
    }
    
    if(store==sum){
        cout<<"Palindrome Number \n";
    }
    else
    cout<<"Not a Palindrome Number \n";

  
    
    return 0;
}

*/
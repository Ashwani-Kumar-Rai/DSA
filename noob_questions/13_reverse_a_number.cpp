// By Ashwani Kumar Rai
// Program to find the reverse of a number
#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0,rem;
    cout<<"Enter the number : ";
    cin>>num;

    while(num>0)
    {
        rem=num%10; //to get the last digit
        reverse=(reverse*10)+rem; // to construct each digit of reverse
        num=num/10; // to eliminate last digit
    }
    cout<<"The reverse of the number is :"<<reverse<<endl;
    return 0;
}
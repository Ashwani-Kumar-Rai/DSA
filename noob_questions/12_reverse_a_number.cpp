/*
Enter a number:345
Reversed Number:543
*/

#include<iostream>
using namespace std;
int main(){

    int num,rem=0,sum=0;
    cout<<"Enter the number\n";
    cin>>num;
    
    while(num>0)
    {
        rem=num%10;      // % 10 gives remainder -> gives last digit 
        sum=sum*10+rem; //remainder constructs the reverse
        num=num/10;    //this eliminates the last digit ,coz int does not stores last digit
    }

    /*
    value of sum for 1234 after every iteration
    0  
    4
    43
    432
    4321

    */

    cout<<"reverse is : "<<sum<<endl;
    
    return 0;
}
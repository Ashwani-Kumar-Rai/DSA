//  By Ashwani Kumar Rai
// Program to find sum of digits
/*
Eg: number =12345
Sum of digit of number=1+2+3+4+5
Ans= 15
*/

#include<iostream>
using namespace std;
int main(){
    int rem,num,sum=0;

    cout<<"Enter the Number \n";
    cin>>num;

    while(num>0)
    {
        rem=num%10; //  mod 10 gives last digit
        sum=sum+rem; // we are storing sum of last digits
        num=num/10;  // we are removing last digit
                    
    }
    cout<<"Sum of digits is : "<<sum<<endl;
    return 0;

}



















/*
#include<iostream>
using namespace std;
int main(){
    int num,r=0,sum=0;
    cout<<"Enter the number\n";
    cin>>num;
    
    while(num>0)
    {
        r=num%10;  // % 10 gives remainder -> gives last digit 
        sum=sum+r; //this sum is storing the sum of last digit 
        num=num/10; //this eliminates the last digit ,coz int does not stores last digit
    }
    cout<<sum<<endl;
  


    
    return 0;
}






*/












/*
Enter a number:345
Reversed Number:543


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

    
    value of sum for 1234 after every iteration
    0  
    4
    43
    432
    4321

    

    cout<<"reverse is : "<<sum<<endl;
    
    return 0;
}

*/
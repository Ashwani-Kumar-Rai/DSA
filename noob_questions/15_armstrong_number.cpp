//By Ashwani Kumar Rai
// Program to check Armstrong number or not

//153 = (1*1*1)+(5*5*5)+(3*3*3)  
// 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

#include<iostream>
using namespace std;

int main()
{   
    int num,rem=0,sum=0,store;
    cout<<"Enter the number\n";
    cin>>num;
    store=num;
    
    while(num>0)
    {
        rem=num%10;
        rem=rem*rem*rem;
        sum=sum+rem;
        num=num/10;
    }
    
    if(sum==store)
    cout<<"\n Armstrong \n";
    else
    cout<<"\n Not Armstrong \n";
    return 0;
    
}














/*

#include<iostream>
using namespace std;
int main(){
    int num,r=0,sum=0,c,store;
    cout<<"Enter the number\n";
    cin>>num;
    store=num;
    
    
    while(num>0)
    {
        r=num%10;  // % 10 gives remainder -> gives last digit 
        c=r*r*r;   //calculating the cube of last digit
        sum=sum+c; //this sum is storing the cube of last digit 
        num=num/10; //this eliminates the last digit ,coz int does not stores last digit
    }

    if(store==sum)
    cout<<"Armstrong"<<endl;

    else
    cout<<"Not Armstrong"<<endl;
  
    return 0;
}

*/
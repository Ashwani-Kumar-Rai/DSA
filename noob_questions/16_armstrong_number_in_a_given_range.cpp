//By Ashwani Kumar Rai
// Program to check Armstrong number in a given range
#include<iostream>
using namespace std;

void armstrong(int num)
{   int rem=0,sum=0,store;
     store=num;
    
    while(num>0)
    {
        rem=num%10;
        rem=rem*rem*rem;
        sum=sum+rem;
        num=num/10;
    }
    
    if(sum==store)
    cout<<store<<endl;

}


int main(){

    int num ,lower,upper;
    cout<<"Enter the lower and upper limit of range : \n";
    cin>>lower>>upper;
    
    for(int i=lower;i<=upper;i++)
    {
        armstrong(i);
    }

    return 0;
    
}











/*
void armstrong(int num)
{
    int r=0,sum=0,c,store=num;

    while(num>0)
    {
        
        r=num%10;  // % 10 gives remainder -> gives last digit 
        c=r*r*r;   //calculating the cube of last digit
        sum=sum+c; //this sum is storing the cube of last digit 
        num=num/10; //this eliminates the last digit ,coz int does not stores last digit
    }

    if(store==sum)
    cout<<"\n"<<sum<<endl;

}

int main(){
    
    int ul,ll,num;
    cout<<"Enter the range\n";
    cin>>ll>>ul;

    for(int i=ll;i<=ul;i++)
    {
        armstrong(i);
    }

    return 0;
}

 
    
    */
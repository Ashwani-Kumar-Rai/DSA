#include<iostream>
using namespace std;

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

 
    
    
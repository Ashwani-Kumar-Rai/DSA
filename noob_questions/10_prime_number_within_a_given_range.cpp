//  By Ashwani Kumar Rai
// Program to find prime numbers within a  given range

/* Eg :  range: 1 to 20
Prime numbers between 1 and 20 are:
2 3 5 7 11 13 17 19
*/


#include<iostream>
using namespace std;

void prime(int num)
{   
    int count=0;
   
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }

    if(count==2)
    cout<<num<<endl;
    

}

int main()
{
    int lower,upper,num;
    cout<<"Enter the range \n";
    cin>>lower>>upper;
    cout<<endl;

    for(int i=lower;i<=upper;i++)
    {
        prime(i);
    }
        

    return 0;
}

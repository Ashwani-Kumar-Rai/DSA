// By Ashwani Kumar Rai
// Program to check whether two numbers are Friendly Pair

/*

Friendly Pair(Amicable number) or Not

For:220 
divisors : 1,2,4,5,10,11,20,22,44,55 and 110 
sum : 284

for: 284
divisors : 1,2,4,71 and 142
sum : 220

220 and 284 are amicable number (sum of divisors is equal to the other number)
*/

//    Enter first number : 220
//    Enter second number : 284
//    Fiendly Pair(220,284)

#include<iostream>
using namespace std;

int divisor_sum(int num)
{   int sum=0;
    
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }

    return sum;
}

int main()
{
    int num1,num2,res1,res2;
    cout<<"Enter the two numbers \n";
    cin>>num1>>num2;

    res1=divisor_sum(num1);
    res2=divisor_sum(num2);
    
    if((res1==num2)&&(res2==num1))
    cout<<" Friendly Pair \n ";
    else
    cout<<" Not Friendly Pair \n";
    
    return 0;
}










/*

#include<iostream>
using namespace std;

  void findAmicable(int first, int second)
    {
        int sum1=0,sum2=0;
        for(int i=1; i<=first/2 ; i++)
        {
            //finding and adding divisors of first number
            if(first%i==0)
                sum1=sum1+i;
        }
        for(int i=1; i<=second/2 ; i++)
        {
            //finding and adding divisors of second number
            if(second%i==0)
                sum2=sum2+i;
        }
        //ckecking for friendly pair
        if(first==sum2 && second==sum1)
            cout<<"Fiendly Pair("<<first<<","<<second<<")"<<endl;
        else
            cout<<"Not a Fiendly Pair";
    }


int main(){

    int first,second;
        cout<<"Enter first number : ";
        //user input
        cin>>first;
        cout<<"Enter second number : ";
        //user input
        cin>>second;
        //calling function
        findAmicable(first,second);
    
    return 0;
}


*/



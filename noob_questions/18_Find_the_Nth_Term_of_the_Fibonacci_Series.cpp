//By Ashwani Kumar Rai
// Program to find the nth term of fibonacci seriese
/*
Example 1:
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

*/
// First 10 terms of Fibonacci series are :- 
//    0 1 1 2 3 5 8 13 21 34


#include<iostream>
using namespace std;

 
int fibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }
       
    return fibonacci(num-1) + fibonacci(num-2);
}
 
int main ()
{
    int num;
    cout<<"Enter the number \n";
    cin>>num;
    cout << "The "<<num<<"th term of series is : "<<fibonacci(num)<<endl;
    return 0;
}








/*
#include<iostream>
using namespace std;
int main(){
    int i,num,sum=1;
    cout<<"Enter the number \n";
    cin>>num;

    while(num>0)
    {
        sum=sum*num;
        num--;
    }
    cout<<"factorial of given number is : "<<sum<<endl;
    
    return 0;
}

*/
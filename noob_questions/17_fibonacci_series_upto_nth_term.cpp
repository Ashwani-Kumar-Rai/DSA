//By Ashwani Kumar Rai
// Program to print fibonacci series upto nth term

/*
    Enter the limit of Fibonacci series
    10
    First 10 terms of Fibonacci series are :- 
    0 1 1 2 3 5 8 13 21 34
*/

#include<iostream>
using namespace std;
int main()
{   
    int num,sum; 
    cout<<"Enter the number till you want series \n";
    cin>>num;

    int first=0;
    int second=1;
    
    cout<<first<<endl;
    cout<<second<<endl;
    for(int i=3;i<=num;i++)
    {
        sum=first+second;
        first=second;
        second=sum;
        cout<<sum<<endl;
    }
    
    
    return 0;
}




















/*

#include<iostream>
using namespace std;
int main(){
    
    int limit, first=0, second=1, third, num;
   cout <<"Enter the limit :"<<endl;  
   cin >> num; 
   cout << "Fibonacci series upto "<<num<<" : "<<endl;
  
   for(int i=0;i<num;i++)
   {
        if (i <= 1)
           third = i;
        else
        {
             third = first + second;
             first = second;
             second = third;
         }
    cout<<third<<endl;
   }

    return 0;
}



*/
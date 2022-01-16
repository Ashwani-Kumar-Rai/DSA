// By Ashwani Kumar Rai
// Program to check whether a number is a Perfect Number or not
/*
For Example: 28

Sum of divisors = 1 + 2 + 4 + 7 + 14 = 28
*/

//Enter the number to check : 28
//28 is a perfect number.

#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    
    cout<<"Enter number : ";
    cin>>num;

    int temp=num;

    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;
       
    }
    
    if(temp==sum)
    cout<<"\n Perfect Number \n";

    else
    cout<<"\n Not a Perfect Number \n";

    return 0;
}










/*
#include<iostream>
using namespace std;
int main(){

    int  div, num, sum=0;
        cout << "Enter the number to check : ";
        //user input
        cin >> num;
        //loop to find the sum of divisors
        for(int i=1; i < num; i++)
        {
            div = num % i;
            if(div == 0)
            sum += i;
        }
        //checking for perfect number
        if (sum == num)
            cout<< num <<" is a perfect number.";
        else
            cout<< num <<" is not a perfect number.";
    
    return 0;
}

*/

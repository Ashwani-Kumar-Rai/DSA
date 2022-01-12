/*
Enter number : 8
Where first 8 number is 1,2,3,4,5,6,7,8
Sum of numbers = 1+2+3+4+5+6+7+8 = 36
*/

#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    
    cout<<"Enter the number \n";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<"sum is : "<<sum<<endl;

    
    
    return 0;
}
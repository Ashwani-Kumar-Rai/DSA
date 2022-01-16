// By Ashwani Kumar Rai
// Sum of N natural number

/*
Enter number : 8
Where first 8 number is 1,2,3,4,5,6,7,8
Sum of numbers = 1+2+3+4+5+6+7+8 = 36
*/

#include<iostream>
using namespace std;
int main(){

     int size,sum=0;

    cout<<"Enter the size of the array \n";
    cin>>size;

    cout<<"Enter the elements of the array \n";
    for(int i=1;i<=size;i++)
    {
       sum=sum+i;
    }
    cout<<"sum till "<<size<<" is : "<<sum<<endl;
    
    return 0;
}
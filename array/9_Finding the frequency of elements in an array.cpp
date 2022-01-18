// By Ashwani Kumar Rai
// Find the sum of elements in an array

#include<iostream>
using namespace std;
int main()
{
    int size,sum=0;
    cout<<"Enter the size of the array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter elements \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    
    }
    
    for(int i=0;i<size;i++)
    {   
        sum=sum+arr[i];
    }
    cout<<"The sum of  element in the arrray is : "<<sum<<endl;
        
   return 0;
}
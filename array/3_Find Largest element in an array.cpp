// By Ashwani Kumar Rai
// Find the largest element in an array

#include<iostream>
using namespace std;
int main()
{
    int size,largest=0;
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
        if(arr[i]>=largest)
        largest=arr[i];
    }
    cout<<"The largest element in the arrray is : "<<largest<<endl;
    
    return 0;
}
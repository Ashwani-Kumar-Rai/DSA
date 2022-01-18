// By Ashwani Kumar Rai
// Find the reverse of an array

#include<iostream>
using namespace std;
int main()
{
    int size,low,high,temp;
    cout<<"Enter the size of the array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter elements \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    
    }

    low=0;
    high=size-1;
    
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    
     for(int i=0;i<size;i++)
    {
       cout<<arr[i];
    
    }
    cout<<endl;
   return 0;
}
#include<iostream>
using namespace std;
int main()
{   int size,temp;
    cout<<"Enter array size\n";
    cin>>size;
    int arr[size];

    cout<<"Enter Array Elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }    

    for(int i=0;i<size;i++)
    {
        for(int j=1;j<size;j++)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }        
        }    
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }    
    cout<<endl;
    return 0;
}
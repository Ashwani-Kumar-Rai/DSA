// By Ashwani Kumar Rai
// Find the frequency of every elements in an array

#include<iostream>
using namespace std;
int main()
{
    int flag=0,size,frequency;
    cout<<"Enter the size of the array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter elements \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    
    }
    for(int i=1;i<=size;i++)
    {
          for(int j=1;j<=size;j++)
          {
              if(arr[i]==arr[j])
              {
                  flag=flag+1;
              }
          }  
          cout<<i<<" occurs : "<<flag<<" number of times"<<endl;

    }

    return 0;
}
#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number of elements : \n";
    cin>>n;
    int arr[n];
    
    cout<<"Enter the Array Elements \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    int minNo=INT_MAX; 

    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);

    }
    cout<<"Max element is : "<<maxNo<<" \t Min element is : "<<minNo<<endl;
   return 0; 
}


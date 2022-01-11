#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements \n";
    cin>>n;

    cout<<"Enter the elements :\n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<"The sorted array is \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}

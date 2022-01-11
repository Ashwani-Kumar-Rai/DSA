#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n ,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    cout<<"Enter the number of elemets \n";
    int n;
    cin>>n;

    cout<<"Enter the array elements \n";    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the elemet to search for : \n";
    int key;
    cin>>key;

    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
}
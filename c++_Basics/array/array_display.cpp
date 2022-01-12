#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements \n";
    cin>>n;
    int array[n];    

    cout<<"\nEnter the elements of the array \n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"\nElements are : \n";
    for(int i=0;i<n;i++){
        cout<<array[i];
        cout<<"\t";
    }
    return 0;
}
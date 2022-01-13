
#include<iostream>
#include<array>
using namespace std;
int main()
{ 
    // array declaration
    int basic[3]={1,2,3};

    //syntax array jiska type int hai size 4 array name is a
    array<int,4> a={1,2,3,4}; 
    // same as above both are static thus we dont use much .
    
    
    int size=a.size();
    // size means how many elements are there

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }

    // It gives second element of a array
    cout<<"Element at second index : "<<a.at(2)<<endl;  

    // Is my array is empty 0->false 1->true
    cout<<"Empty or not : "<<a.empty()<<endl;

    // It gives the first element of my array 
    cout<<"First element of my array : "<<a.front()<<endl;

      // It gives the last element of my array 
    cout<<"Last element of my array : "<<a.back()<<endl;
}

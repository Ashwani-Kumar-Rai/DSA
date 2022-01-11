#include<iostream>
using namespace std;
int main(){
    
    int first,second,third;

    cout<<"Enter three numbers \n";
    cin>>first>>second>>third;

    if(first >= second && first >= third)
    cout<<first<<" is greatest \n";

    else if (second >= first && second >= third)
    cout<<second<<" is greatest \n";

    else
    cout<<third<<" is greatest \n ";

    return 0;
}
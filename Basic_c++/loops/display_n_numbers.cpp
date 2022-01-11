#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"ENTER THE NUMBER TILL YOU WANT TO DISPLAY \n";
    cin>>n;
    
    i=1;
    do{
        cout<<i<<"\t";
        if(i%10==0)
        cout<<endl;
        i++;
    }
    while(i<=n);

    return 0;
}
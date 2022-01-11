#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter a number :\n";
    cin>>n;

    bool flag=0;
    /* Less efficient method
       
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non-prime"<<endl;
            flag=1;
            break;
        }
    }
    */

   //More efficient method
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Non-prime"<<endl;
            flag=1;
            break;
        }
    }


    if(flag==0){
        cout<<"Prime";
    }    

    return 0;
 
}
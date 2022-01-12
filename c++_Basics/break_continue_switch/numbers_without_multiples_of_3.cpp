/*
Flow control statements are used to control the flow of the loop.

Continue : Skips to the next iteration of the loop

Break : Terminate the loop
*/

#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<100;i++)
    {
        if(i%3==0)
        continue;
        cout<<i<<endl;

    }
   
}
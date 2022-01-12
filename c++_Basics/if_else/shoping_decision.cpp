// PROGRAM TO MAKE DECISION AS PER CONDITION

/*
1.Ask BUdget from user 
if Budget >100 go for shoping to mall
if BUdget >200 buy an apple

if Budget <100 go for local store
if Budget <50 buy a MANGO

output : What you have done as per budget
*/

// THIS CODE IS WRITTEN BY ASHWANI KUMAR RAI

#include<iostream>
using namespace std;

int main(){
    int budget;

    cout<<"ENTER THE BUDGET \n";
    cin>>budget;
    cout<<"MY BUDGET IS "<<budget<<endl;

    if(budget >100)
    {
        cout<<"I AM GOING TO MALL \n";
        
        if(budget>200)
        cout<<"I AM BUYING AN APPLE \n";

        else
        cout<<"I AM NOT BUYING AN APPLE \n";

    }

    else
    {   cout<<"I AM GOING TO A LOCAL STORE \n";

        if(budget<50)
        cout<<"I AM BUYING MANGO \n";

        else
        cout<<"I AM NOT BUYING MANGO \n";
    }


    return 0;
}


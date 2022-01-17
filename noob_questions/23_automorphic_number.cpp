// By Ashwani Kumar Rai
// Program to check whether a number is a Automorphic Number or not

/*
Example: 25
Square of 25 = 625
The last digits of square equals to the number,  25 is an Automorphic number.
*/

//Enter a positive number to check: 25
//25 is an Automorphic number.

int check_for_automorphic(int num)
{   int sq;
    sq = num*num;
    while(num>0)
    {
        if(num%10 ==sq%10)
        {
            return true;
        }
        num=num/10;
        sq=sq/10;
    }
    return false;
}

#include<iostream>
using namespace std;
int main()
{   
    int num;
    cout<<"Enter the number \n";
    cin>>num;
    bool result=check_for_automorphic(num);

    if(result==1)
    cout<<" Automorphic \n";
    else
    cout<<" Not automorphic \n";

    return 0;
}





















/*
#include<iostream>
using namespace std;
int main(){

    
    int num,flag=0;
        cout<<"Enter a positive number to check: ";
        //user input
        cin>>num;
        int sq= num*num;
        int store=num;
        //check for automorphic number
        while(num>0)
        {
            if(num%10!=sq%10)
            {    
                        flag=1;
                        break;
                    }
            num=num/10;
            sq=sq/10;
        }
        if(flag==1)
            cout<<store<<" is not an Automorphic number.";
        else
            cout<<store<<" is an Automorphic number.";

    return 0;
}

*/
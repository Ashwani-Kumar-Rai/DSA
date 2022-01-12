#include<iostream>
using namespace std;

void prime(int num)
{
    int count=0;

for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }    
    }

    if(count==2){
        cout<<num<<endl;
    }

}

int main(){
    int ul,ll,num;

    cout<<"Enter the upper and lower limit \n ";
    cin>>ll>>ul;

    for(int i=ll;i<=ul;i++)
    {
        prime(i);
    }

    return 0;
}

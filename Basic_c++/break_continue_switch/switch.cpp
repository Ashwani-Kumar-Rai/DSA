#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    char operation;
    cout<<"Enter two Numbers\n";
    cin>>num1>>num2;
    cout<<"Enter the operation that you want to perform \n";
    cin>>operation;
   
    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            
            cout << "Invalid Input";
            break;
    }

 return 0;
}
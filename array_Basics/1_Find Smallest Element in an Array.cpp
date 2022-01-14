#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter elements of array : " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    int smallest = arr[0];   // initialize smallest to arr[0]
    for(int i=1; i<size; i++)  
    {
        if(arr[i]<smallest)   // compare current element with smallest
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest Element in the array : " << endl << smallest;  // display result
    return 0;
}
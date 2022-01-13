// Algo: in STL
//Note : Binary search will only work with sorted array

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
  
  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  //searching for element 6 
  cout<<"Finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;

  cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
  cout<<"Uppper bound-> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

  int a =3;
  int b =5;

  cout<<"max -> "<<max(a,b); //output 5

  cout<<"min -> "<<min(a,b); //output 3

  swap(a,b);
  cout<<endl<<"a-> "<<a<<endl; // after swapping a is 5

  string abcd = "abcd";
  reverse(abcd.begin(),abcd.end());
  cout<<"string-> "<<abcd<<endl; // output : dcba

  rotate(v.begin(),v.begin()+1,v.end());//after rotating 3671
  cout<<"after rotate"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }

  sort(v.begin(),v.end()); //after sorting 13
  cout<<"after sorting"<<endl;
  
  for(int i:v){
    cout<<i<<" ";

  }
    cout<<endl;

}

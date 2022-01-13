//Vector : is same as array except ,size can increase and decrease dynamically
// when size gets full , vectory add 100% of new size and then copies everything in new vector.
// crux: whenever vector gets full size doubles.
//It is very very use full

#include <iostream>
#include<vector> //library for vector
using namespace std;
int main() {
  
  vector<int> v; // new vector of int type named v ,initially size is 0
  //size means how many elements are there
  //capacity means kitne element k liye memory assign hua pada hai
  

  
  //if we already know : kitna size ka vector banana hain
  // it means vector int type ka size 5 hai , aur sare element ko 1 se initialize krdo
  // agar 1 mention nahi kroge to wo by-default zero se initialize krdega 
  vector<int> a(5,1);


  // here last vector is created ,jisme a k sare elements aagaye hain
  vector<int> last(a);
  
   cout<<"print last"<<endl;
  for(int i:last) {
    cout<<i<<" ";
  }
  
  

  cout<<"\n Capacity-> "<<v.capacity()<<endl;

  //push_back(); is used to insert an element | (1) means 1 insert kiya hain
  v.push_back(1);
  cout<<"Capacity-> "<<v.capacity()<<endl;

  v.push_back(2);
  cout<<"Capacity-> "<<v.capacity()<<endl;

  v.push_back(3);
  cout<<"Capacity-> "<<v.capacity()<<endl;
  cout<<"Size-> "<<v.size()<<endl;

  cout<<"Elemetn at 2nd Index" <<v.at(2)<<endl;

  //front gives first element ,back gives last element 
  cout<<"front " <<v.front()<<endl;
  cout<<"back " <<v.back()<<endl;

//Displays all elements
  cout<<"Before pop : All elements are : "<<endl;
  
  for(int i:v) {
    cout<<i<<" ";
  }
  cout<<endl;

  //pop_back(); is used to delete element from the last
  v.pop_back();

  
  //Displays all elements
  cout<<"After pop : All elements are  : "<<endl;
  
  for(int i:v) {
    cout<<i<<" ";
  }

  
  
  // clear(); deletes all the element in the list
  // after clear size gets zero but capacity does not gets zero

  cout<<"before clear size "<<v.size()<<endl;
  v.clear();
  cout<<"after clear size "<<v.size()<<endl;

}

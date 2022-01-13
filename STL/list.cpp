// List: list is implemented using double linked list
// We can't do direct access in list ,unlike array and vector ,we need to travel to that;

#include <iostream>
#include<list>

using namespace std;
int main() {

  //created a list named l of type int. 
  list<int> l;

  //empty list l copy hojayegi n me
  list<int> n(l);
  
  // list is initialized with 5 element each having 500 as a value
  list<int> n(5,100);
  
  cout<<"Printing n"<<endl;
  for(int i:n) {
    cout<<i<<" ";
  }cout<<endl;
  
  //element inserted at front
  l.push_back(1);

    //element inserted at back
  l.push_front(2);

  for(int i:l) {
    cout<<i<<" ";
  }
  
  cout<<endl;

  
//paramenter jis bhe element ko point krra hoga wo delete hojayega
  l.erase(l.begin());
  
  cout<<"after erase"<<endl;
  for(int i:l) {
    cout<<i<<" ";
  }

// It gives no of elements
  cout<<"size of list"<<l.size()<<endl;
}

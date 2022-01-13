// Set: always stores unique element  
// iske implementation BST use krke hote hain
// only insertion and deletion is possible ->NOT MODIFICATION
//Elements are returned in sorted order


//unordered set
//faster compared to ordered set
//elements are returned in random order and not in sorted order 

#include <iostream>
#include<set>

using namespace std;
int main() {
  // a set of integer is created named s
  set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(1);
  s.insert(6);
  s.insert(6);
  s.insert(0);
  s.insert(0);
  s.insert(0);


  //output : 0156 Note : repeated elemets are not inserted in set
  for(auto i : s) {
    cout<<i<<endl;
  }
  
  cout<<endl;

  set<int>::iterator it = s.begin();
  it++;

  s.erase(it);

  for(auto i : s) {
    cout<<i<<endl;
  }

cout<<endl;

cout<<"-5 is present or not -> "<<s.count(-5)<<endl; //output : 0 (Not present)

set<int>::iterator itr = s.find(5);

for(auto it=itr;it!=s.end();it++) {
  cout<<*it<<" ";
}cout<<endl;

}

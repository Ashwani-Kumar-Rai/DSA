// Deque: Doubly ended queue -> we can insert and delete from both starting and end 
#include <iostream>
#include<deque>

using namespace std;
int main() {
  
  // deque of name d is created of type int
  deque<int> d;

// to inset elements from the back
d.push_back(1);

// to inset elements from the back
d.push_front(2);


//to delete element from the front
// d.pop_front();

cout<<endl;


//print the element at 1st index
cout<<"Print First INdex Element-> "<<d.at(1)<<endl;

//print the 1st element
cout<<"front "<<d.front()<<endl;

//print the 1st element
cout<<"back "<<d.back()<<endl;

 // Is my dqueue is empty 0->false 1->true
cout<<"Empty or not" <<d.empty()<<endl;

//after erase size becomes zero ,but max_size jo starting me hote hai wahi ending me hote hain
cout<<"before erase" <<d.size()<<endl;

//we need to specify kaha se kaha tak delete krna hai
d.erase(d.begin(),d.begin()+1);

cout<<"after erase" <<d.size()<<endl;
for(int i:d){
  cout<<i<<endl;
}

}

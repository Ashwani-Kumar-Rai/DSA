
// Priority Queue: is a queue  in which first element is the greatest
// Default priority queue is a max heap
//max heap ->each nodes is greater or equals to its children
//min heap ->each nodes is less or equals to its children

#include <iostream>
#include<queue>

using namespace std;
int main() {
  //max heap
  priority_queue<int> maxi;

  //to make it min - heap
  priority_queue<int,vector<int> , greater<int> > mini;

  maxi.push(1);
  maxi.push(3);
  maxi.push(2);
  maxi.push(0);

  cout<<"size-> "<<maxi.size()<<endl;
  
  int n = maxi.size();

  
  for(int i=0;i<n;i++) {
    cout<<maxi.top()<<" "; // 3210 
    maxi.pop();
  }
  
  cout<<endl;

  mini.push(5);
  mini.push(1);
  mini.push(0);
  mini.push(4);
  mini.push(3);

  int m = mini.size();
  for(int i=0;i<m;i++) {
    cout<<mini.top()<<" "; //01345
    mini.pop();
  }cout<<endl;


cout<<"Is empty "<<mini.empty()<<endl; // output : 1 
//coz we had already popped everything


}


// Queue:

#include <iostream>
#include<queue>

using namespace std;
int main() {
  
  //we have created a queue named q of type string which is empty currently 
  queue<string> q;

  q.push("Ashwani");
  q.push("Kumar");
  q.push("Rai");

  cout<<"Size before pop" <<q.size()<<endl;
  

  //First element is Ashwani
  cout<<"First Element "<<q.front()<<endl;

  //Ashwan is poped 
  q.pop();
  
  //We have first element as kumar 
  cout<<"First Element "<<q.front()<<endl;

  //size is 2 coz we have removed one element
  cout<<"Size after pop" <<q.size()<<endl;

}

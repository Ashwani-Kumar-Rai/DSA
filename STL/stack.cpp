
// Stack:

#include <iostream>
#include<stack>

using namespace std;
int main() {

  //stack named s is created of type string
  stack<string> s;

  s.push("Ashwani");
  s.push("Kumar");
  s.push("Rai");


  // Output : Rai coz rai is inserted first
  cout<<"Top Element-> "<<s.top()<<endl;

  //we have removed rai from from stack
  s.pop();

  // after removing rai we have kumar at the top
  cout<<"Top Element-> "<<s.top()<<endl;

  //size is 2 coz we have removed rai (remaining : kumar ashwani )
  cout<<"size of stack"<<s.size()<<endl;

  //output is 0 coz our stack is not empty
  cout<<"Empty or not "<<s.empty()<<endl;

}


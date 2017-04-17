#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int i=43;
  const int &r1 = i; //allow const int& bind to a no const int variable
  int &r2 = i;//reference is alias of a object that already exist,not a object!!
  r2 = 0;
  int &r3=r2;//r3 bind to the object that r2 bind!
  //r1 = 9;  error: assignment of read-only reference ‘r1’!
  cout<<" r1 is :"<<r1<<endl;
  cout<<" r2 is :"<<r2<<endl;
  cout<<" r3 is :"<<r3<<endl;
  cout<<" i is :"<<i<<endl;


  return 0;
}

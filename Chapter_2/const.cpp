#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int i=43;
  const int &r1 = i;
  int &r2 = i;
  r2 = 0;
  //r1 = 9;  error: assignment of read-only reference ‘r1’!
  cout<<" r1 is :"<<r1<<endl;
  cout<<" r2 is :"<<r2<<endl;
  cout<<" i is :"<<i<<endl;

  return 0;
}

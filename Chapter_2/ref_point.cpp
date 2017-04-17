#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int i=42;
  int *p;
  int *&r = p;//reference of point,understand it from right to left

  r=&i;
  *r=0;
  cout<<"i = "<<i<<endl;
  cout<<"*p = "<<*p<<endl;
  cout<<"*r = "<<*r<<endl;
  cout<<"&i = "<<&i<<endl;

  return 0;
}

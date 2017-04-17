#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a = 10;
  int b =20;
  int *const p1 = &a;//const pointer

  cout <<"p1 is: "<<p1<<endl;
  cout <<"*p1 is: "<<*p1<<endl;
  *p1 = b;// you can change the value by *
  //two operations below are not allowed!!!
  //p1++;    error: increment of read-only variable ‘p1’
  //p1= &b;   error: assignment of read-only variable ‘p1’
  cout <<"p1 is: "<<p1<<endl;
  cout <<"*p1 is: "<<*p1<<endl;

    return 0;
  }

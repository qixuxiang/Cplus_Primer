#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  const int *p1; //point to const,you cannot change the value of the value that pointer point to
  int a = 10;
  //int b=20;
  p1= &a;
  //*p = 11; wrong!!!
  cout <<"p1 is: "<<p1<<endl;
  cout <<"*p1 is: "<<*p1<<endl;
  p1++;//correct but dangerous operation!!!
  //result blow is uncertain,it depend on your PC 's OS and architecture
  //if you define b in line 8,the result of *p1 blow is 20!
  cout <<"p1 is: "<<p1<<endl;
  cout <<"*p1 is: "<<*p1<<endl;
  //but if you define b in line 21,the result of *p1 above is 0!

  int const *p2;//point to const,you cannot change the value of the value that pointer point to
  int b=20;
  p2 = &a;
  cout <<"p2 is: "<<p2<<endl;
  cout <<"*p2 is: "<<*p2<<endl;
  p2 = &b;
  cout <<"p2 is: "<<p2<<endl;
  cout <<"*p2 is: "<<*p2<<endl;

  /*

  summary:
  pointer to const:
  1. int const *p
  2.const int *p
  if you define a pointer to const ,you cannot change the value that pointer point to by *p,
  *p is forbidden!!!
  But you can change which object pointer want to point,that is ,p++ and p = &another_obj is allowed!

  */

    return 0;
  }

#include <iostream>       // cout
#include <atomic>         // atomic
#include <thread>         // thread
#include <vector>         // vector

// a simple global linked list:
using namespace std;
////compile : g++ -std=c++11 atom02.cpp -o atom02 -lpthread

struct Node { int value; Node* next; };

atomic<Node*> list_head (nullptr);
void append (int val) {     // append an element to the list
  Node* newNode = new Node {val,list_head};
  // next is the same as: list_head = newNode, but in a thread-safe way:
  while (!list_head.compare_exchange_weak(newNode->next,newNode)) {}
  // (with newNode->next updated accordingly if some other thread just appended another node)
}

int main ()
{
  // spawn 10 threads to fill the linked list:
  vector<thread> threads;
  for (int i=0; i<10; ++i) threads.push_back(thread(append,i));
  for (auto& th : threads) th.join();
  // print contents:
  for (Node* it = list_head; it!=nullptr; it=it->next)
    cout << ' ' << it->value;
  cout << '\n';
  // cleanup:
  Node* it; while (it=list_head) {list_head=it->next; delete it;}
  return 0;
}

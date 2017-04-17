#include<iostream>
#include<atomic>
#include<thread>
#include<vector>
#include<sstream>

using namespace std;
//compile : g++ -std=c++11 atom01.cpp -o atom01 -lpthread
atomic_flag lock_stream=ATOMIC_FLAG_INIT;
stringstream stream;

void append_number(int x ){
  while (lock_stream.test_and_set()) {}
    stream<<"Thread #"<<x<<'\n';
    lock_stream.clear();
  }
int main(int argc, char const *argv[]) {
  vector<thread> threads;
  for (int i = 0; i <=100; i++) {
    threads.push_back(thread(append_number,i));
  }
  for (auto& th:threads) {
    th.join();
    cout<<stream.str();
  }
  return 0;
}

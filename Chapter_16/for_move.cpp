#include <iostream>
using namespace std;

template<typename T>
void printT(T &t)
{
	std::cout<<"lvalue!"<<std::endl;//left value
}

template<typename T>
void printT(T &&t)
{
	std::cout<<"rvalue!"<<std::endl;//right value
}

template<typename T>
void Testforward(T &&v)
{
	printT(v);										//left
	printT(std::forward<T>(v));		//right
	printT(std::move(v));					//right
}
/*


forward把左值引用转成左值，把左值转换为右值

*/

int main()
{
	int x=1;
	int &a=x;
	int &&b=1;
	Testforward(std::forward<int>(x));

	return 0;
}

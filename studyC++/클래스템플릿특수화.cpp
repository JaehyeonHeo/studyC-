#include <iostream>
using namespace std; 
// 일반화
template <typename T>
class CTest {
private:
	T data; 
public:
	CTest(T adata) : data(adata) {}; 
	T getData() { return data; }
};
// 특수화
template<>
class CTest<char> {
private:
	char data; 
public:
	CTest(char adata) : data(adata) {};
	char getData() { return data; }
};

int main()
{
	CTest<int> obj1(10); 
	cout << obj1.getData() << endl; 
	CTest<char> obj2('a'); 
	cout << obj2.getData() << endl; 

	return 0; 
}
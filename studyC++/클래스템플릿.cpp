#include <iostream>
using namespace std; 

template <typename T>
class CTest {
private:
	int num; 
public:
	CTest(T anum) : num(anum) {};
	void printData() {
		cout << "num : " << num << endl; 
	}
};

int main()
{
//  CTest obj(10); 
	CTest<int> obj(10); 
	obj.printData(); 

	return 0; 
}
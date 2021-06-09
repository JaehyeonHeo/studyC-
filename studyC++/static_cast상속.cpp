#include <iostream>
using namespace std; 

class Base
{
private:
	int data;
	// 생성자
public:
	Base() { };
	// 파괴자
	~Base() {}; 

	void setData(int adata) { data = adata; }

	int getData() { return data; }

};

class Derived : public Base
{
public:
	void setData(int adata) {
		if (adata > 0) adata = 0; 
		Base::setData(adata);
	}
	void printData() {
		cout << "printData() : " << getData() << endl; 
	}
};

int main()
{
	Base* pb = new Derived;
	Derived* pd = NULL;

	pb->setData(10);  // 기초클래스의 setData() 호출
	pd = static_cast<Derived*>(pb);
	pd->setData(20);  // 20을 넣으면 0이 나온다. -> 파생클래스의 setData() 호출
	pd->printData();  // Derived 클래스의 함수 조건을 따르기 때문에 0보다 크면 0이 된다.

	return 0; 
}
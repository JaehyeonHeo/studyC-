#include <iostream>
using namespace std; 

class Base
{
private:
	int data;
	// ������
public:
	Base() { };
	// �ı���
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

	pb->setData(10);  // ����Ŭ������ setData() ȣ��
	pd = static_cast<Derived*>(pb);
	pd->setData(20);  // 20�� ������ 0�� ���´�. -> �Ļ�Ŭ������ setData() ȣ��
	pd->printData();  // Derived Ŭ������ �Լ� ������ ������ ������ 0���� ũ�� 0�� �ȴ�.

	return 0; 
}
#include <iostream>	
using namespace std;

class A {
public:
	void Afunc() {
		cout << "A::Afunc()" << endl;
	}
};

class B : public A {
public:
	void Bfunc() {
		cout << "B::Bfunc()" << endl; 
	}
};

class C : public B {
public:
	void Cfunc() {
		cout << "C::Cfunc()" << endl;
	}
};

int main() 
{
	/*
	�θ� Ŭ������ �ڽ� ��ü�� �����ͷ� ����ų �� ������
	�ڽ� Ŭ������ �θ� ��ü �����ͷ� ����ų �� ����.
	*/
	A* pa = new C;  // ����Ŭ���� Ÿ���� �����Ͱ� �Ļ���ü�� ����Ų��.
	pa->Afunc();

	B* pb = new C;  
	pb->Afunc();
	pb->Bfunc();

	C* pc = new C; // A�� ��ӹ��� B�� ����� �޾ұ� ������ A�� ����Լ����� ������ �����ϴ�.
	pc->Afunc();
	pc->Bfunc();
	pc->Cfunc();

	return 0;
}
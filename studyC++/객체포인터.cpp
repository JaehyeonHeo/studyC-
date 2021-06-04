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
	부모 클래스는 자식 객체를 포인터로 가리킬 수 있지만
	자식 클래스는 부모 객체 포인터로 가리킬 수 없다.
	*/
	A* pa = new C;  // 기초클래스 타입의 포인터가 파생객체를 가리킨다.
	pa->Afunc();

	B* pb = new C;  
	pb->Afunc();
	pb->Bfunc();

	C* pc = new C; // A를 상속받은 B의 상속을 받았기 때문에 A의 멤버함수에도 접근이 가능하다.
	pc->Afunc();
	pc->Bfunc();
	pc->Cfunc();

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	
/*
Human class -> 멤버 변수 char* name, int age
			   멤버 함수 printHuman();

			   객체 생성 : Human("이름", 나이);
*/
class Human {
private:
	char* name;
	int age;

public:
	// 기본 생성자
	Human(const char *aname, const int aage) {
		this->name = new char[12]; 
		strcpy(name, aname); 
		age = aage; 
	}
	// 소멸자
	~Human() {
		delete[] name; 
	}
	// 복사 생성자
	Human(const Human& aname) {
		this->name = new char[12]; 
		strcpy(name, aname.name); 
		age = aname.age; 
	}
	// 대입연산자
	Human& operator =(const Human& aname) {
		if (this != &aname) {
			delete[] name; 
			this->name = new char[12]; 
			strcpy(this->name, aname.name); 
			age = aname.age; 
		}
		return *this; 
	}
	// 디폴트 생성자
	Human() { }

	void printHuman() {
		printf("이름 : %s, 나이 : %d\n", name, age); 
	}
};

int main()
{
	Human h("허재현", 28); // 기본생성자
	h.printHuman(); 
	Human h2(h); // 복사 생성자
	h2.printHuman(); 

	Human xman; // 디폴트 생성자
	xman = h; // 대입연산자 사용
	xman.printHuman(); 


	return 0; 
}
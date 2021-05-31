#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char* pname; 
	int age; 

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1]; 
		strcpy(pname, aname); 
		age = aage; 
	}
	/* 깊은 복사 : reference를 이용해서 heap영역의 메모리 다른 주소에 복사 ! */
	Human(const Human& other) {
		pname = new char[strlen(other.pname) + 1]; 
		strcpy(pname, other.pname); 
		age = other.age; 
	}

	~Human() {
		delete[] pname; 
	}

	void intro() {
		printf("이름 : %s, 나이 : %d\n", pname, age); 
	}
};

void printHuman(Human who) {
	who.intro(); 
}

int main()
{
	Human kang("강감찬", 1424); 
	Human boy = kang; 

	printHuman(boy); 
}
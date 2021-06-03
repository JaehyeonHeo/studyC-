#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	상 속 : 부모클래스 - 자식클래스 
*/
class Human {
private:
	char name[12]; 
	int age; 
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname); 
		age = aage; 
	}
	void intro() {
		printf("이름 : %s, 나이 : %d\n", name, age); 
	}
};

class Student : public Human {
private:
	int stunum; 
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum; 
	}
	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n"); 
	}
};

int main()
{
	Human kim("김상형", 29); 
	kim.intro(); 
	Student han("김한결", 15, 123455); 
	han.intro(); 
	han.study(); 

	return 0; 
}
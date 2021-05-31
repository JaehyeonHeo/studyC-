#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
클래스 멤버 중 return값이 없고 class와 이름이 같은 함수가 있으면 생성자 !!
*/
class Human {
private:
	char name[12]; 
	int age; 
public:
	//생성자 : return값이 없음, 클래스와 이름이 같다.
	Human(const char* aname, int aage) {
		strcpy(this->name, aname); 
		this->age = aage; 
	}
	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age); 
	}
};

int main()
{
	Human kim("김상형", 29); 
	kim.intro(); 
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12]; 
	int age; 

public:
	Human() {
		strcpy(name, "이름없음"); 
		age = 0; 
	}

	Human(const char* aname, int aage) {
		strcpy(name, aname); 
		age = aage;
	}

	void intro() {
		printf("이름 : %s, 나이 : %d\n", name, age); 
	}
};

int main()
{
	Human momo;  //==> 에러 : 매개변수가 없을때 처리하는 메서드 오버로딩으로 해결 !
	Human arFriend[3]; //==> 에러

	Human arFriend[3] = {
		{Human("문동욱", 49)},
		{Human("김유진", 49)},
		{Human("박상막", 49)},
	};

	arFriend[2].intro(); 
}
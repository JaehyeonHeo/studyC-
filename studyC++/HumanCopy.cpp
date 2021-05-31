#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char* pname; 
	int age; 

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1]; // 메모리 동적 할당 
		strcpy(pname, aname);
		age = aage; 
	}

	~Human() {
		delete[] pname; 
	}

	void intro() {
		printf("이름 : %s, 나이 : %d\n", pname, age); 
	}
};

int main()
{
	Human kang("강감찬", 1424); 
	// boy, kang  둘 다 같은 주소값을 가리키는 포인터이므로 소멸시에 문제가 발생 (소멸할때 주소값이 없어지므로)
	Human boy = kang; // == Human boy(kang);  

	boy.intro(); 
}
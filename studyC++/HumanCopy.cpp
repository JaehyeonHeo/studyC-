#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char* pname; 
	int age; 

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1]; // �޸� ���� �Ҵ� 
		strcpy(pname, aname);
		age = aage; 
	}

	~Human() {
		delete[] pname; 
	}

	void intro() {
		printf("�̸� : %s, ���� : %d\n", pname, age); 
	}
};

int main()
{
	Human kang("������", 1424); 
	// boy, kang  �� �� ���� �ּҰ��� ����Ű�� �������̹Ƿ� �Ҹ�ÿ� ������ �߻� (�Ҹ��Ҷ� �ּҰ��� �������Ƿ�)
	Human boy = kang; // == Human boy(kang);  

	boy.intro(); 
}
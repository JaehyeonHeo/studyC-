#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
Ŭ���� ��� �� return���� ���� class�� �̸��� ���� �Լ��� ������ ������ !!
*/
class Human {
private:
	char name[12]; 
	int age; 
public:
	//������ : return���� ����, Ŭ������ �̸��� ����.
	Human(const char* aname, int aage) {
		strcpy(this->name, aname); 
		this->age = aage; 
	}
	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age); 
	}
};

int main()
{
	Human kim("�����", 29); 
	kim.intro(); 
}
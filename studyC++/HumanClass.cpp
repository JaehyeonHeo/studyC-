#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	
/*
Human class -> ��� ���� char* name, int age
			   ��� �Լ� printHuman();

			   ��ü ���� : Human("�̸�", ����);
*/
class Human {
private:
	char* name;
	int age;

public:
	// �⺻ ������
	Human(const char *aname, const int aage) {
		this->name = new char[12]; 
		strcpy(name, aname); 
		age = aage; 
	}
	// �Ҹ���
	~Human() {
		delete[] name; 
	}
	// ���� ������
	Human(const Human& aname) {
		this->name = new char[12]; 
		strcpy(name, aname.name); 
		age = aname.age; 
	}
	// ���Կ�����
	Human& operator =(const Human& aname) {
		if (this != &aname) {
			delete[] name; 
			this->name = new char[12]; 
			strcpy(this->name, aname.name); 
			age = aname.age; 
		}
		return *this; 
	}
	// ����Ʈ ������
	Human() { }

	void printHuman() {
		printf("�̸� : %s, ���� : %d\n", name, age); 
	}
};

int main()
{
	Human h("������", 28); // �⺻������
	h.printHuman(); 
	Human h2(h); // ���� ������
	h2.printHuman(); 

	Human xman; // ����Ʈ ������
	xman = h; // ���Կ����� ���
	xman.printHuman(); 


	return 0; 
}
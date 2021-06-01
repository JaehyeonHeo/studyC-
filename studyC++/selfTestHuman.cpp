#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std; 

class Human {
private:
	char name[12]; 
	int age; 
public:
	void setName(char *name) {
		if (strlen(name) < 12) {
			strcpy(this->name, name);
		}
		else {
			strcpy(this->name, ""); 
		}
	}
	void printName() {
		printf("�̸� : %s\n", name); 
	}

	void setAge(int age) {
		this->age = age; 
	}

	void printAge() {
		printf("���� : %d\n", age); 
	}
};

int main()
{
	Human i;
	char tempName[100]; 
	int tempAge; 
	printf("�̸��� �Է��ϼ��� : "); 
	cin >> tempName;
	printf("���� �Է� : "); 
	scanf("%d", &tempAge);

	i.setName(tempName); 
	i.setAge(tempAge); 
	i.printName(); 
	i.printAge(); 

	return 0; 
}
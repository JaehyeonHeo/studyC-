#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* name; 
public:
	Human(const char* aname) {
		int len = strlen(aname) + 1; 
		name = new char[len];
		strcpy_s(name, len, aname); 
	}
	~Human() {
		delete[] name;
	}
	void PrintName() {
		cout << "==HumanŬ����==\nMy name is " << name << endl;  // cŸ���� ��� 
	}
};

class Student : public Human {
private:
	char* major;
public:
	Student(const char* aname, const char* amajor) : Human(aname){
		int len = strlen(amajor) + 1; 
		major = new char[len]; 
		strcpy_s(major, len, amajor); 
	}
	~Student() {
		delete[] major; 
	}
	void PrintStudent() {
		printf("\n====StudentŬ����====\nMy major is %s\n", major); 
		Human::PrintName();
	}
};

int main()
{
	Human my("������"); 
	my.PrintName(); 

	Student me("ȫ�浿","Iot"); 
	me.PrintStudent(); 

	return 0; 
}
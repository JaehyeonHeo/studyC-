#include <iostream>
/*
����ü�� Ȯ�� : ����Լ� 
����ü�� ����� �Լ��� ���� �� �ִ�. 
*/

// struct ��� class�� ����ص� ���� ���� 
// ��ü���� ����� Ư¡ - Ŭ���� !!
// ����ü�� ����Լ�, ������� ��� ==> class !!
// ��ü���� ������ class�� �� �����ؾ� �Ѵ�.
struct Human {
	char name[20]; 
	float height; 
	float weight; 
	int age; 
	char btype;

	void view();
};

void Human::view() {
	printf("���� �̸� : %s\nŰ : %f\n������ : %f\n���� : %d\n������ : %c\n"
		, name, height, weight, age, btype);
}

int main()
{
	Human me = { "jaehyeon", 175.0, 78.0, 28, 'B' };
	me.view(); 

	return 0; 
}
#include <stdio.h>

struct SHuman
{
	char name[12]; 
	int age; 

	void intro();	
};
 // ����ü ����Լ� �ܺ�  �ۼ� ==> �ܺ��ۼ� �Ҷ��� ����ü�̸��� ::�����ڸ� �ٿ� �Ҽ��� ������.
void SHuman::intro()
{
	printf("�̸� : %s, ���� : %d", name, age); 
}

int main()
{
	SHuman kim = { "�����", 29 }; 
	kim.intro(); 
}
/* 
ȸ���̸�, ��ȭ��ȣ, �ּ�, cnt�� ��������� ���� class�� �����Ͻÿ�.
cnt : ���� ��� ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

class CMember {
private:
	static int cnt; 
	char name[20]; 
	int phone; 
	char addr[120]; 

public:
	CMember(const char* aname, int aphone, const char* aaddr) {
		cnt++;
		strcpy(name, aname);
		phone = aphone; 
		strcpy(addr, aaddr); 
	}

	void getData() {
		printf("ȸ����ȣ : %d\n", cnt);
		printf("ȸ���̸� : %s\n����ó : %d\n�ּ� : %s\n", name, phone, addr); 
	}
};

int CMember::cnt = 0; 

int main()
{
	CMember h("������", 64266929, "�λ� ��۵�");
	h.getData(); 
	CMember h2("������2", 5465456, "�λ�"); 
	h2.getData(); 

	return 0; 
}
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Ctest {
private:
	// ����
	int m_num; 
	int* ptr;
public:
	// ����Ʈ ������ (�μ��� ���� ��ü�� ��������)
	Ctest() {
		printf("����Ʈ ������!\n");
	};
	// ������
	Ctest(int num) {
		m_num = num; 
		printf("������ ȣ��; %d\n", m_num);
	}
	// ���� ������
	Ctest(Ctest& other) {
		this->m_num = other.m_num; 
		this->ptr = new int;  // �����Ҵ�
		this->ptr = ptr;
		printf("���� ������ ȣ��; %d, %p\n", m_num, ptr);
	}
	// ���� ������(���� 2��)
	Ctest(int num, int* ptr) {
		this->m_num = num;
		this->ptr = new int;  // �����Ҵ�
		this->ptr = ptr;
		printf("���� �ΰ� ������ ȣ��; %d, %p\n", m_num, ptr);
	}
	// �Ҹ���(�����Ҵ� �� ��� �Ҹ��ڿ��� ������Ų��)
	~Ctest() {
		delete ptr; 
	}
	void getData() {
		printf("%d\n", m_num);
	}
};

int main()
{
	/* �⺻ �ڷ��� */
	int a = 10;
	int b(20);         // C++���� �����ϴ� Ÿ�� 
	int c = a;         // �⺻ �ڷ��� -> �����ڸ� �ڵ����� ȣ�� ���ش�.

	printf("%d, %d, %d\n", a, b, c);
	/* ����� �ڷ��� */
	Ctest c1(100);     // �μ� 1���� ������ ȣ��  -> Ŭ������ ����� ����
	Ctest c2;		   // ����Ʈ ������ ȣ�� (�μ� ����) -> Ŭ������ ����� ����
	Ctest c3(c1);      // ���� ������ ȣ�� -> �����Ϸ��� �ڵ����� ������� !(���� ���� : �ּҸ� �����ؼ� ����)
	Ctest c4(50, nullptr);

	c3.getData();

	return 0;
}
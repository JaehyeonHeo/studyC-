#include <stdio.h>	
/*
  static(����) ��� ����
*/
class StaticTest {
public:
	int a;         // �Ϲ� ������� ����
	static int b;  // static ������� ����!

	//������ 
	StaticTest() {
		a = 10;
		//b = 20; -->  static(����) ��������� Ŭ���� ���ο��� �ʱ�ȭ �ȵȴ�!!!!
		b++; 
	}

	void getData() {
		printf("a : %d, b : %d\n", a, b);
	}
};
// ���� ��� ���� �ʱ�ȭ => Ŭ�����Ҽ��� ������ �ʱ�ȭ �ؾ��Ѵ�.
int StaticTest::b = 20;

int main()
{
	StaticTest s1; 
	s1.getData(); 
	StaticTest s2;
	s2.getData(); 

	return 0;
}
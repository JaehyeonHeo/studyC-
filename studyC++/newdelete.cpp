#include <stdio.h>

int main()
{
	int* pi, *pj; 

	pi = new int; 
	*pi = 123; 
	pj = new int(10);  // �����ڸ� ȣ���ϴ� �������̹Ƿ� �ٷ� �ʱ�ȭ�� �����ϴ�!!

	printf("*pi = %d\n", *pi); 
	printf("*pj = %d\n", *pj); 

	delete pi; 
	delete pj;
}
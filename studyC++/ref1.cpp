#include <stdio.h>

int main()
{
	int i = 3; 
	int& ri = i; // i�� ���� ���۷����� ri�� ����
	int* pi = &i; 

	printf("i = %d, ri = %d\n", i, ri); 
	ri++;
	printf("i =%d, ri = %d\n", i, ri); 
	printf("i���� = %x, ri���� = %x\n", &i, &ri); // ���� i �� �� ���۷����� ri�� �޸� �ּҰ��� ���� !! 

	printf("i = %x, ri = %x, pi = %x (�ּҰ�)\n", &i, &ri, &pi); 

}


#include <stdio.h>
#include <stdlib.h>
/*
�Լ� �Ӹ� �տ� inline�� ���� inline�Լ��� �ȴ�.
inline�Լ��� �Լ��� ã�� �ʰ� ȣ�� ��ġ���� �ٷ� ����ǰ� �Ѵ�.(������)
*/
inline int randfunc(int n)
{
	return rand() % n; 
}

int main()
{
	int i, j, k; 
	i = randfunc(10); 
	j = randfunc(100); 
	k = randfunc(50); 

	printf("���� : %d, %d, %d\n", i, j, k); 
}
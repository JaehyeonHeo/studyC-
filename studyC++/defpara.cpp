#include <stdio.h>
/* 
����Ʈ �Ű�����
����Ʈ �Ű������� �Լ� ����κп� �ִ´�!(���Ǻκ�X)
������ ���� ������� ����, �߰��� ���� ���� �Ұ� 
*/
int GetSum(int from, int to, int step = 1, int base = 0); 

int main()
{
	printf("%d\n", GetSum(1, 10)); 
	printf("%d\n", GetSum(1, 10, 2)); 
	printf("%d\n", GetSum(1, 10, 2, 10)); 
}

int GetSum(int from, int to, int step/*=1*/, int base/*=0*/)
{
	int sum = base; 
	for (int i = from; i <= to; i+=step)
	{
		sum += i; 
	}

	return sum; 
}
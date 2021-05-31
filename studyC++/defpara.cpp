#include <stdio.h>
/* 
디폴트 매개변수
디폴트 매개변수는 함수 선언부분에 넣는다!(정의부분X)
오른쪽 부터 순서대로 지정, 중간에 띄우고 지정 불가 
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
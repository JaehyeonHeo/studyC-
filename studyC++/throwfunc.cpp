#include <stdio.h>

void divide(int a, int d)
{
	if (d == 0) throw "0으로는 나눌 수 없습니다.";
	printf("나누기 결과 = %d입니다.\n", a / d); 
}

int main()
{
	//divide(2, 0); 
	try
	{
		divide(20, 0); 
	}
	catch (const char *message)
	{
		puts(message); 
	}

	divide(10, 5); 
}

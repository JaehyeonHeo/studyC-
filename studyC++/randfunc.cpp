#include <stdio.h>
#include <stdlib.h>
/*
함수 머리 앞에 inline을 쓰면 inline함수가 된다.
inline함수는 함수를 찾지 않고 호출 위치에서 바로 실행되게 한다.(빠르다)
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

	printf("난수 : %d, %d, %d\n", i, j, k); 
}
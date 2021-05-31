#include <stdio.h>

int main()
{
	int i = 3; 
	int& ri = i; // i에 대한 레퍼런스로 ri를 선언
	int* pi = &i; 

	printf("i = %d, ri = %d\n", i, ri); 
	ri++;
	printf("i =%d, ri = %d\n", i, ri); 
	printf("i번지 = %x, ri번지 = %x\n", &i, &ri); // 변수 i 와 그 레퍼런스인 ri는 메모리 주소값이 동일 !! 

	printf("i = %x, ri = %x, pi = %x (주소값)\n", &i, &ri, &pi); 

}


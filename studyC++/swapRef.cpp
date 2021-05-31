#include <stdio.h>

// 레퍼런스 활용해서 값 바꾸는 함수 만들기 

void swap(int&, int&); 

int main()
{
	int a = 1, b = 10; 
	
	printf("a = %d, b = %d\n", a, b); 

	swap(a, b);   // a, b 값을 그대로 전달 

	printf("a = %d, b = %d\n", a, b);
}
                             // call by value는 값을 복사해서 쓴다->(a,b)로 전달 
void swap(int& ra, int& rb)  // 레퍼런스로 받아서 직접 값 변경 (callby reference) 
{
	int temp; 
	temp = ra; 
	ra = rb; 
	rb = temp; 
}
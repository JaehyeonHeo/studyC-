#include <stdio.h>

int main()
{
	const char* str = "korea";
	int* pi;
	double d = 123.456; 
	int i; 

	int ary[] = { 1, 2, 3, 4, 5 }; 
	int* ptr = static_cast<int*>(ary); // --> 가능 (배열은 가능하다)

	i = static_cast<int>(d);
//  pi = static_cast<int *>(str);    --> 에러 (포인터끼리 형변환은 불가)
	pi = (int*)str; 
}
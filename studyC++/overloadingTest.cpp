#include <iostream>

//int func(int a)
//{
//	return a;
//}

int func(int a, int b = 0)
{
	return a + b; 
}

int main()
{
	func(10);  // 함수 오버로딩을 쓸 수 없음 -> 매개변수가 모호한 경우(디폴트 매개변수 사용)

	return 0; 
}


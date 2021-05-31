#include <iostream>
/*
구조체의 확장 : 멤버함수 
구조체의 멤버로 함수를 가질 수 있다. 
*/

// struct 대신 class를 사용해도 실행 가능 
// 객체지향 언어의 특징 - 클래스 !!
// 구조체의 멤버함수, 멤버변수 사용 ==> class !!
// 객체지향 언어에서는 class를 잘 설계해야 한다.
struct Human {
	char name[20]; 
	float height; 
	float weight; 
	int age; 
	char btype;

	void view();
};

void Human::view() {
	printf("나의 이름 : %s\n키 : %f\n몸무게 : %f\n나이 : %d\n혈액형 : %c\n"
		, name, height, weight, age, btype);
}

int main()
{
	Human me = { "jaehyeon", 175.0, 78.0, 28, 'B' };
	me.view(); 

	return 0; 
}
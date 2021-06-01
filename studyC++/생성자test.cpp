#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

class Ctest {
private:
	// 변수
	int m_num; 
	int* ptr;
public:
	// 디폴트 생성자 (인수가 없는 객체도 생성가능)
	Ctest() {
		printf("디폴트 생성자!\n");
	};
	// 생성자
	Ctest(int num) {
		m_num = num; 
		printf("생성자 호출; %d\n", m_num);
	}
	// 복사 생성자
	Ctest(Ctest& other) {
		this->m_num = other.m_num; 
		this->ptr = new int;  // 동적할당
		this->ptr = ptr;
		printf("복사 생성자 호출; %d, %p\n", m_num, ptr);
	}
	// 복사 생성자(인자 2개)
	Ctest(int num, int* ptr) {
		this->m_num = num;
		this->ptr = new int;  // 동적할당
		this->ptr = ptr;
		printf("인자 두개 생성자 호출; %d, %p\n", m_num, ptr);
	}
	// 소멸자(동적할당 한 경우 소멸자에서 해제시킨다)
	~Ctest() {
		delete ptr; 
	}
	void getData() {
		printf("%d\n", m_num);
	}
};

int main()
{
	/* 기본 자료형 */
	int a = 10;
	int b(20);         // C++에서 제공하는 타입 
	int c = a;         // 기본 자료형 -> 생성자를 자동으로 호출 해준다.

	printf("%d, %d, %d\n", a, b, c);
	/* 사용자 자료형 */
	Ctest c1(100);     // 인수 1개의 생성자 호출  -> 클래스에 만들어 놓음
	Ctest c2;		   // 디폴트 생성자 호출 (인수 없음) -> 클래스에 만들어 놓음
	Ctest c3(c1);      // 복사 생성자 호출 -> 컴파일러가 자동으로 만들어줌 !(얕은 복사 : 주소를 복사해서 참조)
	Ctest c4(50, nullptr);

	c3.getData();

	return 0;
}
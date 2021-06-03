#include <stdio.h>	
/*
  static(정적) 멤버 변수
*/
class StaticTest {
public:
	int a;         // 일반 멤버변수 선언
	static int b;  // static 멤버변수 선언!

	//생성자 
	StaticTest() {
		a = 10;
		//b = 20; -->  static(정적) 멤버변수는 클래스 내부에서 초기화 안된다!!!!
		b++; 
	}

	void getData() {
		printf("a : %d, b : %d\n", a, b);
	}
};
// 정적 멤버 변수 초기화 => 클래스소속을 밝히고 초기화 해야한다.
int StaticTest::b = 20;

int main()
{
	StaticTest s1; 
	s1.getData(); 
	StaticTest s2;
	s2.getData(); 

	return 0;
}
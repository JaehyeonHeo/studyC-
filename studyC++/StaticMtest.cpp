#include <iostream>	

class StaticTest {
	static int a; 
	int b; 
public:
	StaticTest(); 
	static void setData(int); 
	void getData();
};
// 정적 멤버 변수
int StaticTest::a = 10;

// 정적 멤버 함수
StaticTest::StaticTest() {
	b = 20;
}
void StaticTest::getData() {
	printf("a : %d, b : %d\n", a, b); 
}
void StaticTest::setData(int aa) {
	a = aa; 
}

int main()
{
	StaticTest s1; 
	s1.getData(); 
	StaticTest s2; 
	s2.getData(); 

	return 0; 
}
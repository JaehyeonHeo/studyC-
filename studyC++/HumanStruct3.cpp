#include <stdio.h>

struct SHuman
{
	char name[12]; 
	int age; 

	void intro();	
};
 // 구조체 멤버함수 외부  작성 ==> 외부작성 할때는 구조체이름과 ::연산자를 붙여 소속을 밝힌다.
void SHuman::intro()
{
	printf("이름 : %s, 나이 : %d", name, age); 
}

int main()
{
	SHuman kim = { "김상형", 29 }; 
	kim.intro(); 
}
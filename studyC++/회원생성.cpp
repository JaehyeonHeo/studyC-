/* 
회원이름, 전화번호, 주소, cnt를 멤버변수로 갖는 class를 설계하시오.
cnt : 정적 멤버 변수로
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

class CMember {
private:
	static int cnt; 
	char name[20]; 
	int phone; 
	char addr[120]; 

public:
	CMember(const char* aname, int aphone, const char* aaddr) {
		cnt++;
		strcpy(name, aname);
		phone = aphone; 
		strcpy(addr, aaddr); 
	}

	void getData() {
		printf("회원번호 : %d\n", cnt);
		printf("회원이름 : %s\n연락처 : %d\n주소 : %s\n", name, phone, addr); 
	}
};

int CMember::cnt = 0; 

int main()
{
	CMember h("허재현", 64266929, "부산 재송동");
	h.getData(); 
	CMember h2("허재현2", 5465456, "부산"); 
	h2.getData(); 

	return 0; 
}
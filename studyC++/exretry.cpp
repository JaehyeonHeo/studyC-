#define _CRT_SECURE_NO_WARNINGS
#include <iostream>	
using namespace std; 

int main()
{
	int num; 

	try {
		printf("1���� 100������ ������ �Է��ϼ��� : "); 
		scanf("%d", &num); 
		if (num < 1 || num > 100) throw num; 
		printf("�Է��� �� : %d\n", num); 
	}
	catch (int num) {
		printf("%d�� 1���� 100 ������ ������ �ƴմϴ�. \n", num); 
	}
}
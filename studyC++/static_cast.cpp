#include <stdio.h>

int main()
{
	const char* str = "korea";
	int* pi;
	double d = 123.456; 
	int i; 

	int ary[] = { 1, 2, 3, 4, 5 }; 
	int* ptr = static_cast<int*>(ary); // --> ���� (�迭�� �����ϴ�)

	i = static_cast<int>(d);
//  pi = static_cast<int *>(str);    --> ���� (�����ͳ��� ����ȯ�� �Ұ�)
	pi = (int*)str; 
}
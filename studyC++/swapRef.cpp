#include <stdio.h>

// ���۷��� Ȱ���ؼ� �� �ٲٴ� �Լ� ����� 

void swap(int&, int&); 

int main()
{
	int a = 1, b = 10; 
	
	printf("a = %d, b = %d\n", a, b); 

	swap(a, b);   // a, b ���� �״�� ���� 

	printf("a = %d, b = %d\n", a, b);
}
                             // call by value�� ���� �����ؼ� ����->(a,b)�� ���� 
void swap(int& ra, int& rb)  // ���۷����� �޾Ƽ� ���� �� ���� (callby reference) 
{
	int temp; 
	temp = ra; 
	ra = rb; 
	rb = temp; 
}
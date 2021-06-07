#include <stdio.h>
template <typename T>

class Util {
public:
	
	void swap(T& a, T& b) {
		T t; 
		t = a; a = b; b = t;
	}
};
int main()
{
	Util<int> u; 
	int a = 3, b = 4; 
	double c = 1.2, d = 3.4; 
	char e = 'e', f = 'f'; 

	u.swap(a, b); 
//	u.swap(c, d); 
//	u.swap(e, f); 

	printf("a = %d, b = %d\n", a, b); 
	printf("c = %f, d = %f\n", c, d); 
	printf("e = %c, f = %c\n", e, f);
}
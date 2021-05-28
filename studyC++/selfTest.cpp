#include <stdio.h>	

int main()
{
	float* ar; 

	ar = new float[100]; 
	ar[49] = 3.14;

	printf("%.2lf", ar[49]); 
}
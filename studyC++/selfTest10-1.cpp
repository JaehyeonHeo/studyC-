#include <stdio.h>

int main()
{
	int sum = 124;
	int num = 5; 

	double d = sum / num; 

	sum = static_cast<double>(sum);
	num = static_cast<double>(num); 
	printf("%f\n", d); 
	
	return 0; 
}
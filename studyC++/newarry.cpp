#include <stdio.h>	

int main()
{
	int* ar; 

	ar = new int[5]; 
	for (int i = 0; i < 5; i++)
	{
		ar[i] = i; 
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° = %d\n", i + 1, ar[i]); 
	}

	delete[] ar; 
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

void InputName(char*& Name)
{
	Name = (char*)malloc(32); 
	strcpy(Name, "Kim sang hyung"); 
}

int main()
{
	char* Name; 

	InputName(Name); 
	printf("�̸��� %s �Դϴ�", Name); 
	
	free(Name); 
}
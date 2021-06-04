#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* ���� ���� �Լ� */
void insertion_sort(char *ary) {
	int i, j, key;
	int n = 10;
	// ���ؽ� 0�� �̹� ���ĵ� ������ �� �� �ִ�.
	for (i = 1; i < n; i++) {
		key = (int)ary[i]; // ���� ���Ե� ������ i��° ������ key ������ ����

		// ���� ���ĵ� �迭�� i-1�����̹Ƿ� i-1��°���� �������� �����Ѵ�.
		// j ���� ������ �ƴϾ�� �ǰ�
		// key ������ ���ĵ� �迭�� �ִ� ���� ũ�� j��°�� j+1��°�� �̵�
		for (j = i - 1; j >= 0 && ary[j] > key; j--) {
			ary[j + 1] = ary[j]; // ���ڵ��� ���������� �̵�
		}

		ary[j + 1] = key;
	}
}

/* ��� �Լ� */
void print_ary(char* ary, int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%c, ", ary[i]);
	}
}

int main() {
	// �Է� ���� �迭����
    char input_ary[10]; 
	// �빮��, �ҹ��� �迭 ����
	char lower_ary[10];
	char upper_ary[10];

	// �迭�� ���ĺ� �Է� 
	for (int i = 0; i < 10; i++)
	{
		printf("%d��°�� ���ĺ� �Է� : ", i + 1); 
		scanf(" %c", &input_ary[i]);

		if ((int)input_ary[i] < 65 || (int)input_ary[i] > 122) break;
	}
	
	// �������� �Լ� ȣ��
	insertion_sort(input_ary);

	// �ҹ���, �빮�� �����ؼ� ����(������ �ε��� j,k�� ����)
	int j = 0, k = 0;
	for (int i = 0; i < 10; i++)
	{
		if ((int)input_ary[i] >= 65 && (int)input_ary[i] <= 90) {
			lower_ary[j] = input_ary[i];
			j++;
		}
		else if ((int)input_ary[i] >= 97 && (int)input_ary[i] <= 122) {
			upper_ary[k] = input_ary[i];
			k++;
		}
	}

	// ��� 
	printf("\n");
	printf("--------------------��� ���-----------------------");
	printf("\n\n");

	printf("<<�Էµ� �ҹ��� ���ĺ�>>\n");
	print_ary(lower_ary, j); // ������ ���� j�� ��ŭ ���
	printf("\n\n");

	printf("<<�Էµ� �빮�� ���ĺ�>>\n");
	print_ary(upper_ary, k); // ������ ���� k�� ��ŭ ��� 
	printf("\n\n");

    return 0;
}
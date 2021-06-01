/*
ȸ������ ���α׷�
- ȸ����ȣ, �̸�, ü���� �Է��ϰ� heap������ ����
- ȸ����ȣ�� ������ �Է��ϸ� �Է��� ����
- �� ȸ����, ��� ü��, �ְ� ü���� ȸ�� ������ ��µȴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*����ü ����*/
typedef struct {
	int num; 
	char name[20]; 
	double weight; 
}Fitness;

/*�Լ� ����*/
void free_ary(Fitness**, int count); 

void total_number(int count); 

double average_weight(Fitness**, int count); 

void print_info(Fitness**, int index);

int max_weight(Fitness**, int count); 

/*�����Լ� ����*/
int main(void)
{
	Fitness *member[100];
	int i; 
	int temp;

	for (i = 0; i < 100; i++)
	{
		printf("\n<<ȸ�� ������ �Է��ϼ���>>");
		printf("\n* ȸ�� ��ȣ : ");
		scanf("%d", &temp);
		if (temp > 0)
		{
			member[i] = (Fitness*)malloc(sizeof(Fitness));
			if (member[i] != NULL)
			{
				member[i]->num = temp;
				printf("\n* ȸ�� �̸� : ");
				scanf("%s", &member[i]->name);
				printf("\n* ������ : ");
				scanf("%lf", &member[i]->weight);
			}
			else {
				printf("�޸� �����Ҵ� ����");
			}
		}
		else break; 
	}
	int count = i; 
	double average;
	int maxW_idx; 
	
	total_number(count);     // ��ü ȸ���� ��� 

	average = average_weight(member, count); // ���ü�� �Ҵ�
	printf("\n<<���ü��>>\n=> %.2lf kg\n", average); 

	maxW_idx = max_weight(member, count); // �ִ� ü�� ȸ���� �ε��� �Ҵ�
	print_info(member, maxW_idx); 

	free_ary(member, count); // �޸� �����Ҵ� ����

	return 0; 
}
/*��ü ��� ȸ���� ��ȯ*/
void total_number(int count)
{
	printf("==================�� �� �� ��====================\n");
	printf("\n<<��ü ȸ����>>\n=> %d��\n", count);
}

/*��� ü�� ��ȯ*/
double average_weight(Fitness** pmember, int count)
{
	double total = 0; 
	double avg; 
	for (int i = 0; i < count; i++)
	{
		total = total + pmember[i]->weight; 
	}
	avg = (total / count); 

	return avg; 
}
/*�ִ� ü�� ȸ���� index��ȯ*/
int max_weight(Fitness** pmember, int count)
{
	int max = pmember[0]->weight;
	for (int i = 0; i < count; i++)
	{
		if (pmember[i]->weight > max) {
			max = pmember[i]->weight;
		}
	}
	int i;
	for (i = 0; i < count; i++)
	{
		if (pmember[i]->weight == max) break;
	}

	return i;
}
/*index�� ȸ�� ���� ���*/
void print_info(Fitness** pmember, int index)
{
	printf("\n<<�ְ� ü�� ȸ���� ����>>\n"); 
	printf("*ȸ����ȣ : %d\n", pmember[index]->num);
	printf("*ȸ���̸� : %s\n", pmember[index]->name);
	printf("*ȸ�������� : %.2lf\n", pmember[index]->weight);
}


/*�޸� ���� �Լ�*/
void free_ary(Fitness** pmember, int count)
{
	for (int i = 0; i < count; i++)
	{
		free(pmember[i]);
	}
}

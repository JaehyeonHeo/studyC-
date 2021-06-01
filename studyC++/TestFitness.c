/*
회원관리 프로그램
- 회원번호, 이름, 체중을 입력하고 heap영역에 저장
- 회원번호로 음수를 입력하면 입력이 종료
- 총 회원수, 평균 체중, 최고 체중의 회원 정보가 출력된다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*구조체 정의*/
typedef struct {
	int num; 
	char name[20]; 
	double weight; 
}Fitness;

/*함수 선언*/
void free_ary(Fitness**, int count); 

void total_number(int count); 

double average_weight(Fitness**, int count); 

void print_info(Fitness**, int index);

int max_weight(Fitness**, int count); 

/*메인함수 시작*/
int main(void)
{
	Fitness *member[100];
	int i; 
	int temp;

	for (i = 0; i < 100; i++)
	{
		printf("\n<<회원 정보를 입력하세요>>");
		printf("\n* 회원 번호 : ");
		scanf("%d", &temp);
		if (temp > 0)
		{
			member[i] = (Fitness*)malloc(sizeof(Fitness));
			if (member[i] != NULL)
			{
				member[i]->num = temp;
				printf("\n* 회원 이름 : ");
				scanf("%s", &member[i]->name);
				printf("\n* 몸무게 : ");
				scanf("%lf", &member[i]->weight);
			}
			else {
				printf("메모리 동적할당 실패");
			}
		}
		else break; 
	}
	int count = i; 
	double average;
	int maxW_idx; 
	
	total_number(count);     // 전체 회원수 출력 

	average = average_weight(member, count); // 평균체중 할당
	printf("\n<<평균체중>>\n=> %.2lf kg\n", average); 

	maxW_idx = max_weight(member, count); // 최대 체중 회원의 인덱스 할당
	print_info(member, maxW_idx); 

	free_ary(member, count); // 메모리 동적할당 해제

	return 0; 
}
/*전체 등록 회원수 반환*/
void total_number(int count)
{
	printf("==================결 과 출 력====================\n");
	printf("\n<<전체 회원수>>\n=> %d명\n", count);
}

/*평균 체중 반환*/
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
/*최대 체중 회원의 index반환*/
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
/*index로 회원 정보 출력*/
void print_info(Fitness** pmember, int index)
{
	printf("\n<<최고 체중 회원의 정보>>\n"); 
	printf("*회원번호 : %d\n", pmember[index]->num);
	printf("*회원이름 : %s\n", pmember[index]->name);
	printf("*회원몸무게 : %.2lf\n", pmember[index]->weight);
}


/*메모리 해제 함수*/
void free_ary(Fitness** pmember, int count)
{
	for (int i = 0; i < count; i++)
	{
		free(pmember[i]);
	}
}

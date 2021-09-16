#include <stdio.h>
#include <stdlib.h>

typedef struct member
{
	int age;
	char name[100];
	int init;//가입 순서를 사용하지 않을 방법은 없을까?
	//init을 사용한 이유는 선택정렬을 사용하면 무조건 그떄의 순서가 유지되지 않을 수도 있다고 생각해서..
	//근데 애초에 비교를 하는 과정에서 같은 숫자면 중간에 == if문에 걸려서 자리가 유지되지 않을수 없지 않나?
	//보장될 수 있는지 다시 확인하기
}member;

void printMem(member * arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d %s\n", arr[i].age, arr[i].name);
	}
}
void swap(member* a, member* b)
{
	member tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void sort_mem(member* arr, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		int minIdx = i;
		int tmp = 0;
		for (int j = i + 1; j < num; j++)
		{
			if (arr[j].age < arr[minIdx].age)
				minIdx = j;
			else if (arr[j].age == arr[minIdx].age)
			{
				if (arr[j].init < arr[minIdx].init)
					minIdx = j;
			}
		}

		swap(&arr[i], &arr[minIdx]);

	}

}
int main(void)
{
	int num = 0;
	scanf("%d", &num);
	member* arr = (member*)malloc(sizeof(member) * num);

	for (int i = 0; i < num; i++)
	{
		scanf("%d %s", &arr[i].age, arr[i].name);
		arr[i].init = i;
	}

	sort_mem(arr, num);
	printMem(arr, num);
	

}
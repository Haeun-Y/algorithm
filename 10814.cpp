#include <stdio.h>
#include <stdlib.h>

typedef struct member
{
	int age;
	char name[100];
	int init;//���� ������ ������� ���� ����� ������?
	//init�� ����� ������ ���������� ����ϸ� ������ �׋��� ������ �������� ���� ���� �ִٰ� �����ؼ�..
	//�ٵ� ���ʿ� �񱳸� �ϴ� �������� ���� ���ڸ� �߰��� == if���� �ɷ��� �ڸ��� �������� ������ ���� �ʳ�?
	//����� �� �ִ��� �ٽ� Ȯ���ϱ�
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
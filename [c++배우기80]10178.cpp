#include <iostream>
using namespace std;

typedef struct test
{
	int v;//������ ��
	int c;//������ ��
}test;
int main(void)
{
	//�׽�Ʈ���̽� ��, ������ ���� c, ������ �� v
	//���� 1<= c,v <= 1000
	//�׽�Ʈ���̽� ���� ���� ���� x -> �迭 ���� �Ҵ�

	int test_num = 0;
	scanf_s("%d", &test_num);

	test* arr = (test*)malloc(sizeof(test) * test_num);

	for (int i = 0; i < test_num; i++)
		scanf_s("%d %d", &arr[i].c, &arr[i].v);
	
	for (int i = 0; i < test_num; i++)
	{
		int result = arr[i].c / arr[i].v;//���� �δ� ������ ����
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", result, arr[i].c - result * arr[i].v);
	}


}
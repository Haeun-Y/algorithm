#include <iostream>
using namespace std;

int main(void)
{
	//�׽�Ʈ ���̽��� ���� t
	//�ֻ����� �ι� ���� ���� �μ��� �Է�
	//�� �׽�Ʈ ���̽����� �ո� �����صθ� �ǹǷ� ���� �迭�� �����

	int t = 0;
	scanf_s("%d", &t);

	int* arr = (int*)malloc(sizeof(int) * t);
	for (int i = 0; i < t; i++)
	{
		int a = 0, b = 0;
		scanf_s("%d %d", &a, &b);
		arr[i] = a + b;
	}

	for (int i = 0; i < t; i++)
		printf("Case %d: %d\n", i + 1, arr[i]);
	
	
}
#include <iostream>
using namespace std;

int main(void)
{
	int n = 0, k = 0;
	scanf_s("%d %d", &n, &k);

	int* arr = (int*)malloc(sizeof(int) * n);

	int j = 0;//���������� �迭�� �����ϱ� ���� �迭 �ε��� ����
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			arr[j++] = i;
	}

	//j++�� ���������̱⶧���� j�� ����� ���� �� �ִ� index���� 1ŭ
	//->�迭�� ����� ������ ��(==n�� ����� ����)�̴�. 

	if (j >= k)
		printf("%d", arr[k - 1]);

	else
		printf("0");
}
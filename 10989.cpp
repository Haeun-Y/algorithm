#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int numberOfNumbers = 0;
	int tmp = 0;
	scanf_s("%d", &numberOfNumbers);

	vector<int> v1(10000);//���� �ڵ����� 0���� �ʱ�ȭ ��

	for (int i = 0; i < numberOfNumbers; i++)
	{
		scanf_s("%d", &tmp);
		v1[tmp-1]++;
	}

	for (int i = 0; i < 10000; i++)
	{
		int times = v1[i];
		if (tmp != 0)
		{
			for (int j = 0; j < times; j++)
				printf("%d\n", i+1);
		}
	}

}
#include <iostream>
using namespace std;
typedef struct input
{
	int num;
	int times;

}input;
int main(void)
{
	input arr[10];
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		int flag = 0;
		arr[i].num = 0;
		arr[i].times = 0;
		scanf_s("%d", &num);
		for (int j = 0; j < i; j++)
		{
			if (arr[j].num == num)//�̹� �Էµ� �����
			{
				arr[j].times++;
				flag = 1;
				break;
			}

		}
		if (flag == 1)//�̹� �Էµȼ����� Ƚ�� ������ �ٲ��� ���
			continue;
		else
		{
			arr[i].num = num;
			arr[i].times++;
		}

	}

	int max = 0;//�ֺ� index ����
	int m = 0;
	for (int i = 0; i < 10; i++)
	{
		m += arr[i].num * arr[i].times;
		if (max < arr[i].times)
			max = i;
	}

	printf("%d\n%d", m / 10, arr[max].num);

}
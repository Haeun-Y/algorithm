#include <iostream>
using namespace std;

int main(void)
{
	//int arr[7] = { 0 };
	//�����غ��ϱ� �迭�� �ʿ����, &���°� �迭�� ������ ����
	int sum = 0;
	int min = 0;

	for (int i = 0; i < 7; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num % 2 == 1)
		{
			if (sum == 0)
				min = num;//ù��° Ȧ�� ����
			//ù��° �Ǽ� : min�� 0���� �ʱ�ȭ �ع���
			//�׷��� �Ǹ� ������ 0�� �ּҰ��� �Ǿ������...
			else if(min > num)
			{
				min = num;
			}

			sum += num;
			
		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
	

	//�־��� �� �߿��� Ȧ���� �����ؼ� ���ο� ���� ������ 
	//�����ؼ� sort �Լ��� ����ϴ°� �� ��ȿ�����̶� 
	//�����ؼ� �׳� if������ �ذ���

}
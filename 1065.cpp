#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;//1000 >= n >= 1
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i <= 99)//���ڸ���, ���ڸ� ���� ������ �Ѽ�
			sum++;
		else if (99 < i && i<= 999)//100~999
			//99<i<=999�̷��� �Ἥ Ʋ��
		{
			//abc
			int c = i % 10;//���� �ڸ���
			int b = (i/10)%10;//���� �ڸ���
			int a = (i/100)%10;//���� �ڸ���

			if (a - b == b - c)
			{
				sum++;
			}
			
		}
		
		//�� ���� ���� ���ڸ����� 1000�ε� 1000�� �Ѽ��� 
		//�ƴϹǷ� ���� �б⸦ ������ �ʾƵ� ��
		//1000�Է½� 1000�� else if �б⿡ �ɸ��� ������?
	}

	printf("%d", sum);
}
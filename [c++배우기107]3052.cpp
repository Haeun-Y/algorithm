#include <iostream>
using namespace std;

int main(void)
{
	//�ԷµǴ� ���� ��� �ڿ����̹Ƿ� 42�� ���� �������� 
	//��� 0���� ũ�ų� ����. 
	//-> �迭�� �ʱ�ȭ�� -1�� �Ѵ�. 

	int arr[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
	
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		num %= 42;
		
		//������ ��� i���� �������� ����ƴٰ� �ص� 
		//������ i ���� �ε������� ������� ���̹Ƿ� �迭�� index < i ������ Ȯ���ϸ� �ȴ�.
		int tmp = 0;
		for (int j = 0; j < i; j++)
		{
			if (num == arr[j])
			{
				tmp = 1;
				break;
			}
		}
		if (tmp == 0)
			arr[i] = num;
	}

	int size = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != -1)
			size++;
		
	}
	printf("%d", size);
	
}
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	//�Է� : ù° �ٿ� A, ��° �ٿ� B, ��° �ٿ� C�� �־�����. 
	//A, B, C�� ��� 100���� ũ�ų� ����, 1,000���� ���� �ڿ����̴�.
	//-> �ִ� 999*999*999 = 997,002,999 -> 9�ڸ� -> int�� ���
	//int ���� : 10�ڸ� ����? 2~

	int result = 1;

	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		result *= num;
	}

	string num = to_string(result);

	//string �Լ� compare���?
	for (int i = 0; i < 10; i++)
	{
		int numOfI = 0;
		for (size_t j = 0; j < num.length();)
		{
			size_t tmp = num.find(to_string(i), j);
			if (tmp == string::npos)//i�� num ���ڿ� �ȿ� ���� ��
				break;
			
			else//i�� num ���ڿ� �ȿ� ���� ��
			{
				numOfI++;
				j = tmp+1;
			}
			
		}

		printf("%d\n", numOfI);
	}
}
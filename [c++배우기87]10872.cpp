#include <iostream>
using namespace std;

void factorial_iterative(int n)
{
	int result = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
			result = 1;

		else
			result *= i;
		
	}
	printf("%d", result);
}
int main(void)
{
	//12! = 479,001,600 �̹Ƿ� ����� ������ �ڷ����� int�� ����ص� �����
	int n = 0;
	scanf_s("%d", &n);

	factorial_iterative(n);
}
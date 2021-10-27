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
	//12! = 479,001,600 이므로 결과를 저장할 자료형을 int로 사용해도 충분함
	int n = 0;
	scanf_s("%d", &n);

	factorial_iterative(n);
}
#include <iostream>
using namespace std;

void fibonacci_iterative(int n)
{
	long long result = 0;

	long long first = 0;
	long long second = 1;
	
	for (int i = 0; i < n; i++)
		{
			result = first + second;
			first = second;
			second = result;
		}
		printf("%lld", first);
	

	
}
int main(void)
{
	//fibonacci 45��°�� ������ ū �� �� �� ���Ƽ� 
	//long long���� �ڷ��� ���
	int n = 0;

	scanf_s("%d", &n);
	fibonacci_iterative(n);
}
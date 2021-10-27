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
	//fibonacci 45번째는 굉장히 큰 수 일 것 같아서 
	//long long으로 자료형 사용
	int n = 0;

	scanf_s("%d", &n);
	fibonacci_iterative(n);
}
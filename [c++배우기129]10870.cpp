#include <iostream>
using namespace std;

int main(void)
{
	int n = 0, fibo1 = 1, fibo0 = 0;
	
	scanf_s("%d", &n);

	
	for (int i = 0; i < n; i++)
	{
		int tmp = fibo1;
		fibo1 += fibo0;
		fibo0 = tmp;
	}

	printf("%d\n", fibo0);
}
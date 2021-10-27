#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j > 0; j--)
			printf(" ");
		for (int j = 0; j < i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < 2 * n - 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}
#include <iostream>
using namespace std;

int main(void)
{
	int n = 0; 
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
			printf(" ");
		for (int j = 0; j < 2 * n - (i * 2 - 1); j++)
			printf("*");
		printf("\n");
	}
	//2n -1 2n-3 2n-5
	//2n - (i*2-1)
}
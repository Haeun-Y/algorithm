#include <iostream>
using namespace std;

int main(void)
{
	int n = 0; 
	scanf_s("%d", &n);

	for (int i = 0; i < 2 * n - 1; i++)
	{
		if (i >= n)
		{
			for (int j = 0; j < 2 * n - 2 - i; j++)
				printf(" ");
			for (int k = 0; k < 2 * i - 2*n +3; k++)
				printf("*");
			printf("\n");

		}
		else
		{
			for (int j = 0; j < i; j++)
				printf(" ");
			for (int k = 0; k < 2*n - 2 * i - 1; k++)
				printf("*");
			printf("\n");
		}

	}
}
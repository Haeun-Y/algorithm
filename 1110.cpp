#include <iostream>
using namespace std;

int main(void)
{
	int n = 0, result =0;
	scanf_s("%d", &n);

	int newN = n;

	while (1)
	{
		result++;
		int x = newN / 10;
		int y = newN % 10;
		int tmp = x + y;
		newN = y * 10 + (tmp % 10);
		

		if (newN == n)
		{
			printf("%d", result);
			break;
		}

	}


}
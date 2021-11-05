#include <iostream>
using namespace std;

int main(void)
{
	int testCase = 0;
	int numA, numB, min;
	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		scanf_s("%d %d", &numA, &numB);
		min = (numA > numB) ? numB : numA;

		for (int i = 1;; i++)
		{
			if (i * min % numA == 0 && i * min % numB == 0)
			{
				printf("%d\n", i * min);
				break;
			}
		}

	}
}
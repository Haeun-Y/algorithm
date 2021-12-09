#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b)
{
	int dividend = (a > b) ? a : b;
	int divisor = (a < b) ? a : b;

	while (dividend % divisor != 0)
	{
		int tmp = dividend%divisor;
		dividend = divisor;
		divisor = tmp;
	}

	return divisor;

}
int main(void)
{
	int testCase = 0;
	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		int num = 0;
		long long sum = 0;
		scanf_s("%d", &num);

		vector<int> list(num);

		for (int j = 0; j < num; j++)
			scanf_s("%d", &list[j]);

		for (int j = 0; j < num-1; j++)
		{
			for (int k = j + 1; k < num; k++)
				sum += GCD(list[j], list[k]);
		}

		printf("%lld\n", sum);
		
	}
}
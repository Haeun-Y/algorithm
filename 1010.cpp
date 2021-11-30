#include <iostream>
using namespace std;

int main(void)
{
	int numOfTestCase = 0;

	scanf_s("%d", &numOfTestCase);

	for (int i = 0; i < numOfTestCase; i++)
	{
		int west = 0, east = 0, tmp = 0;
		long long denominator = 1, numerator = 1, result = 0;
		scanf_s("%d %d", &west, &east);
		if (east - west < west)
			tmp = east - west;
		else tmp = west;

		int k = east;
		for (int j = 1; j <= tmp; j++)
		{
			denominator *= j;
			numerator *= k;
			k--;
		}
		result = numerator/denominator;

		printf("%lld\n", result);



	}
}
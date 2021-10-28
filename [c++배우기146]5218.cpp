#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int testCase = 0, distance = 0, length = 0;
	string strA, strB;

	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		cin >> strA >> strB;
		length = strA.length();
		printf("Distances:");

		for (int i = 0; i < length; i++)
		{
			distance = (int)strB.at(i)- (int)strA.at(i);
			if (distance < 0)
				distance += 26;
			printf(" %d", distance);

		}
		printf("\n");
	}
}
#include <iostream>
using namespace std;

int main(void)
{
	int dwarf[9] = { 0, };
	int sum = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &dwarf[i]);
		sum += dwarf[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (sum - dwarf[j] - dwarf[i] == 100)
			{
				dwarf[i] = 0;
				dwarf[j] = 0;
				break;
			}

		}
		if (dwarf[i] == 0)
			break;
	}

	for (int i = 0; i < 9; i++)
	{
		if (dwarf[i] != 0)
			printf("%d\n", dwarf[i]);
	}
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int testCase = 0;
	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		int note1Num = 0;
		scanf_s("%d", &note1Num);

		vector<int> list1(note1Num);

		for (int i = 0; i < note1Num; i++)
			scanf_s("%d", &list1[i]);

		sort(list1.begin(), list1.end());
		int note2Num = 0;
		scanf_s("%d", &note2Num);

		for (int i = 0; i < note2Num; i++)
		{
			int num = 0;
			scanf_s("%d", &num);
			if (binary_search(list1.begin(), list1.end(), num))
				printf("1\n");
			else
				printf("0\n");
		}

	}
}
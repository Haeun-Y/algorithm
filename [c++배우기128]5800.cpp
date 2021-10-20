#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int classNum = 0;
	int score[50] = { 0, };
	scanf_s("%d", &classNum);

	for (int i = 0; i < classNum; i++)
	{
		int stuNum = 0;
		scanf_s("%d", &stuNum);
		for (int j = 0; j < stuNum; j++)
			scanf_s("%d", &score[j]);
		sort(score, score + stuNum);
		int largestGap = 0;
		for (int j = 0; j < stuNum-1; j++)
		{
			int gap = score[j + 1] - score[j];
			if (gap > largestGap)
				largestGap = gap;
		}
		/*Class 1
		Max 78, Min 23, Largest gap 46
		*/
		printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i + 1, score[stuNum - 1], score[0], largestGap);
		
	}
}
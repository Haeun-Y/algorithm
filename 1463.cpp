#include <iostream>
#include <vector>
using namespace std;

int Find_min(int a, int b, int c)
{
	int min = a+b+c;
	if (a!= 0 && min > a)
		min = a;
	if (b!= 0 && min > b)
		min = b;
	if (c!=0 && min > c)
		min = c;
	return min;
}
int main(void)
{
	int num = 0;
	scanf_s("%d", &num);
	vector <int> numList(num+1);
	numList[0] = 0;
	numList[1] = 0;

	for (int i = 2; i <= num; i++)
	{
		int times2 = 0, times3 = 0, times1 = 0;
		if (i % 3 == 0)
		{
			times3 = numList[i / 3];
			times3++;
		}
		if (i % 2 == 0)
		{
			times2 = numList[i / 2];
			times2++;
		}

		times1 = numList[i - 1] + 1;

		numList[i] = Find_min(times3, times2, times1);
	}
	printf("%d", numList[num]);

	/*for (int i = 2; i <= num; i++)
	{
		int times2 = 0, times3 = 0, times1 = 0, times = 0;

		if (i % 3 == 0)
		{
				int target = i/3;
				times3++;
				times3 += numList[target];
		}
		if(i % 2 == 0)
		{
				int target = i/2;
				times2++;
				times2 += numList[target];
		}
		int target = i-1;
		times1++;
		times1 += numList[target];
		
		times = Find_min(times3, times2, times1);
		
		numList[i] = times;
	}

	printf("%d", numList[num]);*/
}
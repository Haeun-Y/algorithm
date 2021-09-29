#include <iostream>
using namespace std;
int main(void)
{
	int m = 0, n = 0, sum = 0;
	int flag = 0, min = 0;

	scanf_s("%d %d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		flag = 0;
		if (i == 1)
			flag = 1;
		for (int j = 2; j < i; j++)
		{

			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			sum += i;
			if (min == 0)
				min = i;
		}

	}
	if (sum == 0)//flag로도 체크가능
		printf("-1");
	else
	{
		printf("%d\n", sum);
		printf("%d", min);
	}
}
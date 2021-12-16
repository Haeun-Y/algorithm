#include <iostream>
using namespace std;

int main(void)
{
	int num = 0; 
	scanf_s("%d", &num);

	int tmp = num, check = 0;
	for (int i = 2; i * i <= num; i++)
	{
		while (tmp % i == 0)
		{
			tmp /= i;
			printf("%d\n", i);
			if (tmp == 1)
			{
				check = 1;
				break;
			}
		}
		if (check == 1)
			break;
	}
	if (tmp > 1) printf("%d\n", tmp);
}
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void prime_number(int num, vector<int>& list)
{
	list[0] = 0;
	int numLimit = (int)sqrt(num);

	for (int i = 2; i <= numLimit; i++)
	{
		for (int j = 0; j < list.size(); j++)
		{
			if (list[j] != 0 && list[j] != i && list[j] % i == 0)
				list[j] == 0;
		}
	}
	
}
void factorization(int num)
{
	vector<int>  numList(num);

	for (int i = 1; i <= num; i++)
		 numList[i - 1] = i;

	prime_number(num, numList);

	int check = 0;

	for (int i = 0; i < numList.size(); i++)
	{
		if (numList[i] == 0)
			continue;
		while (num % numList[i] == 0)
		{
			num /= numList[i];
			printf("%d\n", numList[i]);
			if (num == 1)
			{
				check = 1;
				break;
			}
		}

		if (check == 1) break;
	}
}
int main(void)
{
	int num = 0; 
	scanf_s("%d", &num);

	factorization(num);
}
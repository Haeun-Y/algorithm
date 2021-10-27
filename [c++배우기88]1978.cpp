#include <iostream>
using namespace std;

//¼Ò¼ö 
int main(void)
{
	int test = 0;
	cin >> test;

	int* arr = (int*)malloc(sizeof(int) * test);
	int* prime = (int*)malloc(sizeof(int) * test);
	int sum = 0;

	for (int i = 0; i < test; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < test; i++)
	{
		int isprime = 1;
		if (arr[i] == 1)
			isprime = 0;
		for (int j = 2; j < arr[i]; j++)
		{
			if ((j != 1 && arr[i] % j == 0))
			{
				isprime = 0;
				break;
			}
		}
		if (isprime == 1)
			sum++;
	}
	printf("%d", sum);
}
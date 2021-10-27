#include <iostream>
using namespace std;


int main(void)
{
	int test_num = 0;
	scanf_s("%d", &test_num);

	long long* arr = (long long*)malloc(sizeof(long long) * test_num);
	
	for (int i = 0; i < test_num; i++)
	{
		arr[i] = 0;
		int price = 0;
		int option_num = 0;

		scanf_s("%d", &price);
		arr[i] += price;
		scanf_s("%d", &option_num);

		for (int j = 0; j < option_num; j++)
		{
			int q = 0, p = 0;
			scanf_s("%d %d", &q, &p);
			arr[i] += (long long)p * q;
		}
	}

	for (int i = 0; i < test_num; i++)
	{
		printf("%lld\n", arr[i]);
	}
}
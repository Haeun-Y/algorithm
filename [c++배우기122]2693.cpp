#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}
int main(void)
{
	int testNum = 0;
	int arr[10] = { 0, };

	scanf_s("%d", &testNum);

	for (int i = 0; i < testNum; i++)
	{
		for(int j =0; j<10; j++)
			scanf_s("%d", &arr[j]);
		sort(arr, arr + 10, compare);
		printf("%d\n", arr[2]);
	
	}

}
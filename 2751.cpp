#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int numOfNum = 0;
	scanf_s("%d", &numOfNum);

	int* arr = (int*)malloc(sizeof(int) * numOfNum);

	for (int i = 0; i < numOfNum; i++)
		scanf_s("%d", &arr[i]);

	sort(arr, arr + numOfNum);

	for (int i = 0; i < numOfNum; i++)
		printf("%d\n", arr[i]);
}
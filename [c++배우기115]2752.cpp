#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int arr[3] = { 0, };

	for (int i = 0; i < 3; i++)
		scanf_s("%d", &arr[i]);

	sort(arr, arr + 3);

	for (int i = 0; i < 3; i++)
		printf("%d ", arr[i]);
}
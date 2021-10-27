#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int arr[5] = { 0, };
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &arr[i]);

	sort(arr, arr + 3);
	sort(arr + 3, arr + 5);

	printf("%d", arr[0] + arr[3] - 50);
}
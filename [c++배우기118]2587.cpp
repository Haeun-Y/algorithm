#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int size = 5;
	int sum = 0;
	int arr[5] = { 0, };

	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	
	sort(arr, arr + size);

	printf("%d\n%d", sum / size, arr[size / 2]);
}
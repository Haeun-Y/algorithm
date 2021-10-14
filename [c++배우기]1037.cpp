#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int arr[50];
	int num = 0;

	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
		scanf_s("%d", &arr[i]);
	
	sort(arr, arr + num);

	printf("%d", arr[0] * arr[num - 1]);
}
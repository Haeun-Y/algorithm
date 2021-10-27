#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int num = 0; 
	scanf_s("%d", &num);

	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
		scanf_s("%d", &arr[i]);

	sort(arr, arr + num);

	for (int i = 0; i < num; i++)
		printf("%d\n", arr[i]);
}
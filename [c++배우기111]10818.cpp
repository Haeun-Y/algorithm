#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int num = 0;
	cin >> num;

	int* arr = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++)
	{
		int tmp = 0;
		cin >> tmp;
		arr[i] = tmp;
	}

	sort(arr, arr + num);//오름차순 정렬
	
	cout << arr[0] << " " << arr[num - 1];
}
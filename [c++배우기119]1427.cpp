#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main(void)
{
	string num = "";
	//int자료형의 범위 : 약 2,000,000,000 이상 
	//-> int 써도 상관없음

	cin >> num;
	int size = num.length();

	int* arr = (int*)malloc(sizeof(int) * (size));

	for (int i = 0; i < size; i++)
		arr[i] = num.at(i)-'0';
	
	

	sort(arr, arr + size, compare);

	for (int i = 0; i < size; i++)
		printf("%d", arr[i]);
}
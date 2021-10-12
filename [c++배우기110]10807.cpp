#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	int numOfInput = 0;
	int arr[100] = { 0, };
	cin >> numOfInput;

	for (int i = 0; i < numOfInput; i++)
		cin >> arr[i];
	
	sort(arr, arr + numOfInput);

	int target = 0;
	int result = 0;
	cin >> target;
	for (int i = 0; i < numOfInput; i++)
	{
		if (arr[i] > target)
			break;
		else if (arr[i] < target)//arr[i] < target
			continue;
		else
			result++;
	}

	cout << result;

}
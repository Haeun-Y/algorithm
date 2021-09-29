#include <iostream>
using namespace std;

int main(void)
{
	int arr[9] = { 0 };
	int idx_max = 0;
	int max = 0;


	for (int i =0; i < 9; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			idx_max = i;
		}
	}

	cout << max << endl << idx_max+1;
}
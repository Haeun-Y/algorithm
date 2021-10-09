#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int max = 0;
	int max_idx = 0;
	for (int i = 1; i <= 5; i++)
	{
		int sum = 0;
		for (int j = 0; j < 4; j++)
		{
			int score = 0;
			cin >> score;
			sum += score;
		}
		if (max < sum)
		{
			max = sum;
			max_idx = i;
		}
	}

	cout << max_idx << " " << max << endl;

}
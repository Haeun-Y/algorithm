#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main(void)
{
	int testCase = 0;
	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		int numOfDoc = 0, target = 0;
		pair<int, char> targetE;
		int printedNum = 0;
		scanf_s("%d %d", &numOfDoc, &target);
		
		deque<pair<int, char>> dq;

		char ch = 'A';
		for (int j = 0; j < numOfDoc; j++)
		{
			int tmp = 0;
			scanf_s("%d", &tmp);
			pair<int, char> p = make_pair(tmp, ch++);
			dq.push_back(p);
		}

		targetE = dq[target];
		pair<int, char> tmp;

		while (!dq.empty() &&!(tmp == targetE && tmp != dq.back()))
		{
			int check = 0;
			for (int j = 1; j < dq.size(); j++)
			{
				if (dq.front().first < dq[j].first)
				{
					check = 1;
					break;
				}
			}

			tmp = make_pair(0, '0');
			if (check == 1)
			{
				tmp = dq.front();
				dq.pop_front();
				dq.push_back(tmp);
			}
			else
			{
				tmp = dq.front();
				dq.pop_front();
				printedNum++;
			}

		}


		cout << printedNum << endl;

	}

}
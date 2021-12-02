#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	int numOfCommand = 0, targetNum = 0;
	string command;


	scanf_s("%d", &numOfCommand);
	queue<int> q;

	for (int i = 0; i < numOfCommand; i++)
	{
		cin >> command;
		
		if (command == "push")
		{
			scanf_s("%d", &targetNum);
			q.push(targetNum);
		}
		else if (command == "pop")
		{
			if (q.empty())
				printf("-1\n");
			else
			{
				printf("%d\n",q.front());
				q.pop();
			}
		}
		else if (command == "size")
		{
			printf("%d\n", q.size());
		}

		else if (command == "empty")
		{
			if (q.empty())
				printf("1\n");
			else
				printf("0\n");
		}

		else if (command == "front")
		{
			if (q.empty())
				printf("-1\n");
			else
			{
				printf("%d\n", q.front());
			}
		}

		else if (command == "back")
		{
			if (q.empty())
				printf("-1\n");
			else
			{
				printf("%d\n", q.back());
			}
		}
	}

	
}
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	string str;
	cin >> str;
	stack<char> beforeCursor, afterCursor;
	//시작할 때 : 커서 맨 끝에

	for (int i = 0; i < str.length(); i++)
		beforeCursor.push(str[i]);

	int num = 0;
	scanf_s("%d", &num);

	char command, charToAdd;

	for (int i = 0; i < num; i++)
	{
		
		cin >> command;

		switch (command)
		{
		case 'L':
			if (!beforeCursor.empty())
			{
				afterCursor.push(beforeCursor.top());
				beforeCursor.pop();
			}
			break;

		case 'D':
			if (!afterCursor.empty())
			{
				beforeCursor.push(afterCursor.top());
				afterCursor.pop();

			}
			break;

		case 'B':
			if (!beforeCursor.empty()) beforeCursor.pop();
			break;

		case 'P':
			cin.ignore();
			cin >> charToAdd;
			beforeCursor.push(charToAdd);
			break;

		}
		//printf("\nnow cursor : %d\n", cursor);
	}

	//string printstr = "";
	/*while (!beforeCursor.empty())
	{
		printstr = beforeCursor.top() + printstr;
		beforeCursor.pop();
	}

	while (!afterCursor.empty())
	{
		printstr += afterCursor.top();
		afterCursor.pop();
	}*/
	while (!beforeCursor.empty())
	{
		afterCursor.push(beforeCursor.top());
		beforeCursor.pop();
	}
	while (!afterCursor.empty())
	{
		cout << afterCursor.top();
		afterCursor.pop();
	}
}
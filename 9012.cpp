#include <iostream>
#include <stack>
using namespace std;


int main(void)
{
	int times = 0;
	string str;
	string result;
	stack<char> bracketStack;

	scanf_s("%d", &times);

	for (int i = 0; i < times; i++)
	{
		cin >> str;
		result = "";
		for (int i = 0; i < str.length(); i++)
		{
			char tmp = str[i];
			if (tmp == '(')
				bracketStack.push(tmp);
				
			
			else//닫는 괄호일 때
			{
				if (!bracketStack.empty())
				{
					bracketStack.pop();
					continue;
				}
				else
				{
					result = "NO";
					break;
				}
				
			}
				
		}//문자열 방문 for문 종료
		if (bracketStack.empty() && result != "NO")
			result = "YES";
		else
			result = "NO";

		cout << result << endl;

		while (!bracketStack.empty()) bracketStack.pop();
	}
}
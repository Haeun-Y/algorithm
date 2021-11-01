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
				
			
			else//�ݴ� ��ȣ�� ��
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
				
		}//���ڿ� �湮 for�� ����
		if (bracketStack.empty() && result != "NO")
			result = "YES";
		else
			result = "NO";

		cout << result << endl;

		while (!bracketStack.empty()) bracketStack.pop();
	}
}
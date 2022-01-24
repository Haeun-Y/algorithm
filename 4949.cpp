#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	

	while (1)
	{
		string str;
		getline(cin, str);

		if (str == ".")
			break;

		stack<char> list;
		bool check = true;

		for (int i = 0; i < str.length(); i++)
		{
			char ch = str[i];
			if (ch == '(' || ch == '[')//���� ��ȣ
			{
				list.push(ch);
			}
			else if (ch == ')' || ch == ']')//�ݴ� ��ȣ
			{
				if ((ch == ')' && !list.empty() && list.top() == '(') || (!list.empty() && ch == ']' && list.top() == '['))//��ȣ ¦�� ���� ��
				{
					list.pop();
				}
				else//��ȣ ¦�� ���� ���� ��
				{
					check = false;
					break;
				}
			}
		}
		if (!check)//check�� false �� ��
		{
			printf("no\n");
		}

		else //check�� true�� ��
		{
			if (list.empty())
			{
				printf("yes\n");
			}
			else
				printf("no\n");
		}
		
	}

	
}
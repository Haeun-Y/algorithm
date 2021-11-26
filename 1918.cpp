#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	stack<char> operatorStack;

	string expression;
	cin >> expression;

	for (int i = 0; i < expression.length(); i++)
	{
		
		char tmp = expression[i];
		if (tmp >= 65 && tmp <= 90)
			cout << tmp;
		
		else//������ Ȥ�� ��ȣ
		{
			
			if (operatorStack.empty())//�� ������ ��
				operatorStack.push(tmp);
			
			else//������ ������� ���� ��
			{
				switch (tmp)
				{
				case '+':
				case '-':
					if (operatorStack.top() == '(')
						operatorStack.push(tmp);
					else
					{
						while (!operatorStack.empty() && operatorStack.top()!= '(')
						{
							cout << operatorStack.top();
							operatorStack.pop();
						}
						operatorStack.push(tmp);
					}
					break;
				case '*':
				case '/':
					if (operatorStack.top() == '(' || operatorStack.top() == '+' || operatorStack.top() == '-')
						operatorStack.push(tmp);
					else
					{
						while (!operatorStack.empty() && operatorStack.top() != '+' && operatorStack.top() != '-')
						{
							cout << operatorStack.top();
							operatorStack.pop();
						}
						operatorStack.push(tmp);
					}
					break;
				case '(':
					operatorStack.push(tmp);
					break;

				case ')':
					while (!operatorStack.empty() && operatorStack.top() != '(')
					{
						cout << operatorStack.top();
						operatorStack.pop();

					}
					if(!operatorStack.empty() && operatorStack.top() == '(') operatorStack.pop();
					break;
				}
			}
			
		}
	}

	while (!operatorStack.empty())
	{
		cout << operatorStack.top();
		operatorStack.pop();
	}



	

}

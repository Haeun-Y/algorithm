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
		
		else//연산자 혹은 괄호
		{
			
			if (operatorStack.empty())//빈 스택일 때
				operatorStack.push(tmp);
			
			else//스택이 비어있지 않을 때
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

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	string str;
	cin >> str;
	vector <int> openingContainer;

	int result = 0;
	char opening = '(';
	char closing = ')';

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == opening)
		{
			if (i < str.length() - 1 && str[i + 1] == closing)//������ 
			{
				i++;//������ �ݴ� ��ȣ�� �ٸ� �ݴ� ��ȣ�� �����ϱ� ���� i �ѱ�
				if (!openingContainer.empty())
				{
					for (int i = 0; i < openingContainer.size(); i++)
					{
						openingContainer[i]++;
					}
				}
			}
			else openingContainer.push_back(0);
		}
		else // �ݴ� ��ȣ 
		{
			result += (openingContainer.back() + 1);
			openingContainer.pop_back();

		}
	}
	printf("%d", result);
}
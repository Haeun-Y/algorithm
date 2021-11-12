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
			if (i < str.length() - 1 && str[i + 1] == closing)//·¹ÀÌÀú 
			{
				i++;//·¹ÀÌÀú ´Ý´Â °ýÈ£´Â ´Ù¸¥ ´Ý´Â °ýÈ£¿Í ±¸ºÐÇÏ±â À§ÇØ i ³Ñ±è
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
		else // ´Ý´Â °ýÈ£ 
		{
			result += (openingContainer.back() + 1);
			openingContainer.pop_back();

		}
	}
	printf("%d", result);
}
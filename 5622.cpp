#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(void)
{
	vector<string> v = { "", "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
	
	string str;
	cin >> str;

	int total = 0;
	for (int i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		for (int j = 0; j < v.size(); j++)
		{
			for (int k = 0; k < v[j].length(); k++)
			{
				if (ch == v[j][k])
				{
					total += j;
					break;
				}
			}
		}

	}

	printf("%d", total);
}
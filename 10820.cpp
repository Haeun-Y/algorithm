#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	
	while (getline(cin, str))
	{
		int upperCase = 0, lowerCase = 0, blank = 0, number = 0;
		for (int i = 0; i < str.length(); i++)
		{
			int tmp = str[i];

			if (tmp == ' ')
				blank++;
			else if (tmp >= 97 && tmp <= 122)
				lowerCase++;

			else if (tmp >= 65 && tmp <= 90)
				upperCase++;

			else if (tmp >= 48 && tmp <= 57)
				number++;
		}

		printf("%d %d %d %d\n", lowerCase, upperCase, number, blank);
	}

	
}
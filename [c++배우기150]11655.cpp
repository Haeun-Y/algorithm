#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int tmp = 0;
	
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		tmp = (int)str.at(i);

		if (tmp >= 65)//¾ËÆÄºªÀÏ¶§
		{
			int lowerOrUpper = (tmp >= 97) ? 97 : 65;
			tmp = tmp - lowerOrUpper + 13;
			tmp %= 26;
			//26 : num of alphabet
			tmp += lowerOrUpper;
		}

		printf("%c", tmp);
	}
}
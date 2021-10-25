#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
	int alphabetArray[26] = { 0, };
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		int tmp = (int)str.at(i);

		if (97 <= tmp)//소문자일때
			alphabetArray[tmp - 97]++;

		else//대문자일때
			alphabetArray[tmp - 65]++;

	}

	int maxIndex = 0;
	for (int i = 0; i < 26; i++)
	{
		if (alphabetArray[i] > alphabetArray[maxIndex])
			maxIndex = i;
	}

	int flag = 0;
	for (int i = 0; i < 26; i++)
	{
		if (i != maxIndex && alphabetArray[i] == alphabetArray[maxIndex])
		{
			printf("?\n");
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("%c\n", maxIndex + 65);

}
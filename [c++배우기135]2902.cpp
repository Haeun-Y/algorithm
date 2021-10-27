#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string longTypeStr;
	cin >> longTypeStr;

	printf("%c", longTypeStr.at(0));

	while (string::npos != longTypeStr.find("-"))
	{
		int pos = longTypeStr.find("-");
		printf("%c", longTypeStr.at(pos + 1));
		longTypeStr = longTypeStr.substr(pos + 1);
	}
}
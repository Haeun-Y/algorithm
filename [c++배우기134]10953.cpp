#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int testCaseNum = 0;
	string str = "";
	scanf_s("%d", &testCaseNum);

	for (int i = 0; i < testCaseNum; i++)
	{
		cin >> str;
		printf("%d\n", (str.at(0) - '0') + (str.at(2) - '0'));
	}
}
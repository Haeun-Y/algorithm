#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int testNum = 0;
	string str; 

	scanf_s("%d", &testNum);
	for (int i = 0; i < testNum; i++)
	{
		cin >> str;
		printf("%c%c\n", str.at(0), str.at(str.length() - 1));
	}
}
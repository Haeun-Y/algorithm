#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	int strLength = str.length();
	int i = 0;
	for (;i < strLength / 10; i++)
		cout << str.substr(i * 10, 10) << endl;
	
	if (strLength % 10 != 0)
		cout << str.substr(i * 10) << endl;
}
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	const int alphabetNum = 26;
	int alphabetArray[alphabetNum] = { 0, };
	
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
		alphabetArray[(int)str.at(i) - 97]++;

	for (int i = 0; i < alphabetNum; i++)
		printf("%d ", alphabetArray[i]);
}
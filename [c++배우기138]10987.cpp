#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	int vowelNum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u')
			vowelNum++;
	}
	printf("%d", vowelNum);
	
}
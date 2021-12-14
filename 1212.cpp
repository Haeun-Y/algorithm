#include <iostream>
#include <string>
using namespace std;

void octal_to_binary(int num, int nowIdx)
{
	string result = "";
	if (num == 0) result = "0";
	while (num > 0)
	{
		result = to_string(num % 2) + result;
		num/= 2;
	}

	if (nowIdx == 0)
		cout << result;
	
	else
	{
		while (result.length() < 3)
			result = "0" + result;
		cout << result;
	}
}
int main(void)
{
	string octal;
	cin >> octal;

	for (int i = 0; i < octal.length(); i++)
	{
		int tmp = octal[i] - '0';
		octal_to_binary(tmp, i);
	}
}
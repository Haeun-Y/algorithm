#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int num = 0;
	int notation = 0;
	int tmp = 0;
	string str = "";

	scanf_s("%d %d", &num, &notation);


	while (num >= notation)
	{
		tmp = num % notation;
		if (tmp > 9)
		{
			char ch = (tmp - '0') + 55;
			string s;
			s += ch;
			str = s + str;
		}
		else
		{
			str = to_string(tmp);
		}

		
	}
	cout << str;
}
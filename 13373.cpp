#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	string binary, octal;
	cin >> binary;

	int nowIdx = 0;
	int nowOctal = 0;

	
	int binaryLength = binary.length();

	for (int i = 0; i < binaryLength/3+1; i++)
	{
		nowIdx = (binaryLength-1) - i * 3;
		nowOctal = 0;

		for (int j = 0; j < 3; j++)
		{
			nowOctal += (int)pow(2, j) * (binary[nowIdx]-'0');
			nowIdx--;
			if (nowIdx < 0)
				break;
		}
		octal = to_string(nowOctal) + octal;
	}
	cout << octal;
	
}
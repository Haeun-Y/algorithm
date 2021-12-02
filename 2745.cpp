#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
	int n = 0, decimal = 0;
	string b;
	cin >> b >> n;

	int j = 0;
	for (int i = b.length()-1; i>=0; i--)
	{
		int nowNum = 0;
		if (b[i] >= 65 && b[i] <= 90)
			nowNum = b[i] - 55;
		else
			nowNum = b[i] - '0';
		decimal += nowNum * pow(n, j);
		j++;
	}
	
	printf("%d", decimal);
	 
}
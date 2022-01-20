#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string a, b;
	string result = "";
	cin >> a >> b;

	string big = "", small = "";//길이가 긴 문자열이 big, 짧은 문자열이 small
	big = (a.length() > b.length()) ? a : b;
	small = (a.length() < b.length()) ? a : b;

	long long maxRemain = big.length() - small.length();
	long long idxA = a.length() - 1, idxB = b.length() - 1;
	int remain = 0;

	for (long long i = 0; i < small.length(); i++)
	{
		int tmp = remain + ((a[idxA - i] - '0') + (b[idxB - i] - '0'));
		if (tmp >= 10)
		{
			remain = 1;
			tmp -= 10;
		}
		else remain = 0;
		result = to_string(tmp) + result;
		//cout << result << endl;

		//printf("remain : %d tmp : %d\n", remain, tmp);
	}

	

	for (long long i = maxRemain-1; i >= 0; i--)
	{
		
		int tmp = remain + ((big[i] - '0'));
		if (tmp >= 10)
		{
			remain = 1;
			tmp -= 10;
		}
		else remain = 0;
		result = to_string(tmp) + result;
		//cout << result << endl;

		//printf("remain : %d tmp : %d\n", remain, tmp);
	}
	if (remain == 1)
		result = to_string(remain) + result;

	cout << result;
}
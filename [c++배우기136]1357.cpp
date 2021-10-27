#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	string strX, strY;
	cin >> strX >> strY;

	reverse(strX.begin(), strX.end());
	reverse(strY.begin(), strY.end());
	int tmp = stoi(strX) + stoi(strY);
	string result = to_string(tmp);
	reverse(result.begin(), result.end());

	
	while (result.at(0) == '0')
	{
		result = result.substr(1);
	}
	cout << result << endl;
}
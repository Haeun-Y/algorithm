#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string strA, strB, strC, strD;
	cin >> strA >> strB >> strC >> strD;
	strA += strB;
	strC += strD;

	cout << stoll(strA) + stoll(strC);

}
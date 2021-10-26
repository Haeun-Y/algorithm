#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int digits = 0;
	cin >> str >> digits;

	int strNum = stoi(str);
	string strTotal;

	for (int i = 0; i < strNum; i++)
	{
		strTotal.append(str);
		if (strTotal.length() > digits)
			break;
	}
	

	if(strTotal.length() > digits)
		strTotal = strTotal.substr(0, digits);
	
	cout << strTotal << endl;
	

}
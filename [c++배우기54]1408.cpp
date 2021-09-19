#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
//#include <algorithm>
using namespace std;

int main(void)
{
	string str1;
	string str2;

	cin >> str1;
	cin >> str2;

	int sec1 = 0;
	int sec2 = 0;
	int result = 0;

	
	for (int i = 0; i < 3; i++)
	{
		sec1 += stoi(str1.substr(3 * i, 2)) * pow(60, 2-i);
		sec2 += stoi(str2.substr(3 * i, 2)) * pow(60, 2-i);
	}

	//���� ���� 15�� ���۽ð� 13���̸� 22�ð� ������ 
	//37-15 = 22
	
	if (sec2 > sec1)
		result = sec2 - sec1;
	else
		result = sec2 + 86400 - sec1;

	str1.clear();
	if (result / 3600 < 10)
		str1 = "0" + to_string(result / 3600) + ":";
	else 
		str1 = to_string(result / 3600) + ":";
	if ((result % 3600) / 60 < 10)
		str1 += "0" + to_string((result % 3600) / 60) + ":";
	else
		str1 += to_string((result % 3600) / 60) + ":";
	if((result % 3600) % 60 < 10)
		str1 += "0" + to_string((result % 3600) % 60);
	else
		str1 += to_string((result % 3600) % 60);

	
	cout << str1 << endl;

	



}
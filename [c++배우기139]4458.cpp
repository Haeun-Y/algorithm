#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int testNum = 0;
	string str;
	scanf_s("%d", &testNum);
	cin.ignore();

	for (int i = 0; i < testNum; i++)
	{
		getline(cin,str);
		if (str.at(0) >= 97)//ù���ڰ� �ҹ��ڶ��
			str.at(0) = str.at(0) - 32;
		cout << str << endl;
	}

}
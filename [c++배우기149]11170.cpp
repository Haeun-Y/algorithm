#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int testCaseNum = 0;
	scanf_s("%d", &testCaseNum);

	for (int i = 0; i < testCaseNum; i++)
	{
		string str1, str2;
		cin >> str1 >> str2;

		int zeroNum = 0;
		for (int j = stoi(str1); j <= stoi(str2); j++)
		{
			string strJ = to_string(j);
			while (string::npos != strJ.find("0"))
			{
				zeroNum++;
				strJ = strJ.substr(strJ.find("0") + 1);
			}
		}
		printf("%d\n", zeroNum);
	}
}
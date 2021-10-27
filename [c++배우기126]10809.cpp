#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string strForSearch;
	cin >> strForSearch;

	//아스키코드 97 : 소문자 a 
	//아스키코드 122 : 소문자 z
	for (int i = 97; i < 123; i++)
	{
		size_t pos = strForSearch.find(i);
		if (string::npos != pos)//문자열에 존재할 때
			cout << pos << " ";
		else
			cout << "-1" << " ";
	}
}
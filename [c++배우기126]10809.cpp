#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string strForSearch;
	cin >> strForSearch;

	//�ƽ�Ű�ڵ� 97 : �ҹ��� a 
	//�ƽ�Ű�ڵ� 122 : �ҹ��� z
	for (int i = 97; i < 123; i++)
	{
		size_t pos = strForSearch.find(i);
		if (string::npos != pos)//���ڿ��� ������ ��
			cout << pos << " ";
		else
			cout << "-1" << " ";
	}
}
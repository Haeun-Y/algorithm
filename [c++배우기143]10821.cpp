#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	int sum = 1;
	for (int i = 0; i < str.length(); i++)
	{
		if (str.at(i) == ',')
			sum++;//{,����}�� �Ѽ�Ʈ
	}
	printf("%d", sum);
}
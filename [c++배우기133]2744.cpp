#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string alphabetInverse;

	cin >> alphabetInverse;

	for (int i = 0; i < alphabetInverse.length(); i++)
	{
		char tmp = alphabetInverse.at(i);
		if (tmp >= 65 && tmp <= 90)//�빮���϶�
			alphabetInverse.at(i) += 32;
		

		else//�ҹ����϶�
			alphabetInverse.at(i) -= 32;
	}

	cout << alphabetInverse;
}
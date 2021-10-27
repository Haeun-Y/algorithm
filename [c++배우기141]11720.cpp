#include <iostream>
#include <string>
using namespace std; 

int main(void)
{
	int numOfNum = 0;
	string strToAdd;

	cin >> numOfNum >> strToAdd;

	int sum = 0;
	for (int i = 0; i < numOfNum; i++)
		sum += strToAdd.at(i) - '0';

	printf("%d", sum);

}
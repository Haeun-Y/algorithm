#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void)
{

	string a, b;
	
	int numA = 0, numB = 0;

	cin >> a >> b;

	char tmp;
	tmp = a.at(2);
	a.at(2) = a.at(0);
	a.at(0) = tmp;

	tmp = b.at(2);
	b.at(2) = b.at(0);
	b.at(0) = tmp;

	numA = stoi(a);
	numB = stoi(b);

	if (numA > numB)
		printf("%d", numA);
	else
		printf("%d", numB);



}
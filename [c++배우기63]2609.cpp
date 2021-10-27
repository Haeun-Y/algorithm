#include <iostream>
using namespace std;

//최대 공약수, 최소 공배수 
int main(void)
{
	int a = 0, b = 0;
	int factor = 0, multiple = 0;
	cin >> a >> b;


	if (a >= b)
	{
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0)
				factor = i;
		}
	}
	else
	{
		for (int i = 1; i <= b; i++)
		{
			if (a % i == 0 && b % i == 0)
				factor = i;
		}
	}//최대 공약수 구하기 


	for (int i = 1; i * factor <= a * b; i++)
	{
		if ((i * factor) % a == 0 && (i * factor) % b == 0)
		{
			multiple = i * factor;
			break;
		}
	}//최소 공배수 구하기

	cout << factor << endl;
	cout << multiple << endl;
}
#include <iostream>
#include <cmath>
using namespace std;

void calculate_c(int m, int n)
{
	int sum =0, min = 0;

	for (int i = 1; i * i <= n; i++)
	{
		if (i*i >= m)
		{
			sum += i*i;
			if (min == 0)
				min = i*i;
		}
			
	}

	if (sum == 0)
		cout << "-1" << endl;
	else
	{
		cout << sum << endl;
		cout << min << endl;
	}
}
void calculate_b(int m, int n)
{
	int sum = 0;
	int min = 0;
	for (int i = m; i <= n; i++)
	{
		if (sqrt(i) - (int)sqrt(i) == 0)//제곱근이 정수이다. 
		{
			sum += i;
			if (min == 0)
				min = i;
		}
	}

	if (sum == 0)
		cout << "-1" << endl;
	else
	{
		cout << sum << endl;
		cout << min << endl;
	}
}
void calculate_a(int m, int n)
{
	int sum = 0;
	int min = 0;
	for (int i= m; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0 && i / j == j)
			{
				sum += i;
				if (min == 0)
					min = i;
				break;
			}
			
		}
	}

	if (sum == 0)
		cout << "-1" << endl;
	else
	{
		cout << sum << endl;
		cout << min << endl;
	}
	
}
int main(void)
{
	int m = 0;//m이상
	int n = 0;//n이하

	//cin >> m;
	//cin >> n;//m, n 사용자 입력
	cin >> m >> n;

	//calculate_a(m, n);
	//calculate_b(m, n);
	calculate_c(m, n);
	
}
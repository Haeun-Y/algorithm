#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long gcd(long long a, long long b)
{
	
	long long dividend,divisor;

	dividend = (a > b) ? a : b;
	divisor = (a > b) ? b : a;

	while (dividend % divisor != 0)
	{
		long long tmp = divisor;
		divisor = dividend % divisor;
		dividend = tmp;
	}

	return divisor;
}
int main(void)
{
	long long a = 0, b = 0;

	scanf_s("%lld %lld", &a, &b);

	int tmp = gcd(a, b);

	for (int i = 0; i < tmp; i++)
		printf("1");

}
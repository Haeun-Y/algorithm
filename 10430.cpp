#include <iostream>
using namespace std;

int main(void)
{
	int a = 0, b = 0, c = 0;

	scanf_s("%d %d %d", &a, &b, &c);

	printf("%d\n",(a+b)%c);
	printf("%d\n", ((a % c) + (b % c)) % c);
		printf("%d\n", (a *b) % c); 
		printf("%d\n", ((a % c) *(b % c)) % c);
}
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int num = 0; 

	scanf_s("%d", &num);

	vector<long long> list(num);

	list[0] = 1;
	list[1] = 1;

	for (int i = 2; i < num; i++)
		list[i] = (long long)list[i - 2] + list[i - 1];

	printf("%lld", list[num - 1]);
}
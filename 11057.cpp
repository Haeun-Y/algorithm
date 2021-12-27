#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int num = 0;
	scanf_s("%d", &num);

	vector<int> list(10, 1);

	for (int i = 0; i < num; i++)
	{
		for (int i = 1; i < list.size(); i++)
		{
			list[i] = (list[i] + list[i - 1]) % 10007;
		}

	}
	printf("%d", list.back());


}
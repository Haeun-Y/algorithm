#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> list(11);
	list[1] = 1;
	list[2] = 2;
	list[3] = 4;

	for (int i = 4; i < 11; i++)
		list[i] = list[i - 1] + list[i - 2] + list[i - 3];
	
	int testCase = 0;
	scanf_s("%d", &testCase);

	for (int i = 0; i < testCase; i++)
	{
		int num = 0; 
		scanf_s("%d", &num);
		printf("%d\n", list[num]);
	}
}
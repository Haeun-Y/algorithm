#include <iostream>
#include <vector>
using namespace std;

int Calculate_result(int num)
{
	int f1 = 1;
	int f2 = 2;
	int result = 0;
	for (int i = 3; i <= num; i++)
	{
		result = (f1 + f2) % 10007;
		f1 = f2;
		f2 = result;
	}
	return result;
}
int main(void)
{
	int num = 0;
	scanf_s("%d", &num);
	vector<int> list(num + 2);

	list[1] = 1;
	list[2] = 2;
	for (int i = 3; i <= num; i++)
		list[i] = (list[i - 2] + list[i - 1]) % 10007;

	printf("%d", list[num]);

	/*
	int num = 0;
	scanf("%d", &num);

	if (num <= 2) printf("%d", num);
	else printf("%d", Calculate_result(num));
	*/
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int num = 0;
	scanf_s("%d", &num);

	vector<int> list(num);

	for (int i = 0; i < num; i++)
		scanf_s("%d", &list[i]);

	sort(list.begin(), list.end());//오름차순

	for (int i = 0; i < num; i++)
		list[i] = (num - i) * list[i];
	
	sort(list.begin(), list.end());

	printf("%d", list.back());
}
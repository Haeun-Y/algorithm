#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	vector<int> aList(n);
	vector<int> bList(n);

	for (int i = 0; i < n; i++)
		scanf_s("%d", &aList[i]);

	for (int i = 0; i < n; i++)
		scanf_s("%d", &bList[i]);

	sort(aList.begin(), aList.end());//오름차순
	sort(bList.begin(), bList.end());//오름차순

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += aList[i] * bList[n-1 - i];

	printf("%d", sum);
}
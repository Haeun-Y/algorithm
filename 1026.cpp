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

	sort(aList.begin(), aList.end());//��������
	sort(bList.begin(), bList.end());//��������

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += aList[i] * bList[n-1 - i];

	printf("%d", sum);
}
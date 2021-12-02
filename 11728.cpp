#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int sizeA = 0, sizeB = 0;
	scanf_s("%d %d", &sizeA, &sizeB);

	vector<int> aList(sizeA+sizeB);
	
	int total = sizeA + sizeB;
	int i = 0;
	for (; i < sizeA; i++)
		scanf_s("%d", &aList[i]);

	for (; i < total; i++)
		scanf_s("%d", &aList[i]);

	sort(aList.begin(), aList.end());

	for (int i = 0; i < total; i++)
		printf("%d ", aList[i]);


}
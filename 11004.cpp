#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int numOfNum = 0, kOrder;
	scanf_s("%d %d", &numOfNum, &kOrder);
	vector<int> sequence(numOfNum);

	for (int i = 0; i < numOfNum; i++)
		scanf_s("%d", &sequence[i]);
	sort(sequence.begin(), sequence.end());

	printf("%d", sequence[kOrder-1]);


}
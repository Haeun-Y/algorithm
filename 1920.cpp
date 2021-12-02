#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int numOfN = 0, numOfM = 0;
	scanf_s("%d", &numOfN);

	vector<int> nList(numOfN);

	for (int i = 0; i < numOfN; i++)
		scanf_s("%d", &nList[i]);
	sort(nList.begin(), nList.end());

	scanf_s("%d", &numOfM);

	for (int i = 0; i < numOfM; i++)
	{
		int targetNum = 0;
		scanf_s("%d", &targetNum);
		if (binary_search(nList.begin(), nList.end(), targetNum))
			printf("1\n");
		else printf("0\n");
	}
}

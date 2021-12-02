#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int numOfCard = 0, numOfCheck = 0;
	scanf_s("%d", &numOfCard);

	vector <int> cardList(numOfCard);
	for (int i = 0; i < numOfCard; i++)
		scanf_s("%d", &cardList[i]);

	sort(cardList.begin(), cardList.end());
	scanf_s("%d", &numOfCheck);

	for (int i = 0; i < numOfCheck; i++)
	{
		int check = 0;
		scanf_s("%d", &check);
		if (binary_search(cardList.begin(), cardList.end(), check))
			printf("1 ");
		else printf("0 ");
	}
}
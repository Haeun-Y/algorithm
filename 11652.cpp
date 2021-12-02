#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int numOfCard = 0;

	scanf_s("%d", &numOfCard);
	vector<long long> cardList(numOfCard);
	
	for (int i = 0; i < numOfCard; i++)
		cin >> cardList[i];

	sort(cardList.begin(), cardList.end());

	int maxTimes = 0;
	long long maxNum = 0;

	//���ĵ� ���Ϳ��� ���� ���� ���� ���ڰ� ������� ����
	for (int i = 0; i < numOfCard;)
	{
		int nowTimes = 1;
		while (i < numOfCard-1 && cardList[i] == cardList[i + 1])
		{
			nowTimes++;
			i++;
		}
		if (maxTimes < nowTimes)//�ڿ������� Ƚ���� ���ٸ� �� ���� ���� ���õǰ� �Ǿ�����
		{
			maxTimes = nowTimes;
			maxNum = cardList[i];
		}
		i++;
	}

	cout << maxNum;
	


}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<long long, int> a, pair<long long, int> b)
{
	if (a.second == b.second)//first가 작은 것을 출력
	{
		return a.first < b.first;
	}
	else return a.second > b.second; //같은 카드 갯수 기준 내림차순
}
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
	//정렬된 벡터에서 가장 많이 나온 숫자가 몇번인지 세기
	for (int i = 0; i < numOfCard;)
	{
		int nowTimes = 1;
		while (i < numOfCard-1 && cardList[i] == cardList[i + 1])
		{
			nowTimes++;
			i++;
		}
		if (maxTimes < nowTimes)//자연스럽게 횟수가 같다면 더 작은 수가 선택되게 되어있음
		{
			maxTimes = nowTimes;
			maxNum = cardList[i];
		}
		i++;
	}

	cout << maxNum;
	


}
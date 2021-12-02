#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	int numOfCard = 0;
	scanf_s("%d", &numOfCard);
	
	deque<int> dq;

	for (int i = 0; i < numOfCard; i++)
		dq.push_back(i + 1);

	while (dq.size() > 1)
	{
		printf("%d ", dq.front());
		dq.pop_front();
		int num = dq.front();
		dq.pop_front();
		dq.push_back(num);
	}
	printf("%d", dq.front());


}
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	stack<long long> s;//胶琶 积己

	int recordTimes = 0;
	long long sum = 0;
	scanf_s("%d", &recordTimes);


	for (int i = 0; i < recordTimes; i++)
	{
		long long num = 0;
		scanf_s("%lld", &num);
		if (num == 0)
		{
			sum = sum - s.top();
			s.pop();
		}

		else
		{
			sum += num;
			s.push(num);
		}

	}

	printf("%lld", sum);


}

/*#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	stack<int> s;//胶琶 积己

	int recordTimes = 0;
	scanf_s("%d", &recordTimes);


	for (int i = 0; i < recordTimes; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num == 0)
			s.pop();
		

		else
			s.push(num);
	}
	
	int sum = 0;
	int elementNum = s.size();
	for (int i = 0; i < elementNum; i++)
	{
		sum += s.top();
		s.pop();
	}

	printf("%d", sum);
	
	
}*/
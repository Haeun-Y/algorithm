#include <iostream>
#include <deque>
using namespace std;
 
int main(void)
{
	deque<int> dq;
	int people = 0;
	int th = 0;

	scanf_s("%d %d", &people, &th);
	
	for (int i = 0; i < people; i++)
		dq.push_back(i+1);

	deque<int>::iterator i = dq.begin();
	printf("<");
	

	while (!dq.empty())
	{
		for (int j =0; j<th-1; j++)
		{
			i++;
			if (i == dq.end())
				i = dq.begin();

		}
		if (dq.size() == people)
			cout << *i;
		else 
			cout << ", "<< *i;
		
		i = dq.erase(i);
		if (i == dq.end())
		{
			i = dq.begin();
		}
		
	}
	printf(">");
}
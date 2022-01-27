#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	priority_queue<int> pq;

	int operationNum = 0;
	scanf_s("%d", &operationNum);

	for (int i = 0; i < operationNum; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num != 0)//ť�� num�� �߰�
		{
			pq.push(num);
		}
		else // ���� ū���� ����ϰ� ť���� �� ���� ����
		{
			if (pq.empty())//ť�� ������� ��
				printf("0\n");
			else
			{
				printf("%d\n", pq.top());
				pq.pop(); //����
			}
		}
	}


}
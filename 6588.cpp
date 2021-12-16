#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makePrimeList(int num, vector<bool>& list)
{
	//false �� �ʱ�ȭ��
	//3�̻��� �Ҽ� : false, �� �� : true (0,1,2�� �ʿ� �����ϱ� �״�� ��)

	for (int i = 2; i * i <= num; i++)
	{
		if (list[i] == true) continue;
		//�̹� i�� ����� ���� 
		//=> i�� �Ҽ� �ƴ� && i�� ����� ������� �����ϴ� for���� ���� �̹� 
		//i�� ������� ���ŵ� ������

		for (int j = i*i; j < list.size(); j = j+i)
			list[j] = true;
	}
}
int main(void)
{
	
	vector<bool> numList(1000001);
	makePrimeList(1000000, numList);

	int num = 0;
	scanf_s("%d", &num);
	

	while (num != 0)
	{
		int a = 0, b = 0;
		int check = 0;

		for (int i = 3; i <= num-3; i= i+2)
		{
			if (numList[i] == true) continue;
			a = i;
			b = num - a;
			if (numList[b] == false)
			{
				printf("%d = %d + %d\n", num, a, b);
				check = 1;
				break;
			}
		}

		if (check == 0) printf("Goldbach's conjecture is wrong.\n");

		scanf_s("%d", &num);

	}
}
#include <iostream>
using namespace std;

int main(void)
{
	const int NUMOFSTATION = 10;
	int numOfPeople = 0;
	int max = 0;
	//������ ���� �ִ� ���� -> ������ ź �ο��� ���� ������ int�� �����

	//1. �Էµ� �� �迭�� �������� �����ؼ� ���� ���� ���� ��� �� ���
	//2. ������� ���� �ǰ� �ִ� �ο����� �˸� �Ǵϱ� �׳� ���� �ϳ��� ����
	//max �� �� �����鼭 for�� ������ 

	for (int i = 0; i< NUMOFSTATION; i++)
	{
		int out = 0, in = 0;
		scanf_s("%d %d", &out, &in);
		numOfPeople -= out;
		numOfPeople += in;
		if (max < numOfPeople)
			max = numOfPeople;

	}

	printf("%d", max);
	
}
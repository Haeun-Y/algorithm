#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makePrimeList(int num, vector<bool>& list)
{
	//false 로 초기화됨
	//3이상의 소수 : false, 그 외 : true (0,1,2는 필요 없으니까 그대로 둠)

	for (int i = 2; i * i <= num; i++)
	{
		if (list[i] == true) continue;
		//이미 i의 약수가 있음 
		//=> i는 소수 아님 && i의 약수의 배수들을 제거하는 for문을 통해 이미 
		//i의 배수들은 제거된 상태임

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
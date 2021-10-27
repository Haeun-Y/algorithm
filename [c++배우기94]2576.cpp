#include <iostream>
using namespace std;

int main(void)
{
	//int arr[7] = { 0 };
	//생각해보니까 배열도 필요없음, &쓰는거 배열과 포인터 복습
	int sum = 0;
	int min = 0;

	for (int i = 0; i < 7; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num % 2 == 1)
		{
			if (sum == 0)
				min = num;//첫번째 홀수 대입
			//첫번째 실수 : min을 0으로 초기화 해버림
			//그렇게 되면 무조건 0이 최소값이 되어버린다...
			else if(min > num)
			{
				min = num;
			}

			sum += num;
			
		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
	

	//주어진 수 중에서 홀수를 구분해서 새로운 저장 공간에 
	//저장해서 sort 함수를 사용하는게 더 비효율적이라 
	//생각해서 그냥 if문으로 해결함

}
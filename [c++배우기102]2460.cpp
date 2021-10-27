#include <iostream>
using namespace std;

int main(void)
{
	const int NUMOFSTATION = 10;
	int numOfPeople = 0;
	int max = 0;
	//기차의 정원 최대 만명 -> 기차에 탄 인원을 담을 변수는 int로 충분함

	//1. 입력될 때 배열에 저장한후 정렬해서 가장 많을 때의 사람 수 출력
	//2. 어딘지는 몰라도 되고 최대 인원수만 알면 되니까 그냥 변수 하나를 만들어서
	//max 비교 해 나가면서 for문 돌리기 

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
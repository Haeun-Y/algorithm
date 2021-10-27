#include <iostream>
using namespace std;

int main(void)
{
	//테스트 게이스의 개수 t
	//주사위를 두번 던져 나온 두수를 입력
	//각 테스트 케이스마다 합만 저장해두면 되므로 정수 배열로 충분함

	int t = 0;
	scanf_s("%d", &t);

	int* arr = (int*)malloc(sizeof(int) * t);
	for (int i = 0; i < t; i++)
	{
		int a = 0, b = 0;
		scanf_s("%d %d", &a, &b);
		arr[i] = a + b;
	}

	for (int i = 0; i < t; i++)
		printf("Case %d: %d\n", i + 1, arr[i]);
	
	
}
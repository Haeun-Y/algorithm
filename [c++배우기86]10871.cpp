#include <iostream>
using namespace std;

int main(void)
{
	//n개로 이루어진 수열 a와 정수 x
	//a에서 x보다 작은수 모두 출력 

	//정수 자료형 체크 : 모두 10000보다 작거나 같음 
	//기타 사칙연산해서 변수에 담을 값이 커지지 않음
	//-> int로 충분

	int n = 0; 
	int x = 0;
	scanf_s("%d %d", &n, &x);

	int* arr = (int*)malloc(sizeof(int) * n);

	/*for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);
	
	for (int i = 0; i < n; i++)
		if (arr[i] < x)
			printf("%d ", arr[i]);*/
	//위에 for문 두개보다 아래 for문 두개 사용했을 때
	//시간이 더 적게 걸림(위 4ms, 아래 0ms)
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] >= x)
			arr[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}
}
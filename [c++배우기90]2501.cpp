#include <iostream>
using namespace std;

int main(void)
{
	int n = 0, k = 0;
	scanf_s("%d %d", &n, &k);

	int* arr = (int*)malloc(sizeof(int) * n);

	int j = 0;//순차적으로 배열에 저장하기 위한 배열 인덱스 변수
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			arr[j++] = i;
	}

	//j++이 후위증가이기때문에 j는 저장된 원소 중 최대 index보다 1큼
	//->배열에 저장된 원소의 수(==n의 약수의 개수)이다. 

	if (j >= k)
		printf("%d", arr[k - 1]);

	else
		printf("0");
}
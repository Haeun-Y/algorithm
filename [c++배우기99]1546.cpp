#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;
	cin >> n;

	int* arr = (int*)malloc(sizeof(int) * n);

	int max = 0;
	float sum = 0;
	//적어도 한 과목의 점수는 0보다 큼 -> 최댓값은 적어도 
	//0보다 큼 아니면 그냥 arr[0] 으로 초기화해도 ㄱㅊ
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
	}


	for (int i = 0; i < n; i++)
		sum += (float)arr[i] / max * 100;
	

	cout << sum / n << endl;
}
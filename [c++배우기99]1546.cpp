#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;
	cin >> n;

	int* arr = (int*)malloc(sizeof(int) * n);

	int max = 0;
	float sum = 0;
	//��� �� ������ ������ 0���� ŭ -> �ִ��� ��� 
	//0���� ŭ �ƴϸ� �׳� arr[0] ���� �ʱ�ȭ�ص� ����
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
#include <iostream>
using namespace std;

int main(void)
{
	//n���� �̷���� ���� a�� ���� x
	//a���� x���� ������ ��� ��� 

	//���� �ڷ��� üũ : ��� 10000���� �۰ų� ���� 
	//��Ÿ ��Ģ�����ؼ� ������ ���� ���� Ŀ���� ����
	//-> int�� ���

	int n = 0; 
	int x = 0;
	scanf_s("%d %d", &n, &x);

	int* arr = (int*)malloc(sizeof(int) * n);

	/*for (int i = 0; i < n; i++)
		scanf_s("%d", &arr[i]);
	
	for (int i = 0; i < n; i++)
		if (arr[i] < x)
			printf("%d ", arr[i]);*/
	//���� for�� �ΰ����� �Ʒ� for�� �ΰ� ������� ��
	//�ð��� �� ���� �ɸ�(�� 4ms, �Ʒ� 0ms)
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
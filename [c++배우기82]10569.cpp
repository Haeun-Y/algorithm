#include <iostream>
using namespace std;

int main(void)
{
	//(�������� ��) - (�𼭸��� ��) + (���� ��) = 2
	//���� �� = �𼭸��� �� - �������Ǽ� +2
	//v : �������� ����, e : �𼭸��� ����

	int arr[100] = { 0 };

	int t = 0;
	scanf_s("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int v = 0, e = 0;
		scanf_s("%d %d", &v, &e);
		arr[i] = e - v +2 ;
	}

	for (int i = 0; i < t; i++)
		printf("%d\n", arr[i]);
}
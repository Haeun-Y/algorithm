#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int arr[100] = { 0, };
	int test = 0;
	
	cin >> test;
	//���� ���� -> �ð����⵵ nm�� ����
	//���� ���� �Ⱦ� ����� �ֳ�..?
	for (int i = 0; i < test; i++)
	{
		int numOfstore = 0;
		cin >> numOfstore;

		int store[20] = { 0, };
		for (int j = 0; j < numOfstore; j++)
			cin >> store[j];
		sort(store, store + numOfstore);// �������� ����
		arr[i] = 2 * (store[numOfstore - 1] - store[0]);
	}

	for (int i = 0; i < test; i++)
		cout << arr[i] << endl;

}
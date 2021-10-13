#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int arr[100] = { 0, };
	int test = 0;
	
	cin >> test;
	//이중 포문 -> 시간복잡도 nm임 현재
	//이중 포문 안쓸 방법이 있나..?
	for (int i = 0; i < test; i++)
	{
		int numOfstore = 0;
		cin >> numOfstore;

		int store[20] = { 0, };
		for (int j = 0; j < numOfstore; j++)
			cin >> store[j];
		sort(store, store + numOfstore);// 오름차순 정렬
		arr[i] = 2 * (store[numOfstore - 1] - store[0]);
	}

	for (int i = 0; i < test; i++)
		cout << arr[i] << endl;

}
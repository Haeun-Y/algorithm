#include <iostream>
using namespace std;

int main(void)
{
	//(꼭짓점의 수) - (모서리의 수) + (면의 수) = 2
	//면의 수 = 모서리의 수 - 꼭짓점의수 +2
	//v : 꼭짓점의 개수, e : 모서리의 개수

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
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

typedef struct player
{
	int price;
	char name[21];

}player;
bool compare(player &p1, player &p2)
{
	if (p1.price > p2.price)
		return true;
	else return false;
}
int main(void)
{
	char result[100][21];
	player arr[100];
	int test = 0;

	cin >> test;
	
	for (int i = 0; i < test; i++)
	{
		int player_num = 0;
		cin >> player_num;

		for (int j = 0; j < player_num; j++)
			cin >> arr[j].price >> arr[j].name;
		
		sort(arr, arr + player_num, compare);
		strcpy_s(result[i], arr[0].name);
	}

	for (int i = 0; i < test; i++)
		cout << result[i] << endl;
}
#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;
	cin >> n;

	int total = 0;

	

	for (int i = 0; i < n; i++)
	{
		int plug = 0;
		cin >> plug;

		if (i == n-1)
			total += plug;
		else
			total += (plug - 1);
	}
	cout << total << endl;
}
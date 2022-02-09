#include <iostream>
#include <vector>
using namespace std;

int calculateMax(vector<int> v)
{
	int max = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (max < v[i])
			max = v[i];
	}
	return max;
}
int calculateSetNum(string str)
{
	vector<int> v(10, 0);
	
	for (int i = 0; i < str.length(); i++)
	{
		int target = str[i] - '0';
		v[target]++;
	}
	int tmp = v[6] + v[9];
	if (tmp % 2 == 0)//Â¦¼ö
		v[6] = v[9] = tmp / 2;
	else//È¦¼ö
	{
		tmp = (v[6] > v[9]) ? v[6] : v[9];
		v[6] = v[9] = tmp;
	}

	int result = calculateMax(v);
	return result;

}

int main(void)
{
	string str;
	cin >> str;
	int result = calculateSetNum(str);
	printf("%d", result);

}
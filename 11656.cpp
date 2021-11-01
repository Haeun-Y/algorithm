#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (b.compare(a) >= 1)// a b
		return true;
	else return false;
}
int main(void)
{
	string str;
	vector<string> suffix;
	cin >> str;
	int length = str.length();
	for (int i = 0; i < length; i++)
		suffix.push_back(str.substr(i));
	
	sort(suffix.begin(), suffix.end(), compare);

	for (int i = 0; i < length; i++)
		cout << suffix[i] << endl;
}
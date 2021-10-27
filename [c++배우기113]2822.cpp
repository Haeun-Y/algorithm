#include <iostream>
#include <algorithm>
using namespace std;

typedef struct participant
{
	int score;
	int problemNum;

}participant;
bool compare(participant a, participant b)
{
	return a.score < b.score;
}
bool compareForIdx(participant a, participant b)
{
	return a.problemNum < b.problemNum;
}
int main(void)
{
	participant arr[8];
	int total = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i].score;
		arr[i].problemNum = i + 1;
	}

	sort(arr, arr + 8, compare);

	sort(arr + 3, arr + 8, compareForIdx);
	
	for (int i = 3; i < 8; i++)
		total += arr[i].score;
	cout << total << endl;
		
	for(int i =3; i<8; i++)
		cout << arr[i].problemNum << " ";
	


}
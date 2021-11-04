#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct student
{
	string name;
	int koreanScore;
	int mathScore;
	int englishScore;

}student;
bool compare(student a, student b)
{
	if (a.koreanScore != b.koreanScore)
		return a.koreanScore > b.koreanScore;

	if (a.englishScore != b.englishScore)
		return a.englishScore < b.englishScore;

	if (a.mathScore != b.mathScore)
		return a.mathScore > b.mathScore;

	return ((a.name.compare(b.name)) < 0) ? true : false;

}
int main(void)
{
	int studentNum = 0;
	scanf_s("%d", &studentNum);

	vector<student> v(studentNum);

	for (int i = 0; i < studentNum; i++)
		cin >> v[i].name >> v[i].koreanScore >> v[i].englishScore >> v[i].mathScore;

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < studentNum; i++)
	{
		cout << v[i].name;
		printf("\n");
	}

}
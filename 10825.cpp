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
	if (a.koreanScore == b.koreanScore)
	{
		if (a.englishScore == b.englishScore)
		{
			if (a.mathScore == b.mathScore)//모든 점수가 같은 경우
			{
				return ((a.name.compare(b.name)) < 0) ? true : false;
				//a b 순서 일 때 -1 나오고 b a순서일때 양수 나옴 a.namecompare
			}
			return a.mathScore > b.mathScore;
		}

		else return a.englishScore < b.englishScore;
	}
	else return a.koreanScore > b.koreanScore;

}
int main(void)
{
	int studentNum = 0;
	cin >> studentNum;
	cin.ignore();

	vector<student> v;
	for (int i = 0; i < studentNum; i++)
	{
		student tmp;
		cin >> tmp.name >> tmp.koreanScore >> tmp.englishScore >> tmp.mathScore;
		v.push_back(tmp);
	}
	
	sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < studentNum; i++)
		cout << v.at(i).name << endl;

}
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct stu
{
	char name[15];
	int date;
	int month;
	int year;
}stu;

bool compare(const stu& stu1, const stu& stu2)
{
	if (stu1.year < stu2.year)
		return true;

	else if (stu1.year == stu2.year)
	{
		if (stu1.month == stu2.month)
			return stu1.date < stu2.date;
		
		else return stu1.month < stu2.month;
	}
	else return false;

}
int main(void)
{
	const int YEAR = 2021;
	stu arr[100];

	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i].name >> arr[i].date >> arr[i].month >> arr[i].year;
	}

	sort(arr, arr + 5, compare);//year, month, date 오름차순 정렬 == 나이 많은 순임


	cout << arr[num - 1].name << endl;
	cout << arr[0].name << endl;

}
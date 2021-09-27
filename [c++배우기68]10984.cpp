#include <iostream>
using namespace std;

typedef struct semester
{
	int classNum;
	int credit;
	float gpa;
}semester;

int main(void)
{
	int numOfSemester = 0;
	scanf_s("%d", &numOfSemester);
	semester arr[10] = { 0, 0, 0 };

	for (int i = 0; i < numOfSemester; i++)
	{
		cin >> arr[i].classNum;
		for (int j = 0; j < arr[i].classNum; j++)
		{
			int tmp_credit = 0;
			float tmp_gpa = 0;
			cin >> tmp_credit >> tmp_gpa;
			arr[i].credit += tmp_credit;
			arr[i].gpa += (tmp_credit * tmp_gpa);
		}
	}

	for (int i = 0; i < numOfSemester; i++)
	{
		printf("%d %.1f\n", arr[i].credit, arr[i].gpa / arr[i].credit);
	}

}
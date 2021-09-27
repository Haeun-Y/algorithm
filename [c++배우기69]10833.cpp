#include <iostream>
using namespace std;

typedef struct school
{
	int num_stu;
	int num_apple;

}school;
int main(void)
{
	int num_school = 0, result = 0;+
	cin >> num_school;

	school* arr = (school*)malloc(sizeof(school) * num_school);
	for (int i = 0; i < num_school; i++)
		cin >> arr[i].num_stu >> arr[i].num_apple;
	
	for (int i = 0; i < num_school; i++)
	{
		int apple_for_one = arr[i].num_apple / arr[i].num_stu;
		result += arr[i].num_apple - apple_for_one* arr[i].num_stu;
	}

	cout << result << endl;
}
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	//입력 : 첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. 
	//A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.
	//-> 최대 999*999*999 = 997,002,999 -> 9자리 -> int로 충분
	//int 범위 : 10자리 정도? 2~

	int result = 1;

	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		result *= num;
	}

	string num = to_string(result);

	//string 함수 compare사용?
	for (int i = 0; i < 10; i++)
	{
		int numOfI = 0;
		for (size_t j = 0; j < num.length();)
		{
			size_t tmp = num.find(to_string(i), j);
			if (tmp == string::npos)//i가 num 문자열 안에 없을 때
				break;
			
			else//i가 num 문자열 안에 있을 때
			{
				numOfI++;
				j = tmp+1;
			}
			
		}

		printf("%d\n", numOfI);
	}
}
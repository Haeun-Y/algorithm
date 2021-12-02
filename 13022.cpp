#include <iostream>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	char arr[4] = { 'w', 'o', 'l', 'f' };
	int arrLength = 4;
	int check = 1;
	int nowIdx = 0;


	while (nowIdx < str.length())
	{
		if (str[nowIdx] == 'w')
		{
			int numOfW = 1;
			nowIdx++;
			while (nowIdx < str.length() && str[nowIdx] == arr[0])
			{
				numOfW++;
				nowIdx++;
			}

			
			for (int i = 1; i < arrLength; i++)
			{
				for (int j = 0; j < numOfW; j++)
				{
					if (nowIdx >= str.length() || str[nowIdx] != arr[i])
					{
						check = 0;
						break;
					}
					nowIdx++;
				}
				if (check == 0)
					break;
			}
			if (check == 0)
				break;
		}

		else
		{
			check = 0;
			break;
		}

	}


	printf("%d", check);


}
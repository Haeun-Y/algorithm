#include <iostream>
using namespace std;

int main(void)
{
	//�谡 0
	int result[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		int arr[4] = { 0 };
		
		for (int j = 0; j < 4; j++)
		{
			scanf_s("%d", &arr[j]);
			if (arr[j] == 0)
				result[i]++;
		}
		//���⼭ üũ �Ǵ� ��½� üũ 
		
		if (result[i] == 0)
			result[i] = 69;
		else
			result[i] += 64;
	
	}

	for (int i = 0; i < 3; i++)
		printf("%c\n", result[i]);

}
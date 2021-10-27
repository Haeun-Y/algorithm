#include <iostream>
using namespace std;

int main(void)
{
	//입력되는 수는 모두 자연수이므로 42로 나눈 나머지는 
	//모두 0보다 크거나 같다. 
	//-> 배열의 초기화는 -1로 한다. 

	int arr[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
	
	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		num %= 42;
		
		//이전의 모든 i마다 나머지가 저장됐다고 해도 
		//현재의 i 이전 인덱스까지 저장됐을 것이므로 배열의 index < i 까지만 확인하면 된다.
		int tmp = 0;
		for (int j = 0; j < i; j++)
		{
			if (num == arr[j])
			{
				tmp = 1;
				break;
			}
		}
		if (tmp == 0)
			arr[i] = num;
	}

	int size = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != -1)
			size++;
		
	}
	printf("%d", size);
	
}
#include <iostream>
using namespace std;

int main(void)
{
	//1 2 2 3 3 3 4 4 4 4
	//2 3 3 3 4 = 15
	
	int startNum = 0, endNum = 0;

	scanf_s("%d %d", &startNum, &endNum);
	
	int* arr = (int*)malloc(sizeof(int) * (endNum));
	
	int nowNum = 1;
	int sum = 0;

	for (int i = 0; i < endNum;)//�ε��� ����
	{
		for (int j = 0; j < nowNum; j++)
		{
			if (i >= (startNum-1) && i < endNum)
				sum += nowNum;
			arr[i] = nowNum;
			i++;
		}
		nowNum++;
		
	}

	//for (int i = 0; i < endNum; i++)
	//	cout << arr[i] << " ";
	//cout << endl;
	//�迭 Ȯ�� �ڵ�

	cout << sum << endl;
	

	
}
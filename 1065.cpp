#include <iostream>
using namespace std;

int main(void)
{
	int n = 0;//1000 >= n >= 1
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i <= 99)//한자리수, 두자리 수는 무조건 한수
			sum++;
		else if (99 < i && i<= 999)//100~999
			//99<i<=999이렇게 써서 틀림
		{
			//abc
			int c = i % 10;//일의 자리수
			int b = (i/10)%10;//십의 자리수
			int a = (i/100)%10;//백의 자리수

			if (a - b == b - c)
			{
				sum++;
			}
			
		}
		
		//이 외의 경우는 네자리수인 1000인데 1000은 한수가 
		//아니므로 굳이 분기를 해주지 않아도 됨
		//1000입력시 1000이 else if 분기에 걸리는 이유는?
	}

	printf("%d", sum);
}
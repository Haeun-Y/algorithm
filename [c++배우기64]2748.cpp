#include <iostream>
using namespace std;

int recursion_fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n < 2)
		return 1;
	else
		return recursion_fibonacci(n - 1) + recursion_fibonacci(n - 2);
	
		//n = 0 ���� ������ �ƴ϶� n = 1���� �����Ѵٰ� �ϸ� ������ ������?
		//->�������� 0�� 1�� �����Ѵٰ� �ߴµ� �Ʒ� �ڵ�� �ϸ� �Ǻ���ġ 0�� ����
		//1�� ����� ���� ���� ���ǿ� �����
		//if(n <= 2)
		//	return 1;
		//else
		//	return recursion_fibonacci(n - 1) + recursion_fibonacci(n - 2);

		
}

void iterative_fibonacci(int n)
{
	long long f1 = 1;
	long long f0 = 0;
	
	
	for (int i = 2; i <= n; i++)
	{
		long long tmp = f1;
		f1 = f0 + f1;
		f0 = tmp;
	}

	if(n == 0)
		cout << f0 << endl;
	else
		cout << f1 << endl;
	
	
	

	
}
int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	
	iterative_fibonacci(n);
	/*cout << recursion_fibonacci(n) << endl;*/

}
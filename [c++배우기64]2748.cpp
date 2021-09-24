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
	
		//n = 0 부터 시작이 아니라 n = 1부터 시작한다고 하면 문제가 없는지?
		//->문제에서 0과 1로 시작한다고 했는데 아래 코드로 하면 피보나치 0번 또한
		//1로 결과가 떠서 문제 조건에 위배됨
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
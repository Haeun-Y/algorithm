#include <iostream>
using namespace std;

int main(void)
{
	int total = 0;
	int max = 0;
	for (int i = 0; i < 4; i++)
	{
		int in = 0, out = 0;
		scanf_s("%d %d", &out, &in);
		total = total - out;
		total = total + in;
		if (total > max)
			max = total; 
		
	}
	printf("%d", max);
}
#include <iostream>
using namespace std;

typedef struct test
{
	int v;//형제의 수
	int c;//사탕의 수
}test;
int main(void)
{
	//테스트케이스 수, 사탕의 개수 c, 형제의 수 v
	//제한 1<= c,v <= 1000
	//테스트케이스 수에 대한 제한 x -> 배열 동적 할당

	int test_num = 0;
	scanf_s("%d", &test_num);

	test* arr = (test*)malloc(sizeof(test) * test_num);

	for (int i = 0; i < test_num; i++)
		scanf_s("%d %d", &arr[i].c, &arr[i].v);
	
	for (int i = 0; i < test_num; i++)
	{
		int result = arr[i].c / arr[i].v;//형제 인당 사탕의 개수
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", result, arr[i].c - result * arr[i].v);
	}


}
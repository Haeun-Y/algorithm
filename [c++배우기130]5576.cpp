#include <iostream>
#include <algorithm>
#define NUM_OF_STU 10
using namespace std;

int main(void)
{
	int score[NUM_OF_STU] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < NUM_OF_STU; j++)
			scanf_s("%d", &score[j]);
		sort(score, score + NUM_OF_STU);
		int totalScore = 0;
		for (int j = NUM_OF_STU-3; j < NUM_OF_STU; j++)
			totalScore += score[j];
		printf("%d ", totalScore);
	}

	
	

}
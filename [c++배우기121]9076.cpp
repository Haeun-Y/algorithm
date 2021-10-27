#include <iostream>
#include <algorithm>
using namespace std;
#define REFEREE 5

int main(void)
{
    int testCase = 0;
    scanf_s("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int score[REFEREE] = { 0, };
        for (int j = 0; j < REFEREE; j++)
            scanf_s("%d", &score[j]);

        sort(score, score + 5);//오름차순 

        if (score[REFEREE - 2] - score[1] >= 4)
            printf("KIN\n");
        else
        {
            int total = 0;
            for (int k = 1; k < REFEREE - 1; k++)
                total += score[k];
            printf("%d\n", total);
        }

    }

}
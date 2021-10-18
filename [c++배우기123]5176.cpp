#include <iostream>
#include <algorithm>
using namespace std;


int main(void)
{
    int testCase = 0;
    scanf_s("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int favoriteSeat[500] = { 0, };
        int numOfPartcipant = 0, numOfSeat = 0, numOfFailure = 0;

        scanf_s("%d %d", &numOfPartcipant, &numOfSeat);

        for (int j = 0; j < numOfPartcipant; j++)
            scanf_s("%d", &favoriteSeat[j]);

        sort(favoriteSeat, favoriteSeat + numOfPartcipant);

        for (int j = 0; j < numOfPartcipant - 1; j++)
        {
            if (favoriteSeat[j] == favoriteSeat[j + 1])
            {
                numOfFailure++;
                //printf("%d == %d, %d\n", favoriteSeat[j], favoriteSeat[j+1], numOfFailure);

            }
        }

        printf("%d\n", numOfFailure);

    }


}
/*
#include <iostream>
using namespace std;

int main(void)
{
    int testCase = 0;
    scanf("%d", &testCase);

    for(int i =0; i<testCase; i++)
    {
        int seat[500] = {0,};
        int numOfPartcipant = 0, numOfSeat =0, numOfFailure=0;

        scanf("%d %d",&numOfPartcipant, &numOfSeat);

        for(int j =0; j<numOfPartcipant; j++)
        {
            int favoriteSeat = 0;
            scanf("%d", &favoriteSeat);
            for(int k =0;k<numOfSeat; k++)
            {
                if((k+1)==favoriteSeat)
                {
                    if(seat[k] == -1)
                        numOfFailure++;

                    else
                        seat[k] = -1;

                    break;
                }

            }

        }
        printf("%d\n", numOfFailure);

    }


}
*/
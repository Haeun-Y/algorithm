#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void)
{
    int m = 0, n = 0;
    scanf_s("%d %d", &m, &n);

    vector<int> numList;

    for (int i = m; i <= n; i++)
        numList.push_back(i);

    int target = sqrt(n);

    if (numList[0] == 1) numList[0] = 0;

    for (int i = 2; i <= target; i++)
    {
        for (int j = 0; j < numList.size(); j++)
        {
            if (numList[j] != 0 && numList[j] != i && numList[j] % i == 0)
                numList[j] = 0;
        }
    }

    for (int i = 0; i < numList.size(); i++)
        if (numList[i] != 0) printf("%d\n", numList[i]);

}
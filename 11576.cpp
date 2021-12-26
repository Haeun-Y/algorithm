#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(void)
{
    int notationA = 0, notationB = 0;
    scanf("%d %d", &notationA, &notationB);

    int numOfDigits = 0;
    scanf("%d", &numOfDigits);

    vector<int> numA(numOfDigits);
    vector<int> numB;

    int decimal = 0;

    for (int i = 0; i < numOfDigits; i++)
    {
        scanf("%d", &numA[i]);
        decimal += numA[i] * (int)pow(notationA, numOfDigits - 1 - i);

    }

    while (decimal != 0)
    {
        numB.push_back(decimal % notationB);
        decimal /= notationB;
    }

    for (int i = numB.size() - 1; i >= 0; i--)
        printf("%d ", numB[i]);


}
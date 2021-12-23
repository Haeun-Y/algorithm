#include <iostream>
using namespace std;

int main(void)
{
    int num = 0, multipleOf5 = 0;
    scanf_s("%d", &num);

    for (int i = 5; i <= num; i = i + 5)
    {
        int tmp = i;
        while (tmp % 5 == 0)
        {
            multipleOf5++;
            tmp /= 5;
        }
    }


    printf("%d", multipleOf5);

}
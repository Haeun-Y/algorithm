#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 0, y = 0;
    scanf_s("%d %d", &x, &y);

    vector<string> days(7);

    days[0] = "SUN";
    days[1] = "MON";
    days[2] = "TUE";
    days[3] = "WED";
    days[4] = "THU";
    days[5] = "FRI";
    days[6] = "SAT";

    vector<int> month(12 + 1);

    for (int i = 1; i < 12; i++)
    {
        if (i == 2)
        {
            month[i] = 28;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            month[i] = 30;
        }
        else
        {
            month[i] = 31;
        }
    }

    int target = 0;
    for (int i = 1; i < x; i++)
    {
        for (int j = 1; j <= month[i]; j++)
        {
            target++;
            if (target == 7)
                target = 0;
        }
    }



    for (int i = 1; i <= y; i++)
    {
        target++;
        if (target == 7)
        {
            target = 0;
        }
    }

    cout << days[target];

}
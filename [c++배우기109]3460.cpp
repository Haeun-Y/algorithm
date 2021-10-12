#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int arr[10];
    int numOfTestcase = 0;

    cin >> numOfTestcase;
    for (int i = 0; i < numOfTestcase; i++)
        cin >> arr[i];
   

    for (int i = 0; i < numOfTestcase; i++)
    {
        string tmp = "";
        while (arr[i] / 2 >= 0 )
        {
            if (arr[i] / 2 == 0 && arr[i] % 2 == 0)
                break;
            tmp = to_string(arr[i] % 2) + tmp;
            arr[i] /= 2;
        }

        int tmpLength = tmp.length();
        for (int j = tmpLength-1; j >= 0; j--)
        {
            if (tmp.at(j) == '1')
            {
                cout << tmpLength - j - 1 << " ";
            }
        }

        cout << endl;
    }

}
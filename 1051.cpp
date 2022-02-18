#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n = 0, m = 0;
    scanf_s("%d %d", &n, &m);
    vector<vector<int>> rect(n, vector<int>(m));

    //printVector(rect);

     //직사각형 입력
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
            rect[i][j] = str[j] - '0';

    }

    // printVector(rect);

    int min = (n > m) ? m : n;
    int result = 0;

    //정사각형 한변의 크기에 관한 루프
    for (int i = min; i > 1; i--)
    {
        //정사각형 시작점에 대한 for문
        for (int j = 0; j <= n - i; j++)
        {
            for (int k = 0; k <= m - i; k++)
            {
                if (rect[j][k] == rect[j][k + i - 1] && rect[j+i-1][k] == rect[j + i - 1][k+i-1] && rect[j][k]==rect[j + i - 1][k])
                {
                    result = i * i;
                    break;
                }
            }
            if (result != 0)
                break;

        }
        if (result != 0) break;
    }


    if (result == 0)
        printf("1");
    else printf("%d", result);

}
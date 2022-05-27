#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int idx;
    bool isExist;
}stuCheck;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int stuNum;
    cin >> stuNum;
    
    vector<string> stu(stuNum);
    for(int i =0; i<stuNum; i++)
        cin>> stu[i];
    int length = stu[0].length();
    
    int result = 0;
    
    for(int i = 0; i<stuNum; i++)
    {
        for(int j = i+1; j<stuNum; j++)
        {
            for(int k =length-1; k>=0; k--)
            {
                if(stu[i][k] != stu[j][k])
                {
                    if(result < (length-k-1))
                        result = length-k-1;
                    break;
                }
            }
        }
    }
    
    result++;
    cout << result;
    
    
    
}

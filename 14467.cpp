#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    //cows[idx] == -1 => 관찰정보 없음
    
    vector<int> cows(11, -1);
    int observation = 0, result = 0;
    scanf("%d", &observation);
    
    for(int i =0; i<observation; i++)
    {
        int cowNum =0, state = 0;
        scanf("%d %d", &cowNum, &state);
        if(cows[cowNum] == -1) cows[cowNum] = state;
        else if(cows[cowNum] != state)
        {
            result++;
            cows[cowNum] = state;
        }
    }
    
    printf("%d", result);
    
    
    
}

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    const int sideNum = 6;
    int melonNum;
    cin >> melonNum;
    vector<int> field(5, 0);
    bool check = true;
    int minWidth, minHeight, maxWidth, maxHeight;
    
    for(int i =0; i<sideNum; i++)
    {
        int direction, length;
        cin >> direction >> length;
        int tmp = field[direction];
        if(tmp == 0)
            field[direction] = length;
        else//이미 입력된 방향일 경우
        {
            if(check)
            {
                minWidth = length;
                check = false;
            }
            else
                minHeight = tmp;
        }
    }
    
    maxWidth = max(field[1], field[2]);
    maxHeight = max(field[3], field[4]);
    
    int result = maxWidth * maxHeight - minWidth* minHeight;
    cout << melonNum * result;
  
    
    
}

#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    //내림차순 정렬
    return a > b;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int row, col, blockNum;
    cin >> row >> col >> blockNum;
    
    vector<int> lands(row * col);
    
    for(int i =0; i<row*col; i++)
        cin >> lands[i];
    
    //내림차순 정렬
    sort(lands.begin(), lands.end(), cmp);
    
    int minHeight = 257;
    int minSec = 128000000;
    int totalSec, beforeHeight, tmp, invenBlockNum;
    bool check;
    for(int i= 0; i<=256; i++)
    {
        invenBlockNum = blockNum;
        check = false;
        totalSec = 0;
        for(int j = 0; j < row*col; j++)
        {        
            beforeHeight = lands[j];
            if(beforeHeight == i)
                continue;
            else if(beforeHeight > i)
            {   
                tmp = (beforeHeight-i);
                invenBlockNum += tmp;
                totalSec += (2 * tmp);
            }
            else//beforeHeight < i
            {
                tmp = i-beforeHeight;
                if(tmp > invenBlockNum)
                {
                    check = true;
                    break;
                }
                else//blockNum이 충분할 때
                {
                    invenBlockNum -= tmp;
                    totalSec += (tmp);
                }
                
            }
            if(check) break;
        }
        
        if(check) break;
        
        if(minSec >= totalSec)
        {
            minHeight = i;
            minSec = totalSec;
        }
        
    }
    
    cout << minSec << " " << minHeight;
    
}

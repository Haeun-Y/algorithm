#include <bits/stdc++.h>
using namespace std;
bool isAcquaintance(vector<vector<bool>>& v, int& target1, int& target2)
{
    int n = v[0].size()-1;
    for(int i = 1; i<= n; i++)
    {
        if(i == target1 || i == target2) continue;
        if(v[target1][i] && v[target2][i])
        {   
            //cout << target1 <<" and" << target2 << "have same friends " << i<< "\n";
            return true;}
    }
    return false;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; 
    cin >> n;
    
    vector<vector<bool>> friends(n+1, vector<bool>(n+1));
    
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            char ch;
            cin >> ch;
            if(ch == 'Y')
                friends[i][j] = true;
            else friends[i][j] = false;
        }
    }
    
    int maxF = 0;
    
    for(int i = 1; i<=n; i++)
    {
        int friendNum = 0;
        for(int j = 1; j<=n; j++)
        {
            if(i == j) continue;
            else if(friends[i][j]) {
                friendNum++;
                //cout << i <<"and " << j << "are friends\n"; 
            }
            else
            {
                if(isAcquaintance(friends, i, j))
                {    friendNum++;
                    //cout << i << "and " << j << "are acquaintances\n";
                }
            }
        }
        
        if(friendNum > maxF)
            maxF = friendNum;
    }
    
    cout << maxF;
}

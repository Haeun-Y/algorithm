#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, testNum;
    cin >> n >> testNum;
    
    vector<vector<int>> nums(n+1, vector<int>(n+1));
    for(int i =1; i<=n; i++)
    {
        for(int j =1; j<=n; j++)
        {
            int num;
            cin >> num;
            nums[i][j] = num + nums[i][j-1];
        }
    }
    
    for(int i =0; i<testNum; i++)
    {
        int x1, y1, x2, y2, sum = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j<=x2; j++)
            sum += (nums[j][y2] - nums[j][y1-1]);
        
        cout << sum << "\n";
    }
    
}

#include <bits/stdc++.h>
using namespace std;
int n;
int findMax(vector<vector<int>>& nums, vector<pair<int, int>>& locations)
{
    int maxIdx = 0;
    int max = nums[locations[0].first][locations[0].second];

    for(int i = 1; i<n; i++)
    {
        int curRow = locations[i].first;
        int curCol = locations[i].second;
        if(max < nums[curRow][curCol])
        {
            max = nums[curRow][curCol];
            maxIdx = i;
        }
    }
    return maxIdx;
}
int main(void)
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    vector<vector<int>> nums(n, vector<int>(n));
    
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
            cin >> nums[i][j];
    }

    vector<pair<int, int>> locations;

    for(int i = 0; i<n; i++)
        locations.push_back(make_pair(n-1, i));
    

    int result = nums[0][0];

    for(int i = 0; i<n; i++)
    {
        int maxIdx = findMax(nums, locations);
        result = nums[locations[maxIdx].first][locations[maxIdx].second];
        locations[maxIdx].first--;
    }

    cout << result;
}
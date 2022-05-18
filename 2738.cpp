#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> firstMatrix(n, vector<int>(m));
    
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
            cin >> firstMatrix[i][j];
    }
    
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<m; j++)
        {
            int num;
            cin >> num;
            cout << num+firstMatrix[i][j] << " ";
        }
        cout << "\n";
    }
}

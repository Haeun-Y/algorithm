#include <bits/stdc++.h>
using namespace std;
int aisle[101][101];
bool isVisit[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void printArr(int row, int col)
{
    for(int i = 0 ; i<row; i++)
    {
        for(int j =0; j<col; j++)
            cout << aisle[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int row, col, numOfWaste;
    cin >> row >> col >> numOfWaste;
    
    
    for(int i = 0; i<numOfWaste; i++)
    {
        int x, y;
        cin >> x >> y;
        aisle[--x][--y] = 1;
        isVisit[x][y] = true;
    }
    
    int result = 0;
    int tmpResult = 0;
    
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(aisle[i][j] == 1) 
            {
                queue<pair<int, int>> q;
                q.push({i, j});
                tmpResult = 0;
                
                while(!q.empty())
                {
                    pair<int, int> cur = q.front();
                    q.pop();
                    
                    for(int k = 0; k<4; k++)
                    {
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];
                        
                        if(nx < 0 || nx >= row || ny < 0 || ny >= col)
                            continue;
                            
                        if(isVisit[nx][ny] || aisle[nx][ny] != 0) continue;
                        
                        aisle[nx][ny] = 1;
                        q.push({nx, ny});
                        isVisit[nx][ny] = true;
                        
                        tmpResult++;
                        
                    }
                }
                
                if(tmpResult > result)
                    result = tmpResult;
            }
        }
        
        printArr(row, col);
    
    }
    
    cout << result;
    
    
    
}

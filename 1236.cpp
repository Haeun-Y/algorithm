#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int row, col;
  cin >> row >> col;

  vector<vector<char>> board(row, vector<char>(col));
  vector<bool> isGuardedR(row);
  vector<bool> isGuardedC(col);

  for(int i =0; i<row; i++)
    {
      for(int j =0; j<col; j++{
        cin >> board[i][j];
        if(board[i][j]=='X')
        { isGuardedR[i] = true;
          isGuardedC[j] = true;
          }
      }
    }

  int requiredR = 0;
  int requiredC = 0;
  for(int i = 0; i<row;i++)
    {
      if(!isGuardedR[i])
        requiredR++;
    }
  for(int i = 0; i<col; i++)
    {
      if(!isGuardedC[i])
        requiredC++;
    }

  cout << max(requiredR, requiredC);
}

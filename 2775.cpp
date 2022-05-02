#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int testNum;
  cin >> testNum;

  vector<vector<int>> apt(15, vector<int>(15));

  for(int i=0; i<=14; i++)
  apt[i][0] = 0;
  for(int i =1; i<=14; i++)
    apt[0][i] = apt[0][i-1]+i;
  for(int i = 1; i<=14; i++)
    {
      for(int j = 1; j<= 14; j++)
        {
          apt[i][j]=apt[i-1][j] + apt[i][j-1];
        }
    }
  for(int i =0; i<testNum; i++)
    {
      int k,n;
      cin >> k >> n;
      cout << apt[k-1][n] << "\n";
    }
}

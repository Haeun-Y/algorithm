#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m,k;

  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));

  for(int i = 0; i<n; i++)
    {
      for(int j =0; j<m; j++) cin >> a[i][j];
    }
  cin >> m >> k;
  vector<vector<int>> b(m, vector<int>(k));

  for(int i = 0; i<m; i++)
    {
      for(int j =0; j<k; j++) cin >> b[i][j];
    }

  for(int i = 0; i<n; i++)
    {
      for(int j =0; j<k; j++)
        {
          int sum = 0;
          for(int l =0;l<m;l++)
            {
              sum += (a[i][l] * b[l][j]);
            }
          cout << sum << " ";
        }
      cout << "\n";
    }
}

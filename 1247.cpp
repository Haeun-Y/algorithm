#include <bits/stdc++.h>
using namespace std;
int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  for(int i =0; i<3; i++)
    {
      int n;
      cin >> n;

      int sum =0;
      for(int j=0;j<n;j++)
        {
          int num;
          cin >> num;
          sum+=num;
        }
      char result;
      if(sum == 0) result = '0';
      else if (sum >0) result = '+';
      else result = '-';

      cout << result << "\n";
    }
}

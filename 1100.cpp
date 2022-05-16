#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
  cin.tie(NULL);

  int result = 0;
  for(int i =0; i<8; i++)
    {
      string str;
      cin >> str;

      for(int j=0; j<8; j++)
        {
          if(i%2==0&& j%2==0)
          {
            if(str[j]=='F')
              result++;
            
          }
          else if(i%2==1&& j%2==1)
          {
            if(str[j] == 'F') result++;
          }
        }
    }
  cout << result;
}

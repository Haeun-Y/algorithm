#include <bits/stdc++.h>
using namespace std;
void flipWord(string str)
{
  for(int i = str.length()-1; i>=0; i--)
    cout << str[i];
  cout << " ";
  return;
}
int main() {
    ios::sync_with_stdio(false);
  cin.tie(NULL);

  int num;
  cin>>num;

  for(int i =0; i<num; i++)
    {
      string str;
      getline(cin, str);

      int idx =0;
      for(int j=0; j<str.length(); j++)
        {
          if(str[j] == ' ')
          {
            flipWord(str.substr(idx, j));
            idx = j+1;
          }
          else if(j == str.length()-1)
            flipWord(str.substr(idx, j+1));
          
        }
    }
}

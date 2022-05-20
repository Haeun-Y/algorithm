#include <bits/stdc++.h>
using namespace std;
int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int qNum;
  cin >> qNum;

  vector<int> v(qNum);
  for(int i =0; i<qNum; i++)
    cin >> v[i];

  int result=0;
  for(int i =1; i<qNum; i++)
    {
      if(v[i] ==1) v[i] = v[i-1]+1;
    }
  for(int i =0; i<qNum; i++)
    result += v[i];
  cout << result;
      
    
}

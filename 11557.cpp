#include <bits/stdc++.h>
typedef struct
{
string name;
int amount;
}uni;
bool cmp(uni a, uni b)
{
  return a.amount < b.amount;
}
int main() {
    ios::sync_with_stdio(false);
  cin.tie(NULL);

  int testNum;
  cin >> testNum;

  for(int i =0; i<testNum; i++)
    {
      int n =0;
      cin >> n;
      vector<uni> unis(n);
      for(int j=0; j<n; j++)
        {
        
          cin >> unis[j].name;
          cin >> unis[j].amount;
          
        }
      sort(unis.begin(), unis.end(), cmp);
      cout << unis[0].name;
    }
}

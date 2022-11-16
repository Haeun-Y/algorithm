#include <bits/stdc++.h>
using namespace std;

int main() {
  
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  int num;
  cin >> num;

  vector<int> houses(num);

  int sum = 0;
  for(int i=0; i<num; i++)
    {
      cin >> houses[i];
      sum += houses[i];
    } 

  double avg = sum/(double)num;
  //cout << avg << "\n";

  double min = 200000;
  int min_idx =0;
  for(int i = 0; i<num; i++)
    {
      double gap = abs(avg-houses[i]);
      //cout << "gap : " << gap << "\n";
      if(gap < min)
      {
        min = gap;
        min_idx = i;
      }
    }

  cout << houses[min_idx];
    

  
}

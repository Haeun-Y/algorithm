#include <bits/stdc++.h>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> ice(1000001);

  int numOfBucket, dis;
  cin >> numOfBucket >> dis;

  for(int i =0; i<numOfBucket; i++)
    {
      int iceAmount, x;
      cin >> iceAmount >> x;
      int start, end;
      if(x-dis >= 0)
        start = x-dis;
      else
        start = 0;
      if(x+dis <= 1000000)
        end = x+dis;
      else
        end = 1000000;
      

      for(int j=start; j<=end; j++)
        {
          ice[j] += iceAmount;
        }
    }
  cout << *max_element(ice.begin(), ice.end());
}

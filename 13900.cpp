#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n = 0;
cin >> n;
  vector<int> nums(n);

  long long sum = 0;
  for(int i =0; i<n; i++)
    {
      cin >> nums[i];
     // cout << e <<"\n";
      sum += nums[i];
    }
//cout << sum << "\n";
  long long result = 0;
  for(int i = 0; i<n; i++) {
    int element = nums[i];
   //cout << "sum-nums[i]"<< (sum-element) << "\n";
    result += (sum-element) * element;
      //cout << result<<"\n";
      }
    cout<<result/2;
}

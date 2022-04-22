#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> nums(n);

  for(int i =0; i<n; i++)
    cin >> nums[i];

  int max = 1;
  int length = 1;
  for(int i = 1; i<n; i++)
    {
      if(nums[i] >= nums[i-1]) length++;

      else{
        if(length > max) max = length;
        length = 1;
      }
      }

  if(length > max) max = length;
  length =1;
  for(int i = 1; i<n; i++)
    {
      if(nums[i] <= nums[i-1]) length++;

      else{
        if(length > max) max = length;
        length = 1;
      }
    }
  
  if(length > max) max = length;
  cout << max;
  
}

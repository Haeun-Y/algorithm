#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> nums(n);
    
    cin >> nums[0];
    for(int i=1; i<n; i++)
    {   
        int element;
        cin >> element;
        if(nums[i-1] > 0)
            nums[i] = element + nums[i-1];
        else nums[i] = element;
    }   
    cout << *max_element(nums.begin(), nums.end());

}

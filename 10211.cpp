#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testNum;
    cin >> testNum;
    
    for(int i =0; i<testNum; i++)
    {
        int numOfNum;
        cin >> numOfNum;
        
        vector<int> nums(numOfNum);
        
        cin >> nums[0];
        
        for(int i =1; i<numOfNum; i++)
        {
            cin >> nums[i];
            if(nums[i-1] > 0)
                nums[i] += nums[i-1];
        }
        
        cout << *max_element(nums.begin(), nums.end()) << "\n";    
        
    }
}

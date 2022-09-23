/*
#include <bits/stdc++.h>
using namespace std;
void putNums(vector<pair<char, int>>& nums, char target, int numOfNum)
{
    for(int i = 0 ; i<numOfNum; i++)
    {
        int tmp;
        cin >> tmp;
        nums.push_back(make_pair(target, tmp));
    }
    
}
int checkSame(vector<pair<char, int>>& nums)
{
    int cnt = 0;
    for(int i = 0 ; i<nums.size();)
    {
        if(i<nums.size()-1 && nums[i].second == nums[i+1].second)
        {
            cnt++;
            i += 2;
        }
        else
        {
            if(nums[i].first == 'A') 
                cout << nums[i].second << " ";
            i++;
        }
    }
    return cnt;
}
bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second < b.second;
}
int main(void)
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    
    int numA, numB;
    cin >> numA >> numB;
    
    vector<pair<char, int>> nums;
    
    putNums(nums, 'A', numA);
    putNums(nums, 'B', numB);
    
    sort(nums.begin(), nums.end(), cmp);
    
    int cnt = checkSame(nums);
    
    if(cnt == numA) cout << 0;
}


*/

#include <bits/stdc++.h>
using namespace std;
bool binary_search(int start, int end, int target, vector<int>& v)
{
    int mid = (start + end)/2;
    if(start < 0 || v.size() < end || start > end) return false;
    if(v[mid] == target) return true;
    else if(v[mid] < target) return binary_search(mid+1, end, target, v);
    else return binary_search(start, mid-1, target, v);
    
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int numA, numB;
    cin >> numA >> numB;
    
    vector<int> A(numA);
    vector<int> B(numB);
    
    for(int i  = 0; i<numA; i++)
        cin >> A[i];
    for(int i = 0; i<numB; i++)
        cin >> B[i];
        
        
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    int cnt = 0;
    for(int i  = 0; i<numA; i++)
    {
        if(binary_search(0, B.size()-1, A[i], B))
            cnt++;
            
        else cout << A[i] << " ";
        
    }
    if(cnt == numA) cout << 0;
}

#include <bits/stdc++.h>
using namespace std;
vector<int> totalSet;
int calculateCommonNum()
{
    int result = 0;
    
    sort(totalSet.begin(), totalSet.end());
    
    for(int i = 1; i<totalSet.size();)
    {
        //cout << totalSet[i-1] << " " << totalSet[i] << "\n"; 
        if(totalSet[i-1] == totalSet[i])
        {
            result += 2;
            i += 2;
        }
        else i++;
        
    }
    
    return result;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int setANum;
    int setBNum;
    
    cin >> setANum >> setBNum;
    
    vector<int> setA;
    vector<int> setB;
    
    for(int i = 0 ;i<setANum + setBNum; i++)
    {
        int num;
        cin >> num;
        totalSet.push_back(num);
    }
    int result = totalSet.size() - calculateCommonNum();
    cout << result;
}

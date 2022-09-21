#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testNum;
    
    cin >> testNum;
    
    for(int i = 0; i<testNum; i++)
    {
        int cur;
        cin >> cur;
        
        vector<pair<int, int>> fibonacci(41);
        fibonacci[0] = make_pair(1, 0);
        fibonacci[1] = make_pair(0, 1);
    
        for(int j = 2; j<= cur; j++)
        {
            fibonacci[j].first = fibonacci[j-1].first + fibonacci[j-2].first;
            fibonacci[j].second = fibonacci[j-1].second + fibonacci[j-2].second;
        }
        
        cout << fibonacci[cur].first << " " << fibonacci[cur].second << "\n";
    }
}

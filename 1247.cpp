#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    const int testNum = 3;
    
    for(int i = 0; i<testNum; i++)
    {
        int n;
        cin >> n;
        
        long long result = 0;
        
        for(int i = 0; i<n; i++)
        {
            long long tmp;
            cin >> tmp;
            result += tmp;
        }
        if(result == 0)
            cout << "0";
        else if(result < 0)
            cout << "-";
        else cout << "+";
    }
}

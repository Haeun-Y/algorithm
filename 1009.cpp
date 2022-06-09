#include <bits/stdc++.h>
using namespace std;
int modularExp(int a, int b)
{
    if(b == 1)
        return a % 10;
    else if(b == 0)
        return 1;
    else
    {
        int tmp = b/2;
        int tmp2 = b-tmp;
        return (modularExp(a, tmp) * modularExp(a, tmp2))%10;
    }
    
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testNum;
    cin >> testNum;
    
    for(int i = 0; i<testNum; i++)
    {
        int a, b;
        cin >> a >> b;
        int result = modularExp(a, b);
        if(result == 0)
            cout << "10";
        else cout << result;
        cout << "\n";
        
    }
}

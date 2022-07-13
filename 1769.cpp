#include <bits/stdc++.h>
using namespace std;
long long sum(long long num)
{
    long long result = 0;
    string str = to_string(num);
    
    for(int i = 0; i<str.length(); i++)
        result += str[i]-'0';
    
    return result;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long targetNum;
    cin >> targetNum;
    
    long long y = targetNum;
    long long iterNum = 0;
    if(targetNum >= 10)
    {    
        y = sum(targetNum);
        iterNum++;
    }
    while(y >= 10)
    {
        y = sum(y);
        iterNum++;
        //cout << iterNum << " : " << y << "\n";
    }
    
    cout << iterNum << "\n";
    if(y%3 == 0)
        cout << "YES";
    else
        cout << "NO";
    
    
    
}

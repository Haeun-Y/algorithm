#include <bits/stdc++.h>
using namespace std;
string makeBurger(int level)
{
    if(level == 0)
        return "P";
    else
    {
        string burger = makeBurger(level-1);
        return "B" + burger + "P" + burger + "B";
    }    
    
}
long long eatBurger(string burger, long long eat)
{
    long long result = 0;
    for(long long i  = 0; i<eat; i++)
    {
        if(burger[i] == 'P')
            result++;
    }
    
    return result;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int level;
    long long eat;
    cin >> level >> eat;
    
    string burger = makeBurger(level);
    cout << eatBurger(burger, eat);
    
    
}

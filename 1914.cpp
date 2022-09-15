#include <bits/stdc++.h>
using namespace std;
int discNum;
int cnt;
vector <pair<int, int>> seq; 
void hanoi(int n, int from, int tmp, int to)
{
    if(n==1)
    {    
        seq.push_back(make_pair(from, to));
        cnt++;
    }
    
    else 
    {
        hanoi(n-1, from, to, tmp);
        seq.push_back(make_pair(from, to));
        cnt++;
        hanoi(n-1, tmp, from, to);
    }
}
void hanoi2(int n, int from, int tmp, int to)
{
    if(n==1)
        cnt++;
    
    else 
    {
        hanoi(n-1, from, to, tmp);
        cnt++;
        hanoi(n-1, tmp, from, to);
    }
}
void printSeq()
{
    for(int i = 0; i < seq.size(); i++)
        cout << seq[i].first << " " << seq[i].second << "\n";
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> discNum;
    if(discNum <= 20) 
        hanoi(discNum, 1, 2, 3);
    else hanoi2(discNum, 1, 2, 3);

    cout << cnt << "\n"; 
    
    if(discNum <= 20) 
        printSeq();
    
}

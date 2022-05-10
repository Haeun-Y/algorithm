//22.05.10
//백준 2947번 나무조각 (실버 5)
//boj.kr/2947
#include <bits/stdc++.h>
using namespace std;
const int numOfPieces = 5;

void printPieces(vector<int>& v)
{
    for(int i =0; i<numOfPieces; i++)
        cout << v[i] << " ";
    cout << "\n";
    return;
}
void swapPieces(vector<int>& v, int idx)
{
    int tmp = v[idx];
    v[idx] = v[idx+1];
    v[idx+1] = tmp;
    return;
}
bool isOrdered(vector<int>& v)
{
    for(int i =0; i<numOfPieces; i++)
        if(v[i] != i+1) return false;
    
    return true;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> pieces(numOfPieces);
    
    for(int i =0; i<numOfPieces; i++)
        cin >> pieces[i];
        
    while(!isOrdered(pieces))
    {
        for(int i =0; i<numOfPieces-1; i++)
        {
            if(pieces[i] > pieces[i+1])
            {
                swapPieces(pieces, i);
                printPieces(pieces);
            }
        }
        
    }
        
    
    
}

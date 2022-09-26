#include <bits/stdc++.h>
using namespace std;
int sky[102][102];
int h, w;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> h >> w;
    for(int i = 0; i<h; i++)
    {
        for(int j = 0; j<w; j++)
        {
            char tmp;
            cin >> tmp;
            if(tmp == 'c')
                sky[i][j] = 0;
            else sky[i][j] = 100;
        }
    }
    
    for(int i = 0; i<h; i++)
    {
        int cur = -1; 
        for(int j = 0; j<w; j++)
        {
            if(sky[i][j] == 0)
                cur = 1;
            else if(cur == -1)
                sky[i][j] = cur;
            else sky[i][j] = cur++;
        }
    }
    
    for(int i  = 0; i<h; i++)
    {
        for(int j = 0; j< w; j++)
            cout << sky[i][j] << " ";
        cout << "\n";
    }

}

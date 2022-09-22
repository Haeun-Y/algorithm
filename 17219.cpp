#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<string, string> pws;
    
    int totalNum, targetNum;
    cin >> totalNum >> targetNum;
    
    for(int i = 0; i<totalNum; i++)
    {
        string siteAddress, password;
        cin >> siteAddress >> password;
        
        pws.insert({siteAddress, password});
    }
    
    for(int i = 0; i<targetNum; i++)
    {
        string target;
        cin >> target;
        
        cout << pws.find(target)->second << "\n";
    }
    
}

#include <bits/stdc++.h>
using namespace std;
string str;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> str;

    map<string, string> subStrings;
    for(int i = 0; i<str.length(); i++)
    {
        for(int j = i; j<str.length(); j++)
        {
            //cout << "********\n";
            string sub = str.substr(i, j+1);
            //cout << i <<" to " << j << " now sub is " << sub << "\n";
            if(subStrings.find(sub) == subStrings.end())
            {
                subStrings.insert({sub, sub});
                //cout << "insert " << sub << "\n";
            }    
            //cout << "********\n";
        }
    }

    if(!subStrings.empty())
        cout << subStrings.size();
    
}

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testNum;
    cin >> testNum;

    cin.ignore();
    for(int i =0; i<testNum; i++)
    {

        string str; 
        getline(cin, str);

        cout << "Case #" << i+1 << ": ";
        vector<string> words;
        for(int j = 0; j<str.length(); j++)
        {
            string tmp = "";
            while(j < str.length() && str[j] != ' ')
            {
                tmp += str[j];
                j++;
            }
            words.push_back(tmp);
        }
        for(int j = words.size()-1; j>=0 ; j--)
            cout << words[j] << " ";
        cout << "\n";
    }
}
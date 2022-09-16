#include <bits/stdc++.h>
using namespace std;
vector<string> strings;
vector<string> dots;
string result;
void cutString(string str)
{
    int start = 0;
    int length = str.length();
    string tmp = "";
    string dot = "";
    
    for(int i = 0; i<str.length(); i++) 
    {
        if(str[i] == '.')
        {
            strings.push_back(tmp);
            tmp = "";
            dot = ".";
            while(str[i+1] == '.')
            {    
                i++;
                dot += '.';
            }
            dots.push_back(dot);
        }
        else tmp += str[i];
    }
    strings.push_back(tmp);
    /*
    for(int i = 0; i<strings.size(); i++)
        cout << strings[i] << "\n";
    */
}
bool fillBoard()
{
    for(int i = 0; i< strings.size(); i++)
    {
        int length = strings[i].length();
        if(length%2 == 1)
            return false;
        else if(length == 2)
            result += "BB";
        else // length >= 4
        {
            result += "AAAA";
            for(int j = 4; j<length;)
            {
                if(length-j >= 4)
                {
                    result += "AAAA";
                    j += 4;
                }
                else
                {
                    result += "BB";
                    j += 2;
                }
            }
        }
        if(i != strings.size()-1) result += dots[i];
    }
    return true;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    result = "";
    string str;
    cin >> str;
    
    cutString(str);
    
    if(fillBoard())
    {
        cout << result;
    }
    else cout << -1;
    
    
}

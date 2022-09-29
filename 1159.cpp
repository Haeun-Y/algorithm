#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const int alphabetNum = 26;
    int familyName[alphabetNum] = {0};

    int playerNum;
    cin >> playerNum;

    for(int i = 0; i<playerNum; i++)
    {
        string name;
        cin >> name;
        familyName[name[0]-97]++;
    }

    bool result = false;
    for(int i = 0; i<alphabetNum; i++)
    {
        if(familyName[i] >= 5)
        {
            cout << (char)(i+97);
            result = true;
        }    

    }

    if(result == false)
        cout << "PREDAJA";

}
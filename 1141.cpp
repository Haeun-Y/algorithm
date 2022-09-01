#include <bits/stdc++.h>
using namespace std;
int wordNum;
int result;
string word[50];
bool isChecked[50];

bool isPrefix(vector<string>& v)
{
    if(v[0][0] == v[1][0]) return true;
    else return false;
}
void checkSubsetX()
{
    string subset[50];
    int arrayIdx = 0;
    int elementNum = 0;
    for(int i = 0; i<wordNum; i++)
    {
        if(isChecked[i])
        {
            subset[arrayIdx++] = word[i];
            elementNum++;
        }    
    }

    if(elementNum < 2) 
    {
        result++;
        return;
    }
    int tmp[50];
    tmp[0] = 0;
    tmp[1] = 0;

    for(int i = 2; i<elementNum; i++)
        tmp[i] = 1;


    vector<string> target;

    do
    {
        for(int i = 0; i<elementNum; i++)
        {
            if(tmp[i] == 0)
                target.push_back(subset[i]);
        }

        if(!isPrefix(target)) result++;


    }while(next_permutation(tmp, tmp+elementNum));
    
}
void checkSubset(int k)
{
    if(k==wordNum)
    {
        checkSubsetX();
        return;
    }
    else
    {
        isChecked[k] = true;
        checkSubset(k+1);
        isChecked[k] = false;
        checkSubset(k+1);
    }
    
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> wordNum;
    
    for(int i = 0; i<wordNum; i++)
        cin >> word[i];

    checkSubset(0);

    cout << result;
}

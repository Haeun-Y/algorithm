//리팩토링해보기
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    const int NUM_OF_ALPHABETS = 26;
    vector<int> alphabets(26, 0);
    
    string englishName;
    cin >> englishName;
    
    for(int i =0; i<englishName.length(); i++)
        alphabets[englishName[i]-'A']++;
    
    
    string front = "";
    string back = "";
    bool isOddLength = (englishName.length()%2 == 1)? true : false; 
    char mid = 'c';
    
    for(int i =0; i<NUM_OF_ALPHABETS; i++)
    {
        int num = alphabets[i];
        bool isOddNum = (num%2==1)? true : false;
        if(isOddNum && !isOddLength)
        {
            cout << "I'm Sorry Hansoo";
            return 0;
        }
        else
        {
            if(num == 0)
                continue;
            
            if(mid != 'c' && isOddNum)
            {
                cout << "I'm Sorry Hansoo";
                return 0;
            }
            
            if(mid == 'c' && isOddNum)
            {
                mid = i+'A';
                num--;
            }
            for(int j = 0; j<num/2; j++)
            {
                char tmp = i+'A';
                front += tmp;
                back = tmp + back;
            } 
               
        }
        
    }
    
    if(mid != 'c') cout << front << mid << back;
    else cout << front << back;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void printStack(stack<int> s)
{
    while(!s.empty())
    {
        cout << "top : " << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<stack<int>> guitar(7, stack<int>());
    int flatNum, melodyNum, result = 0;
    cin >> melodyNum >> flatNum;
    
    for(int i =0; i<melodyNum; i++)
    {
        int stringNum, flat;
        cin >> stringNum >> flat;
        while(!guitar[stringNum].empty() && guitar[stringNum].top() > flat)
        {
            guitar[stringNum].pop();
            result++;
        }
        //누르려는 플랫이 이미 눌려있지 않을 때
        if(guitar[stringNum].empty() || (!guitar[stringNum].empty() && guitar[stringNum].top() != flat))
        {
            guitar[stringNum].push(flat);
            result++;
        }
        //printStack(guitar[stringNum]);
        //cout << "result : " << result << "\n"; 
    }
    cout << result;
    
    
}

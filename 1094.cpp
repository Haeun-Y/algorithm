#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int target;
    cin >> target;
    
    int sum = 64;
    
    stack<int> sticks;
    sticks.push(64);
    
    while(sum > target)
    {
        sticks.top() = sticks.top()/2;
        sticks.push(sticks.top());
        if(target <= (sum - sticks.top()))
        { 
            sum -= sticks.top();
            sticks.pop();
        }
        else if(target == sum-sticks.top())
        {
            sticks.pop();
            cout << sticks.size();
            return 0;
        }
        //target > sum-sticks.top()
        //아무일 x\
        
    }
    
    
}

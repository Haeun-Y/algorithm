#include <bits/stdc++.h>
using namespace std;

int main() {

ios::sync_with_stdio(false);
  cin.tie(NULL);

  int numOfStick;
  cin >> numOfStick;

  stack<int> sticks;
  vector<int> tmp(numOfStick);

  for(int i =0; i<numOfStick; i++) cin >> tmp[i];

  for(int i =numOfStick-1;i>=0; i--)
    {
      int stick = tmp[i];

      if(sticks.empty()||(!sticks.empty() && sticks.top() < stick)) sticks.push(stick);
    }
  cout << sticks.size();

  
}

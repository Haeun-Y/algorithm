#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {

  string str;
  cin >> str;

  vector<int> list;
  int sum = 0;
  for(int i =0; i<str.length();i++)
    {list.push_back(str[i]-'0');
      sum += list[i];
      }
  sort(list.begin(), list.end());
  
  if(list[0]==0 && sum%3 == 0)
  {
    for(int i =list.size()-1; i>=0; i--)
      printf("%d", list[i]);
  }
  else 
    printf("-1");
  
    
  
}
  

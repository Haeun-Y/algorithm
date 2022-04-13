#include <bits/stdc++.h>
using namespace std;
int main() {

  ios::sync_with_stdio(false);
  cin.tie(NULL);

  
  list<int> students;
  int n;
  cin >> n;

  for(int i = 1; i<=n; i++)
    {
      int result;
      cin >> result;

      if(i==1){
        students.push_front(1);
        
      }

        

      else if(i == 2){
        if(result == 0)
          students.push_back(i);
        else students.push_front(i);
      
      }
      else{
        auto target = students.end();
        for(int i=0; i<result; i++) target--;
        
        students.insert(target, i);
        
      }
    }

  for(int order:students)
    cout << order << " ";
}

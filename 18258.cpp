#include <iostream>
#include <queue>
using namespace std;

int main() {

  ios::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  
  int commandNum =0;
  cin >> commandNum;

  queue<int> q;
  string command;
  int result, target;
  
  for(int i =0; i<commandNum;i++)
    {
      cin >> command;

      target =0;
      result =-1;

      if(command == "push")
      {
        cin >> target;
        q.push(target);
      }
      else if(command == "empty")
      {
        if(q.empty()) cout << "1" <<"\n";//큐가 비어있을 때 
        else cout << "0" << "\n";
        
      }
      else//큐가 비어있으면 -1을 출력하는 명령들일 경우 
      {
        if(command == "pop")
        {
          if(!q.empty())//큐가 비어있지 않을 때
          {
            result = q.front();
            q.pop();//실제 삭제
          }
        
        }
        else if(command =="size") result = q.size();
        

        else if(command == "front")
        {  
          //큐가 비어있지 않을 때
          if(!q.empty()) result = q.front();
          
        }  

        else//command == "back"
        {
          //큐가 비어있지 않을 때
          if(!q.empty()) result = q.back();
        }
        cout << result <<"\n";
      }
    }
}

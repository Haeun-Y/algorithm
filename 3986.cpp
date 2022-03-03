#include <iostream>
#include <stack>
using namespace std;

int main() {
  int numOfWord=0;
  scanf("%d", &numOfWord);

  stack<char> s;
  int result=0;

  for(int i=0; i<numOfWord; i++)
    {
      string str;
      cin >> str;

      bool check = false;
      bool a = false, b=false;//false : 홀수번째
      //true : 짝수번째
      for(int j =0; j<str.length(); j++){
        char ch =str[j];
        bool tmp =(ch =='A')? a : b;
        if(!s.empty()){
          if(!tmp&&s.top() != ch){
            check=true;
            break;
            
          }
          else if(tmp && s.top() == ch)
          {
            s.pop();
          }
          else s.push(ch);
        }
        else s.push(ch);
      }
      if(!check) result++;
    }
  printf("%d", result);
}

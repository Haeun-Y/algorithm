#include <iostream>
using namespace std;

int main() {

  int testCase =0;
  scanf("%d", &testCase);
  for(int i =0; i<testCase; i++)
    {
      string str;
      cin >> str;

      int result =0;
      int score = 0;
      for(int j=0; j<str.length(); j++)
        {
          char ch = str[j];
          if(ch == 'O')
          {
            score++;
            result += score;
          }
          else score = 0;
        }
      printf("%d\n", result);
    }
}

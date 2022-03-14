#include <iostream>
#include <string>
using namespace std;
int main() {
  
  string str;
  getline(cin, str);

  int result = 0;
  for(int i =0; i<str.length(); i++)
    if(i!=0&& i != str.length()-1&& str[i] == ' ') result++;

  if(str.length() == 0 || (str.length() == 1&& str[0] == ' ')) result = 0;
  else result++;
  printf("%d", result);
  
}

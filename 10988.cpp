#include <iostream>
using namespace std;
string reverseStr(string str)
{
  string result="";
  for(int i =str.length()-1; i>=0; i--)
    result += str[i];

  return result;
}
bool isPalindrome(string str){
  string reverse = reverseStr(str);
  if(str==reverse)
    return true;
  else return false;
}
int main() {

  string str;
  cin >> str;
  if(isPalindrome(str))
    printf("1");
  else printf("0");
    return 0;
}

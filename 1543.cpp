#include <iostream>
#include <string>
using namespace std;

int checkComposition(string doc, string str, int idx, int* result)
{
  //idx for index of doc
  //i for index of str

  int i = 0;
  for(;idx<doc.length() && i<str.length(); idx++, i++)
    {
      if(str[i] != doc[idx])
        return -1;

    }

  if(i == str.length()) (*result)++;
  //printf("now result : %d\n", *result);
  return --idx;
}
int main() {
  
  string doc;
  getline(cin, doc);

    
  string str;
  getline(cin, str);


  int result = 0;
  
  for(int i =0; i<doc.length();i++)
  { 
    //printf("현재 시작점 : %d\n", i);
    int num = checkComposition(doc, str, i, &result);
    if(num != -1) i = num;
    //printf("현재 종료점 : %d 다음 i : %d\n", i, i+1);
  }

  printf("%d", result);
  
}

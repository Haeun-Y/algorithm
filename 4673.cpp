#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool numList[10001];


void calculateD(int n){
  int num =n;
  string str = to_string(n);
  for(int i =0; i<str.length(); i++)
    num += str[i]-'0';
  if(num > 10000) return;
  if(!numList[num]) numList[num] = true;
  return;
}
void printList(){

  for(int i = 1; i<=10000; i++)
    {
      if(numList[i]) continue;
      printf("%d\n", i);
        
    }
}
int main() {
    

  for(int i =1; i<10000; i++){
    //printf("%d", i);
    calculateD(i);
   // printf("%d %d\n", i, num);
  }

  printList();
  
  
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long calculateNum(int num)
{
  long long result =0;
  string str = to_string(num);
  long long minNum =0;
  for(int i =1; i<str.length(); i++)
    {
      minNum = pow(10, i)-1-pow(10, i-1)+1;
      result += (minNum*i);
    }
  //120 
  //1~9까지 ->9개
  //10~99까지 -> 2*90 = 180
  //100부터 120까지 -> 21*3 = 63
  //120까지 189+63 = 252
  //100부터 120까지 세는거 
  long long lastNum =0;
  long long tmp = pow(10, str.length()-1);
  lastNum = num - tmp+1;
  result += (lastNum* str.length());
  //printf("result : %d\n", result);
  return result;
  
}
int main() {

  int num =0;
  scanf("%d", &num);
  printf("%lld", calculateNum(num));
  
}

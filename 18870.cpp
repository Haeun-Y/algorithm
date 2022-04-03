//220401
//백준 18870번 좌표 압축 문제(실버 2)
//boj.kr/18870
#include <bits/stdc++.h>
using namespace std;

typedef struct{
int num;
int zipNum;
int idx;
}node;
bool cmp2(node a, node b)
{
  return a.idx < b.idx;
}
bool cmp(node a, node b)
{
  return a.num < b.num;
}
int main() {
    
    int numOfNum=0;
  scanf("%d",&numOfNum);

  vector<node> nums(numOfNum);

  for(int i =0; i<numOfNum; i++)
    {
      scanf("%d",&nums[i].num);
      nums[i].idx =i;
    }
  
  sort(nums.begin(), nums.end(), cmp);

  int initNum =0;
  for(int i =0; i<numOfNum; i++)
    {
      
      nums[i].zipNum = initNum;
      if(i<numOfNum-1 && nums[i+1].num != nums[i].num) initNum++;
      
    }
  sort(nums.begin(), nums.end(), cmp2);

  for(int i=0; i<numOfNum; i++) printf("%d ", nums[i].zipNum);
}

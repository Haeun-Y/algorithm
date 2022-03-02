#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef struct node
{
 vector<int> adjacancyList;
 bool isVisit;
 bool isWaiting;

}node;

int visitNode(queue<int>& q, node* n, int num)
{
  n->isVisit=true;
  q.pop();
  return ++num;
  
  
}
int bfs(vector<node>& v)
{
  int result = 0;
  queue<int> q;
  node n = v[1];
  int idx = 1;
  if(!n.isVisit && !n.isWaiting)
  {
    q.push(idx);
    v[idx].isWaiting = true;
  }  

  while(!q.empty())
    {
      int size = n.adjacancyList.size();
      for(int i = 0; i<size; i++)
        {
          int tmp = n.adjacancyList[i];
          if(!v[tmp].isVisit && !v[tmp].isWaiting)
          {
            q.push(tmp);
            v[tmp].isWaiting = true;
          }
          
        }

      int targetNode = q.front();
      result = visitNode(q, &v[targetNode], result);
      //printf("visit %d result %d\n",targetNode, result);
      n = v[q.front()];
      
    }

  return result-1;
}
int main() {

  int computerNum=0, edgeNum=0;
  scanf("%d", &computerNum);
  scanf("%d", &edgeNum);

  vector<node> net(computerNum+1);
  for(int i =0; i<edgeNum; i++)
    {
      int a=0, b=0;
      scanf("%d %d", &a, &b);
      net[a].adjacancyList.push_back(b);
      net[b].adjacancyList.push_back(a);  
      
    }
  for(int i  =1; i<=computerNum; i++)
    sort(net[i].adjacancyList.begin(), net[i].adjacancyList.end());

  int result =bfs(net);
  printf("%d", result);
}

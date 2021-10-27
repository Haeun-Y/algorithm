#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 10 //정점의 최대 개수
#define INF 1000
#define TRUE 1
#define FALSE 0

typedef struct
{
	int n;//정점의 개수
	int weight[SIZE][SIZE]; //가중치를 저장하는 배열
}GraphType;

void dijkstra(GraphType* g, int * s, int * dis, int v)//v는 시작정점
{
	//weight could not be a negative number
	s[v] = TRUE;

	int size = g->n;
	for (int i = 0; i < size; i++)//dis 배열 초기화
	{
		if (g->weight[v][i] != INF)
			dis[i] = g->weight[v][i];
	}

	int now = v;
	
	while (1)
	{
		int check = 0;
		
		for (int i = 0; i < size; i++)
		{
			if (s[i] == FALSE) check = 1;
		}
		if (check == 0) break;//그래프 모두 방문

		int min = INF;
		int minidx = 0;

		for (int i = 0; i < size; i++)
		{
			if (s[i] == FALSE && g->weight[now][i] != INF && min > g->weight[now][i])
			{
				minidx = i;
				min = g->weight[now][i];
			}
		}//예시에서처럼 6까지 이동했는데 5로 어케감 그러면?

		now = minidx;
		s[now] = TRUE;//방문완료

		for (int i = 0; i < size; i++)//
		{
			if (s[i] == FALSE && g->weight[now][i] != INF && dis[i] > dis[now] + g->weight[now][i])
				dis[i] = dis[now] + g->weight[now][i];
		}
		
	}


	

}

int main(void)
{
	int selected[SIZE] = {FALSE};//방문여부를 저장하는 배열
	int distance[SIZE] = {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF};//시작 정점으로 부터 거리를 저장하는 배열

	//그래프 선언 및 초기화 

	GraphType g = { 7, {{0, 7, INF, INF, 3, 10, INF}, {7, 0, 4, 10, 2, 6, INF}, {INF, 4, 0, 2, INF, INF, INF},
		{INF, 10, 2, 0, 11, 9, 4}, {3, 2, INF, 11, 0, INF, 5}, {10, 6, INF, 9, INF, 0, INF}, {INF, INF, INF, 4, 5, INF, 0}} };

	dijkstra(&g, selected, distance, 0);

	for (int i = 0; i < g.n; i++)
	{
		printf("[%d]", distance[i]);
	}


}
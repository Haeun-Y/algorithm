#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int num;
    int times;
    
}element;
bool cmp(element a, element b)
{
    if(a.times == b.times) return a.num < b.num;
    else return a.times > b.times;
}
void mean(vector<int>& target)
{
	double sum = 0;
	for (int i = 0; i < target.size(); i++)
		sum += target[i];
    
    double result = sum / target.size();
    if(result < 0.5 &&result > -0.5) result = 0;
    printf("%.0lf\n", result);
}
void median(vector<int>& target)
{
	printf("%d\n", target[target.size() / 2 ]);
}
void mode(vector<int>& target)
{
    vector<element> tmp;
    int maxTimesNum = target[0];
    int maxTimes = 1;
	for(int i =0; i<target.size();)
	{
	    int num = target[i], times = 1;
	    int upperIdx = upper_bound(target.begin(), target.end(), num) - target.begin();
	    if(num == target.back()) times = target.size() - i;
	    else times = upperIdx - (lower_bound(target.begin(), target.end(), num) - target.begin());
	    element e;
	    e.num = num;
	    e.times = times;
	    tmp.push_back(e);
	    i = upperIdx;
	}
	
	sort(tmp.begin(), tmp.end(), cmp);
	
	if(tmp[0].times == tmp[1].times) printf("%d\n", tmp[1].num);
	else printf("%d\n", tmp[0].num);
}
void range(vector<int>& target)
{
	printf("%d\n", target.back()- target.front());
}

int main(void)
{
	int n = 0;
	scanf("%d", &n);

	vector<int> list(n);

	for (int i = 0; i < n; i++)
		scanf("%d", &list[i]);

	sort(list.begin(), list.end());//오름차순 정렬

	mean(list);
	median(list);
	mode(list);
	range(list);
}

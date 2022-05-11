//22.05.11
//백준 1713번 후보 추천하기
//boj.kr/1713
#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int name;
    int idx;
    int times;
    
}candidate;
bool cmp(candidate a, candidate b)
{
    //추천 횟수가 같을 때 가장 오래된 사진 == idx가 작은 것
    if(a.times == b.times)
        return a.idx < b.idx;
    
    //추천 횟수 기준으로 오름차순 정렬
    else return a.times < b.times;
}
bool cmp2(candidate a, candidate b)
{
    return a.name < b.name;
}
bool isInPic(vector<candidate>& v, int& value)
{
    auto first = v.begin();
    auto last = v.end();
    for(;first != last; ++first)
    {
        if(first->name == value)
            return first - v.begin();
    }
    
    return -1;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int numOfPic, numOfRecommand, num = 0;
    cin >> numOfPic >> numOfRecommand;
    vector<candidate> candidates(numOfPic);
    
    for(int i = 0; i<numOfRecommand; i++)
    {
        int target;
        cin >> target;
        //사진에 이미 있는 후보일때
        int idx = isInPic(candidates, target);
        if(-1 != idx)
            candidates[idx].times++;
        else
        {
            //사진틀이 다 안찬경우
            if(num < numOfRecommand)
            {
                candidates[num].name = target;
                candidates[num].idx = num;
                candidates[num++].times = 1;
            }
            //사진틀에서 한 후보가 삭제되어야할 때
            else
            {
                candidates[0].name = target;
                candidates[0].idx = candidates[numOfPic-1].idx+1;
                candidates[0].times = 1;
            }
            
            
        }
        
        sort(candidates.begin(), candidates.end(), cmp);
    }
    
    sort(candidates.begin(), candidates.end(), cmp);
    
    for(int i =0; i<numOfPic; i++)
        cout << candidates[i].name << " ";
    
    
    
    
}

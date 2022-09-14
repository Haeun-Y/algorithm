#include <bits/stdc++.h>
using namespace std;
int totalStuffNum;
int needStuffNum;
int stuff[15001];
int result;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> totalStuffNum >> needStuffNum;
    
    for(int i = 0; i<needStuffNum; i++)
        cin >> stuff[i];
    
    result = 0;
    int tmp[15001];
    tmp[0] = 0;
    tmp[1] = 0;
    for(int i = 2; i < totalStuffNum; i++)
        tmp[i] = 1;
    
    do
    {
        int sum = 0;
        for(int i = 0 ;i<totalStuffNum; i++)
        {
            //해당 재료가 선택됨
            if(tmp[i] == 0)
                sum += stuff[i];
        }
        if(sum == needStuffNum)
            result++;
        
    }while(next_permutation(tmp, tmp+totalStuffNum));
        
    cout << result;
}
/*
#include <bits/stdc++.h>
using namespace std;
int totalStuffNum;
int needStuffNum;
int stuff[15001];
int cnt;
bool binarySearch(int target, int start, int end)
{
    if(start < 0 || end > totalStuffNum || start >= end)
        return false;
    int mid = (start+end)/2;
    if(stuff[mid] == target)
        return true;
    else if(stuff[mid] < target)
        binarySearch(target, mid+1, end);
    else binarySearch(target, start, mid-1);
    
    return false;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> totalStuffNum >> needStuffNum;
    
    for(int i = 0; i<needStuffNum; i++)
        cin >> stuff[i];
    
    cnt = 0;
    sort(stuff, stuff+needStuffNum);
    for(int i = 0; i<totalStuffNum; i++)
    {
        int target = needStuffNum-stuff[i];
        bool result = binarySearch(target, 0, totalStuffNum-1);
        if(result) cnt++;
    }
    
    cout << cnt;
    
}
*/

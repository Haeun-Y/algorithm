#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> v, int target)
{
    //오름차순 정렬
    sort(v.begin(), v.end());
    return binary_search(v.begin(), v.end(), target);
    
}
int calculateNextElement(int num, int p)
{
    int result = 0;
    
    while(num > 0)
    {
        result += (int)pow(num%10, p);
        num /= 10;
    }
    
    //printf("다음 원소 계산 결과 : %d\n", result);
    return result;
}
int main(void)
{
    int firstNum = 0, expNum = 0;
    scanf("%d %d", &firstNum, &expNum);
    
    vector<int> seq;
    int numToInsert = firstNum, target = 0;
    seq.push_back(firstNum);
    while(1)
    {
        numToInsert = calculateNextElement(numToInsert, expNum);
        if(binarySearch(seq, numToInsert))
        {
            target = numToInsert;
            break;
        }
        else seq.push_back(numToInsert);
    }
    
    int i = 0;
    while(seq[i] != numToInsert)
        i++;
    
    printf("%d", i);
}

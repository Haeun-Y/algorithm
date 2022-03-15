#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    for(int i =0; i<v.size(); i++)
        printf("%d\t", v[i]);
        
    printf("\n");
}
int main(void)
{
    int n =0;
    scanf("%d", &n);
    vector<int> list(n, 0);
    
    for(int i =0; i<n; i++)
    {
        int num =0;
        scanf("%d", &num);
        if(i != 0)
        {
            list[i] = num + list[i-1];
        }
        else list[i] = num;
    }
    
    //printVector(list);
    
    int numOfSection =0;
    scanf("%d", &numOfSection);
    
    for(int i =0; i<numOfSection; i++)
    {
        int start =0, end =0;
        scanf("%d %d", &start, &end);
        
        if(start > 1) printf("%d\n", list[end-1]-list[start-2]);
        else  printf("%d\n", list[end-1]);
    }
    
}

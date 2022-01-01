//3273.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n =0, target=0, total =0;
 scanf("%d", &n);
    
    vector<int> list(n);
    for(int i =0; i<n; i++)
    scanf("%d", &list[i]);
    
    scanf("%d", &target);
    sort(list.begin(), list.end());
    for(int i=0; i<n; i++)
    {
        if(list[i]>target) break;
        int tmp = target -list[i];
        if (tmp <=list[i]) break;
      
        if (binary_search(list.begin(), list.end(), tmp) )
      
            total++;
    }
    printf("%d", total);
}

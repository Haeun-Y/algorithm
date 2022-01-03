#include <iostream>
using namespace std;

typedef struct person
{
    int weight;
    int height;
   
}person;
int main(void)
{

    person arr[50];
    int n = 0;
    scanf_s("%d", &n);
   

    for (int i = 0; i < n; i++)
        scanf_s("%d %d", &arr[i].weight, &arr[i].height);
    
    

    for (int i = 0; i < n; i++)
    {
        int big = 0;//arr[i]사람보다 덩치 큰 사람의 수
        for (int j = 0; j < n; j++)
        {
            if (arr[i].height < arr[j].height && arr[i].weight < arr[j].weight)
                big++;

        }
        printf("%d ", big + 1);
    }

}
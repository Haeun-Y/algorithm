#include <bits/stdc++.h>
using namespace std;
int heap_size;
typedef struct
{
    long long key;
    bool positive;
}node;
node arr[100000];/* 
void print_heap()
{
    for(int i = 1; i<=heap_size; i++)
    {

    }
} */
void insert_heap(long long key)
{
    arr[++heap_size].key = abs(key);
    if(key < 0) arr[heap_size].positive = false;
    else arr[heap_size].positive = true;

    int cur = heap_size;
    int cur_p = heap_size/2;

    while(arr[cur].key <= arr[cur_p].key && cur_p >= 1)
    {
        if(arr[cur].key == arr[cur_p].key)
        {
            if(arr[cur].positive == false && arr[cur_p].positive==true)
            {
                node tmp;
                tmp = arr[cur];
                arr[cur] = arr[cur_p];
                arr[cur_p] = tmp;
                cur_p = cur_p/2;

            }

        }
        else
        {
            node tmp;
            tmp = arr[cur];
            arr[cur] = arr[cur_p];
            arr[cur_p] = tmp;
            cur_p = cur_p/2;
        }
        
    }

}
long long delete_heap()
{
    long long min_result = (arr[1].positive == true)? arr[1].key : (-arr[1].key);
    arr[1] = arr[heap_size--];

    int i = 2;
    while(i <= heap_size)
    {
        int minIdx = 0;
        if(i < heap_size)
        {
            if(arr[i].key == arr[i+1].key)
                minIdx = (arr[i].positive == false && arr[i+1].positive == true)? i : i+1;
            
            else
                minIdx = (arr[i].key < arr[i+1].key)? i : i+1;

        }
            
        else minIdx = i;

        if(arr[minIdx].key < arr[minIdx/2].key)
        {
            node tmp = arr[minIdx];
            arr[minIdx] = arr[minIdx/2];
            arr[minIdx/2] = tmp;
            i = minIdx*2;
        }
        else if(arr[minIdx].key == arr[minIdx/2].key)
        {
            if(arr[minIdx].positive == false && arr[minIdx/2].positive == true)
            {
                node tmp = arr[minIdx];
                arr[minIdx] = arr[minIdx/2];
                arr[minIdx/2] = tmp;
                i = minIdx*2;
            }
            else break;
        }
        else break;
 
    }
    return min_result;


}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    heap_size = 0;

    int operationNum = 0;
    cin >> operationNum;

    for(int i = 0; i < operationNum; i++)
    {
        long long num;
        cin >> num;
        if(num == 0 && heap_size > 0)
            cout << delete_heap() << "\n";

        else if(num == 0)
            cout << 0 << "\n";
        else
            insert_heap(num);
    }
    


}

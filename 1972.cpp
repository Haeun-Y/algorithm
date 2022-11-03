#include <bits/stdc++.h>
using namespace std;
long long arr[100005];
int heap_size;
void init_heap()
{
    heap_size = 0;
}
void insert_heap(long long key)
{
    arr[++heap_size] = key;
    int cur = heap_size;
    int cur_p = heap_size/2;
    while(arr[cur] < arr[cur_p] && cur_p >= 1)
    {
        long long tmp = arr[cur];
        arr[cur] = arr[cur_p];
        arr[cur_p] = tmp;
        cur = cur_p;
        cur_p = cur_p/2;
    }
}
long long delete_heap()
{
    long long result = arr[1];
    arr[1] = arr[heap_size];
    heap_size--;
    int cur = 2;

    while(cur <= heap_size)
    {
        int min_key_idx;
        if(cur < heap_size && arr[cur+1] < arr[cur])
            min_key_idx = cur+1;
        else min_key_idx = cur;

        if(arr[min_key_idx/2] < arr[min_key_idx])
            break;
        else
        {
            long long tmp = arr[min_key_idx];
            arr[min_key_idx] = arr[min_key_idx/2];
            arr[min_key_idx/2] = tmp;
            cur = min_key_idx*2; 
        }
    }
    return result;

    
}
void print_heap()
{
    for(int i = 1; i<=heap_size; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    init_heap();

    int operationNum;
    cin >> operationNum;

    /* insert_heap(3);
    print_heap();
    insert_heap(7);
    print_heap();
    insert_heap(1);
    print_heap();
    insert_heap(2);
    print_heap();

    delete_heap();
    print_heap();

    delete_heap();
    print_heap();
     */


    for(int i = 0; i<operationNum; i++)
    {
        int operation;
        cin >> operation;

        if(operation == 0)
        {
            if(heap_size == 0)
                cout << "0" << "\n";
            else 
                cout << delete_heap() << "\n";
        }
        else 
        {
            long long num;
            cin >> num;
            insert_heap(num);
        }
        print_heap();
            
    } 
    
}

#include <bits/stdc++.h>
using namespace std;
int posX;
int posY;
int width;
int height;

int checkMin()
{
    int arr[4];
    arr[0] = posX;
    arr[1] = posY;
    arr[2] = width-posX;
    arr[3] = height - posY;
    
    int min = 1000;
    
    for(int i  = 0; i<4; i++)
    {
        if(min > arr[i])
            min = arr[i];
        
    }
    
    return min;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> posX >> posY >> width >> height;
    
    int result = checkMin();
    cout << result;
    
    
}

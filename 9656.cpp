#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int numOfRock;
    cin >> numOfRock;
    
    //상근이 차례일 때 
    bool isSangturn = true;
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0,1);
    
    while(numOfRock > 0)
    {
        int tmpRock;
        
        //돌 가져감
        if(numOfRock < 3)
            numOfRock--;
        else
        {
            tmpRock = dis(gen);
            if(tmpRock == 0)
                tmpRock = 1;
            else tmpRock = 3;
            
            //cout << "random num : " << tmpRock << "\n";
            
            numOfRock -= tmpRock;
            
        }
        
        //마지막 돌을 가져갔는지 확인
        if(numOfRock != 0)
            isSangturn = !isSangturn;
        
    }
    if(!isSangturn) cout << "SK";
    else cout << "CY";
}

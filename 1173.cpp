#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int exercieseMin, initialPulse, maxPulse, increasedPulse, decreasedPulse;
    cin >> exercieseMin >> initialPulse >> maxPulse >> increasedPulse >> decreasedPulse;
    
    //cout << "exercieseMin : "<<exercieseMin << "\n";
    int totalExerciseMin = 0;
    int totalMin = 0;
    int curPulse = initialPulse;
    
    if(increasedPulse + curPulse > maxPulse)
    {
        cout << "-1";
        return 0;
    }
    while(totalExerciseMin < exercieseMin)
    {
        if(curPulse + increasedPulse <= maxPulse)
        {
            //cout << "1\n";
            totalExerciseMin++;
            totalMin++;
            curPulse += increasedPulse;
            continue;
        }    
        
        else
        {
            //cout << "2\n";
            //여기서 while문으로 맥박이 안정될때까지 휴식한다는 걸 넣어야할지?
            if(curPulse - decreasedPulse < initialPulse)
                curPulse = initialPulse;
            else
                curPulse -= decreasedPulse;
            
            totalMin++;
        }
    }
    //운동을 N분할 수 없는 경우는 어떤경우가 있는지..?
    //curPulse + initialPulse 가 max보다 항상 큰 경우
    cout << totalMin;
}

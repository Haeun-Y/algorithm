#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int x;
    int y;
}dot;
bool isSame(dot a, dot b)
{
    if(a.x == b.x && a.y == b.y)
        return true;
    else return false;
}
double calculateD(dot a, dot b)
{
    return sqrt(pow(a.x-b.x, 2)+pow(a.y-b.y, 2));
}
int main(void)
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testNum;
    cin >> testNum;
    
    dot jo, baek;
    int rJ, rB;
    double d;
    int result = -10;
    for(int i =0; i<testNum; i++)
    {
        cin >> jo.x >> jo.y >> rJ;
        cin >> baek.x >> baek.y >> rB;
        
        if(rJ == rB && isSame(jo, baek))
            result = -1;
        else if(isSame(jo, baek))
            result = 0;
        else
        {
            int minR, maxR;
            maxR = max(rJ, rB);
            minR = min(rJ, rB);
            
            d = calculateD(jo, baek);
            if(maxR+minR > d)
            {
                int rr = maxR - minR;
                if(rr < d)
                    result = 2;
                else if(rr == d)
                    result = 1;
                else//rr > d
                    result = 0;
            }
            else if(maxR + minR == d)
                result = 1;
            else//maxR + minR < d
                result = 0;
        }
        cout << result << "\n";
        
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    const int GUITAR_LINES = 6;
    
    int brokenLinesNum, brandNum;
    cin >> brokenLinesNum >> brandNum;
    
    int minSetPrice = 1001, minPrice = 1001;
    
    for(int i = 0; i<brandNum; i++)
    {
        int setPrice, price;
        cin >> setPrice >> price;
        if(setPrice < minSetPrice) minSetPrice = setPrice;
        if(price < minPrice) minPrice = price;
        
    }
    
    double onePieceInSet = (double)minSetPrice/GUITAR_LINES;
    
    int result = 0;
    //전부 낱개로 사는게 저렴할 경우
    if(onePieceInSet > minPrice)
        result = minPrice * brokenLinesNum;
    
    else
    {
        int setNum = brokenLinesNum/GUITAR_LINES;
        int onePieceNum = brokenLinesNum - setNum * GUITAR_LINES;
        int tmpPrice = setNum * minSetPrice + onePieceNum * minPrice;
        
        if((++setNum) * minSetPrice < tmpPrice)
            result = setNum * minSetPrice;
        else result = tmpPrice;
    }
    cout << result;
    
}

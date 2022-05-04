#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
	int n;
	cin >> n;
	
	vector<string> carsIn(n), carsOut(n);
	
	for (int i = 0; i < n; i++)
	    cin >> carsIn[i];

	int result = 0;
	for (int i = 0; i < n; i++)
	    cin >> carsOut[i];
	
	for(int i  =0; i<n; i++)
	{
	    string str = carsOut[i];
	    auto before = find(carsIn.begin(), carsIn.end(), str);
	    if(before != carsIn.begin())
	    {
	        before--;
	        int outIdx = find(carsOut.begin(), carsOut.end(), *before)-carsOut.begin();
	        if(i <= outIdx)
	            result++;
	    }
	}
	cout << result;
}

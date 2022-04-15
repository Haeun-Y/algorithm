#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin >> n;
    
    vector<int> products(n);
    long long total =0;
    for(int i =0; i<n; i++)
    {    cin >> products[i];
        total += products[i];
    }   
    sort(products.begin(), products.end());
    
    int first = n-3;
    long long result = 0;
    for(int i =0; i<n/3; i++)
    {
        result += products[first];
        first -= 3;
    }
    cout << total-result;
        
}

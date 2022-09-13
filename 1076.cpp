#include <bits/stdc++.h>
using namespace std;
char findIdx(string color)
{
    if(color == "black")
        return '0';
    else if(color == "brown")
        return '1';
    else if(color == "red")
        return '2';
    else if(color == "orange")
        return '3';
    else if(color == "yellow")
        return '4';
        
    else if(color == "green")
        return '5';
        
    else if(color == "blue")
        return '6';
    else if(color == "violet")
        return '7';
        
    else if(color == "gray")
        return '8';
    else
        return '9';
        
    
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    string first, second, last;
    cin >> first >> second >> last;
    
    string result = "";
    char ch1 = findIdx(first);
    if(ch1 != '0')
        result += ch1;
    
    char ch2 = findIdx(second);
    result += ch2;
    
    int target = findIdx(last)-'0';
    
    cout << (int)(stoi(result) * pow(10, target));
    
    
    
}

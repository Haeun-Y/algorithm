#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    stack<char> s;
    
    for(int i =0; i<str.length(); i++)
    {
        char ch = str[i];
        
        if(ch == ' ' && !s.empty())
        {
            while(!s.empty())
            {
                cout << s.top();
                s.pop();
            }
            printf(" ");
        }
        
        else if(ch == '<')
        {
            if(!s.empty())
            {
                while(!s.empty())
            {
                cout << s.top();
                s.pop();
            }
            }
            cout << ch;
            while(ch != '>' && str.length() > i)
            {    
                ch = str[++i];
                cout << ch;
                
            }
            if(ch == '>')
                continue;
            
               
            
        }
        
        else
            s.push(ch);
        
    }
    if(!s.empty())
    {
        while(!s.empty())
        {
            cout << s.top();
            s.pop();
        }
        printf(" ");
        
    }
}

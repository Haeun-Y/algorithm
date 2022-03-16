#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    int total =0;
    int length = str.length();
    for(int i =0; i<length; i++)
    {
        char ch = str[i];
        
        switch(ch)
        {
            case 'c':
                
                if(length > i+1)
                {
                    char tmp = str[i+1];   
                    if(tmp == '=')
                    {
                        total++;
                        i++;
                    }
                    else if(tmp == '-')
                    {
                        total++;
                        i++;
                    }
                    else total++;
                }
                else total++;
                break;
                
            case 'd':
                char tmp;
                if(length > i+1) tmp = str[i+1];
                if(length > (i+1) && tmp == '-')
                {
                    total++;
                    i++;
                }
                else if(length > i+2 && tmp == 'z' && str[i+2] == '=' )
                {
                    total++;
                    i = i+2;
                }
                else total++;
                break;
            
            case 'l':
            case 'n':
                if(length > i+1 && str[i+1] == 'j')
                {
                    i++;
                    total++;
                }
                else total++;
                break;
            case 's':
            case 'z':
                if(length > i+1 && str[i+1] == '=')
                {
                    i++;
                    total++;
                }
                else total++;
                break;
            default:
                total++;
                break;
        }
        
    }
   
    printf("%d", total);
}

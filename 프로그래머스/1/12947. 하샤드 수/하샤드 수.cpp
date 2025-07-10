#include <string>

using namespace std;

bool solution(int x) 
{
    string Num = to_string(x);
    int Hasa = 0;
        
    for(char digit : Num)
    {
        Hasa += (digit - '0');
    }
    
    return (x % Hasa == 0);
    
}
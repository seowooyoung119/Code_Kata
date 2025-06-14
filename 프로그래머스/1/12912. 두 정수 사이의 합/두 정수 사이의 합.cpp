#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) 
{
    long long Sum =0;
    
    if(a==b){return a;}
    
    else if(a<b)
    {
        for(a; a<=b; ++a)
        {
        Sum += a;    
        }
    }
    
    else
    {
        for(b; b<=a; ++b)
        {
        Sum += b;    
        }
        
    }
    
    return Sum;
}
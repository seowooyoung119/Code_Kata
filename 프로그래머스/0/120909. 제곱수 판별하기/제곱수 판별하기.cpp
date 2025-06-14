#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) 
{
    if(n==(int)sqrt(n)*(int)sqrt(n))
    {
        return 1;
    }
    
    else
    {
       return 2; 
    }
}